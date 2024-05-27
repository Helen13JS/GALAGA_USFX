// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/StateInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateInterface() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_UStateInterface_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_UStateInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void UStateInterface::StaticRegisterNativesUStateInterface()
	{
	}
	UClass* Z_Construct_UClass_UStateInterface_NoRegister()
	{
		return UStateInterface::StaticClass();
	}
	struct Z_Construct_UClass_UStateInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStateInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "StateInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStateInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IStateInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStateInterface_Statics::ClassParams = {
		&UStateInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UStateInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStateInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStateInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStateInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStateInterface, 1754051789);
	template<> GALAGA_USFX_API UClass* StaticClass<UStateInterface>()
	{
		return UStateInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStateInterface(Z_Construct_UClass_UStateInterface, &UStateInterface::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("UStateInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStateInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
