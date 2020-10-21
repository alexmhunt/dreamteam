// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StadiaMQP/RWTxtFile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRWTxtFile() {}
// Cross Module References
	STADIAMQP_API UClass* Z_Construct_UClass_URWTxtFile_NoRegister();
	STADIAMQP_API UClass* Z_Construct_UClass_URWTxtFile();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_StadiaMQP();
// End Cross Module References
	DEFINE_FUNCTION(URWTxtFile::execSaveTxt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveTextB);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileNameB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URWTxtFile::SaveTxt(Z_Param_SaveTextB,Z_Param_FileNameB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URWTxtFile::execLoadTxt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileNameA);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_SaveTextA);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URWTxtFile::LoadTxt(Z_Param_FileNameA,Z_Param_Out_SaveTextA);
		P_NATIVE_END;
	}
	void URWTxtFile::StaticRegisterNativesURWTxtFile()
	{
		UClass* Class = URWTxtFile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadTxt", &URWTxtFile::execLoadTxt },
			{ "SaveTxt", &URWTxtFile::execSaveTxt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URWTxtFile_LoadTxt_Statics
	{
		struct RWTxtFile_eventLoadTxt_Parms
		{
			FString FileNameA;
			FString SaveTextA;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveTextA;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileNameA;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URWTxtFile_LoadTxt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RWTxtFile_eventLoadTxt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URWTxtFile_LoadTxt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RWTxtFile_eventLoadTxt_Parms), &Z_Construct_UFunction_URWTxtFile_LoadTxt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URWTxtFile_LoadTxt_Statics::NewProp_SaveTextA = { "SaveTextA", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RWTxtFile_eventLoadTxt_Parms, SaveTextA), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URWTxtFile_LoadTxt_Statics::NewProp_FileNameA = { "FileNameA", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RWTxtFile_eventLoadTxt_Parms, FileNameA), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URWTxtFile_LoadTxt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URWTxtFile_LoadTxt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URWTxtFile_LoadTxt_Statics::NewProp_SaveTextA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URWTxtFile_LoadTxt_Statics::NewProp_FileNameA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URWTxtFile_LoadTxt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom" },
		{ "Keywords", "LoadTxt" },
		{ "ModuleRelativePath", "RWTxtFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URWTxtFile_LoadTxt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URWTxtFile, nullptr, "LoadTxt", nullptr, nullptr, sizeof(RWTxtFile_eventLoadTxt_Parms), Z_Construct_UFunction_URWTxtFile_LoadTxt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URWTxtFile_LoadTxt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URWTxtFile_LoadTxt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URWTxtFile_LoadTxt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URWTxtFile_LoadTxt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URWTxtFile_LoadTxt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URWTxtFile_SaveTxt_Statics
	{
		struct RWTxtFile_eventSaveTxt_Parms
		{
			FString SaveTextB;
			FString FileNameB;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileNameB;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveTextB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URWTxtFile_SaveTxt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RWTxtFile_eventSaveTxt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URWTxtFile_SaveTxt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RWTxtFile_eventSaveTxt_Parms), &Z_Construct_UFunction_URWTxtFile_SaveTxt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URWTxtFile_SaveTxt_Statics::NewProp_FileNameB = { "FileNameB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RWTxtFile_eventSaveTxt_Parms, FileNameB), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URWTxtFile_SaveTxt_Statics::NewProp_SaveTextB = { "SaveTextB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RWTxtFile_eventSaveTxt_Parms, SaveTextB), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URWTxtFile_SaveTxt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URWTxtFile_SaveTxt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URWTxtFile_SaveTxt_Statics::NewProp_FileNameB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URWTxtFile_SaveTxt_Statics::NewProp_SaveTextB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URWTxtFile_SaveTxt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom" },
		{ "Keywords", "SaveTxt" },
		{ "ModuleRelativePath", "RWTxtFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URWTxtFile_SaveTxt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URWTxtFile, nullptr, "SaveTxt", nullptr, nullptr, sizeof(RWTxtFile_eventSaveTxt_Parms), Z_Construct_UFunction_URWTxtFile_SaveTxt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URWTxtFile_SaveTxt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URWTxtFile_SaveTxt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URWTxtFile_SaveTxt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URWTxtFile_SaveTxt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URWTxtFile_SaveTxt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URWTxtFile_NoRegister()
	{
		return URWTxtFile::StaticClass();
	}
	struct Z_Construct_UClass_URWTxtFile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URWTxtFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_StadiaMQP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URWTxtFile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URWTxtFile_LoadTxt, "LoadTxt" }, // 1345907400
		{ &Z_Construct_UFunction_URWTxtFile_SaveTxt, "SaveTxt" }, // 1530975741
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URWTxtFile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RWTxtFile.h" },
		{ "ModuleRelativePath", "RWTxtFile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URWTxtFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URWTxtFile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URWTxtFile_Statics::ClassParams = {
		&URWTxtFile::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URWTxtFile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URWTxtFile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URWTxtFile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URWTxtFile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URWTxtFile, 3863988555);
	template<> STADIAMQP_API UClass* StaticClass<URWTxtFile>()
	{
		return URWTxtFile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URWTxtFile(Z_Construct_UClass_URWTxtFile, &URWTxtFile::StaticClass, TEXT("/Script/StadiaMQP"), TEXT("URWTxtFile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URWTxtFile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
