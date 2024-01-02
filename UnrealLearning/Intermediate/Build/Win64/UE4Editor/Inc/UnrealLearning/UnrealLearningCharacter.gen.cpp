// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealLearning/UnrealLearningCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealLearningCharacter() {}
// Cross Module References
	UNREALLEARNING_API UClass* Z_Construct_UClass_AUnrealLearningCharacter_NoRegister();
	UNREALLEARNING_API UClass* Z_Construct_UClass_AUnrealLearningCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_UnrealLearning();
	UNREALLEARNING_API UFunction* Z_Construct_UFunction_AUnrealLearningCharacter_Die();
	UNREALLEARNING_API UFunction* Z_Construct_UFunction_AUnrealLearningCharacter_Respawn();
	UNREALLEARNING_API UFunction* Z_Construct_UFunction_AUnrealLearningCharacter_TakeDamage();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UNREALLEARNING_API UClass* Z_Construct_UClass_ABaseWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UNREALLEARNING_API UClass* Z_Construct_UClass_AUnrealLearningProjectile_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AUnrealLearningCharacter::StaticRegisterNativesAUnrealLearningCharacter()
	{
		UClass* Class = AUnrealLearningCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Die", &AUnrealLearningCharacter::execDie },
			{ "Respawn", &AUnrealLearningCharacter::execRespawn },
			{ "TakeDamage", &AUnrealLearningCharacter::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUnrealLearningCharacter_Die_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnrealLearningCharacter_Die_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnrealLearningCharacter_Die_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnrealLearningCharacter, "Die", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnrealLearningCharacter_Die_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AUnrealLearningCharacter_Die_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnrealLearningCharacter_Die()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnrealLearningCharacter_Die_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnrealLearningCharacter_Respawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnrealLearningCharacter_Respawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnrealLearningCharacter_Respawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnrealLearningCharacter, "Respawn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnrealLearningCharacter_Respawn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AUnrealLearningCharacter_Respawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnrealLearningCharacter_Respawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnrealLearningCharacter_Respawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnrealLearningCharacter_TakeDamage_Statics
	{
		struct UnrealLearningCharacter_eventTakeDamage_Parms
		{
			float damageAmount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damageAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUnrealLearningCharacter_TakeDamage_Statics::NewProp_damageAmount = { UE4CodeGen_Private::EPropertyClass::Float, "damageAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UnrealLearningCharacter_eventTakeDamage_Parms, damageAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnrealLearningCharacter_TakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnrealLearningCharacter_TakeDamage_Statics::NewProp_damageAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnrealLearningCharacter_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnrealLearningCharacter_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnrealLearningCharacter, "TakeDamage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(UnrealLearningCharacter_eventTakeDamage_Parms), Z_Construct_UFunction_AUnrealLearningCharacter_TakeDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AUnrealLearningCharacter_TakeDamage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnrealLearningCharacter_TakeDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AUnrealLearningCharacter_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnrealLearningCharacter_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnrealLearningCharacter_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUnrealLearningCharacter_NoRegister()
	{
		return AUnrealLearningCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealLearningCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopDamageFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StopDamageFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanTakeDamageBool_MetaData[];
#endif
		static void NewProp_CanTakeDamageBool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanTakeDamageBool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability3CooldownTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Ability3CooldownTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability2CooldownTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Ability2CooldownTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability1CooldownTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Ability1CooldownTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability3Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Ability3Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability2Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Ability2Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability1Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Ability1Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasUsedAbility3_MetaData[];
#endif
		static void NewProp_hasUsedAbility3_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasUsedAbility3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasUsedAbility2_MetaData[];
#endif
		static void NewProp_hasUsedAbility2_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasUsedAbility2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasUsedAbility1_MetaData[];
#endif
		static void NewProp_hasUsedAbility1_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasUsedAbility1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_respawnLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_respawnLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability2Active_MetaData[];
#endif
		static void NewProp_Ability2Active_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Ability2Active;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasWeapon_MetaData[];
#endif
		static void NewProp_HasWeapon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFovAddValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxFovAddValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentFovAddValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentFovAddValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isSprinting_MetaData[];
#endif
		static void NewProp_isSprinting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSprinting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoVDefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FoVDefaultValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_weapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isZoomedIn_MetaData[];
#endif
		static void NewProp_isZoomedIn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isZoomedIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsingMotionControllers_MetaData[];
#endif
		static void NewProp_bUsingMotionControllers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsingMotionControllers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_L_MotionController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_L_MotionController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_R_MotionController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_R_MotionController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VR_MuzzleLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VR_MuzzleLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VR_Gun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VR_Gun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FP_MuzzleLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FP_MuzzleLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FP_Gun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FP_Gun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealLearningCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealLearning,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUnrealLearningCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUnrealLearningCharacter_Die, "Die" }, // 2266079661
		{ &Z_Construct_UFunction_AUnrealLearningCharacter_Respawn, "Respawn" }, // 3666481422
		{ &Z_Construct_UFunction_AUnrealLearningCharacter_TakeDamage, "TakeDamage" }, // 434471971
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "UnrealLearningCharacter.h" },
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_StopDamageFrame_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_StopDamageFrame = { UE4CodeGen_Private::EPropertyClass::Float, "StopDamageFrame", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AUnrealLearningCharacter, StopDamageFrame), METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_StopDamageFrame_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_StopDamageFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_CanTakeDamageBool_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_CanTakeDamageBool_SetBit(void* Obj)
	{
		((AUnrealLearningCharacter*)Obj)->CanTakeDamageBool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_CanTakeDamageBool = { UE4CodeGen_Private::EPropertyClass::Bool, "CanTakeDamageBool", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AUnrealLearningCharacter), &Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_CanTakeDamageBool_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_CanTakeDamageBool_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_CanTakeDamageBool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Ability3CooldownTime_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Ability3CooldownTime = { UE4CodeGen_Private::EPropertyClass::Float, "Ability3CooldownTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AUnrealLearningCharacter, Ability3CooldownTime), METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Ability3CooldownTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Ability3CooldownTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Ability2CooldownTime_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Ability2CooldownTime = { UE4CodeGen_Private::EPropertyClass::Float, "Ability2CooldownTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AUnrealLearningCharacter, Ability2CooldownTime), METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Ability2CooldownTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Ability2CooldownTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Ability1CooldownTime_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Ability1CooldownTime = { UE4CodeGen_Private::EPropertyClass::Float, "Ability1CooldownTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AUnrealLearningCharacter, Ability1CooldownTime), METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Ability1CooldownTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Ability1CooldownTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Ability3Duration_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
		{ "ToolTip", "Ability Duration." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Ability3Duration = { UE4CodeGen_Private::EPropertyClass::Float, "Ability3Duration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AUnrealLearningCharacter, Ability3Duration), METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Ability3Duration_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Ability3Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Ability2Duration_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
		{ "ToolTip", "Ability Duration." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Ability2Duration = { UE4CodeGen_Private::EPropertyClass::Float, "Ability2Duration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AUnrealLearningCharacter, Ability2Duration), METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Ability2Duration_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Ability2Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Ability1Duration_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
		{ "ToolTip", "Ability Duration." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Ability1Duration = { UE4CodeGen_Private::EPropertyClass::Float, "Ability1Duration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AUnrealLearningCharacter, Ability1Duration), METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Ability1Duration_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Ability1Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_hasUsedAbility3_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
		{ "ToolTip", "Has character used ability?" },
	};
#endif
	void Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_hasUsedAbility3_SetBit(void* Obj)
	{
		((AUnrealLearningCharacter*)Obj)->hasUsedAbility3 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_hasUsedAbility3 = { UE4CodeGen_Private::EPropertyClass::Bool, "hasUsedAbility3", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AUnrealLearningCharacter), &Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_hasUsedAbility3_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_hasUsedAbility3_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_hasUsedAbility3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_hasUsedAbility2_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
		{ "ToolTip", "Has character used ability?" },
	};
#endif
	void Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_hasUsedAbility2_SetBit(void* Obj)
	{
		((AUnrealLearningCharacter*)Obj)->hasUsedAbility2 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_hasUsedAbility2 = { UE4CodeGen_Private::EPropertyClass::Bool, "hasUsedAbility2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AUnrealLearningCharacter), &Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_hasUsedAbility2_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_hasUsedAbility2_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_hasUsedAbility2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_hasUsedAbility1_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
		{ "ToolTip", "Has character used ability?" },
	};
#endif
	void Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_hasUsedAbility1_SetBit(void* Obj)
	{
		((AUnrealLearningCharacter*)Obj)->hasUsedAbility1 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_hasUsedAbility1 = { UE4CodeGen_Private::EPropertyClass::Bool, "hasUsedAbility1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AUnrealLearningCharacter), &Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_hasUsedAbility1_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_hasUsedAbility1_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_hasUsedAbility1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_respawnLocation_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_respawnLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "respawnLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AUnrealLearningCharacter, respawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_respawnLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_respawnLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_health_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_health = { UE4CodeGen_Private::EPropertyClass::Float, "health", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AUnrealLearningCharacter, health), METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_health_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Ability2Active_MetaData[] = {
		{ "Category", "UnrealLearningCharacter" },
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Ability2Active_SetBit(void* Obj)
	{
		((AUnrealLearningCharacter*)Obj)->Ability2Active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Ability2Active = { UE4CodeGen_Private::EPropertyClass::Bool, "Ability2Active", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AUnrealLearningCharacter), &Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Ability2Active_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Ability2Active_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Ability2Active_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_HasWeapon_MetaData[] = {
		{ "Category", "UnrealLearningCharacter" },
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_HasWeapon_SetBit(void* Obj)
	{
		((AUnrealLearningCharacter*)Obj)->HasWeapon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_HasWeapon = { UE4CodeGen_Private::EPropertyClass::Bool, "HasWeapon", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AUnrealLearningCharacter), &Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_HasWeapon_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_HasWeapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_HasWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_MaxFovAddValue_MetaData[] = {
		{ "Category", "UnrealLearningCharacter" },
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_MaxFovAddValue = { UE4CodeGen_Private::EPropertyClass::Int, "MaxFovAddValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AUnrealLearningCharacter, MaxFovAddValue), METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_MaxFovAddValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_MaxFovAddValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_CurrentFovAddValue_MetaData[] = {
		{ "Category", "UnrealLearningCharacter" },
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_CurrentFovAddValue = { UE4CodeGen_Private::EPropertyClass::Int, "CurrentFovAddValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AUnrealLearningCharacter, CurrentFovAddValue), METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_CurrentFovAddValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_CurrentFovAddValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_isSprinting_MetaData[] = {
		{ "Category", "UnrealLearningCharacter" },
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_isSprinting_SetBit(void* Obj)
	{
		((AUnrealLearningCharacter*)Obj)->isSprinting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_isSprinting = { UE4CodeGen_Private::EPropertyClass::Bool, "isSprinting", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AUnrealLearningCharacter), &Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_isSprinting_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_isSprinting_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_isSprinting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_FoVDefaultValue_MetaData[] = {
		{ "Category", "UnrealLearningCharacter" },
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_FoVDefaultValue = { UE4CodeGen_Private::EPropertyClass::Float, "FoVDefaultValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AUnrealLearningCharacter, FoVDefaultValue), METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_FoVDefaultValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_FoVDefaultValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_weapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_weapon = { UE4CodeGen_Private::EPropertyClass::Object, "weapon", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AUnrealLearningCharacter, weapon), Z_Construct_UClass_ABaseWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_weapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_weapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_isZoomedIn_MetaData[] = {
		{ "Category", "UnrealLearningCharacter" },
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_isZoomedIn_SetBit(void* Obj)
	{
		((AUnrealLearningCharacter*)Obj)->isZoomedIn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_isZoomedIn = { UE4CodeGen_Private::EPropertyClass::Bool, "isZoomedIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AUnrealLearningCharacter), &Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_isZoomedIn_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_isZoomedIn_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_isZoomedIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_bUsingMotionControllers_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
		{ "ToolTip", "Whether to use motion controller location for aiming." },
	};
#endif
	void Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_bUsingMotionControllers_SetBit(void* Obj)
	{
		((AUnrealLearningCharacter*)Obj)->bUsingMotionControllers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_bUsingMotionControllers = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsingMotionControllers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AUnrealLearningCharacter), &Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_bUsingMotionControllers_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_bUsingMotionControllers_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_bUsingMotionControllers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_FireAnimation_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
		{ "ToolTip", "AnimMontage to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_FireAnimation = { UE4CodeGen_Private::EPropertyClass::Object, "FireAnimation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AUnrealLearningCharacter, FireAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_FireAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_FireAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
		{ "ToolTip", "Sound to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_FireSound = { UE4CodeGen_Private::EPropertyClass::Object, "FireSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AUnrealLearningCharacter, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_FireSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
		{ "ToolTip", "Projectile class to spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_ProjectileClass = { UE4CodeGen_Private::EPropertyClass::Class, "ProjectileClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(AUnrealLearningCharacter, ProjectileClass), Z_Construct_UClass_AUnrealLearningProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_ProjectileClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_GunOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
		{ "ToolTip", "Gun muzzle's offset from the characters location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_GunOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "GunOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AUnrealLearningCharacter, GunOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_GunOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_GunOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_BaseLookUpRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseLookUpRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AUnrealLearningCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_BaseLookUpRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_BaseTurnRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseTurnRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AUnrealLearningCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_BaseTurnRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_L_MotionController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UnrealLearningCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
		{ "ToolTip", "Motion controller (left hand)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_L_MotionController = { UE4CodeGen_Private::EPropertyClass::Object, "L_MotionController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AUnrealLearningCharacter, L_MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_L_MotionController_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_L_MotionController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_R_MotionController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UnrealLearningCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
		{ "ToolTip", "Motion controller (right hand)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_R_MotionController = { UE4CodeGen_Private::EPropertyClass::Object, "R_MotionController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AUnrealLearningCharacter, R_MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_R_MotionController_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_R_MotionController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_FirstPersonCameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "FirstPersonCameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AUnrealLearningCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_VR_MuzzleLocation_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
		{ "ToolTip", "Location on VR gun mesh where projectiles should spawn." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_VR_MuzzleLocation = { UE4CodeGen_Private::EPropertyClass::Object, "VR_MuzzleLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AUnrealLearningCharacter, VR_MuzzleLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_VR_MuzzleLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_VR_MuzzleLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_VR_Gun_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
		{ "ToolTip", "Gun mesh: VR view (attached to the VR controller directly, no arm, just the actual gun)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_VR_Gun = { UE4CodeGen_Private::EPropertyClass::Object, "VR_Gun", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AUnrealLearningCharacter, VR_Gun), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_VR_Gun_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_VR_Gun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
		{ "ToolTip", "Location on gun mesh where projectiles should spawn." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_FP_MuzzleLocation = { UE4CodeGen_Private::EPropertyClass::Object, "FP_MuzzleLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AUnrealLearningCharacter, FP_MuzzleLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_FP_Gun_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
		{ "ToolTip", "Gun mesh: 1st person view (seen only by self)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_FP_Gun = { UE4CodeGen_Private::EPropertyClass::Object, "FP_Gun", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AUnrealLearningCharacter, FP_Gun), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_FP_Gun_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_FP_Gun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnrealLearningCharacter.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Mesh1P = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh1P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AUnrealLearningCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Mesh1P_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Mesh1P_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUnrealLearningCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_StopDamageFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_CanTakeDamageBool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Ability3CooldownTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Ability2CooldownTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Ability1CooldownTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Ability3Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Ability2Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Ability1Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_hasUsedAbility3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_hasUsedAbility2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_hasUsedAbility1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_respawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Ability2Active,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_HasWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_MaxFovAddValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_CurrentFovAddValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_isSprinting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_FoVDefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_weapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_isZoomedIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_bUsingMotionControllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_FireAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_FireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_GunOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_L_MotionController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_R_MotionController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_VR_MuzzleLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_VR_Gun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_FP_MuzzleLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_FP_Gun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealLearningCharacter_Statics::NewProp_Mesh1P,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealLearningCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealLearningCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnrealLearningCharacter_Statics::ClassParams = {
		&AUnrealLearningCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AUnrealLearningCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealLearningCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnrealLearningCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnrealLearningCharacter, 1411395117);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnrealLearningCharacter(Z_Construct_UClass_AUnrealLearningCharacter, &AUnrealLearningCharacter::StaticClass, TEXT("/Script/UnrealLearning"), TEXT("AUnrealLearningCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealLearningCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
