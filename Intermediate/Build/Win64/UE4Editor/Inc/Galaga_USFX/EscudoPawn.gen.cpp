// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/EscudoPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscudoPawn() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AEscudoPawn_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AEscudoPawn();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AEscudoPawn::StaticRegisterNativesAEscudoPawn()
	{
	}
	UClass* Z_Construct_UClass_AEscudoPawn_NoRegister()
	{
		return AEscudoPawn::StaticClass();
	}
	struct Z_Construct_UClass_AEscudoPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscudoPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EscudoPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscudoPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscudoPawn_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EscudoPawn.h" },
		{ "ModuleRelativePath", "EscudoPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscudoPawn_Statics::NewProp_EscudoPawn_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EscudoPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EscudoPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscudoPawn_Statics::NewProp_EscudoPawn = { "EscudoPawn", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscudoPawn, EscudoPawn), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEscudoPawn_Statics::NewProp_EscudoPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscudoPawn_Statics::NewProp_EscudoPawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEscudoPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscudoPawn_Statics::NewProp_EscudoPawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscudoPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscudoPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscudoPawn_Statics::ClassParams = {
		&AEscudoPawn::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEscudoPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEscudoPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEscudoPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscudoPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscudoPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscudoPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscudoPawn, 2758879976);
	template<> GALAGA_USFX_API UClass* StaticClass<AEscudoPawn>()
	{
		return AEscudoPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscudoPawn(Z_Construct_UClass_AEscudoPawn, &AEscudoPawn::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AEscudoPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscudoPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
