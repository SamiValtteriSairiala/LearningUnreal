// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealLearning/Public/BaseEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseEnemy() {}
// Cross Module References
	UNREALLEARNING_API UClass* Z_Construct_UClass_ABaseEnemy_NoRegister();
	UNREALLEARNING_API UClass* Z_Construct_UClass_ABaseEnemy();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_UnrealLearning();
	UNREALLEARNING_API UFunction* Z_Construct_UFunction_ABaseEnemy_TakeDamage();
// End Cross Module References
	void ABaseEnemy::StaticRegisterNativesABaseEnemy()
	{
		UClass* Class = ABaseEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TakeDamage", &ABaseEnemy::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseEnemy_TakeDamage_Statics
	{
		struct BaseEnemy_eventTakeDamage_Parms
		{
			float damage;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseEnemy_TakeDamage_Statics::NewProp_damage = { UE4CodeGen_Private::EPropertyClass::Float, "damage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BaseEnemy_eventTakeDamage_Parms, damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_TakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_TakeDamage_Statics::NewProp_damage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, "TakeDamage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BaseEnemy_eventTakeDamage_Parms), Z_Construct_UFunction_ABaseEnemy_TakeDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_TakeDamage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_TakeDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemy_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseEnemy_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseEnemy_NoRegister()
	{
		return ABaseEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ABaseEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isDead_MetaData[];
#endif
		static void NewProp_isDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasTakenDamage_MetaData[];
#endif
		static void NewProp_hasTakenDamage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasTakenDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealLearning,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseEnemy_TakeDamage, "TakeDamage" }, // 2492375333
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaseEnemy.h" },
		{ "ModuleRelativePath", "Public/BaseEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_isDead_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Public/BaseEnemy.h" },
	};
#endif
	void Z_Construct_UClass_ABaseEnemy_Statics::NewProp_isDead_SetBit(void* Obj)
	{
		((ABaseEnemy*)Obj)->isDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_isDead = { UE4CodeGen_Private::EPropertyClass::Bool, "isDead", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABaseEnemy), &Z_Construct_UClass_ABaseEnemy_Statics::NewProp_isDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_isDead_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_isDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_hasTakenDamage_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Public/BaseEnemy.h" },
	};
#endif
	void Z_Construct_UClass_ABaseEnemy_Statics::NewProp_hasTakenDamage_SetBit(void* Obj)
	{
		((ABaseEnemy*)Obj)->hasTakenDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_hasTakenDamage = { UE4CodeGen_Private::EPropertyClass::Bool, "hasTakenDamage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABaseEnemy), &Z_Construct_UClass_ABaseEnemy_Statics::NewProp_hasTakenDamage_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_hasTakenDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_hasTakenDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_health_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Public/BaseEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_health = { UE4CodeGen_Private::EPropertyClass::Float, "health", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABaseEnemy, health), METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_health_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_health_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_isDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_hasTakenDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseEnemy_Statics::ClassParams = {
		&ABaseEnemy::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ABaseEnemy_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseEnemy, 2218251425);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseEnemy(Z_Construct_UClass_ABaseEnemy, &ABaseEnemy::StaticClass, TEXT("/Script/UnrealLearning"), TEXT("ABaseEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
