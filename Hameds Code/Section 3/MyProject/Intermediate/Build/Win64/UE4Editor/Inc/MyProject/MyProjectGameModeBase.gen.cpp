// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/MyProjectGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProjectGameModeBase() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AMyProjectGameModeBase_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyProjectGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void AMyProjectGameModeBase::StaticRegisterNativesAMyProjectGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AMyProjectGameModeBase_NoRegister()
	{
		return AMyProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMyProjectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyProjectGameModeBase.h" },
		{ "ModuleRelativePath", "MyProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyProjectGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyProjectGameModeBase_Statics::ClassParams = {
		&AMyProjectGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AMyProjectGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyProjectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyProjectGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyProjectGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyProjectGameModeBase, 2128820836);
	template<> MYPROJECT_API UClass* StaticClass<AMyProjectGameModeBase>()
	{
		return AMyProjectGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProjectGameModeBase(Z_Construct_UClass_AMyProjectGameModeBase, &AMyProjectGameModeBase::StaticClass, TEXT("/Script/MyProject"), TEXT("AMyProjectGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProjectGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
