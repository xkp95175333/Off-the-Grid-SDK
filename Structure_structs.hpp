#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Structure

#include "Basic.hpp"

#include "_Biome_Type_structs.hpp"
#include "_Biome_subGroup_structs.hpp"
#include "_Biome_Asset_Type_structs.hpp"


namespace SDK
{

// UserDefinedStruct Structure.Structure
// 0x00C0 (0x00C0 - 0x0000)
struct FStructure final
{
public:
	class UStaticMesh*                            Asset_3_F8B818574469BA5560AAB58AD39D1B35;          // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	E_Biome_Type                                  Biome_10_0F8B5C454B9E1A087BE822884F125FA6;         // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_Biome_subGroup                              SubMinusBiome_60_F02D6F044C50A036837FBFA354028BC8; // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_Biome_Asset_Type                            Type_14_5179AC7C42E1157B53B519A01B4355A3;          // 0x000A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56CD[0x5];                                     // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ScatterWeight_50_6C12C9574773B68D872E3191E03D23C9; // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Height_12_96642DB14BC1DA6FE7A9F0BE4417BF51;        // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RadiusMinusKill_34_E77D126546F0EE075A005A81DAAD77E4; // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RadiusMinusViability_35_D75085ED4BD12E577EEF8A8A81C6C63D; // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RadiusMinusGrowth_36_64A39FA6411EF29714793E8CD4794B61; // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ScaleMinusmin_31_03830F1D414EDB59240E9EA662EA958F; // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ScaleMinusmax_33_45E70091437165C6FF0FECA72777D946; // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AligntoSlope_45_735BB3CA4574F1065BBDD3AE9DE67910;  // 0x0048(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RotateMinusRandomAngle_54_70ACFFEA4C7225166C53D58F47AB5BDA; // 0x0049(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56CE[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        PitchMinusmin_72_3E2EAF58484E5B6A62C255AB69E69B26; // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        PitchMinusmax_74_22C2CAAA451C480DA48F3D9E8F74C980; // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Z_OffsetMinusmin_77_A868A89943C883BAE1DCBDABBCB8544B; // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Z_OffsetMinusmax_79_367245C341061D6D5BCC1F916346A00D; // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSet<class UMaterialInstance*>                Material_42_AF91B921458A2EF4AEB905929E544121;      // 0x0070(0x0050)(Edit, BlueprintVisible)
};
static_assert(alignof(FStructure) == 0x000008, "Wrong alignment on FStructure");
static_assert(sizeof(FStructure) == 0x0000C0, "Wrong size on FStructure");
static_assert(offsetof(FStructure, Asset_3_F8B818574469BA5560AAB58AD39D1B35) == 0x000000, "Member 'FStructure::Asset_3_F8B818574469BA5560AAB58AD39D1B35' has a wrong offset!");
static_assert(offsetof(FStructure, Biome_10_0F8B5C454B9E1A087BE822884F125FA6) == 0x000008, "Member 'FStructure::Biome_10_0F8B5C454B9E1A087BE822884F125FA6' has a wrong offset!");
static_assert(offsetof(FStructure, SubMinusBiome_60_F02D6F044C50A036837FBFA354028BC8) == 0x000009, "Member 'FStructure::SubMinusBiome_60_F02D6F044C50A036837FBFA354028BC8' has a wrong offset!");
static_assert(offsetof(FStructure, Type_14_5179AC7C42E1157B53B519A01B4355A3) == 0x00000A, "Member 'FStructure::Type_14_5179AC7C42E1157B53B519A01B4355A3' has a wrong offset!");
static_assert(offsetof(FStructure, ScatterWeight_50_6C12C9574773B68D872E3191E03D23C9) == 0x000010, "Member 'FStructure::ScatterWeight_50_6C12C9574773B68D872E3191E03D23C9' has a wrong offset!");
static_assert(offsetof(FStructure, Height_12_96642DB14BC1DA6FE7A9F0BE4417BF51) == 0x000018, "Member 'FStructure::Height_12_96642DB14BC1DA6FE7A9F0BE4417BF51' has a wrong offset!");
static_assert(offsetof(FStructure, RadiusMinusKill_34_E77D126546F0EE075A005A81DAAD77E4) == 0x000020, "Member 'FStructure::RadiusMinusKill_34_E77D126546F0EE075A005A81DAAD77E4' has a wrong offset!");
static_assert(offsetof(FStructure, RadiusMinusViability_35_D75085ED4BD12E577EEF8A8A81C6C63D) == 0x000028, "Member 'FStructure::RadiusMinusViability_35_D75085ED4BD12E577EEF8A8A81C6C63D' has a wrong offset!");
static_assert(offsetof(FStructure, RadiusMinusGrowth_36_64A39FA6411EF29714793E8CD4794B61) == 0x000030, "Member 'FStructure::RadiusMinusGrowth_36_64A39FA6411EF29714793E8CD4794B61' has a wrong offset!");
static_assert(offsetof(FStructure, ScaleMinusmin_31_03830F1D414EDB59240E9EA662EA958F) == 0x000038, "Member 'FStructure::ScaleMinusmin_31_03830F1D414EDB59240E9EA662EA958F' has a wrong offset!");
static_assert(offsetof(FStructure, ScaleMinusmax_33_45E70091437165C6FF0FECA72777D946) == 0x000040, "Member 'FStructure::ScaleMinusmax_33_45E70091437165C6FF0FECA72777D946' has a wrong offset!");
static_assert(offsetof(FStructure, AligntoSlope_45_735BB3CA4574F1065BBDD3AE9DE67910) == 0x000048, "Member 'FStructure::AligntoSlope_45_735BB3CA4574F1065BBDD3AE9DE67910' has a wrong offset!");
static_assert(offsetof(FStructure, RotateMinusRandomAngle_54_70ACFFEA4C7225166C53D58F47AB5BDA) == 0x000049, "Member 'FStructure::RotateMinusRandomAngle_54_70ACFFEA4C7225166C53D58F47AB5BDA' has a wrong offset!");
static_assert(offsetof(FStructure, PitchMinusmin_72_3E2EAF58484E5B6A62C255AB69E69B26) == 0x000050, "Member 'FStructure::PitchMinusmin_72_3E2EAF58484E5B6A62C255AB69E69B26' has a wrong offset!");
static_assert(offsetof(FStructure, PitchMinusmax_74_22C2CAAA451C480DA48F3D9E8F74C980) == 0x000058, "Member 'FStructure::PitchMinusmax_74_22C2CAAA451C480DA48F3D9E8F74C980' has a wrong offset!");
static_assert(offsetof(FStructure, Z_OffsetMinusmin_77_A868A89943C883BAE1DCBDABBCB8544B) == 0x000060, "Member 'FStructure::Z_OffsetMinusmin_77_A868A89943C883BAE1DCBDABBCB8544B' has a wrong offset!");
static_assert(offsetof(FStructure, Z_OffsetMinusmax_79_367245C341061D6D5BCC1F916346A00D) == 0x000068, "Member 'FStructure::Z_OffsetMinusmax_79_367245C341061D6D5BCC1F916346A00D' has a wrong offset!");
static_assert(offsetof(FStructure, Material_42_AF91B921458A2EF4AEB905929E544121) == 0x000070, "Member 'FStructure::Material_42_AF91B921458A2EF4AEB905929E544121' has a wrong offset!");

}

