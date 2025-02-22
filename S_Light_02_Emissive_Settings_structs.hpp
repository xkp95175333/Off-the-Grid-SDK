#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_Light_02_Emissive_Settings

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct S_Light_02_Emissive_Settings.S_Light_02_Emissive_Settings
// 0x0018 (0x0018 - 0x0000)
struct FS_Light_02_Emissive_Settings final
{
public:
	bool                                          SetCustomLumenEmissiveIntensity_23_B09DC3134ACB5F9409F509BC5C184E35; // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_615A[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        EmissiveLumenIntensity_24_A17FFD8A4568FCA1A245BE843F6A0698; // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EmissiveIntensityDivision_18_6E704F1F43DF9A34B6B66D9D058B3A5D; // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_Light_02_Emissive_Settings) == 0x000008, "Wrong alignment on FS_Light_02_Emissive_Settings");
static_assert(sizeof(FS_Light_02_Emissive_Settings) == 0x000018, "Wrong size on FS_Light_02_Emissive_Settings");
static_assert(offsetof(FS_Light_02_Emissive_Settings, SetCustomLumenEmissiveIntensity_23_B09DC3134ACB5F9409F509BC5C184E35) == 0x000000, "Member 'FS_Light_02_Emissive_Settings::SetCustomLumenEmissiveIntensity_23_B09DC3134ACB5F9409F509BC5C184E35' has a wrong offset!");
static_assert(offsetof(FS_Light_02_Emissive_Settings, EmissiveLumenIntensity_24_A17FFD8A4568FCA1A245BE843F6A0698) == 0x000008, "Member 'FS_Light_02_Emissive_Settings::EmissiveLumenIntensity_24_A17FFD8A4568FCA1A245BE843F6A0698' has a wrong offset!");
static_assert(offsetof(FS_Light_02_Emissive_Settings, EmissiveIntensityDivision_18_6E704F1F43DF9A34B6B66D9D058B3A5D) == 0x000010, "Member 'FS_Light_02_Emissive_Settings::EmissiveIntensityDivision_18_6E704F1F43DF9A34B6B66D9D058B3A5D' has a wrong offset!");

}

