// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/CapVelocityBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapVelocityBuilder() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_ACapVelocityBuilder_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ACapVelocityBuilder();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	GALAGA_USFX_API UClass* Z_Construct_UClass_UCapsulasInterface_NoRegister();
// End Cross Module References
	void ACapVelocityBuilder::StaticRegisterNativesACapVelocityBuilder()
	{
	}
	UClass* Z_Construct_UClass_ACapVelocityBuilder_NoRegister()
	{
		return ACapVelocityBuilder::StaticClass();
	}
	struct Z_Construct_UClass_ACapVelocityBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACapVelocityBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapVelocityBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CapVelocityBuilder.h" },
		{ "ModuleRelativePath", "CapVelocityBuilder.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACapVelocityBuilder_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCapsulasInterface_NoRegister, (int32)VTABLE_OFFSET(ACapVelocityBuilder, ICapsulasInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACapVelocityBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapVelocityBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACapVelocityBuilder_Statics::ClassParams = {
		&ACapVelocityBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACapVelocityBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACapVelocityBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACapVelocityBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACapVelocityBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACapVelocityBuilder, 3372219680);
	template<> GALAGA_USFX_API UClass* StaticClass<ACapVelocityBuilder>()
	{
		return ACapVelocityBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACapVelocityBuilder(Z_Construct_UClass_ACapVelocityBuilder, &ACapVelocityBuilder::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("ACapVelocityBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACapVelocityBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
