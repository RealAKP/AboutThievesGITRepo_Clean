// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PixelizationMaterialsBPLibrary.h"

#ifdef PIXELIZATIONMATERIALS_PixelizationMaterialsBPLibrary_generated_h
#error "PixelizationMaterialsBPLibrary.generated.h already included, missing '#pragma once' in PixelizationMaterialsBPLibrary.h"
#endif
#define PIXELIZATIONMATERIALS_PixelizationMaterialsBPLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FColor;
struct FLinearColor;

// ********** Begin Class UPixelizationMaterialsBPLibrary ******************************************
#define FID_UEplugins_PixelizationMaterials_5_7_PixelizationMaterials_HostProject_Plugins_PixelizationMaterials_Source_PixelizationMaterials_Public_PixelizationMaterialsBPLibrary_h_61_RPC_WRAPPERS \
	DECLARE_FUNCTION(execfindClosestSelectSearchType); \
	DECLARE_FUNCTION(execfindClosestOnAxis); \
	DECLARE_FUNCTION(execfindClosestLine); \
	DECLARE_FUNCTION(execfindClosestAndOffset); \
	DECLARE_FUNCTION(execConvertColorFromSearch); \
	DECLARE_FUNCTION(execConvertPaletteForSearch); \
	DECLARE_FUNCTION(execConvertColorForSearch); \
	DECLARE_FUNCTION(execConvertSpaceToLinearColor); \
	DECLARE_FUNCTION(execConvertLinearColorToSpace); \
	DECLARE_FUNCTION(execCIELUVTosRGB); \
	DECLARE_FUNCTION(execXYZcolorTosRGB); \
	DECLARE_FUNCTION(execCIELUVToXYZcolor); \
	DECLARE_FUNCTION(execsRGBToCIELUV); \
	DECLARE_FUNCTION(execXYZcolorToCIELUV); \
	DECLARE_FUNCTION(execsRGBToXYZcolor); \
	DECLARE_FUNCTION(execpositionHSV); \
	DECLARE_FUNCTION(execHSVposition); \
	DECLARE_FUNCTION(execReadPalleteFromFile); \
	DECLARE_FUNCTION(execConvertHexToColor);


struct Z_Construct_UClass_UPixelizationMaterialsBPLibrary_Statics;
PIXELIZATIONMATERIALS_API UClass* Z_Construct_UClass_UPixelizationMaterialsBPLibrary_NoRegister();

#define FID_UEplugins_PixelizationMaterials_5_7_PixelizationMaterials_HostProject_Plugins_PixelizationMaterials_Source_PixelizationMaterials_Public_PixelizationMaterialsBPLibrary_h_61_INCLASS \
private: \
	static void StaticRegisterNativesUPixelizationMaterialsBPLibrary(); \
	friend struct ::Z_Construct_UClass_UPixelizationMaterialsBPLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PIXELIZATIONMATERIALS_API UClass* ::Z_Construct_UClass_UPixelizationMaterialsBPLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UPixelizationMaterialsBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PixelizationMaterials"), Z_Construct_UClass_UPixelizationMaterialsBPLibrary_NoRegister) \
	DECLARE_SERIALIZER(UPixelizationMaterialsBPLibrary)


#define FID_UEplugins_PixelizationMaterials_5_7_PixelizationMaterials_HostProject_Plugins_PixelizationMaterials_Source_PixelizationMaterials_Public_PixelizationMaterialsBPLibrary_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPixelizationMaterialsBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPixelizationMaterialsBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPixelizationMaterialsBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPixelizationMaterialsBPLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPixelizationMaterialsBPLibrary(UPixelizationMaterialsBPLibrary&&) = delete; \
	UPixelizationMaterialsBPLibrary(const UPixelizationMaterialsBPLibrary&) = delete; \
	NO_API virtual ~UPixelizationMaterialsBPLibrary();


#define FID_UEplugins_PixelizationMaterials_5_7_PixelizationMaterials_HostProject_Plugins_PixelizationMaterials_Source_PixelizationMaterials_Public_PixelizationMaterialsBPLibrary_h_58_PROLOG
#define FID_UEplugins_PixelizationMaterials_5_7_PixelizationMaterials_HostProject_Plugins_PixelizationMaterials_Source_PixelizationMaterials_Public_PixelizationMaterialsBPLibrary_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEplugins_PixelizationMaterials_5_7_PixelizationMaterials_HostProject_Plugins_PixelizationMaterials_Source_PixelizationMaterials_Public_PixelizationMaterialsBPLibrary_h_61_RPC_WRAPPERS \
	FID_UEplugins_PixelizationMaterials_5_7_PixelizationMaterials_HostProject_Plugins_PixelizationMaterials_Source_PixelizationMaterials_Public_PixelizationMaterialsBPLibrary_h_61_INCLASS \
	FID_UEplugins_PixelizationMaterials_5_7_PixelizationMaterials_HostProject_Plugins_PixelizationMaterials_Source_PixelizationMaterials_Public_PixelizationMaterialsBPLibrary_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPixelizationMaterialsBPLibrary;

// ********** End Class UPixelizationMaterialsBPLibrary ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEplugins_PixelizationMaterials_5_7_PixelizationMaterials_HostProject_Plugins_PixelizationMaterials_Source_PixelizationMaterials_Public_PixelizationMaterialsBPLibrary_h

// ********** Begin Enum FPalleteFileType **********************************************************
#define FOREACH_ENUM_FPALLETEFILETYPE(op) \
	op(JASC) \
	op(GIMP) \
	op(PaintNET) \
	op(ASEF) \
	op(HEX) 
// ********** End Enum FPalleteFileType ************************************************************

// ********** Begin Enum EColorSpace ***************************************************************
#define FOREACH_ENUM_ECOLORSPACE(op) \
	op(RGB) \
	op(HSV) \
	op(XYZ) \
	op(CIELUV) 
// ********** End Enum EColorSpace *****************************************************************

// ********** Begin Enum EColorSearchType **********************************************************
#define FOREACH_ENUM_ECOLORSEARCHTYPE(op) \
	op(ClosestOffset) \
	op(ClosestLine) \
	op(ClosestX) \
	op(ClosestY) \
	op(ClosestZ) 
// ********** End Enum EColorSearchType ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
