// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "UnrealLearningCharacter.h"
#include "UnrealLearningProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "MotionControllerComponent.h"
#include "XRMotionControllerBase.h" // for FXRMotionControllerBase::RightHandSourceId
#include "GameFramework/CharacterMovementComponent.h"

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// AUnrealLearningCharacter

AUnrealLearningCharacter::AUnrealLearningCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->RelativeLocation = FVector(-39.56f, 1.75f, 64.f); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->RelativeRotation = FRotator(1.9f, -19.19f, 5.2f);
	Mesh1P->RelativeLocation = FVector(-0.5f, -4.4f, -155.7f);

	// Create a gun mesh component
	FP_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FP_Gun"));
	FP_Gun->SetOnlyOwnerSee(true);			// only the owning player will see this mesh
	FP_Gun->bCastDynamicShadow = false;
	FP_Gun->CastShadow = false;
	// FP_Gun->SetupAttachment(Mesh1P, TEXT("GripPoint"));
	FP_Gun->SetupAttachment(RootComponent);

	FP_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
	FP_MuzzleLocation->SetupAttachment(FP_Gun);
	FP_MuzzleLocation->SetRelativeLocation(FVector(0.2f, 48.4f, -10.6f));

	// Default offset from the character location for projectiles to spawn
	GunOffset = FVector(100.0f, 0.0f, 10.0f);

	// Note: The ProjectileClass and the skeletal mesh/anim blueprints for Mesh1P, FP_Gun, and VR_Gun 
	// are set in the derived blueprint asset named MyCharacter to avoid direct content references in C++.

	// Create VR Controllers.
	R_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("R_MotionController"));
	R_MotionController->MotionSource = FXRMotionControllerBase::RightHandSourceId;
	R_MotionController->SetupAttachment(RootComponent);
	L_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("L_MotionController"));
	L_MotionController->SetupAttachment(RootComponent);

	// Create a gun and attach it to the right-hand VR controller.
	// Create a gun mesh component
	VR_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("VR_Gun"));
	VR_Gun->SetOnlyOwnerSee(true);			// only the owning player will see this mesh
	VR_Gun->bCastDynamicShadow = false;
	VR_Gun->CastShadow = false;
	VR_Gun->SetupAttachment(R_MotionController);
	VR_Gun->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));

	VR_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("VR_MuzzleLocation"));
	VR_MuzzleLocation->SetupAttachment(VR_Gun);
	VR_MuzzleLocation->SetRelativeLocation(FVector(0.000004, 53.999992, 10.000000));
	VR_MuzzleLocation->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));		// Counteract the rotation of the VR gun model.

	// Uncomment the following line to turn motion controllers on by default:
	//bUsingMotionControllers = true;

	isZoomedIn = false;
	isSprinting = false;
	FoVDefaultValue = 110.0f;
	MaxFovAddValue = 10;
	HasWeapon = false;

	hasUsedAbility1 = false;
	hasUsedAbility2 = false;
	hasUsedAbility3 = false;
	Ability1Duration = 3.0f;
	Ability2Duration = 10.0f;
	Ability3Duration = 15.0f;
	Ability1CooldownTime = 5.0f;
	Ability2CooldownTime = 30.0f;
	Ability3CooldownTime = 50.0f;

	Ability2Active = false;

	StopDamageFrame = 1.0f;
	CanTakeDamageBool = true;
	health = 1.0f;

	weapon = nullptr;


}

void AUnrealLearningCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Attach gun mesh component to Skeleton, doing it here because the skeleton is not yet created in the constructor
	FP_Gun->AttachToComponent(Mesh1P, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("GripPoint"));

	// Show or hide the two versions of the gun based on whether or not we're using motion controllers.
	if (bUsingMotionControllers)
	{
		VR_Gun->SetHiddenInGame(false, true);
		Mesh1P->SetHiddenInGame(true, true);
	}
	else
	{
		VR_Gun->SetHiddenInGame(true, true);
		Mesh1P->SetHiddenInGame(false, true);
	}
}

//////////////////////////////////////////////////////////////////////////
// Input

void AUnrealLearningCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind fire event
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AUnrealLearningCharacter::OnFire);

	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AUnrealLearningCharacter::Sprint);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AUnrealLearningCharacter::StopSprint);

	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &AUnrealLearningCharacter::Crouch);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, &AUnrealLearningCharacter::StopCrouch);

	PlayerInputComponent->BindAction("SecondaryAction", IE_Pressed, this, &AUnrealLearningCharacter::Zoom);
	PlayerInputComponent->BindAction("SecondaryAction", IE_Released, this, &AUnrealLearningCharacter::StopZoom);

	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &AUnrealLearningCharacter::ReloadWeapon);

	PlayerInputComponent->BindAction("ActivateAbility1", IE_Pressed, this, &AUnrealLearningCharacter::UseAbility1);
	PlayerInputComponent->BindAction("ActivateAbility2", IE_Pressed, this, &AUnrealLearningCharacter::UseAbility2);
	PlayerInputComponent->BindAction("ActivateAbility3", IE_Pressed, this, &AUnrealLearningCharacter::UseAbility3);

	// Enable touchscreen input
	EnableTouchscreenMovement(PlayerInputComponent);

	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &AUnrealLearningCharacter::OnResetVR);

	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &AUnrealLearningCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AUnrealLearningCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AUnrealLearningCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AUnrealLearningCharacter::LookUpAtRate);
}

void AUnrealLearningCharacter::TakeDamage(float damageAmount)
{
}

void AUnrealLearningCharacter::OnFire()
{
	// try and fire a projectile
	if (ProjectileClass != NULL)
	{
		UWorld* const World = GetWorld();
		if (World != NULL)
		{
			if (weapon->clipAmmo > 0) {
				if (bUsingMotionControllers)
				{
					const FRotator SpawnRotation = VR_MuzzleLocation->GetComponentRotation();
					const FVector SpawnLocation = VR_MuzzleLocation->GetComponentLocation();
					World->SpawnActor<AUnrealLearningProjectile>(ProjectileClass, SpawnLocation, SpawnRotation);
				}
				else
				{
					const FRotator SpawnRotation = GetControlRotation();
					// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
					const FVector SpawnLocation = ((FP_MuzzleLocation != nullptr) ? FP_MuzzleLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);

					//Set Spawn Collision Handling Override
					FActorSpawnParameters ActorSpawnParams;
					ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

					// spawn the projectile at the muzzle
					World->SpawnActor<AUnrealLearningProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
				}
				if (!Ability2Active) {
					weapon->clipAmmo -= 1;
				}
				
			}
			else if (weapon->totalAmmo > 0) {
				ReloadWeapon();
			}
			
		}
	}

	// try and play the sound if specified
	if (FireSound != NULL)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}

	// try and play a firing animation if specified
	if (FireAnimation != NULL)
	{
		// Get the animation object for the arms mesh
		UAnimInstance* AnimInstance = Mesh1P->GetAnimInstance();
		if (AnimInstance != NULL)
		{
			AnimInstance->Montage_Play(FireAnimation, 1.f);
		}
	}
}

void AUnrealLearningCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void AUnrealLearningCharacter::BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == true)
	{
		return;
	}
	if ((FingerIndex == TouchItem.FingerIndex) && (TouchItem.bMoved == false))
	{
		OnFire();
	}
	TouchItem.bIsPressed = true;
	TouchItem.FingerIndex = FingerIndex;
	TouchItem.Location = Location;
	TouchItem.bMoved = false;
}

void AUnrealLearningCharacter::EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == false)
	{
		return;
	}
	TouchItem.bIsPressed = false;
}



void AUnrealLearningCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AUnrealLearningCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AUnrealLearningCharacter::Sprint()
{
	if (GetCharacterMovement()->bWantsToCrouch == true) {
		return;
	}
	if (isZoomedIn == true) {
		StopZoom();
	}
	isSprinting = true;
	GetCharacterMovement()->MaxWalkSpeed = 1500.0f;
}

void AUnrealLearningCharacter::StopSprint()
{
	CurrentFovAddValue = 0; // Reset the "sprint" fov
	isSprinting = false;
	GetCharacterMovement()->MaxWalkSpeed = 600.0f;
	if (auto firstPersonCamera = GetFirstPersonCameraComponent()) {
		firstPersonCamera->SetFieldOfView(FoVDefaultValue);
	}
}

void AUnrealLearningCharacter::Crouch()
{
	StopZoom();
	StopSprint();
	GetCharacterMovement()->MaxWalkSpeed = 600.0f;
	GetCharacterMovement()->bWantsToCrouch = true;
	GetCharacterMovement()->Crouch(true);
}

void AUnrealLearningCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (isSprinting) {
		if (auto firstPersonCamera = GetFirstPersonCameraComponent()) {
			if (CurrentFovAddValue == MaxFovAddValue) {
				firstPersonCamera->SetFieldOfView(FoVDefaultValue + MaxFovAddValue);
			}
			if (CurrentFovAddValue != MaxFovAddValue) {
				CurrentFovAddValue += 1;
				firstPersonCamera->SetFieldOfView(FoVDefaultValue + CurrentFovAddValue);
			}
		}
	}
}

