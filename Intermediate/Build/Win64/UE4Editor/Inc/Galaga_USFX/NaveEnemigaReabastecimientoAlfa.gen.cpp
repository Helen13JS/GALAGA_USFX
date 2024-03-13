// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/NaveEnemigaReabastecimientoAlfa.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaReabastecimientoAlfa() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnemigaReabastecimientoAlfa_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnemigaReabastecimientoAlfa();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnemigaReabastecimiento();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void ANaveEnemigaReabastecimientoAlfa::StaticRegisterNativesANaveEnemigaReabastecimientoAlfa()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigaReabastecimientoAlfa_NoRegister()
	{
		return ANaveEnemigaReabastecimientoAlfa::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaReabastecimientoAlfa_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigaReabastecimientoAlfa_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigaReabastecimiento,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaReabastecimientoAlfa_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigaReabastecimientoAlfa.h" },
		{ "ModuleRelativePath", "NaveEnemigaReabastecimientoAlfa.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaReabastecimientoAlfa_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaReabastecimientoAlfa>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaReabastecimientoAlfa_Statics::ClassParams = {
		&ANaveEnemigaReabastecimientoAlfa::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaReabastecimientoAlfa_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaReabastecimientoAlfa_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaReabastecimientoAlfa()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigaReabastecimientoAlfa_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigaReabastecimientoAlfa, 2395836256);
	template<> GALAGA_USFX_API UClass* StaticClass<ANaveEnemigaReabastecimientoAlfa>()
	{
		return ANaveEnemigaReabastecimientoAlfa::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigaReabastecimientoAlfa(Z_Construct_UClass_ANaveEnemigaReabastecimientoAlfa, &ANaveEnemigaReabastecimientoAlfa::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("ANaveEnemigaReabastecimientoAlfa"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaReabastecimientoAlfa);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
