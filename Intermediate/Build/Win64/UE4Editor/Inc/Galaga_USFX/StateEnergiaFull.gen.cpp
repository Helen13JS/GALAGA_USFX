// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/StateEnergiaFull.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateEnergiaFull() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AStateEnergiaFull_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AStateEnergiaFull();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AGalaga_USFXPawn_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_UStateInterface_NoRegister();
// End Cross Module References
	void AStateEnergiaFull::StaticRegisterNativesAStateEnergiaFull()
	{
	}
	UClass* Z_Construct_UClass_AStateEnergiaFull_NoRegister()
	{
		return AStateEnergiaFull::StaticClass();
	}
	struct Z_Construct_UClass_AStateEnergiaFull_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavePawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavePawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStateEnergiaFull_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStateEnergiaFull_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "StateEnergiaFull.h" },
		{ "ModuleRelativePath", "StateEnergiaFull.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStateEnergiaFull_Statics::NewProp_NavePawn_MetaData[] = {
		{ "Category", "Estado Energia llena" },
		{ "ModuleRelativePath", "StateEnergiaFull.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStateEnergiaFull_Statics::NewProp_NavePawn = { "NavePawn", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStateEnergiaFull, NavePawn), Z_Construct_UClass_AGalaga_USFXPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStateEnergiaFull_Statics::NewProp_NavePawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStateEnergiaFull_Statics::NewProp_NavePawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStateEnergiaFull_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStateEnergiaFull_Statics::NewProp_NavePawn,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AStateEnergiaFull_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UStateInterface_NoRegister, (int32)VTABLE_OFFSET(AStateEnergiaFull, IStateInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStateEnergiaFull_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStateEnergiaFull>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStateEnergiaFull_Statics::ClassParams = {
		&AStateEnergiaFull::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AStateEnergiaFull_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AStateEnergiaFull_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStateEnergiaFull_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStateEnergiaFull_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStateEnergiaFull()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStateEnergiaFull_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStateEnergiaFull, 1771385519);
	template<> GALAGA_USFX_API UClass* StaticClass<AStateEnergiaFull>()
	{
		return AStateEnergiaFull::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStateEnergiaFull(Z_Construct_UClass_AStateEnergiaFull, &AStateEnergiaFull::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AStateEnergiaFull"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStateEnergiaFull);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
