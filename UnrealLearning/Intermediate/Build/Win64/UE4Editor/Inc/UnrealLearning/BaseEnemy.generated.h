// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALLEARNING_BaseEnemy_generated_h
#error "BaseEnemy.generated.h already included, missing '#pragma once' in BaseEnemy.h"
#endif
#define UNREALLEARNING_BaseEnemy_generated_h

#define UnrealLearning_Source_UnrealLearning_Public_BaseEnemy_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTakeDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TakeDamage(Z_Param_damage); \
		P_NATIVE_END; \
	}


#define UnrealLearning_Source_UnrealLearning_Public_BaseEnemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTakeDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TakeDamage(Z_Param_damage); \
		P_NATIVE_END; \
	}


#define UnrealLearning_Source_UnrealLearning_Public_BaseEnemy_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseEnemy(); \
	friend struct Z_Construct_UClass_ABaseEnemy_Statics; \
public: \
	DECLARE_CLASS(ABaseEnemy, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealLearning"), NO_API) \
	DECLARE_SERIALIZER(ABaseEnemy)


#define UnrealLearning_Source_UnrealLearning_Public_BaseEnemy_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABaseEnemy(); \
	friend struct Z_Construct_UClass_ABaseEnemy_Statics; \
public: \
	DECLARE_CLASS(ABaseEnemy, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealLearning"), NO_API) \
	DECLARE_SERIALIZER(ABaseEnemy)


#define UnrealLearning_Source_UnrealLearning_Public_BaseEnemy_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseEnemy(ABaseEnemy&&); \
	NO_API ABaseEnemy(const ABaseEnemy&); \
public:


#define UnrealLearning_Source_UnrealLearning_Public_BaseEnemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseEnemy(ABaseEnemy&&); \
	NO_API ABaseEnemy(const ABaseEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseEnemy)


#define UnrealLearning_Source_UnrealLearning_Public_BaseEnemy_h_12_PRIVATE_PROPERTY_OFFSET
#define UnrealLearning_Source_UnrealLearning_Public_BaseEnemy_h_9_PROLOG
#define UnrealLearning_Source_UnrealLearning_Public_BaseEnemy_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealLearning_Source_UnrealLearning_Public_BaseEnemy_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealLearning_Source_UnrealLearning_Public_BaseEnemy_h_12_RPC_WRAPPERS \
	UnrealLearning_Source_UnrealLearning_Public_BaseEnemy_h_12_INCLASS \
	UnrealLearning_Source_UnrealLearning_Public_BaseEnemy_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealLearning_Source_UnrealLearning_Public_BaseEnemy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealLearning_Source_UnrealLearning_Public_BaseEnemy_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealLearning_Source_UnrealLearning_Public_BaseEnemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealLearning_Source_UnrealLearning_Public_BaseEnemy_h_12_INCLASS_NO_PURE_DECLS \
	UnrealLearning_Source_UnrealLearning_Public_BaseEnemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealLearning_Source_UnrealLearning_Public_BaseEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
