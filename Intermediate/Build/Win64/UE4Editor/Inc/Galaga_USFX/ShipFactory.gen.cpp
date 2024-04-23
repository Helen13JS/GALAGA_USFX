// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/ShipFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShipFactory() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AShipFactory_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AShipFactory();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void AShipFactory::StaticRegisterNativesAShipFactory()
	{
	}
	UClass* Z_Construct_UClass_AShipFactory_NoRegister()
	{
		return AShipFactory::StaticClass();
	}
	struct Z_Construct_UClass_AShipFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShipFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShipFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ShipFactory.h" },
		{ "ModuleRelativePath", "ShipFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShipFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShipFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShipFactory_Statics::ClassParams = {
		&AShipFactory::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShipFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShipFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShipFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShipFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShipFactory, 1459795622);
	template<> GALAGA_USFX_API UClass* StaticClass<AShipFactory>()
	{
		return AShipFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShipFactory(Z_Construct_UClass_AShipFactory, &AShipFactory::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AShipFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShipFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
