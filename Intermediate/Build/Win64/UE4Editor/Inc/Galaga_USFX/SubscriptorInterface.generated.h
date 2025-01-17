// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GALAGA_USFX_SubscriptorInterface_generated_h
#error "SubscriptorInterface.generated.h already included, missing '#pragma once' in SubscriptorInterface.h"
#endif
#define GALAGA_USFX_SubscriptorInterface_generated_h

#define Galaga_USFX_Source_Galaga_USFX_SubscriptorInterface_h_13_SPARSE_DATA
#define Galaga_USFX_Source_Galaga_USFX_SubscriptorInterface_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnNotify);


#define Galaga_USFX_Source_Galaga_USFX_SubscriptorInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnNotify);


#define Galaga_USFX_Source_Galaga_USFX_SubscriptorInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GALAGA_USFX_API USubscriptorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubscriptorInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GALAGA_USFX_API, USubscriptorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubscriptorInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GALAGA_USFX_API USubscriptorInterface(USubscriptorInterface&&); \
	GALAGA_USFX_API USubscriptorInterface(const USubscriptorInterface&); \
public:


#define Galaga_USFX_Source_Galaga_USFX_SubscriptorInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GALAGA_USFX_API USubscriptorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GALAGA_USFX_API USubscriptorInterface(USubscriptorInterface&&); \
	GALAGA_USFX_API USubscriptorInterface(const USubscriptorInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GALAGA_USFX_API, USubscriptorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubscriptorInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubscriptorInterface)


#define Galaga_USFX_Source_Galaga_USFX_SubscriptorInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSubscriptorInterface(); \
	friend struct Z_Construct_UClass_USubscriptorInterface_Statics; \
public: \
	DECLARE_CLASS(USubscriptorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Galaga_USFX"), GALAGA_USFX_API) \
	DECLARE_SERIALIZER(USubscriptorInterface)


#define Galaga_USFX_Source_Galaga_USFX_SubscriptorInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Galaga_USFX_Source_Galaga_USFX_SubscriptorInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Galaga_USFX_Source_Galaga_USFX_SubscriptorInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_USFX_Source_Galaga_USFX_SubscriptorInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Galaga_USFX_Source_Galaga_USFX_SubscriptorInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Galaga_USFX_Source_Galaga_USFX_SubscriptorInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_USFX_Source_Galaga_USFX_SubscriptorInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISubscriptorInterface() {} \
public: \
	typedef USubscriptorInterface UClassType; \
	typedef ISubscriptorInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Galaga_USFX_Source_Galaga_USFX_SubscriptorInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ISubscriptorInterface() {} \
public: \
	typedef USubscriptorInterface UClassType; \
	typedef ISubscriptorInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Galaga_USFX_Source_Galaga_USFX_SubscriptorInterface_h_10_PROLOG
#define Galaga_USFX_Source_Galaga_USFX_SubscriptorInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_USFX_Source_Galaga_USFX_SubscriptorInterface_h_13_SPARSE_DATA \
	Galaga_USFX_Source_Galaga_USFX_SubscriptorInterface_h_13_RPC_WRAPPERS \
	Galaga_USFX_Source_Galaga_USFX_SubscriptorInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_USFX_Source_Galaga_USFX_SubscriptorInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_USFX_Source_Galaga_USFX_SubscriptorInterface_h_13_SPARSE_DATA \
	Galaga_USFX_Source_Galaga_USFX_SubscriptorInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Galaga_USFX_Source_Galaga_USFX_SubscriptorInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_USFX_API UClass* StaticClass<class USubscriptorInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Galaga_USFX_Source_Galaga_USFX_SubscriptorInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
