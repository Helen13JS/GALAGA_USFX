// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GALAGA_USFX_StrategyPawnInterface_generated_h
#error "StrategyPawnInterface.generated.h already included, missing '#pragma once' in StrategyPawnInterface.h"
#endif
#define GALAGA_USFX_StrategyPawnInterface_generated_h

#define Galaga_USFX_Source_Galaga_USFX_StrategyPawnInterface_h_13_SPARSE_DATA
#define Galaga_USFX_Source_Galaga_USFX_StrategyPawnInterface_h_13_RPC_WRAPPERS
#define Galaga_USFX_Source_Galaga_USFX_StrategyPawnInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Galaga_USFX_Source_Galaga_USFX_StrategyPawnInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GALAGA_USFX_API UStrategyPawnInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStrategyPawnInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GALAGA_USFX_API, UStrategyPawnInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStrategyPawnInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GALAGA_USFX_API UStrategyPawnInterface(UStrategyPawnInterface&&); \
	GALAGA_USFX_API UStrategyPawnInterface(const UStrategyPawnInterface&); \
public:


#define Galaga_USFX_Source_Galaga_USFX_StrategyPawnInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GALAGA_USFX_API UStrategyPawnInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GALAGA_USFX_API UStrategyPawnInterface(UStrategyPawnInterface&&); \
	GALAGA_USFX_API UStrategyPawnInterface(const UStrategyPawnInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GALAGA_USFX_API, UStrategyPawnInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStrategyPawnInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStrategyPawnInterface)


#define Galaga_USFX_Source_Galaga_USFX_StrategyPawnInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUStrategyPawnInterface(); \
	friend struct Z_Construct_UClass_UStrategyPawnInterface_Statics; \
public: \
	DECLARE_CLASS(UStrategyPawnInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Galaga_USFX"), GALAGA_USFX_API) \
	DECLARE_SERIALIZER(UStrategyPawnInterface)


#define Galaga_USFX_Source_Galaga_USFX_StrategyPawnInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Galaga_USFX_Source_Galaga_USFX_StrategyPawnInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Galaga_USFX_Source_Galaga_USFX_StrategyPawnInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_USFX_Source_Galaga_USFX_StrategyPawnInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Galaga_USFX_Source_Galaga_USFX_StrategyPawnInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Galaga_USFX_Source_Galaga_USFX_StrategyPawnInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_USFX_Source_Galaga_USFX_StrategyPawnInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IStrategyPawnInterface() {} \
public: \
	typedef UStrategyPawnInterface UClassType; \
	typedef IStrategyPawnInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Galaga_USFX_Source_Galaga_USFX_StrategyPawnInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IStrategyPawnInterface() {} \
public: \
	typedef UStrategyPawnInterface UClassType; \
	typedef IStrategyPawnInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Galaga_USFX_Source_Galaga_USFX_StrategyPawnInterface_h_10_PROLOG
#define Galaga_USFX_Source_Galaga_USFX_StrategyPawnInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_USFX_Source_Galaga_USFX_StrategyPawnInterface_h_13_SPARSE_DATA \
	Galaga_USFX_Source_Galaga_USFX_StrategyPawnInterface_h_13_RPC_WRAPPERS \
	Galaga_USFX_Source_Galaga_USFX_StrategyPawnInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_USFX_Source_Galaga_USFX_StrategyPawnInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_USFX_Source_Galaga_USFX_StrategyPawnInterface_h_13_SPARSE_DATA \
	Galaga_USFX_Source_Galaga_USFX_StrategyPawnInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Galaga_USFX_Source_Galaga_USFX_StrategyPawnInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_USFX_API UClass* StaticClass<class UStrategyPawnInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Galaga_USFX_Source_Galaga_USFX_StrategyPawnInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
