// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGalaga_USFX_init() {}
	GALAGA_USFX_API UFunction* Z_Construct_UDelegateFunction_AGalaga_USFXPawn_OnMunitionCapsuleConsumed__DelegateSignature();
	GALAGA_USFX_API UFunction* Z_Construct_UDelegateFunction_Galaga_USFX_OnNotifyDelegate2__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AGalaga_USFXPawn_OnMunitionCapsuleConsumed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Galaga_USFX_OnNotifyDelegate2__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/Galaga_USFX",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xF907CE27,
				0x33F84A24,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
