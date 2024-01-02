// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseWeapon.h"
#include "UnrealLearningCharacter.generated.h"

class UInputComponent;

UCLASS(config=Game)
class AUnrealLearningCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	class USkeletalMeshComponent* Mesh1P;

	/** Gun mesh: 1st person view (seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USkeletalMeshComponent* FP_Gun;

	/** Location on gun mesh where projectiles should spawn. */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USceneComponent* FP_MuzzleLocation;

	/** Gun mesh: VR view (attached to the VR controller directly, no arm, just the actual gun) */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USkeletalMeshComponent* VR_Gun;

	/** Location on VR gun mesh where projectiles should spawn. */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USceneComponent* VR_MuzzleLocation;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FirstPersonCameraComponent;

	/** Motion controller (right hand) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UMotionControllerComponent* R_MotionController;

	/** Motion controller (left hand) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UMotionControllerComponent* L_MotionController;

public:
	AUnrealLearningCharacter();

protected:
	virtual void BeginPlay();

public:
	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

	/** Gun muzzle's offset from the characters location */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	FVector GunOffset;

	/** Projectile class to spawn */
	UPROPERTY(EditDefaultsOnly, Category=Projectile)
	TSubclassOf<class AUnrealLearningProjectile> ProjectileClass;

	/** Sound to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	class USoundBase* FireSound;

	/** AnimMontage to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	class UAnimMontage* FireAnimation;

	/** Whether to use motion controller location for aiming. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	uint32 bUsingMotionControllers : 1;

	UPROPERTY(EditAnywhere)
		bool isZoomedIn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
		ABaseWeapon* weapon;

	UPROPERTY(EditAnywhere)
		float FoVDefaultValue;

	UPROPERTY(EditAnywhere)
		bool isSprinting;

	UPROPERTY(EditAnywhere)
		int CurrentFovAddValue;

	UPROPERTY(EditAnywhere)
		int MaxFovAddValue;


	UPROPERTY(EditAnywhere)
		bool HasWeapon;

	UPROPERTY(EditAnywhere)
		bool Ability2Active;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Health)
		float health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Spawning)
		FVector respawnLocation;


	// Has character used ability?
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Abilities)
		bool hasUsedAbility1;
	// Has character used ability?
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Abilities)
		bool hasUsedAbility2;
	// Has character used ability?
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Abilities)
		bool hasUsedAbility3;
	// Ability Duration.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Abilities)
		float Ability1Duration;
	// Ability Duration.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Abilities)
		float Ability2Duration;
	// Ability Duration.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Abilities)
		float Ability3Duration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Abilities)
		float Ability1CooldownTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Abilities)
		float Ability2CooldownTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Abilities)
		float Ability3CooldownTime;

	FTimerHandle ability1TimerHandle;
	FTimerHandle ability2TimerHandle;
	FTimerHandle ability3TimerHandle;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Damage)
		bool CanTakeDamageBool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Damage)
		float StopDamageFrame;

	FTimerHandle DamageFrameTimerHandle;

	UFUNCTION(BlueprintCallable)
		void TakeDamage(float damageAmount);

protected:
	
	/** Fires a projectile. */
	void OnFire();

	/** Resets HMD orientation and position in VR. */
	void OnResetVR();

	/** Handles moving forward/backward */
	void MoveForward(float Val);

	/** Handles stafing movement, left and right */
	void MoveRight(float Val);

	void Sprint();

	void StopSprint();

	void Crouch();

	void Tick(float DeltaTime);

	void StopCrouch();

	void Zoom();

	void StopZoom();

	void UseAbility1();
	void UseAbility2();
	void UseAbility3();

	void ResetAbility1();
	void ResetAbility2();
	void ResetAbility3();

	void Ability1CooldownComplete();
	void Ability2CooldownComplete();
	void Ability3CooldownComplete();

	void CanTakeDamage();

	UFUNCTION(BlueprintCallable)
		void Die();

	UFUNCTION(BlueprintCallable)
		void Respawn();

	void ReloadWeapon();



	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	struct TouchData
	{
		TouchData() { bIsPressed = false;Location=FVector::ZeroVector;}
		bool bIsPressed;
		ETouchIndex::Type FingerIndex;
		FVector Location;
		bool bMoved;
	};
	void BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location);
	void EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location);
	void TouchUpdate(const ETouchIndex::Type FingerIndex, const FVector Location);
	TouchData	TouchItem;
	
protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface

	/* 
	 * Configures input for touchscreen devices if there is a valid touch interface for doing so 
	 *
	 * @param	InputComponent	The input component pointer to bind controls to
	 * @returns true if touch controls were enabled.
	 */
	bool EnableTouchscreenMovement(UInputComponent* InputComponent);

public:
	/** Returns Mesh1P subobject **/
	FORCEINLINE class USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	/** Returns FirstPersonCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

};

