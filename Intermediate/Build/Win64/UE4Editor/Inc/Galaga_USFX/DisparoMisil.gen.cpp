// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/DisparoMisil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisparoMisil() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_ADisparoMisil_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ADisparoMisil();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
// End Cross Module References
	void ADisparoMisil::StaticRegisterNativesADisparoMisil()
	{
	}
	UClass* Z_Construct_UClass_ADisparoMisil_NoRegister()
	{
		return ADisparoMisil::StaticClass();
	}
	struct Z_Construct_UClass_ADisparoMisil_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Misilmalla_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Misilmalla;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADisparoMisil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisparoMisil_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DisparoMisil.h" },
		{ "ModuleRelativePath", "DisparoMisil.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisparoMisil_Statics::NewProp_Misilmalla_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "Comment", "//UStaticMeshComponent* ProyectilEnemyMesh;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DisparoMisil.h" },
		{ "ToolTip", "UStaticMeshComponent* ProyectilEnemyMesh;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADisparoMisil_Statics::NewProp_Misilmalla = { "Misilmalla", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADisparoMisil, Misilmalla), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADisparoMisil_Statics::NewProp_Misilmalla_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisparoMisil_Statics::NewProp_Misilmalla_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisparoMisil_Statics::NewProp_ProjectileMovementComponent_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DisparoMisil.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADisparoMisil_Statics::NewProp_ProjectileMovementComponent = { "ProjectileMovementComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADisparoMisil, ProjectileMovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADisparoMisil_Statics::NewProp_ProjectileMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisparoMisil_Statics::NewProp_ProjectileMovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisparoMisil_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Damage" },
		{ "Comment", "//UPROPERTY(VisibleAnywhere, Category = \"Mesh\")\n//UStaticMeshComponent* MeshComponent;\n" },
		{ "ModuleRelativePath", "DisparoMisil.h" },
		{ "ToolTip", "UPROPERTY(VisibleAnywhere, Category = \"Mesh\")\nUStaticMeshComponent* MeshComponent;" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADisparoMisil_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADisparoMisil, Damage), METADATA_PARAMS(Z_Construct_UClass_ADisparoMisil_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisparoMisil_Statics::NewProp_Damage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADisparoMisil_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisparoMisil_Statics::NewProp_Misilmalla,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisparoMisil_Statics::NewProp_ProjectileMovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisparoMisil_Statics::NewProp_Damage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADisparoMisil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADisparoMisil>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADisparoMisil_Statics::ClassParams = {
		&ADisparoMisil::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADisparoMisil_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADisparoMisil_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADisparoMisil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADisparoMisil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADisparoMisil()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADisparoMisil_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADisparoMisil, 1224649039);
	template<> GALAGA_USFX_API UClass* StaticClass<ADisparoMisil>()
	{
		return ADisparoMisil::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADisparoMisil(Z_Construct_UClass_ADisparoMisil, &ADisparoMisil::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("ADisparoMisil"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADisparoMisil);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
