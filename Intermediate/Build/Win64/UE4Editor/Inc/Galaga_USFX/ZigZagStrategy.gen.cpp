// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/ZigZagStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZigZagStrategy() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AZigZagStrategy_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AZigZagStrategy();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	GALAGA_USFX_API UClass* Z_Construct_UClass_UStrategyInterface_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_UStrategyPawnInterface_NoRegister();
// End Cross Module References
	void AZigZagStrategy::StaticRegisterNativesAZigZagStrategy()
	{
	}
	UClass* Z_Construct_UClass_AZigZagStrategy_NoRegister()
	{
		return AZigZagStrategy::StaticClass();
	}
	struct Z_Construct_UClass_AZigZagStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZigZagStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZigZagStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ZigZagStrategy.h" },
		{ "ModuleRelativePath", "ZigZagStrategy.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AZigZagStrategy_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UStrategyInterface_NoRegister, (int32)VTABLE_OFFSET(AZigZagStrategy, IStrategyInterface), false },
			{ Z_Construct_UClass_UStrategyPawnInterface_NoRegister, (int32)VTABLE_OFFSET(AZigZagStrategy, IStrategyPawnInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZigZagStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZigZagStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZigZagStrategy_Statics::ClassParams = {
		&AZigZagStrategy::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_AZigZagStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZigZagStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZigZagStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZigZagStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZigZagStrategy, 1752220677);
	template<> GALAGA_USFX_API UClass* StaticClass<AZigZagStrategy>()
	{
		return AZigZagStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZigZagStrategy(Z_Construct_UClass_AZigZagStrategy, &AZigZagStrategy::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AZigZagStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZigZagStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
