// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/FacadeNivel1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFacadeNivel1() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AFacadeNivel1_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AFacadeNivel1();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void AFacadeNivel1::StaticRegisterNativesAFacadeNivel1()
	{
	}
	UClass* Z_Construct_UClass_AFacadeNivel1_NoRegister()
	{
		return AFacadeNivel1::StaticClass();
	}
	struct Z_Construct_UClass_AFacadeNivel1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFacadeNivel1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFacadeNivel1_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FacadeNivel1.h" },
		{ "ModuleRelativePath", "FacadeNivel1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFacadeNivel1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFacadeNivel1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFacadeNivel1_Statics::ClassParams = {
		&AFacadeNivel1::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFacadeNivel1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFacadeNivel1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFacadeNivel1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFacadeNivel1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFacadeNivel1, 2169422458);
	template<> GALAGA_USFX_API UClass* StaticClass<AFacadeNivel1>()
	{
		return AFacadeNivel1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFacadeNivel1(Z_Construct_UClass_AFacadeNivel1, &AFacadeNivel1::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AFacadeNivel1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFacadeNivel1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
