#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_Bulb_Light_01_Emissive_Settings

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct S_Bulb_Light_01_Emissive_Settings.S_Bulb_Light_01_Emissive_Settings
// 0x0020 (0x0020 - 0x0000)
struct FS_Bulb_Light_01_Emissive_Settings final
{
public:
	double                                        EmissiveIntensityDivision_20_CB27DE3F4CB780CA6C06EEA852027410; // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SetCustomLumenEmissiveIntensity__27_7EC362A949F6A4C32738E1A7EF1B03F4; // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60D7[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        EmissiveLumenIntensity_24_F198DCE54C4EC03C17E6FEA9FC1BD23F; // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EmissiveOnlyNoLightComponent_13_891911DD41862606499E7CBAAD82B9B9; // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_Bulb_Light_01_Emissive_Settings) == 0x000008, "Wrong alignment on FS_Bulb_Light_01_Emissive_Settings");
static_assert(sizeof(FS_Bulb_Light_01_Emissive_Settings) == 0x000020, "Wrong size on FS_Bulb_Light_01_Emissive_Settings");
static_assert(offsetof(FS_Bulb_Light_01_Emissive_Settings, EmissiveIntensityDivision_20_CB27DE3F4CB780CA6C06EEA852027410) == 0x000000, "Member 'FS_Bulb_Light_01_Emissive_Settings::EmissiveIntensityDivision_20_CB27DE3F4CB780CA6C06EEA852027410' has a wrong offset!");
static_assert(offsetof(FS_Bulb_Light_01_Emissive_Settings, SetCustomLumenEmissiveIntensity__27_7EC362A949F6A4C32738E1A7EF1B03F4) == 0x000008, "Member 'FS_Bulb_Light_01_Emissive_Settings::SetCustomLumenEmissiveIntensity__27_7EC362A949F6A4C32738E1A7EF1B03F4' has a wrong offset!");
static_assert(offsetof(FS_Bulb_Light_01_Emissive_Settings, EmissiveLumenIntensity_24_F198DCE54C4EC03C17E6FEA9FC1BD23F) == 0x000010, "Member 'FS_Bulb_Light_01_Emissive_Settings::EmissiveLumenIntensity_24_F198DCE54C4EC03C17E6FEA9FC1BD23F' has a wrong offset!");
static_assert(offsetof(FS_Bulb_Light_01_Emissive_Settings, EmissiveOnlyNoLightComponent_13_891911DD41862606499E7CBAAD82B9B9) == 0x000018, "Member 'FS_Bulb_Light_01_Emissive_Settings::EmissiveOnlyNoLightComponent_13_891911DD41862606499E7CBAAD82B9B9' has a wrong offset!");

}

