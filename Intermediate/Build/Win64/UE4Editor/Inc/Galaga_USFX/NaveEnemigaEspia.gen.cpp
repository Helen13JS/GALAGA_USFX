// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/NaveEnemigaEspia.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaEspia() {}
// Cross Module References
	GALAGA_USFX_API UFunction* Z_Construct_UDelegateFunction_Galaga_USFX_OnNotifyDelegate2__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnemigaEspia_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnemigaEspia();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnemiga();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Galaga_USFX_OnNotifyDelegate2__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Galaga_USFX_OnNotifyDelegate2__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NaveEnemigaEspia.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Galaga_USFX_OnNotifyDelegate2__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Galaga_USFX, nullptr, "OnNotifyDelegate2__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Galaga_USFX_OnNotifyDelegate2__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Galaga_USFX_OnNotifyDelegate2__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Galaga_USFX_OnNotifyDelegate2__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Galaga_USFX_OnNotifyDelegate2__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ANaveEnemigaEspia::execNotificarNaves)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotificarNaves();
		P_NATIVE_END;
	}
	void ANaveEnemigaEspia::StaticRegisterNativesANaveEnemigaEspia()
	{
		UClass* Class = ANaveEnemigaEspia::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NotificarNaves", &ANaveEnemigaEspia::execNotificarNaves },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANaveEnemigaEspia_NotificarNaves_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANaveEnemigaEspia_NotificarNaves_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NaveEnemigaEspia.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANaveEnemigaEspia_NotificarNaves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANaveEnemigaEspia, nullptr, "NotificarNaves", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANaveEnemigaEspia_NotificarNaves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANaveEnemigaEspia_NotificarNaves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANaveEnemigaEspia_NotificarNaves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANaveEnemigaEspia_NotificarNaves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANaveEnemigaEspia_NoRegister()
	{
		return ANaveEnemigaEspia::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaEspia_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigaEspia_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANaveEnemigaEspia_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANaveEnemigaEspia_NotificarNaves, "NotificarNaves" }, // 956452606
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaEspia_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigaEspia.h" },
		{ "ModuleRelativePath", "NaveEnemigaEspia.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaEspia_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaEspia>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaEspia_Statics::ClassParams = {
		&ANaveEnemigaEspia::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaEspia_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaEspia_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaEspia()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigaEspia_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigaEspia, 1186377634);
	template<> GALAGA_USFX_API UClass* StaticClass<ANaveEnemigaEspia>()
	{
		return ANaveEnemigaEspia::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigaEspia(Z_Construct_UClass_ANaveEnemigaEspia, &ANaveEnemigaEspia::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("ANaveEnemigaEspia"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaEspia);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
