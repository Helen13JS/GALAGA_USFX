// Copyright Epic Games, Inc. All Rights Reserved.
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
class ACapsulas;
#ifdef GALAGA_USFX_Galaga_USFXPawn_generated_h
#error "Galaga_USFXPawn.generated.h already included, missing '#pragma once' in Galaga_USFXPawn.h"
#endif
#define GALAGA_USFX_Galaga_USFXPawn_generated_h

#define Galaga_USFX_Source_Galaga_USFX_Galaga_USFXPawn_h_187_DELEGATE \
static inline void FOnMunitionCapsuleConsumed_DelegateWrapper(const FMulticastScriptDelegate& OnMunitionCapsuleConsumed) \
{ \
	OnMunitionCapsuleConsumed.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Galaga_USFX_Source_Galaga_USFX_Galaga_USFXPawn_h_14_SPARSE_DATA
#define Galaga_USFX_Source_Galaga_USFX_Galaga_USFXPawn_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReloadAmmo); \
	DECLARE_FUNCTION(execNotifyHit); \
	DECLARE_FUNCTION(execTakeItem); \
	DECLARE_FUNCTION(execDropItem);


#define Galaga_USFX_Source_Galaga_USFX_Galaga_USFXPawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReloadAmmo); \
	DECLARE_FUNCTION(execNotifyHit); \
	DECLARE_FUNCTION(execTakeItem); \
	DECLARE_FUNCTION(execDropItem);


#define Galaga_USFX_Source_Galaga_USFX_Galaga_USFXPawn_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGalaga_USFXPawn(); \
	friend struct Z_Construct_UClass_AGalaga_USFXPawn_Statics; \
public: \
	DECLARE_CLASS(AGalaga_USFXPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaga_USFX"), NO_API) \
	DECLARE_SERIALIZER(AGalaga_USFXPawn)


#define Galaga_USFX_Source_Galaga_USFX_Galaga_USFXPawn_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAGalaga_USFXPawn(); \
	friend struct Z_Construct_UClass_AGalaga_USFXPawn_Statics; \
public: \
	DECLARE_CLASS(AGalaga_USFXPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaga_USFX"), NO_API) \
	DECLARE_SERIALIZER(AGalaga_USFXPawn)


#define Galaga_USFX_Source_Galaga_USFX_Galaga_USFXPawn_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGalaga_USFXPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGalaga_USFXPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGalaga_USFXPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGalaga_USFXPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGalaga_USFXPawn(AGalaga_USFXPawn&&); \
	NO_API AGalaga_USFXPawn(const AGalaga_USFXPawn&); \
public:


#define Galaga_USFX_Source_Galaga_USFX_Galaga_USFXPawn_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGalaga_USFXPawn(AGalaga_USFXPawn&&); \
	NO_API AGalaga_USFXPawn(const AGalaga_USFXPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGalaga_USFXPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGalaga_USFXPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGalaga_USFXPawn)


#define Galaga_USFX_Source_Galaga_USFX_Galaga_USFXPawn_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShipMeshComponent() { return STRUCT_OFFSET(AGalaga_USFXPawn, ShipMeshComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(AGalaga_USFXPawn, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AGalaga_USFXPawn, CameraBoom); }


#define Galaga_USFX_Source_Galaga_USFX_Galaga_USFXPawn_h_11_PROLOG
#define Galaga_USFX_Source_Galaga_USFX_Galaga_USFXPawn_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_USFX_Source_Galaga_USFX_Galaga_USFXPawn_h_14_PRIVATE_PROPERTY_OFFSET \
	Galaga_USFX_Source_Galaga_USFX_Galaga_USFXPawn_h_14_SPARSE_DATA \
	Galaga_USFX_Source_Galaga_USFX_Galaga_USFXPawn_h_14_RPC_WRAPPERS \
	Galaga_USFX_Source_Galaga_USFX_Galaga_USFXPawn_h_14_INCLASS \
	Galaga_USFX_Source_Galaga_USFX_Galaga_USFXPawn_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_USFX_Source_Galaga_USFX_Galaga_USFXPawn_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_USFX_Source_Galaga_USFX_Galaga_USFXPawn_h_14_PRIVATE_PROPERTY_OFFSET \
	Galaga_USFX_Source_Galaga_USFX_Galaga_USFXPawn_h_14_SPARSE_DATA \
	Galaga_USFX_Source_Galaga_USFX_Galaga_USFXPawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Galaga_USFX_Source_Galaga_USFX_Galaga_USFXPawn_h_14_INCLASS_NO_PURE_DECLS \
	Galaga_USFX_Source_Galaga_USFX_Galaga_USFXPawn_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_USFX_API UClass* StaticClass<class AGalaga_USFXPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Galaga_USFX_Source_Galaga_USFX_Galaga_USFXPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
