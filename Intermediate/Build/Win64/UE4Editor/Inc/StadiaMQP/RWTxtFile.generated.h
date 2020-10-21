// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STADIAMQP_RWTxtFile_generated_h
#error "RWTxtFile.generated.h already included, missing '#pragma once' in RWTxtFile.h"
#endif
#define STADIAMQP_RWTxtFile_generated_h

#define Game_Source_StadiaMQP_RWTxtFile_h_15_SPARSE_DATA
#define Game_Source_StadiaMQP_RWTxtFile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSaveTxt); \
	DECLARE_FUNCTION(execLoadTxt);


#define Game_Source_StadiaMQP_RWTxtFile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveTxt); \
	DECLARE_FUNCTION(execLoadTxt);


#define Game_Source_StadiaMQP_RWTxtFile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURWTxtFile(); \
	friend struct Z_Construct_UClass_URWTxtFile_Statics; \
public: \
	DECLARE_CLASS(URWTxtFile, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StadiaMQP"), NO_API) \
	DECLARE_SERIALIZER(URWTxtFile)


#define Game_Source_StadiaMQP_RWTxtFile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesURWTxtFile(); \
	friend struct Z_Construct_UClass_URWTxtFile_Statics; \
public: \
	DECLARE_CLASS(URWTxtFile, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StadiaMQP"), NO_API) \
	DECLARE_SERIALIZER(URWTxtFile)


#define Game_Source_StadiaMQP_RWTxtFile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URWTxtFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URWTxtFile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URWTxtFile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URWTxtFile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URWTxtFile(URWTxtFile&&); \
	NO_API URWTxtFile(const URWTxtFile&); \
public:


#define Game_Source_StadiaMQP_RWTxtFile_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URWTxtFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URWTxtFile(URWTxtFile&&); \
	NO_API URWTxtFile(const URWTxtFile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URWTxtFile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URWTxtFile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URWTxtFile)


#define Game_Source_StadiaMQP_RWTxtFile_h_15_PRIVATE_PROPERTY_OFFSET
#define Game_Source_StadiaMQP_RWTxtFile_h_12_PROLOG
#define Game_Source_StadiaMQP_RWTxtFile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_StadiaMQP_RWTxtFile_h_15_PRIVATE_PROPERTY_OFFSET \
	Game_Source_StadiaMQP_RWTxtFile_h_15_SPARSE_DATA \
	Game_Source_StadiaMQP_RWTxtFile_h_15_RPC_WRAPPERS \
	Game_Source_StadiaMQP_RWTxtFile_h_15_INCLASS \
	Game_Source_StadiaMQP_RWTxtFile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Source_StadiaMQP_RWTxtFile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_StadiaMQP_RWTxtFile_h_15_PRIVATE_PROPERTY_OFFSET \
	Game_Source_StadiaMQP_RWTxtFile_h_15_SPARSE_DATA \
	Game_Source_StadiaMQP_RWTxtFile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Source_StadiaMQP_RWTxtFile_h_15_INCLASS_NO_PURE_DECLS \
	Game_Source_StadiaMQP_RWTxtFile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STADIAMQP_API UClass* StaticClass<class URWTxtFile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Source_StadiaMQP_RWTxtFile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
