// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GALAGA_USFX_CollectionInterface_generated_h
#error "CollectionInterface.generated.h already included, missing '#pragma once' in CollectionInterface.h"
#endif
#define GALAGA_USFX_CollectionInterface_generated_h

#define Galaga_USFX_Source_Galaga_USFX_CollectionInterface_h_14_SPARSE_DATA
#define Galaga_USFX_Source_Galaga_USFX_CollectionInterface_h_14_RPC_WRAPPERS
#define Galaga_USFX_Source_Galaga_USFX_CollectionInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Galaga_USFX_Source_Galaga_USFX_CollectionInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GALAGA_USFX_API UCollectionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCollectionInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GALAGA_USFX_API, UCollectionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCollectionInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GALAGA_USFX_API UCollectionInterface(UCollectionInterface&&); \
	GALAGA_USFX_API UCollectionInterface(const UCollectionInterface&); \
public:


#define Galaga_USFX_Source_Galaga_USFX_CollectionInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GALAGA_USFX_API UCollectionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GALAGA_USFX_API UCollectionInterface(UCollectionInterface&&); \
	GALAGA_USFX_API UCollectionInterface(const UCollectionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GALAGA_USFX_API, UCollectionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCollectionInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCollectionInterface)


#define Galaga_USFX_Source_Galaga_USFX_CollectionInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCollectionInterface(); \
	friend struct Z_Construct_UClass_UCollectionInterface_Statics; \
public: \
	DECLARE_CLASS(UCollectionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Galaga_USFX"), GALAGA_USFX_API) \
	DECLARE_SERIALIZER(UCollectionInterface)


#define Galaga_USFX_Source_Galaga_USFX_CollectionInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Galaga_USFX_Source_Galaga_USFX_CollectionInterface_h_14_GENERATED_UINTERFACE_BODY() \
	Galaga_USFX_Source_Galaga_USFX_CollectionInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_USFX_Source_Galaga_USFX_CollectionInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Galaga_USFX_Source_Galaga_USFX_CollectionInterface_h_14_GENERATED_UINTERFACE_BODY() \
	Galaga_USFX_Source_Galaga_USFX_CollectionInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_USFX_Source_Galaga_USFX_CollectionInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICollectionInterface() {} \
public: \
	typedef UCollectionInterface UClassType; \
	typedef ICollectionInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Galaga_USFX_Source_Galaga_USFX_CollectionInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~ICollectionInterface() {} \
public: \
	typedef UCollectionInterface UClassType; \
	typedef ICollectionInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Galaga_USFX_Source_Galaga_USFX_CollectionInterface_h_11_PROLOG
#define Galaga_USFX_Source_Galaga_USFX_CollectionInterface_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_USFX_Source_Galaga_USFX_CollectionInterface_h_14_SPARSE_DATA \
	Galaga_USFX_Source_Galaga_USFX_CollectionInterface_h_14_RPC_WRAPPERS \
	Galaga_USFX_Source_Galaga_USFX_CollectionInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_USFX_Source_Galaga_USFX_CollectionInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_USFX_Source_Galaga_USFX_CollectionInterface_h_14_SPARSE_DATA \
	Galaga_USFX_Source_Galaga_USFX_CollectionInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Galaga_USFX_Source_Galaga_USFX_CollectionInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_USFX_API UClass* StaticClass<class UCollectionInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Galaga_USFX_Source_Galaga_USFX_CollectionInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
