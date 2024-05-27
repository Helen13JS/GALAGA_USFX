// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/StateSigiloso.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateSigiloso() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AStateSigiloso_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AStateSigiloso();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	GALAGA_USFX_API UClass* Z_Construct_UClass_UStateInterface_NoRegister();
// End Cross Module References
	void AStateSigiloso::StaticRegisterNativesAStateSigiloso()
	{
	}
	UClass* Z_Construct_UClass_AStateSigiloso_NoRegister()
	{
		return AStateSigiloso::StaticClass();
	}
	struct Z_Construct_UClass_AStateSigiloso_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStateSigiloso_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStateSigiloso_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "StateSigiloso.h" },
		{ "ModuleRelativePath", "StateSigiloso.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AStateSigiloso_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UStateInterface_NoRegister, (int32)VTABLE_OFFSET(AStateSigiloso, IStateInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStateSigiloso_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStateSigiloso>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStateSigiloso_Statics::ClassParams = {
		&AStateSigiloso::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AStateSigiloso_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStateSigiloso_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStateSigiloso()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStateSigiloso_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStateSigiloso, 3611797200);
	template<> GALAGA_USFX_API UClass* StaticClass<AStateSigiloso>()
	{
		return AStateSigiloso::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStateSigiloso(Z_Construct_UClass_AStateSigiloso, &AStateSigiloso::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AStateSigiloso"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStateSigiloso);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
