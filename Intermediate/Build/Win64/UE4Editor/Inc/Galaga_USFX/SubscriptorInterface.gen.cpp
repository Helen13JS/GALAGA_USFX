// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/SubscriptorInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubscriptorInterface() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_USubscriptorInterface_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_USubscriptorInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	DEFINE_FUNCTION(ISubscriptorInterface::execOnNotify)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNotify();
		P_NATIVE_END;
	}
	void USubscriptorInterface::StaticRegisterNativesUSubscriptorInterface()
	{
		UClass* Class = USubscriptorInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnNotify", &ISubscriptorInterface::execOnNotify },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubscriptorInterface_OnNotify_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubscriptorInterface_OnNotify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SubscriptorInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubscriptorInterface_OnNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubscriptorInterface, nullptr, "OnNotify", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubscriptorInterface_OnNotify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubscriptorInterface_OnNotify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubscriptorInterface_OnNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubscriptorInterface_OnNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USubscriptorInterface_NoRegister()
	{
		return USubscriptorInterface::StaticClass();
	}
	struct Z_Construct_UClass_USubscriptorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubscriptorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubscriptorInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubscriptorInterface_OnNotify, "OnNotify" }, // 1502256237
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubscriptorInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "SubscriptorInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubscriptorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISubscriptorInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubscriptorInterface_Statics::ClassParams = {
		&USubscriptorInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_USubscriptorInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubscriptorInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubscriptorInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubscriptorInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubscriptorInterface, 974838685);
	template<> GALAGA_USFX_API UClass* StaticClass<USubscriptorInterface>()
	{
		return USubscriptorInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubscriptorInterface(Z_Construct_UClass_USubscriptorInterface, &USubscriptorInterface::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("USubscriptorInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubscriptorInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
