// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealLearning/UnrealLearningHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealLearningHUD() {}
// Cross Module References
	UNREALLEARNING_API UClass* Z_Construct_UClass_AUnrealLearningHUD_NoRegister();
	UNREALLEARNING_API UClass* Z_Construct_UClass_AUnrealLearningHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_UnrealLearning();
// End Cross Module References
	void AUnrealLearningHUD::StaticRegisterNativesAUnrealLearningHUD()
	{
	}
	UClass* Z_Construct_UClass_AUnrealLearningHUD_NoRegister()
	{
		return AUnrealLearningHUD::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealLearningHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealLearningHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealLearning,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealLearningHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UnrealLearningHUD.h" },
		{ "ModuleRelativePath", "UnrealLearningHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealLearningHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealLearningHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnrealLearningHUD_Statics::ClassParams = {
		&AUnrealLearningHUD::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008002ACu,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AUnrealLearningHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUnrealLearningHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealLearningHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnrealLearningHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnrealLearningHUD, 826033709);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnrealLearningHUD(Z_Construct_UClass_AUnrealLearningHUD, &AUnrealLearningHUD::StaticClass, TEXT("/Script/UnrealLearning"), TEXT("AUnrealLearningHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealLearningHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
