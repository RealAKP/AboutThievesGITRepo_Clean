// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PixelizationMaterialsBPLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePixelizationMaterialsBPLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
PIXELIZATIONMATERIALS_API UClass* Z_Construct_UClass_UPixelizationMaterialsBPLibrary();
PIXELIZATIONMATERIALS_API UClass* Z_Construct_UClass_UPixelizationMaterialsBPLibrary_NoRegister();
PIXELIZATIONMATERIALS_API UEnum* Z_Construct_UEnum_PixelizationMaterials_EColorSearchType();
PIXELIZATIONMATERIALS_API UEnum* Z_Construct_UEnum_PixelizationMaterials_EColorSpace();
PIXELIZATIONMATERIALS_API UEnum* Z_Construct_UEnum_PixelizationMaterials_FPalleteFileType();
UPackage* Z_Construct_UPackage__Script_PixelizationMaterials();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum FPalleteFileType **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_FPalleteFileType;
static UEnum* FPalleteFileType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_FPalleteFileType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_FPalleteFileType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PixelizationMaterials_FPalleteFileType, (UObject*)Z_Construct_UPackage__Script_PixelizationMaterials(), TEXT("FPalleteFileType"));
	}
	return Z_Registration_Info_UEnum_FPalleteFileType.OuterSingleton;
}
template<> PIXELIZATIONMATERIALS_NON_ATTRIBUTED_API UEnum* StaticEnum<FPalleteFileType>()
{
	return FPalleteFileType_StaticEnum();
}
struct Z_Construct_UEnum_PixelizationMaterials_FPalleteFileType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ASEF.Name", "ASEF" },
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "GIMP.Name", "GIMP" },
		{ "HEX.Name", "HEX" },
		{ "JASC.Name", "JASC" },
		{ "ModuleRelativePath", "Public/PixelizationMaterialsBPLibrary.h" },
		{ "PaintNET.Name", "PaintNET" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "JASC", (int64)JASC },
		{ "GIMP", (int64)GIMP },
		{ "PaintNET", (int64)PaintNET },
		{ "ASEF", (int64)ASEF },
		{ "HEX", (int64)HEX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PixelizationMaterials_FPalleteFileType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PixelizationMaterials_FPalleteFileType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PixelizationMaterials,
	nullptr,
	"FPalleteFileType",
	"FPalleteFileType",
	Z_Construct_UEnum_PixelizationMaterials_FPalleteFileType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PixelizationMaterials_FPalleteFileType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PixelizationMaterials_FPalleteFileType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PixelizationMaterials_FPalleteFileType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PixelizationMaterials_FPalleteFileType()
{
	if (!Z_Registration_Info_UEnum_FPalleteFileType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FPalleteFileType.InnerSingleton, Z_Construct_UEnum_PixelizationMaterials_FPalleteFileType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_FPalleteFileType.InnerSingleton;
}
// ********** End Enum FPalleteFileType ************************************************************

// ********** Begin Enum EColorSpace ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EColorSpace;
static UEnum* EColorSpace_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EColorSpace.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EColorSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PixelizationMaterials_EColorSpace, (UObject*)Z_Construct_UPackage__Script_PixelizationMaterials(), TEXT("EColorSpace"));
	}
	return Z_Registration_Info_UEnum_EColorSpace.OuterSingleton;
}
template<> PIXELIZATIONMATERIALS_NON_ATTRIBUTED_API UEnum* StaticEnum<EColorSpace>()
{
	return EColorSpace_StaticEnum();
}
struct Z_Construct_UEnum_PixelizationMaterials_EColorSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CIELUV.Name", "CIELUV" },
		{ "HSV.Name", "HSV" },
		{ "ModuleRelativePath", "Public/PixelizationMaterialsBPLibrary.h" },
		{ "RGB.Name", "RGB" },
		{ "XYZ.Name", "XYZ" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "RGB", (int64)RGB },
		{ "HSV", (int64)HSV },
		{ "XYZ", (int64)XYZ },
		{ "CIELUV", (int64)CIELUV },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PixelizationMaterials_EColorSpace_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PixelizationMaterials_EColorSpace_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PixelizationMaterials,
	nullptr,
	"EColorSpace",
	"EColorSpace",
	Z_Construct_UEnum_PixelizationMaterials_EColorSpace_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PixelizationMaterials_EColorSpace_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PixelizationMaterials_EColorSpace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PixelizationMaterials_EColorSpace_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PixelizationMaterials_EColorSpace()
{
	if (!Z_Registration_Info_UEnum_EColorSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EColorSpace.InnerSingleton, Z_Construct_UEnum_PixelizationMaterials_EColorSpace_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EColorSpace.InnerSingleton;
}
// ********** End Enum EColorSpace *****************************************************************

// ********** Begin Enum EColorSearchType **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EColorSearchType;
static UEnum* EColorSearchType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EColorSearchType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EColorSearchType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PixelizationMaterials_EColorSearchType, (UObject*)Z_Construct_UPackage__Script_PixelizationMaterials(), TEXT("EColorSearchType"));
	}
	return Z_Registration_Info_UEnum_EColorSearchType.OuterSingleton;
}
template<> PIXELIZATIONMATERIALS_NON_ATTRIBUTED_API UEnum* StaticEnum<EColorSearchType>()
{
	return EColorSearchType_StaticEnum();
}
struct Z_Construct_UEnum_PixelizationMaterials_EColorSearchType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClosestLine.Name", "ClosestLine" },
		{ "ClosestOffset.Name", "ClosestOffset" },
		{ "ClosestX.Name", "ClosestX" },
		{ "ClosestY.Name", "ClosestY" },
		{ "ClosestZ.Name", "ClosestZ" },
		{ "ModuleRelativePath", "Public/PixelizationMaterialsBPLibrary.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ClosestOffset", (int64)ClosestOffset },
		{ "ClosestLine", (int64)ClosestLine },
		{ "ClosestX", (int64)ClosestX },
		{ "ClosestY", (int64)ClosestY },
		{ "ClosestZ", (int64)ClosestZ },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PixelizationMaterials_EColorSearchType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PixelizationMaterials_EColorSearchType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PixelizationMaterials,
	nullptr,
	"EColorSearchType",
	"EColorSearchType",
	Z_Construct_UEnum_PixelizationMaterials_EColorSearchType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PixelizationMaterials_EColorSearchType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PixelizationMaterials_EColorSearchType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PixelizationMaterials_EColorSearchType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PixelizationMaterials_EColorSearchType()
{
	if (!Z_Registration_Info_UEnum_EColorSearchType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EColorSearchType.InnerSingleton, Z_Construct_UEnum_PixelizationMaterials_EColorSearchType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EColorSearchType.InnerSingleton;
}
// ********** End Enum EColorSearchType ************************************************************

// ********** Begin Class UPixelizationMaterialsBPLibrary Function CIELUVTosRGB ********************
struct Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_CIELUVTosRGB_Statics
{
	struct PixelizationMaterialsBPLibrary_eventCIELUVTosRGB_Parms
	{
		FVector CIELUV;
		FColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math | Color" },
		{ "DisplayName", "CIELUV to RGB" },
		{ "ModuleRelativePath", "Public/PixelizationMaterialsBPLibrary.h" },
		{ "ReturnDisplayName", "RGB" },
	};
#endif // WITH_METADATA

// ********** Begin Function CIELUVTosRGB constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CIELUV;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CIELUVTosRGB constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CIELUVTosRGB Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_CIELUVTosRGB_Statics::NewProp_CIELUV = { "CIELUV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventCIELUVTosRGB_Parms, CIELUV), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_CIELUVTosRGB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventCIELUVTosRGB_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_CIELUVTosRGB_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_CIELUVTosRGB_Statics::NewProp_CIELUV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_CIELUVTosRGB_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_CIELUVTosRGB_Statics::PropPointers) < 2048);
// ********** End Function CIELUVTosRGB Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_CIELUVTosRGB_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPixelizationMaterialsBPLibrary, nullptr, "CIELUVTosRGB", 	Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_CIELUVTosRGB_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_CIELUVTosRGB_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_CIELUVTosRGB_Statics::PixelizationMaterialsBPLibrary_eventCIELUVTosRGB_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_CIELUVTosRGB_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_CIELUVTosRGB_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_CIELUVTosRGB_Statics::PixelizationMaterialsBPLibrary_eventCIELUVTosRGB_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_CIELUVTosRGB()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_CIELUVTosRGB_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPixelizationMaterialsBPLibrary::execCIELUVTosRGB)
{
	P_GET_STRUCT(FVector,Z_Param_CIELUV);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FColor*)Z_Param__Result=UPixelizationMaterialsBPLibrary::CIELUVTosRGB(Z_Param_CIELUV);
	P_NATIVE_END;
}
// ********** End Class UPixelizationMaterialsBPLibrary Function CIELUVTosRGB **********************

// ********** Begin Class UPixelizationMaterialsBPLibrary Function CIELUVToXYZcolor ****************
struct Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_CIELUVToXYZcolor_Statics
{
	struct PixelizationMaterialsBPLibrary_eventCIELUVToXYZcolor_Parms
	{
		FVector CIELUV;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math | Color" },
		{ "DisplayName", "CIELUV to XYZ color" },
		{ "ModuleRelativePath", "Public/PixelizationMaterialsBPLibrary.h" },
		{ "ReturnDisplayName", "XYZ color" },
	};
#endif // WITH_METADATA

// ********** Begin Function CIELUVToXYZcolor constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CIELUV;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CIELUVToXYZcolor constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CIELUVToXYZcolor Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_CIELUVToXYZcolor_Statics::NewProp_CIELUV = { "CIELUV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventCIELUVToXYZcolor_Parms, CIELUV), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_CIELUVToXYZcolor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventCIELUVToXYZcolor_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_CIELUVToXYZcolor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_CIELUVToXYZcolor_Statics::NewProp_CIELUV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_CIELUVToXYZcolor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_CIELUVToXYZcolor_Statics::PropPointers) < 2048);
// ********** End Function CIELUVToXYZcolor Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_CIELUVToXYZcolor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPixelizationMaterialsBPLibrary, nullptr, "CIELUVToXYZcolor", 	Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_CIELUVToXYZcolor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_CIELUVToXYZcolor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_CIELUVToXYZcolor_Statics::PixelizationMaterialsBPLibrary_eventCIELUVToXYZcolor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_CIELUVToXYZcolor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_CIELUVToXYZcolor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_CIELUVToXYZcolor_Statics::PixelizationMaterialsBPLibrary_eventCIELUVToXYZcolor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_CIELUVToXYZcolor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_CIELUVToXYZcolor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPixelizationMaterialsBPLibrary::execCIELUVToXYZcolor)
{
	P_GET_STRUCT(FVector,Z_Param_CIELUV);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UPixelizationMaterialsBPLibrary::CIELUVToXYZcolor(Z_Param_CIELUV);
	P_NATIVE_END;
}
// ********** End Class UPixelizationMaterialsBPLibrary Function CIELUVToXYZcolor ******************

// ********** Begin Class UPixelizationMaterialsBPLibrary Function ConvertColorForSearch ***********
struct Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorForSearch_Statics
{
	struct PixelizationMaterialsBPLibrary_eventConvertColorForSearch_Parms
	{
		FLinearColor color;
		TEnumAsByte<EColorSpace> colorSpace;
		TEnumAsByte<EColorSearchType> searchType;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math | Color" },
		{ "ModuleRelativePath", "Public/PixelizationMaterialsBPLibrary.h" },
		{ "ToolTip", "Convert linear color palette to needed color space" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConvertColorForSearch constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_color;
	static const UECodeGen_Private::FBytePropertyParams NewProp_colorSpace;
	static const UECodeGen_Private::FBytePropertyParams NewProp_searchType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConvertColorForSearch constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConvertColorForSearch Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorForSearch_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventConvertColorForSearch_Parms, color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorForSearch_Statics::NewProp_colorSpace = { "colorSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventConvertColorForSearch_Parms, colorSpace), Z_Construct_UEnum_PixelizationMaterials_EColorSpace, METADATA_PARAMS(0, nullptr) }; // 3258080276
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorForSearch_Statics::NewProp_searchType = { "searchType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventConvertColorForSearch_Parms, searchType), Z_Construct_UEnum_PixelizationMaterials_EColorSearchType, METADATA_PARAMS(0, nullptr) }; // 3674389715
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorForSearch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventConvertColorForSearch_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorForSearch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorForSearch_Statics::NewProp_color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorForSearch_Statics::NewProp_colorSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorForSearch_Statics::NewProp_searchType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorForSearch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorForSearch_Statics::PropPointers) < 2048);
// ********** End Function ConvertColorForSearch Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorForSearch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPixelizationMaterialsBPLibrary, nullptr, "ConvertColorForSearch", 	Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorForSearch_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorForSearch_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorForSearch_Statics::PixelizationMaterialsBPLibrary_eventConvertColorForSearch_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorForSearch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorForSearch_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorForSearch_Statics::PixelizationMaterialsBPLibrary_eventConvertColorForSearch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorForSearch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorForSearch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPixelizationMaterialsBPLibrary::execConvertColorForSearch)
{
	P_GET_STRUCT(FLinearColor,Z_Param_color);
	P_GET_PROPERTY(FByteProperty,Z_Param_colorSpace);
	P_GET_PROPERTY(FByteProperty,Z_Param_searchType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UPixelizationMaterialsBPLibrary::ConvertColorForSearch(Z_Param_color,EColorSpace(Z_Param_colorSpace),EColorSearchType(Z_Param_searchType));
	P_NATIVE_END;
}
// ********** End Class UPixelizationMaterialsBPLibrary Function ConvertColorForSearch *************

// ********** Begin Class UPixelizationMaterialsBPLibrary Function ConvertColorFromSearch **********
struct Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorFromSearch_Statics
{
	struct PixelizationMaterialsBPLibrary_eventConvertColorFromSearch_Parms
	{
		FVector color;
		TEnumAsByte<EColorSpace> colorSpace;
		TEnumAsByte<EColorSearchType> searchType;
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math | Color" },
		{ "ModuleRelativePath", "Public/PixelizationMaterialsBPLibrary.h" },
		{ "ToolTip", "Convert linear color palette to needed color space" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConvertColorFromSearch constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_color;
	static const UECodeGen_Private::FBytePropertyParams NewProp_colorSpace;
	static const UECodeGen_Private::FBytePropertyParams NewProp_searchType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConvertColorFromSearch constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConvertColorFromSearch Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorFromSearch_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventConvertColorFromSearch_Parms, color), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorFromSearch_Statics::NewProp_colorSpace = { "colorSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventConvertColorFromSearch_Parms, colorSpace), Z_Construct_UEnum_PixelizationMaterials_EColorSpace, METADATA_PARAMS(0, nullptr) }; // 3258080276
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorFromSearch_Statics::NewProp_searchType = { "searchType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventConvertColorFromSearch_Parms, searchType), Z_Construct_UEnum_PixelizationMaterials_EColorSearchType, METADATA_PARAMS(0, nullptr) }; // 3674389715
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorFromSearch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventConvertColorFromSearch_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorFromSearch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorFromSearch_Statics::NewProp_color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorFromSearch_Statics::NewProp_colorSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorFromSearch_Statics::NewProp_searchType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorFromSearch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorFromSearch_Statics::PropPointers) < 2048);
// ********** End Function ConvertColorFromSearch Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorFromSearch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPixelizationMaterialsBPLibrary, nullptr, "ConvertColorFromSearch", 	Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorFromSearch_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorFromSearch_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorFromSearch_Statics::PixelizationMaterialsBPLibrary_eventConvertColorFromSearch_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorFromSearch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorFromSearch_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorFromSearch_Statics::PixelizationMaterialsBPLibrary_eventConvertColorFromSearch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorFromSearch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorFromSearch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPixelizationMaterialsBPLibrary::execConvertColorFromSearch)
{
	P_GET_STRUCT(FVector,Z_Param_color);
	P_GET_PROPERTY(FByteProperty,Z_Param_colorSpace);
	P_GET_PROPERTY(FByteProperty,Z_Param_searchType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=UPixelizationMaterialsBPLibrary::ConvertColorFromSearch(Z_Param_color,EColorSpace(Z_Param_colorSpace),EColorSearchType(Z_Param_searchType));
	P_NATIVE_END;
}
// ********** End Class UPixelizationMaterialsBPLibrary Function ConvertColorFromSearch ************

// ********** Begin Class UPixelizationMaterialsBPLibrary Function ConvertHexToColor ***************
struct Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertHexToColor_Statics
{
	struct PixelizationMaterialsBPLibrary_eventConvertHexToColor_Parms
	{
		FString HexCode;
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math | Color" },
		{ "ModuleRelativePath", "Public/PixelizationMaterialsBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HexCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConvertHexToColor constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_HexCode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConvertHexToColor constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConvertHexToColor Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertHexToColor_Statics::NewProp_HexCode = { "HexCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventConvertHexToColor_Parms, HexCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HexCode_MetaData), NewProp_HexCode_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertHexToColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventConvertHexToColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertHexToColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertHexToColor_Statics::NewProp_HexCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertHexToColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertHexToColor_Statics::PropPointers) < 2048);
// ********** End Function ConvertHexToColor Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertHexToColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPixelizationMaterialsBPLibrary, nullptr, "ConvertHexToColor", 	Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertHexToColor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertHexToColor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertHexToColor_Statics::PixelizationMaterialsBPLibrary_eventConvertHexToColor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertHexToColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertHexToColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertHexToColor_Statics::PixelizationMaterialsBPLibrary_eventConvertHexToColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertHexToColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertHexToColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPixelizationMaterialsBPLibrary::execConvertHexToColor)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_HexCode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=UPixelizationMaterialsBPLibrary::ConvertHexToColor(Z_Param_HexCode);
	P_NATIVE_END;
}
// ********** End Class UPixelizationMaterialsBPLibrary Function ConvertHexToColor *****************

// ********** Begin Class UPixelizationMaterialsBPLibrary Function ConvertLinearColorToSpace *******
struct Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertLinearColorToSpace_Statics
{
	struct PixelizationMaterialsBPLibrary_eventConvertLinearColorToSpace_Parms
	{
		FLinearColor color;
		TEnumAsByte<EColorSpace> ColorSpace;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math | Color" },
		{ "DisplayName", "Linear color to space" },
		{ "ModuleRelativePath", "Public/PixelizationMaterialsBPLibrary.h" },
		{ "ToolTip", "Convert linear color to desired color space" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConvertLinearColorToSpace constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_color;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConvertLinearColorToSpace constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConvertLinearColorToSpace Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertLinearColorToSpace_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventConvertLinearColorToSpace_Parms, color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertLinearColorToSpace_Statics::NewProp_ColorSpace = { "ColorSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventConvertLinearColorToSpace_Parms, ColorSpace), Z_Construct_UEnum_PixelizationMaterials_EColorSpace, METADATA_PARAMS(0, nullptr) }; // 3258080276
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertLinearColorToSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventConvertLinearColorToSpace_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertLinearColorToSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertLinearColorToSpace_Statics::NewProp_color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertLinearColorToSpace_Statics::NewProp_ColorSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertLinearColorToSpace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertLinearColorToSpace_Statics::PropPointers) < 2048);
// ********** End Function ConvertLinearColorToSpace Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertLinearColorToSpace_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPixelizationMaterialsBPLibrary, nullptr, "ConvertLinearColorToSpace", 	Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertLinearColorToSpace_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertLinearColorToSpace_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertLinearColorToSpace_Statics::PixelizationMaterialsBPLibrary_eventConvertLinearColorToSpace_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertLinearColorToSpace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertLinearColorToSpace_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertLinearColorToSpace_Statics::PixelizationMaterialsBPLibrary_eventConvertLinearColorToSpace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertLinearColorToSpace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertLinearColorToSpace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPixelizationMaterialsBPLibrary::execConvertLinearColorToSpace)
{
	P_GET_STRUCT(FLinearColor,Z_Param_color);
	P_GET_PROPERTY(FByteProperty,Z_Param_ColorSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UPixelizationMaterialsBPLibrary::ConvertLinearColorToSpace(Z_Param_color,EColorSpace(Z_Param_ColorSpace));
	P_NATIVE_END;
}
// ********** End Class UPixelizationMaterialsBPLibrary Function ConvertLinearColorToSpace *********

// ********** Begin Class UPixelizationMaterialsBPLibrary Function ConvertPaletteForSearch *********
struct Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertPaletteForSearch_Statics
{
	struct PixelizationMaterialsBPLibrary_eventConvertPaletteForSearch_Parms
	{
		TArray<FLinearColor> Palette;
		TEnumAsByte<EColorSpace> ColorSpace;
		TEnumAsByte<EColorSearchType> SearchType;
		TArray<FVector> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math | Color | Palettes" },
		{ "ModuleRelativePath", "Public/PixelizationMaterialsBPLibrary.h" },
		{ "ToolTip", "Convert linear color palette to needed color space" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConvertPaletteForSearch constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Palette_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Palette;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorSpace;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SearchType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConvertPaletteForSearch constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConvertPaletteForSearch Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertPaletteForSearch_Statics::NewProp_Palette_Inner = { "Palette", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertPaletteForSearch_Statics::NewProp_Palette = { "Palette", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventConvertPaletteForSearch_Parms, Palette), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertPaletteForSearch_Statics::NewProp_ColorSpace = { "ColorSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventConvertPaletteForSearch_Parms, ColorSpace), Z_Construct_UEnum_PixelizationMaterials_EColorSpace, METADATA_PARAMS(0, nullptr) }; // 3258080276
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertPaletteForSearch_Statics::NewProp_SearchType = { "SearchType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventConvertPaletteForSearch_Parms, SearchType), Z_Construct_UEnum_PixelizationMaterials_EColorSearchType, METADATA_PARAMS(0, nullptr) }; // 3674389715
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertPaletteForSearch_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertPaletteForSearch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventConvertPaletteForSearch_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertPaletteForSearch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertPaletteForSearch_Statics::NewProp_Palette_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertPaletteForSearch_Statics::NewProp_Palette,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertPaletteForSearch_Statics::NewProp_ColorSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertPaletteForSearch_Statics::NewProp_SearchType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertPaletteForSearch_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertPaletteForSearch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertPaletteForSearch_Statics::PropPointers) < 2048);
// ********** End Function ConvertPaletteForSearch Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertPaletteForSearch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPixelizationMaterialsBPLibrary, nullptr, "ConvertPaletteForSearch", 	Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertPaletteForSearch_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertPaletteForSearch_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertPaletteForSearch_Statics::PixelizationMaterialsBPLibrary_eventConvertPaletteForSearch_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertPaletteForSearch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertPaletteForSearch_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertPaletteForSearch_Statics::PixelizationMaterialsBPLibrary_eventConvertPaletteForSearch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertPaletteForSearch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertPaletteForSearch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPixelizationMaterialsBPLibrary::execConvertPaletteForSearch)
{
	P_GET_TARRAY(FLinearColor,Z_Param_Palette);
	P_GET_PROPERTY(FByteProperty,Z_Param_ColorSpace);
	P_GET_PROPERTY(FByteProperty,Z_Param_SearchType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector>*)Z_Param__Result=UPixelizationMaterialsBPLibrary::ConvertPaletteForSearch(Z_Param_Palette,EColorSpace(Z_Param_ColorSpace),EColorSearchType(Z_Param_SearchType));
	P_NATIVE_END;
}
// ********** End Class UPixelizationMaterialsBPLibrary Function ConvertPaletteForSearch ***********

// ********** Begin Class UPixelizationMaterialsBPLibrary Function ConvertSpaceToLinearColor *******
struct Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertSpaceToLinearColor_Statics
{
	struct PixelizationMaterialsBPLibrary_eventConvertSpaceToLinearColor_Parms
	{
		FVector color;
		TEnumAsByte<EColorSpace> ColorSpace;
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math | Color" },
		{ "DisplayName", "Convert From space to linear color" },
		{ "ModuleRelativePath", "Public/PixelizationMaterialsBPLibrary.h" },
		{ "ToolTip", "Convert from desired color space to linear color" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConvertSpaceToLinearColor constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_color;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConvertSpaceToLinearColor constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConvertSpaceToLinearColor Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertSpaceToLinearColor_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventConvertSpaceToLinearColor_Parms, color), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertSpaceToLinearColor_Statics::NewProp_ColorSpace = { "ColorSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventConvertSpaceToLinearColor_Parms, ColorSpace), Z_Construct_UEnum_PixelizationMaterials_EColorSpace, METADATA_PARAMS(0, nullptr) }; // 3258080276
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertSpaceToLinearColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventConvertSpaceToLinearColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertSpaceToLinearColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertSpaceToLinearColor_Statics::NewProp_color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertSpaceToLinearColor_Statics::NewProp_ColorSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertSpaceToLinearColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertSpaceToLinearColor_Statics::PropPointers) < 2048);
// ********** End Function ConvertSpaceToLinearColor Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertSpaceToLinearColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPixelizationMaterialsBPLibrary, nullptr, "ConvertSpaceToLinearColor", 	Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertSpaceToLinearColor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertSpaceToLinearColor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertSpaceToLinearColor_Statics::PixelizationMaterialsBPLibrary_eventConvertSpaceToLinearColor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertSpaceToLinearColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertSpaceToLinearColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertSpaceToLinearColor_Statics::PixelizationMaterialsBPLibrary_eventConvertSpaceToLinearColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertSpaceToLinearColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertSpaceToLinearColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPixelizationMaterialsBPLibrary::execConvertSpaceToLinearColor)
{
	P_GET_STRUCT(FVector,Z_Param_color);
	P_GET_PROPERTY(FByteProperty,Z_Param_ColorSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=UPixelizationMaterialsBPLibrary::ConvertSpaceToLinearColor(Z_Param_color,EColorSpace(Z_Param_ColorSpace));
	P_NATIVE_END;
}
// ********** End Class UPixelizationMaterialsBPLibrary Function ConvertSpaceToLinearColor *********

// ********** Begin Class UPixelizationMaterialsBPLibrary Function findClosestAndOffset ************
struct Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestAndOffset_Statics
{
	struct PixelizationMaterialsBPLibrary_eventfindClosestAndOffset_Parms
	{
		TArray<FVector> palette;
		FVector targetColor;
		FVector colorA;
		FVector colorB;
		float blend;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math | Color | Palettes" },
		{ "DisplayName", "Color selection: Find closest and offset" },
		{ "ModuleRelativePath", "Public/PixelizationMaterialsBPLibrary.h" },
		{ "ToolTip", "colorA is closest to target Color, colorB is offset color" },
	};
#endif // WITH_METADATA

// ********** Begin Function findClosestAndOffset constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_palette_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_palette;
	static const UECodeGen_Private::FStructPropertyParams NewProp_targetColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_colorA;
	static const UECodeGen_Private::FStructPropertyParams NewProp_colorB;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_blend;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function findClosestAndOffset constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function findClosestAndOffset Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestAndOffset_Statics::NewProp_palette_Inner = { "palette", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestAndOffset_Statics::NewProp_palette = { "palette", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventfindClosestAndOffset_Parms, palette), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestAndOffset_Statics::NewProp_targetColor = { "targetColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventfindClosestAndOffset_Parms, targetColor), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestAndOffset_Statics::NewProp_colorA = { "colorA", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventfindClosestAndOffset_Parms, colorA), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestAndOffset_Statics::NewProp_colorB = { "colorB", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventfindClosestAndOffset_Parms, colorB), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestAndOffset_Statics::NewProp_blend = { "blend", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventfindClosestAndOffset_Parms, blend), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestAndOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestAndOffset_Statics::NewProp_palette_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestAndOffset_Statics::NewProp_palette,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestAndOffset_Statics::NewProp_targetColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestAndOffset_Statics::NewProp_colorA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestAndOffset_Statics::NewProp_colorB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestAndOffset_Statics::NewProp_blend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestAndOffset_Statics::PropPointers) < 2048);
// ********** End Function findClosestAndOffset Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestAndOffset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPixelizationMaterialsBPLibrary, nullptr, "findClosestAndOffset", 	Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestAndOffset_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestAndOffset_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestAndOffset_Statics::PixelizationMaterialsBPLibrary_eventfindClosestAndOffset_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestAndOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestAndOffset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestAndOffset_Statics::PixelizationMaterialsBPLibrary_eventfindClosestAndOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestAndOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestAndOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPixelizationMaterialsBPLibrary::execfindClosestAndOffset)
{
	P_GET_TARRAY(FVector,Z_Param_palette);
	P_GET_STRUCT(FVector,Z_Param_targetColor);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_colorA);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_colorB);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_blend);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPixelizationMaterialsBPLibrary::findClosestAndOffset(Z_Param_palette,Z_Param_targetColor,Z_Param_Out_colorA,Z_Param_Out_colorB,Z_Param_Out_blend);
	P_NATIVE_END;
}
// ********** End Class UPixelizationMaterialsBPLibrary Function findClosestAndOffset **************

// ********** Begin Class UPixelizationMaterialsBPLibrary Function findClosestLine *****************
struct Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestLine_Statics
{
	struct PixelizationMaterialsBPLibrary_eventfindClosestLine_Parms
	{
		TArray<FVector> palette;
		FVector targetColor;
		FVector colorA;
		FVector colorB;
		float blend;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math | Color | Palettes" },
		{ "DisplayName", "Color selection: Find closest line" },
		{ "ModuleRelativePath", "Public/PixelizationMaterialsBPLibrary.h" },
		{ "ToolTip", "line between colorA and colorB is closest to target color" },
	};
#endif // WITH_METADATA

// ********** Begin Function findClosestLine constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_palette_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_palette;
	static const UECodeGen_Private::FStructPropertyParams NewProp_targetColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_colorA;
	static const UECodeGen_Private::FStructPropertyParams NewProp_colorB;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_blend;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function findClosestLine constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function findClosestLine Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestLine_Statics::NewProp_palette_Inner = { "palette", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestLine_Statics::NewProp_palette = { "palette", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventfindClosestLine_Parms, palette), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestLine_Statics::NewProp_targetColor = { "targetColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventfindClosestLine_Parms, targetColor), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestLine_Statics::NewProp_colorA = { "colorA", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventfindClosestLine_Parms, colorA), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestLine_Statics::NewProp_colorB = { "colorB", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventfindClosestLine_Parms, colorB), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestLine_Statics::NewProp_blend = { "blend", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventfindClosestLine_Parms, blend), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestLine_Statics::NewProp_palette_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestLine_Statics::NewProp_palette,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestLine_Statics::NewProp_targetColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestLine_Statics::NewProp_colorA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestLine_Statics::NewProp_colorB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestLine_Statics::NewProp_blend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestLine_Statics::PropPointers) < 2048);
// ********** End Function findClosestLine Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestLine_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPixelizationMaterialsBPLibrary, nullptr, "findClosestLine", 	Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestLine_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestLine_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestLine_Statics::PixelizationMaterialsBPLibrary_eventfindClosestLine_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestLine_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestLine_Statics::PixelizationMaterialsBPLibrary_eventfindClosestLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPixelizationMaterialsBPLibrary::execfindClosestLine)
{
	P_GET_TARRAY(FVector,Z_Param_palette);
	P_GET_STRUCT(FVector,Z_Param_targetColor);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_colorA);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_colorB);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_blend);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPixelizationMaterialsBPLibrary::findClosestLine(Z_Param_palette,Z_Param_targetColor,Z_Param_Out_colorA,Z_Param_Out_colorB,Z_Param_Out_blend);
	P_NATIVE_END;
}
// ********** End Class UPixelizationMaterialsBPLibrary Function findClosestLine *******************

// ********** Begin Class UPixelizationMaterialsBPLibrary Function findClosestOnAxis ***************
struct Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestOnAxis_Statics
{
	struct PixelizationMaterialsBPLibrary_eventfindClosestOnAxis_Parms
	{
		TArray<FVector> palette;
		FVector targetColor;
		TEnumAsByte<EAxis::Type> Axis;
		TEnumAsByte<EColorSpace> ColorSpace;
		FVector colorA;
		FVector colorB;
		float blend;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math | Color | Palettes" },
		{ "DisplayName", "Color selection: Closest on axis" },
		{ "ModuleRelativePath", "Public/PixelizationMaterialsBPLibrary.h" },
		{ "ToolTip", "Selects the nearest A and B around target color on selected color axis" },
	};
#endif // WITH_METADATA

// ********** Begin Function findClosestOnAxis constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_palette_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_palette;
	static const UECodeGen_Private::FStructPropertyParams NewProp_targetColor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Axis;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_colorA;
	static const UECodeGen_Private::FStructPropertyParams NewProp_colorB;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_blend;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function findClosestOnAxis constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function findClosestOnAxis Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestOnAxis_Statics::NewProp_palette_Inner = { "palette", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestOnAxis_Statics::NewProp_palette = { "palette", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventfindClosestOnAxis_Parms, palette), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestOnAxis_Statics::NewProp_targetColor = { "targetColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventfindClosestOnAxis_Parms, targetColor), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestOnAxis_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventfindClosestOnAxis_Parms, Axis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(0, nullptr) }; // 2447774434
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestOnAxis_Statics::NewProp_ColorSpace = { "ColorSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventfindClosestOnAxis_Parms, ColorSpace), Z_Construct_UEnum_PixelizationMaterials_EColorSpace, METADATA_PARAMS(0, nullptr) }; // 3258080276
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestOnAxis_Statics::NewProp_colorA = { "colorA", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventfindClosestOnAxis_Parms, colorA), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestOnAxis_Statics::NewProp_colorB = { "colorB", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventfindClosestOnAxis_Parms, colorB), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestOnAxis_Statics::NewProp_blend = { "blend", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventfindClosestOnAxis_Parms, blend), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestOnAxis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestOnAxis_Statics::NewProp_palette_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestOnAxis_Statics::NewProp_palette,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestOnAxis_Statics::NewProp_targetColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestOnAxis_Statics::NewProp_Axis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestOnAxis_Statics::NewProp_ColorSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestOnAxis_Statics::NewProp_colorA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestOnAxis_Statics::NewProp_colorB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestOnAxis_Statics::NewProp_blend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestOnAxis_Statics::PropPointers) < 2048);
// ********** End Function findClosestOnAxis Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestOnAxis_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPixelizationMaterialsBPLibrary, nullptr, "findClosestOnAxis", 	Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestOnAxis_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestOnAxis_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestOnAxis_Statics::PixelizationMaterialsBPLibrary_eventfindClosestOnAxis_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestOnAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestOnAxis_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestOnAxis_Statics::PixelizationMaterialsBPLibrary_eventfindClosestOnAxis_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestOnAxis()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestOnAxis_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPixelizationMaterialsBPLibrary::execfindClosestOnAxis)
{
	P_GET_TARRAY(FVector,Z_Param_palette);
	P_GET_STRUCT(FVector,Z_Param_targetColor);
	P_GET_PROPERTY(FByteProperty,Z_Param_Axis);
	P_GET_PROPERTY(FByteProperty,Z_Param_ColorSpace);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_colorA);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_colorB);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_blend);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPixelizationMaterialsBPLibrary::findClosestOnAxis(Z_Param_palette,Z_Param_targetColor,EAxis::Type(Z_Param_Axis),EColorSpace(Z_Param_ColorSpace),Z_Param_Out_colorA,Z_Param_Out_colorB,Z_Param_Out_blend);
	P_NATIVE_END;
}
// ********** End Class UPixelizationMaterialsBPLibrary Function findClosestOnAxis *****************

// ********** Begin Class UPixelizationMaterialsBPLibrary Function findClosestSelectSearchType *****
struct Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestSelectSearchType_Statics
{
	struct PixelizationMaterialsBPLibrary_eventfindClosestSelectSearchType_Parms
	{
		TArray<FVector> palette;
		FVector targetColor;
		TEnumAsByte<EColorSearchType> searchType;
		TEnumAsByte<EColorSpace> ColorSpace;
		FVector colorA;
		FVector colorB;
		float blend;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math | Color | Palettes" },
		{ "ModuleRelativePath", "Public/PixelizationMaterialsBPLibrary.h" },
		{ "ToolTip", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function findClosestSelectSearchType constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_palette_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_palette;
	static const UECodeGen_Private::FStructPropertyParams NewProp_targetColor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_searchType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_colorA;
	static const UECodeGen_Private::FStructPropertyParams NewProp_colorB;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_blend;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function findClosestSelectSearchType constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function findClosestSelectSearchType Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestSelectSearchType_Statics::NewProp_palette_Inner = { "palette", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestSelectSearchType_Statics::NewProp_palette = { "palette", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventfindClosestSelectSearchType_Parms, palette), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestSelectSearchType_Statics::NewProp_targetColor = { "targetColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventfindClosestSelectSearchType_Parms, targetColor), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestSelectSearchType_Statics::NewProp_searchType = { "searchType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventfindClosestSelectSearchType_Parms, searchType), Z_Construct_UEnum_PixelizationMaterials_EColorSearchType, METADATA_PARAMS(0, nullptr) }; // 3674389715
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestSelectSearchType_Statics::NewProp_ColorSpace = { "ColorSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventfindClosestSelectSearchType_Parms, ColorSpace), Z_Construct_UEnum_PixelizationMaterials_EColorSpace, METADATA_PARAMS(0, nullptr) }; // 3258080276
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestSelectSearchType_Statics::NewProp_colorA = { "colorA", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventfindClosestSelectSearchType_Parms, colorA), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestSelectSearchType_Statics::NewProp_colorB = { "colorB", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventfindClosestSelectSearchType_Parms, colorB), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestSelectSearchType_Statics::NewProp_blend = { "blend", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventfindClosestSelectSearchType_Parms, blend), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestSelectSearchType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestSelectSearchType_Statics::NewProp_palette_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestSelectSearchType_Statics::NewProp_palette,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestSelectSearchType_Statics::NewProp_targetColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestSelectSearchType_Statics::NewProp_searchType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestSelectSearchType_Statics::NewProp_ColorSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestSelectSearchType_Statics::NewProp_colorA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestSelectSearchType_Statics::NewProp_colorB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestSelectSearchType_Statics::NewProp_blend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestSelectSearchType_Statics::PropPointers) < 2048);
// ********** End Function findClosestSelectSearchType Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestSelectSearchType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPixelizationMaterialsBPLibrary, nullptr, "findClosestSelectSearchType", 	Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestSelectSearchType_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestSelectSearchType_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestSelectSearchType_Statics::PixelizationMaterialsBPLibrary_eventfindClosestSelectSearchType_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestSelectSearchType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestSelectSearchType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestSelectSearchType_Statics::PixelizationMaterialsBPLibrary_eventfindClosestSelectSearchType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestSelectSearchType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestSelectSearchType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPixelizationMaterialsBPLibrary::execfindClosestSelectSearchType)
{
	P_GET_TARRAY(FVector,Z_Param_palette);
	P_GET_STRUCT(FVector,Z_Param_targetColor);
	P_GET_PROPERTY(FByteProperty,Z_Param_searchType);
	P_GET_PROPERTY(FByteProperty,Z_Param_ColorSpace);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_colorA);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_colorB);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_blend);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPixelizationMaterialsBPLibrary::findClosestSelectSearchType(Z_Param_palette,Z_Param_targetColor,EColorSearchType(Z_Param_searchType),EColorSpace(Z_Param_ColorSpace),Z_Param_Out_colorA,Z_Param_Out_colorB,Z_Param_Out_blend);
	P_NATIVE_END;
}
// ********** End Class UPixelizationMaterialsBPLibrary Function findClosestSelectSearchType *******

// ********** Begin Class UPixelizationMaterialsBPLibrary Function HSVposition *********************
struct Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_HSVposition_Statics
{
	struct PixelizationMaterialsBPLibrary_eventHSVposition_Parms
	{
		FLinearColor HSV;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math | Color" },
		{ "DisplayName", "HSV to position" },
		{ "ModuleRelativePath", "Public/PixelizationMaterialsBPLibrary.h" },
		{ "ToolTip", "converts HSV color to position in imaginary 3D cylinder" },
	};
#endif // WITH_METADATA

// ********** Begin Function HSVposition constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_HSV;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HSVposition constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HSVposition Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_HSVposition_Statics::NewProp_HSV = { "HSV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventHSVposition_Parms, HSV), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_HSVposition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventHSVposition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_HSVposition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_HSVposition_Statics::NewProp_HSV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_HSVposition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_HSVposition_Statics::PropPointers) < 2048);
// ********** End Function HSVposition Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_HSVposition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPixelizationMaterialsBPLibrary, nullptr, "HSVposition", 	Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_HSVposition_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_HSVposition_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_HSVposition_Statics::PixelizationMaterialsBPLibrary_eventHSVposition_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_HSVposition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_HSVposition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_HSVposition_Statics::PixelizationMaterialsBPLibrary_eventHSVposition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_HSVposition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_HSVposition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPixelizationMaterialsBPLibrary::execHSVposition)
{
	P_GET_STRUCT(FLinearColor,Z_Param_HSV);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UPixelizationMaterialsBPLibrary::HSVposition(Z_Param_HSV);
	P_NATIVE_END;
}
// ********** End Class UPixelizationMaterialsBPLibrary Function HSVposition ***********************

// ********** Begin Class UPixelizationMaterialsBPLibrary Function positionHSV *********************
struct Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_positionHSV_Statics
{
	struct PixelizationMaterialsBPLibrary_eventpositionHSV_Parms
	{
		FVector HSV;
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math | Color" },
		{ "DisplayName", "position to HSV" },
		{ "ModuleRelativePath", "Public/PixelizationMaterialsBPLibrary.h" },
		{ "ToolTip", "converts position in imaginary 3D cylinder to HSV color" },
	};
#endif // WITH_METADATA

// ********** Begin Function positionHSV constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_HSV;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function positionHSV constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function positionHSV Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_positionHSV_Statics::NewProp_HSV = { "HSV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventpositionHSV_Parms, HSV), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_positionHSV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventpositionHSV_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_positionHSV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_positionHSV_Statics::NewProp_HSV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_positionHSV_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_positionHSV_Statics::PropPointers) < 2048);
// ********** End Function positionHSV Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_positionHSV_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPixelizationMaterialsBPLibrary, nullptr, "positionHSV", 	Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_positionHSV_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_positionHSV_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_positionHSV_Statics::PixelizationMaterialsBPLibrary_eventpositionHSV_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_positionHSV_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_positionHSV_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_positionHSV_Statics::PixelizationMaterialsBPLibrary_eventpositionHSV_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_positionHSV()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_positionHSV_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPixelizationMaterialsBPLibrary::execpositionHSV)
{
	P_GET_STRUCT(FVector,Z_Param_HSV);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=UPixelizationMaterialsBPLibrary::positionHSV(Z_Param_HSV);
	P_NATIVE_END;
}
// ********** End Class UPixelizationMaterialsBPLibrary Function positionHSV ***********************

// ********** Begin Class UPixelizationMaterialsBPLibrary Function ReadPalleteFromFile *************
struct Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ReadPalleteFromFile_Statics
{
	struct PixelizationMaterialsBPLibrary_eventReadPalleteFromFile_Parms
	{
		TArray<FLinearColor> Pallete;
		FString PalleteName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math | Color" },
		{ "Comment", "//UFUNCTION(BlueprintCallable, Category = \"File IO\")\n//static bool LoadStringFromFile(FString& Result, FString FilePath = \"File Path\") {\n//\x09return FFileHelper::LoadFileToString(Result, *FilePath);\n//}\n" },
		{ "ModuleRelativePath", "Public/PixelizationMaterialsBPLibrary.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"File IO\")\nstatic bool LoadStringFromFile(FString& Result, FString FilePath = \"File Path\") {\n       return FFileHelper::LoadFileToString(Result, *FilePath);\n}" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReadPalleteFromFile constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pallete_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Pallete;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PalleteName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReadPalleteFromFile constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReadPalleteFromFile Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ReadPalleteFromFile_Statics::NewProp_Pallete_Inner = { "Pallete", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ReadPalleteFromFile_Statics::NewProp_Pallete = { "Pallete", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventReadPalleteFromFile_Parms, Pallete), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ReadPalleteFromFile_Statics::NewProp_PalleteName = { "PalleteName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventReadPalleteFromFile_Parms, PalleteName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ReadPalleteFromFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PixelizationMaterialsBPLibrary_eventReadPalleteFromFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ReadPalleteFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PixelizationMaterialsBPLibrary_eventReadPalleteFromFile_Parms), &Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ReadPalleteFromFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ReadPalleteFromFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ReadPalleteFromFile_Statics::NewProp_Pallete_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ReadPalleteFromFile_Statics::NewProp_Pallete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ReadPalleteFromFile_Statics::NewProp_PalleteName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ReadPalleteFromFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ReadPalleteFromFile_Statics::PropPointers) < 2048);
// ********** End Function ReadPalleteFromFile Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ReadPalleteFromFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPixelizationMaterialsBPLibrary, nullptr, "ReadPalleteFromFile", 	Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ReadPalleteFromFile_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ReadPalleteFromFile_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ReadPalleteFromFile_Statics::PixelizationMaterialsBPLibrary_eventReadPalleteFromFile_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ReadPalleteFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ReadPalleteFromFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ReadPalleteFromFile_Statics::PixelizationMaterialsBPLibrary_eventReadPalleteFromFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ReadPalleteFromFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ReadPalleteFromFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPixelizationMaterialsBPLibrary::execReadPalleteFromFile)
{
	P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_Pallete);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_PalleteName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UPixelizationMaterialsBPLibrary::ReadPalleteFromFile(Z_Param_Out_Pallete,Z_Param_Out_PalleteName);
	P_NATIVE_END;
}
// ********** End Class UPixelizationMaterialsBPLibrary Function ReadPalleteFromFile ***************

// ********** Begin Class UPixelizationMaterialsBPLibrary Function sRGBToCIELUV ********************
struct Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_sRGBToCIELUV_Statics
{
	struct PixelizationMaterialsBPLibrary_eventsRGBToCIELUV_Parms
	{
		FColor color;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math | Color" },
		{ "DisplayName", "RGB to CIELUV" },
		{ "ModuleRelativePath", "Public/PixelizationMaterialsBPLibrary.h" },
		{ "ReturnDisplayName", "CIELUV" },
	};
#endif // WITH_METADATA

// ********** Begin Function sRGBToCIELUV constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function sRGBToCIELUV constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function sRGBToCIELUV Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_sRGBToCIELUV_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventsRGBToCIELUV_Parms, color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_sRGBToCIELUV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventsRGBToCIELUV_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_sRGBToCIELUV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_sRGBToCIELUV_Statics::NewProp_color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_sRGBToCIELUV_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_sRGBToCIELUV_Statics::PropPointers) < 2048);
// ********** End Function sRGBToCIELUV Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_sRGBToCIELUV_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPixelizationMaterialsBPLibrary, nullptr, "sRGBToCIELUV", 	Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_sRGBToCIELUV_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_sRGBToCIELUV_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_sRGBToCIELUV_Statics::PixelizationMaterialsBPLibrary_eventsRGBToCIELUV_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_sRGBToCIELUV_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_sRGBToCIELUV_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_sRGBToCIELUV_Statics::PixelizationMaterialsBPLibrary_eventsRGBToCIELUV_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_sRGBToCIELUV()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_sRGBToCIELUV_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPixelizationMaterialsBPLibrary::execsRGBToCIELUV)
{
	P_GET_STRUCT(FColor,Z_Param_color);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UPixelizationMaterialsBPLibrary::sRGBToCIELUV(Z_Param_color);
	P_NATIVE_END;
}
// ********** End Class UPixelizationMaterialsBPLibrary Function sRGBToCIELUV **********************

// ********** Begin Class UPixelizationMaterialsBPLibrary Function sRGBToXYZcolor ******************
struct Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_sRGBToXYZcolor_Statics
{
	struct PixelizationMaterialsBPLibrary_eventsRGBToXYZcolor_Parms
	{
		FColor color;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math | Color" },
		{ "DisplayName", "RGB to XYZ color" },
		{ "ModuleRelativePath", "Public/PixelizationMaterialsBPLibrary.h" },
		{ "ReturnDisplayName", "XYZ color" },
	};
#endif // WITH_METADATA

// ********** Begin Function sRGBToXYZcolor constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function sRGBToXYZcolor constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function sRGBToXYZcolor Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_sRGBToXYZcolor_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventsRGBToXYZcolor_Parms, color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_sRGBToXYZcolor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventsRGBToXYZcolor_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_sRGBToXYZcolor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_sRGBToXYZcolor_Statics::NewProp_color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_sRGBToXYZcolor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_sRGBToXYZcolor_Statics::PropPointers) < 2048);
// ********** End Function sRGBToXYZcolor Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_sRGBToXYZcolor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPixelizationMaterialsBPLibrary, nullptr, "sRGBToXYZcolor", 	Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_sRGBToXYZcolor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_sRGBToXYZcolor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_sRGBToXYZcolor_Statics::PixelizationMaterialsBPLibrary_eventsRGBToXYZcolor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_sRGBToXYZcolor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_sRGBToXYZcolor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_sRGBToXYZcolor_Statics::PixelizationMaterialsBPLibrary_eventsRGBToXYZcolor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_sRGBToXYZcolor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_sRGBToXYZcolor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPixelizationMaterialsBPLibrary::execsRGBToXYZcolor)
{
	P_GET_STRUCT(FColor,Z_Param_color);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UPixelizationMaterialsBPLibrary::sRGBToXYZcolor(Z_Param_color);
	P_NATIVE_END;
}
// ********** End Class UPixelizationMaterialsBPLibrary Function sRGBToXYZcolor ********************

// ********** Begin Class UPixelizationMaterialsBPLibrary Function XYZcolorToCIELUV ****************
struct Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_XYZcolorToCIELUV_Statics
{
	struct PixelizationMaterialsBPLibrary_eventXYZcolorToCIELUV_Parms
	{
		FVector XYZcolor;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math | Color" },
		{ "DisplayName", "XYZ color to CIELUV" },
		{ "ModuleRelativePath", "Public/PixelizationMaterialsBPLibrary.h" },
		{ "ReturnDisplayName", "CIELUV" },
	};
#endif // WITH_METADATA

// ********** Begin Function XYZcolorToCIELUV constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_XYZcolor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function XYZcolorToCIELUV constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function XYZcolorToCIELUV Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_XYZcolorToCIELUV_Statics::NewProp_XYZcolor = { "XYZcolor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventXYZcolorToCIELUV_Parms, XYZcolor), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_XYZcolorToCIELUV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventXYZcolorToCIELUV_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_XYZcolorToCIELUV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_XYZcolorToCIELUV_Statics::NewProp_XYZcolor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_XYZcolorToCIELUV_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_XYZcolorToCIELUV_Statics::PropPointers) < 2048);
// ********** End Function XYZcolorToCIELUV Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_XYZcolorToCIELUV_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPixelizationMaterialsBPLibrary, nullptr, "XYZcolorToCIELUV", 	Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_XYZcolorToCIELUV_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_XYZcolorToCIELUV_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_XYZcolorToCIELUV_Statics::PixelizationMaterialsBPLibrary_eventXYZcolorToCIELUV_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_XYZcolorToCIELUV_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_XYZcolorToCIELUV_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_XYZcolorToCIELUV_Statics::PixelizationMaterialsBPLibrary_eventXYZcolorToCIELUV_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_XYZcolorToCIELUV()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_XYZcolorToCIELUV_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPixelizationMaterialsBPLibrary::execXYZcolorToCIELUV)
{
	P_GET_STRUCT(FVector,Z_Param_XYZcolor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UPixelizationMaterialsBPLibrary::XYZcolorToCIELUV(Z_Param_XYZcolor);
	P_NATIVE_END;
}
// ********** End Class UPixelizationMaterialsBPLibrary Function XYZcolorToCIELUV ******************

// ********** Begin Class UPixelizationMaterialsBPLibrary Function XYZcolorTosRGB ******************
struct Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_XYZcolorTosRGB_Statics
{
	struct PixelizationMaterialsBPLibrary_eventXYZcolorTosRGB_Parms
	{
		FVector XYZcolor;
		FColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math | Color" },
		{ "DisplayName", "XYZ color to RGB" },
		{ "ModuleRelativePath", "Public/PixelizationMaterialsBPLibrary.h" },
		{ "ReturnDisplayName", "RGB" },
	};
#endif // WITH_METADATA

// ********** Begin Function XYZcolorTosRGB constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_XYZcolor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function XYZcolorTosRGB constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function XYZcolorTosRGB Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_XYZcolorTosRGB_Statics::NewProp_XYZcolor = { "XYZcolor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventXYZcolorTosRGB_Parms, XYZcolor), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_XYZcolorTosRGB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelizationMaterialsBPLibrary_eventXYZcolorTosRGB_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_XYZcolorTosRGB_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_XYZcolorTosRGB_Statics::NewProp_XYZcolor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_XYZcolorTosRGB_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_XYZcolorTosRGB_Statics::PropPointers) < 2048);
// ********** End Function XYZcolorTosRGB Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_XYZcolorTosRGB_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPixelizationMaterialsBPLibrary, nullptr, "XYZcolorTosRGB", 	Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_XYZcolorTosRGB_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_XYZcolorTosRGB_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_XYZcolorTosRGB_Statics::PixelizationMaterialsBPLibrary_eventXYZcolorTosRGB_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_XYZcolorTosRGB_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_XYZcolorTosRGB_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_XYZcolorTosRGB_Statics::PixelizationMaterialsBPLibrary_eventXYZcolorTosRGB_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_XYZcolorTosRGB()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_XYZcolorTosRGB_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPixelizationMaterialsBPLibrary::execXYZcolorTosRGB)
{
	P_GET_STRUCT(FVector,Z_Param_XYZcolor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FColor*)Z_Param__Result=UPixelizationMaterialsBPLibrary::XYZcolorTosRGB(Z_Param_XYZcolor);
	P_NATIVE_END;
}
// ********** End Class UPixelizationMaterialsBPLibrary Function XYZcolorTosRGB ********************

// ********** Begin Class UPixelizationMaterialsBPLibrary ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPixelizationMaterialsBPLibrary;
UClass* UPixelizationMaterialsBPLibrary::GetPrivateStaticClass()
{
	using TClass = UPixelizationMaterialsBPLibrary;
	if (!Z_Registration_Info_UClass_UPixelizationMaterialsBPLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PixelizationMaterialsBPLibrary"),
			Z_Registration_Info_UClass_UPixelizationMaterialsBPLibrary.InnerSingleton,
			StaticRegisterNativesUPixelizationMaterialsBPLibrary,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UPixelizationMaterialsBPLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UPixelizationMaterialsBPLibrary_NoRegister()
{
	return UPixelizationMaterialsBPLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPixelizationMaterialsBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PixelizationMaterialsBPLibrary.h" },
		{ "ModuleRelativePath", "Public/PixelizationMaterialsBPLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPixelizationMaterialsBPLibrary constinit property declarations **********
// ********** End Class UPixelizationMaterialsBPLibrary constinit property declarations ************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CIELUVTosRGB"), .Pointer = &UPixelizationMaterialsBPLibrary::execCIELUVTosRGB },
		{ .NameUTF8 = UTF8TEXT("CIELUVToXYZcolor"), .Pointer = &UPixelizationMaterialsBPLibrary::execCIELUVToXYZcolor },
		{ .NameUTF8 = UTF8TEXT("ConvertColorForSearch"), .Pointer = &UPixelizationMaterialsBPLibrary::execConvertColorForSearch },
		{ .NameUTF8 = UTF8TEXT("ConvertColorFromSearch"), .Pointer = &UPixelizationMaterialsBPLibrary::execConvertColorFromSearch },
		{ .NameUTF8 = UTF8TEXT("ConvertHexToColor"), .Pointer = &UPixelizationMaterialsBPLibrary::execConvertHexToColor },
		{ .NameUTF8 = UTF8TEXT("ConvertLinearColorToSpace"), .Pointer = &UPixelizationMaterialsBPLibrary::execConvertLinearColorToSpace },
		{ .NameUTF8 = UTF8TEXT("ConvertPaletteForSearch"), .Pointer = &UPixelizationMaterialsBPLibrary::execConvertPaletteForSearch },
		{ .NameUTF8 = UTF8TEXT("ConvertSpaceToLinearColor"), .Pointer = &UPixelizationMaterialsBPLibrary::execConvertSpaceToLinearColor },
		{ .NameUTF8 = UTF8TEXT("findClosestAndOffset"), .Pointer = &UPixelizationMaterialsBPLibrary::execfindClosestAndOffset },
		{ .NameUTF8 = UTF8TEXT("findClosestLine"), .Pointer = &UPixelizationMaterialsBPLibrary::execfindClosestLine },
		{ .NameUTF8 = UTF8TEXT("findClosestOnAxis"), .Pointer = &UPixelizationMaterialsBPLibrary::execfindClosestOnAxis },
		{ .NameUTF8 = UTF8TEXT("findClosestSelectSearchType"), .Pointer = &UPixelizationMaterialsBPLibrary::execfindClosestSelectSearchType },
		{ .NameUTF8 = UTF8TEXT("HSVposition"), .Pointer = &UPixelizationMaterialsBPLibrary::execHSVposition },
		{ .NameUTF8 = UTF8TEXT("positionHSV"), .Pointer = &UPixelizationMaterialsBPLibrary::execpositionHSV },
		{ .NameUTF8 = UTF8TEXT("ReadPalleteFromFile"), .Pointer = &UPixelizationMaterialsBPLibrary::execReadPalleteFromFile },
		{ .NameUTF8 = UTF8TEXT("sRGBToCIELUV"), .Pointer = &UPixelizationMaterialsBPLibrary::execsRGBToCIELUV },
		{ .NameUTF8 = UTF8TEXT("sRGBToXYZcolor"), .Pointer = &UPixelizationMaterialsBPLibrary::execsRGBToXYZcolor },
		{ .NameUTF8 = UTF8TEXT("XYZcolorToCIELUV"), .Pointer = &UPixelizationMaterialsBPLibrary::execXYZcolorToCIELUV },
		{ .NameUTF8 = UTF8TEXT("XYZcolorTosRGB"), .Pointer = &UPixelizationMaterialsBPLibrary::execXYZcolorTosRGB },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_CIELUVTosRGB, "CIELUVTosRGB" }, // 2785787004
		{ &Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_CIELUVToXYZcolor, "CIELUVToXYZcolor" }, // 2008281616
		{ &Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorForSearch, "ConvertColorForSearch" }, // 2918949552
		{ &Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertColorFromSearch, "ConvertColorFromSearch" }, // 2530601132
		{ &Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertHexToColor, "ConvertHexToColor" }, // 1143583236
		{ &Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertLinearColorToSpace, "ConvertLinearColorToSpace" }, // 1927459048
		{ &Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertPaletteForSearch, "ConvertPaletteForSearch" }, // 2207126113
		{ &Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ConvertSpaceToLinearColor, "ConvertSpaceToLinearColor" }, // 2905467536
		{ &Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestAndOffset, "findClosestAndOffset" }, // 3292208669
		{ &Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestLine, "findClosestLine" }, // 1226245817
		{ &Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestOnAxis, "findClosestOnAxis" }, // 1425809053
		{ &Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_findClosestSelectSearchType, "findClosestSelectSearchType" }, // 1023085214
		{ &Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_HSVposition, "HSVposition" }, // 3573353000
		{ &Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_positionHSV, "positionHSV" }, // 3861586696
		{ &Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_ReadPalleteFromFile, "ReadPalleteFromFile" }, // 1687479584
		{ &Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_sRGBToCIELUV, "sRGBToCIELUV" }, // 3764190456
		{ &Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_sRGBToXYZcolor, "sRGBToXYZcolor" }, // 2938443595
		{ &Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_XYZcolorToCIELUV, "XYZcolorToCIELUV" }, // 3148919488
		{ &Z_Construct_UFunction_UPixelizationMaterialsBPLibrary_XYZcolorTosRGB, "XYZcolorTosRGB" }, // 1215387369
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPixelizationMaterialsBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPixelizationMaterialsBPLibrary_Statics
UObject* (*const Z_Construct_UClass_UPixelizationMaterialsBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_PixelizationMaterials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPixelizationMaterialsBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPixelizationMaterialsBPLibrary_Statics::ClassParams = {
	&UPixelizationMaterialsBPLibrary::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPixelizationMaterialsBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UPixelizationMaterialsBPLibrary_Statics::Class_MetaDataParams)
};
void UPixelizationMaterialsBPLibrary::StaticRegisterNativesUPixelizationMaterialsBPLibrary()
{
	UClass* Class = UPixelizationMaterialsBPLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UPixelizationMaterialsBPLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UPixelizationMaterialsBPLibrary()
{
	if (!Z_Registration_Info_UClass_UPixelizationMaterialsBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPixelizationMaterialsBPLibrary.OuterSingleton, Z_Construct_UClass_UPixelizationMaterialsBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPixelizationMaterialsBPLibrary.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPixelizationMaterialsBPLibrary);
UPixelizationMaterialsBPLibrary::~UPixelizationMaterialsBPLibrary() {}
// ********** End Class UPixelizationMaterialsBPLibrary ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEplugins_PixelizationMaterials_5_7_PixelizationMaterials_HostProject_Plugins_PixelizationMaterials_Source_PixelizationMaterials_Public_PixelizationMaterialsBPLibrary_h__Script_PixelizationMaterials_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ FPalleteFileType_StaticEnum, TEXT("FPalleteFileType"), &Z_Registration_Info_UEnum_FPalleteFileType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2929907505U) },
		{ EColorSpace_StaticEnum, TEXT("EColorSpace"), &Z_Registration_Info_UEnum_EColorSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3258080276U) },
		{ EColorSearchType_StaticEnum, TEXT("EColorSearchType"), &Z_Registration_Info_UEnum_EColorSearchType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3674389715U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPixelizationMaterialsBPLibrary, UPixelizationMaterialsBPLibrary::StaticClass, TEXT("UPixelizationMaterialsBPLibrary"), &Z_Registration_Info_UClass_UPixelizationMaterialsBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPixelizationMaterialsBPLibrary), 3593677782U) },
	};
}; // Z_CompiledInDeferFile_FID_UEplugins_PixelizationMaterials_5_7_PixelizationMaterials_HostProject_Plugins_PixelizationMaterials_Source_PixelizationMaterials_Public_PixelizationMaterialsBPLibrary_h__Script_PixelizationMaterials_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEplugins_PixelizationMaterials_5_7_PixelizationMaterials_HostProject_Plugins_PixelizationMaterials_Source_PixelizationMaterials_Public_PixelizationMaterialsBPLibrary_h__Script_PixelizationMaterials_3182787991{
	TEXT("/Script/PixelizationMaterials"),
	Z_CompiledInDeferFile_FID_UEplugins_PixelizationMaterials_5_7_PixelizationMaterials_HostProject_Plugins_PixelizationMaterials_Source_PixelizationMaterials_Public_PixelizationMaterialsBPLibrary_h__Script_PixelizationMaterials_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEplugins_PixelizationMaterials_5_7_PixelizationMaterials_HostProject_Plugins_PixelizationMaterials_Source_PixelizationMaterials_Public_PixelizationMaterialsBPLibrary_h__Script_PixelizationMaterials_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEplugins_PixelizationMaterials_5_7_PixelizationMaterials_HostProject_Plugins_PixelizationMaterials_Source_PixelizationMaterials_Public_PixelizationMaterialsBPLibrary_h__Script_PixelizationMaterials_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEplugins_PixelizationMaterials_5_7_PixelizationMaterials_HostProject_Plugins_PixelizationMaterials_Source_PixelizationMaterials_Public_PixelizationMaterialsBPLibrary_h__Script_PixelizationMaterials_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