void AUnrealLearningCharacter::StopCrouch()
{
	GetCharacterMovement()->bWantsToCrouch = false;
	GetCharacterMovement()->UnCrouch(true);
}

void AUnrealLearningCharacter::Zoom()
{
	if (isSprinting == true) {
		return;
	}

	if (auto firstPersonCamera = GetFirstPersonCameraComponent()) {
		firstPersonCamera->SetFieldOfView(FoVDefaultValue - 30.0f);
		isZoomedIn = true;
	}
}

void AUnrealLearningCharacter::StopZoom()
{
	if (auto firstPersonCamera = GetFirstPersonCameraComponent()) {
		firstPersonCamera->SetFieldOfView(FoVDefaultValue);
		isZoomedIn = false;
	}
}

void AUnrealLearningCharacter::UseAbility1()
{
	if (!hasUsedAbility1) {
		if (auto firstPersonCamera = GetFirstPersonCameraComponent()) {
			hasUsedAbility1 = true;
			/*GetCharacterMovement()->AddImpulse(firstPersonCamera->GetForwardVector() * 15000.0f, true);*/ // Dash ability need fixing
			GetCharacterMovement()->JumpZVelocity = 1000.0f;
			
			GetWorld()->GetTimerManager().SetTimer(ability1TimerHandle, this, &AUnrealLearningCharacter::ResetAbility1, Ability1Duration, false);
		}
	}
}

void AUnrealLearningCharacter::UseAbility2()
{
	if (!hasUsedAbility2) {
		Ability2Active = true;
		hasUsedAbility2 = true;

		GetWorld()->GetTimerManager().SetTimer(ability2TimerHandle, this, &AUnrealLearningCharacter::ResetAbility2, Ability2Duration, false);
	}
}

void AUnrealLearningCharacter::UseAbility3()
{
}

void AUnrealLearningCharacter::ResetAbility1()
{
	GetCharacterMovement()->JumpZVelocity = 420.0f;

	GetWorld()->GetTimerManager().SetTimer(ability1TimerHandle, this, &AUnrealLearningCharacter::Ability1CooldownComplete, Ability1CooldownTime, false);
}

void AUnrealLearningCharacter::ResetAbility2()
{
	Ability2Active = false;

	GetWorld()->GetTimerManager().SetTimer(ability2TimerHandle, this, &AUnrealLearningCharacter::Ability2CooldownComplete, Ability2CooldownTime, false);
}

void AUnrealLearningCharacter::Ability1CooldownComplete()
{
	hasUsedAbility1 = false;
}

void AUnrealLearningCharacter::Ability2CooldownComplete()
{
	hasUsedAbility2 = false;
}

void AUnrealLearningCharacter::CanTakeDamage()
{
	CanTakeDamageBool = true;
}

void AUnrealLearningCharacter::Die()
{
}

void AUnrealLearningCharacter::Respawn()
{
}

void AUnrealLearningCharacter::ReloadWeapon()
{
	if (weapon) {
		if (weapon->clipAmmo != weapon->maxClipAmmo) {
			if (weapon->totalAmmo - (weapon->maxClipAmmo - weapon->clipAmmo) >= 0) {
				weapon->totalAmmo -= (weapon->maxClipAmmo - weapon->clipAmmo);
				weapon->clipAmmo = weapon->maxClipAmmo;
			}
			else {
				weapon->clipAmmo += weapon->totalAmmo;
				weapon->totalAmmo = 0;
			}
		}
	}
}

void AUnrealLearningCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AUnrealLearningCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

bool AUnrealLearningCharacter::EnableTouchscreenMovement(class UInputComponent* PlayerInputComponent)
{
	if (FPlatformMisc::SupportsTouchInput() || GetDefault<UInputSettings>()->bUseMouseForTouch)
	{
		PlayerInputComponent->BindTouch(EInputEvent::IE_Pressed, this, &AUnrealLearningCharacter::BeginTouch);
		PlayerInputComponent->BindTouch(EInputEvent::IE_Released, this, &AUnrealLearningCharacter::EndTouch);

		//Commenting this out to be more consistent with FPS BP template.
		//PlayerInputComponent->BindTouch(EInputEvent::IE_Repeat, this, &AUnrealLearningCharacter::TouchUpdate);
		return true;
	}
	
	return false;
}
