// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/StatePotenciado.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatePotenciado() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AStatePotenciado_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AStatePotenciado();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	GALAGA_USFX_API UClass* Z_Construct_UClass_UStateInterface_NoRegister();
// End Cross Module References
	void AStatePotenciado::StaticRegisterNativesAStatePotenciado()
	{
	}
	UClass* Z_Construct_UClass_AStatePotenciado_NoRegister()
	{
		return AStatePotenciado::StaticClass();
	}
	struct Z_Construct_UClass_AStatePotenciado_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStatePotenciado_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatePotenciado_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "StatePotenciado.h" },
		{ "ModuleRelativePath", "StatePotenciado.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AStatePotenciado_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UStateInterface_NoRegister, (int32)VTABLE_OFFSET(AStatePotenciado, IStateInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStatePotenciado_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStatePotenciado>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStatePotenciado_Statics::ClassParams = {
		&AStatePotenciado::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStatePotenciado_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStatePotenciado_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStatePotenciado()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStatePotenciado_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStatePotenciado, 2510713276);
	template<> GALAGA_USFX_API UClass* StaticClass<AStatePotenciado>()
	{
		return AStatePotenciado::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStatePotenciado(Z_Construct_UClass_AStatePotenciado, &AStatePotenciado::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AStatePotenciado"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStatePotenciado);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
