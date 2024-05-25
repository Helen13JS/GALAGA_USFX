// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/FacadeRecargar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFacadeRecargar() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AFacadeRecargar_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AFacadeRecargar();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void AFacadeRecargar::StaticRegisterNativesAFacadeRecargar()
	{
	}
	UClass* Z_Construct_UClass_AFacadeRecargar_NoRegister()
	{
		return AFacadeRecargar::StaticClass();
	}
	struct Z_Construct_UClass_AFacadeRecargar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFacadeRecargar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFacadeRecargar_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FacadeRecargar.h" },
		{ "ModuleRelativePath", "FacadeRecargar.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFacadeRecargar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFacadeRecargar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFacadeRecargar_Statics::ClassParams = {
		&AFacadeRecargar::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFacadeRecargar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFacadeRecargar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFacadeRecargar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFacadeRecargar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFacadeRecargar, 1899699377);
	template<> GALAGA_USFX_API UClass* StaticClass<AFacadeRecargar>()
	{
		return AFacadeRecargar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFacadeRecargar(Z_Construct_UClass_AFacadeRecargar, &AFacadeRecargar::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AFacadeRecargar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFacadeRecargar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
