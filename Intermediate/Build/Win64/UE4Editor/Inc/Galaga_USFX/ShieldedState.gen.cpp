// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/ShieldedState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShieldedState() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AShieldedState_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AShieldedState();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AGalaga_USFXPawn_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_UStateInterface_NoRegister();
// End Cross Module References
	void AShieldedState::StaticRegisterNativesAShieldedState()
	{
	}
	UClass* Z_Construct_UClass_AShieldedState_NoRegister()
	{
		return AShieldedState::StaticClass();
	}
	struct Z_Construct_UClass_AShieldedState_Statics
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
	UObject* (*const Z_Construct_UClass_AShieldedState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShieldedState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ShieldedState.h" },
		{ "ModuleRelativePath", "ShieldedState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShieldedState_Statics::NewProp_NavePawn_MetaData[] = {
		{ "Category", "Estado Defensivo" },
		{ "ModuleRelativePath", "ShieldedState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShieldedState_Statics::NewProp_NavePawn = { "NavePawn", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShieldedState, NavePawn), Z_Construct_UClass_AGalaga_USFXPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShieldedState_Statics::NewProp_NavePawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShieldedState_Statics::NewProp_NavePawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShieldedState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldedState_Statics::NewProp_NavePawn,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AShieldedState_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UStateInterface_NoRegister, (int32)VTABLE_OFFSET(AShieldedState, IStateInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShieldedState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShieldedState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShieldedState_Statics::ClassParams = {
		&AShieldedState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShieldedState_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShieldedState_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShieldedState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShieldedState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShieldedState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShieldedState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShieldedState, 2808952756);
	template<> GALAGA_USFX_API UClass* StaticClass<AShieldedState>()
	{
		return AShieldedState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShieldedState(Z_Construct_UClass_AShieldedState, &AShieldedState::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AShieldedState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShieldedState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
