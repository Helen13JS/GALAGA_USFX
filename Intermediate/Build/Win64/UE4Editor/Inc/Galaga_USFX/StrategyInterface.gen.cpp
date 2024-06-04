// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/StrategyInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrategyInterface() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_UStrategyInterface_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_UStrategyInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void UStrategyInterface::StaticRegisterNativesUStrategyInterface()
	{
	}
	UClass* Z_Construct_UClass_UStrategyInterface_NoRegister()
	{
		return UStrategyInterface::StaticClass();
	}
	struct Z_Construct_UClass_UStrategyInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStrategyInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrategyInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "StrategyInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStrategyInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IStrategyInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStrategyInterface_Statics::ClassParams = {
		&UStrategyInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStrategyInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStrategyInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStrategyInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStrategyInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStrategyInterface, 3143041659);
	template<> GALAGA_USFX_API UClass* StaticClass<UStrategyInterface>()
	{
		return UStrategyInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStrategyInterface(Z_Construct_UClass_UStrategyInterface, &UStrategyInterface::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("UStrategyInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStrategyInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
