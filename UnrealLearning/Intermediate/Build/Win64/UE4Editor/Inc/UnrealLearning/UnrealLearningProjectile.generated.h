// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef UNREALLEARNING_UnrealLearningProjectile_generated_h
#error "UnrealLearningProjectile.generated.h already included, missing '#pragma once' in UnrealLearningProjectile.h"
#endif
#define UNREALLEARNING_UnrealLearningProjectile_generated_h

#define UnrealLearning_Source_UnrealLearning_UnrealLearningProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define UnrealLearning_Source_UnrealLearning_UnrealLearningProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define UnrealLearning_Source_UnrealLearning_UnrealLearningProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnrealLearningProjectile(); \
	friend struct Z_Construct_UClass_AUnrealLearningProjectile_Statics; \
public: \
	DECLARE_CLASS(AUnrealLearningProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealLearning"), NO_API) \
	DECLARE_SERIALIZER(AUnrealLearningProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define UnrealLearning_Source_UnrealLearning_UnrealLearningProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAUnrealLearningProjectile(); \
	friend struct Z_Construct_UClass_AUnrealLearningProjectile_Statics; \
public: \
	DECLARE_CLASS(AUnrealLearningProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealLearning"), NO_API) \
	DECLARE_SERIALIZER(AUnrealLearningProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define UnrealLearning_Source_UnrealLearning_UnrealLearningProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUnrealLearningProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUnrealLearningProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnrealLearningProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnrealLearningProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnrealLearningProjectile(AUnrealLearningProjectile&&); \
	NO_API AUnrealLearningProjectile(const AUnrealLearningProjectile&); \
public:


#define UnrealLearning_Source_UnrealLearning_UnrealLearningProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnrealLearningProjectile(AUnrealLearningProjectile&&); \
	NO_API AUnrealLearningProjectile(const AUnrealLearningProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnrealLearningProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnrealLearningProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUnrealLearningProjectile)


#define UnrealLearning_Source_UnrealLearning_UnrealLearningProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AUnrealLearningProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AUnrealLearningProjectile, ProjectileMovement); }


#define UnrealLearning_Source_UnrealLearning_UnrealLearningProjectile_h_9_PROLOG
#define UnrealLearning_Source_UnrealLearning_UnrealLearningProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealLearning_Source_UnrealLearning_UnrealLearningProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealLearning_Source_UnrealLearning_UnrealLearningProjectile_h_12_RPC_WRAPPERS \
	UnrealLearning_Source_UnrealLearning_UnrealLearningProjectile_h_12_INCLASS \
	UnrealLearning_Source_UnrealLearning_UnrealLearningProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealLearning_Source_UnrealLearning_UnrealLearningProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealLearning_Source_UnrealLearning_UnrealLearningProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealLearning_Source_UnrealLearning_UnrealLearningProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealLearning_Source_UnrealLearning_UnrealLearningProjectile_h_12_INCLASS_NO_PURE_DECLS \
	UnrealLearning_Source_UnrealLearning_UnrealLearningProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealLearning_Source_UnrealLearning_UnrealLearningProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
