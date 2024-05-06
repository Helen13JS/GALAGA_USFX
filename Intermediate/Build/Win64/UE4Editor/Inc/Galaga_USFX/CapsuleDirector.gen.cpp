// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/CapsuleDirector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsuleDirector() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_ACapsuleDirector_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ACapsuleDirector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void ACapsuleDirector::StaticRegisterNativesACapsuleDirector()
	{
	}
	UClass* Z_Construct_UClass_ACapsuleDirector_NoRegister()
	{
		return ACapsuleDirector::StaticClass();
	}
	struct Z_Construct_UClass_ACapsuleDirector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACapsuleDirector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsuleDirector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CapsuleDirector.h" },
		{ "ModuleRelativePath", "CapsuleDirector.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACapsuleDirector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapsuleDirector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACapsuleDirector_Statics::ClassParams = {
		&ACapsuleDirector::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACapsuleDirector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsuleDirector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACapsuleDirector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACapsuleDirector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACapsuleDirector, 1838106644);
	template<> GALAGA_USFX_API UClass* StaticClass<ACapsuleDirector>()
	{
		return ACapsuleDirector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACapsuleDirector(Z_Construct_UClass_ACapsuleDirector, &ACapsuleDirector::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("ACapsuleDirector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACapsuleDirector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
