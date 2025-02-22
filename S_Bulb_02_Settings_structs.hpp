#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_Bulb_02_Settings

#include "Basic.hpp"

#include "E_Bulb_Type_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_Bulb_02_Settings.S_Bulb_02_Settings
// 0x00F0 (0x00F0 - 0x0000)
struct FS_Bulb_02_Settings final
{
public:
	E_Bulb_Type                                   BulbType_27_95901D6A4AB87949006ED585F437F1B6;      // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BF8[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            BulbMesh_13_B422D08044B1B8C08DBF839902F71EAF;      // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             BulbLightTransform_30_DD68AA0642AEB21CD2956FBC2A00B47F; // 0x0010(0x0060)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                BulbLightLocation_23_46AA75964AF35B696C2F93A46FF3E2E1; // 0x0070(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               BulbLightRotation_24_169C976D42DDF1B88E0AF898DFD2193E; // 0x0088(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                BulbMeshOffset_14_108A544D4480EAAD868BB18FAA95D741; // 0x00A0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               BulbMeshRotationOffset_15_0BE81C9A4A9EBC01082F9AB4E75D103E; // 0x00B8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                BulbMeshScale_18_E94356614C289897295637B5BFF4A168; // 0x00D0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_Bulb_02_Settings) == 0x000010, "Wrong alignment on FS_Bulb_02_Settings");
static_assert(sizeof(FS_Bulb_02_Settings) == 0x0000F0, "Wrong size on FS_Bulb_02_Settings");
static_assert(offsetof(FS_Bulb_02_Settings, BulbType_27_95901D6A4AB87949006ED585F437F1B6) == 0x000000, "Member 'FS_Bulb_02_Settings::BulbType_27_95901D6A4AB87949006ED585F437F1B6' has a wrong offset!");
static_assert(offsetof(FS_Bulb_02_Settings, BulbMesh_13_B422D08044B1B8C08DBF839902F71EAF) == 0x000008, "Member 'FS_Bulb_02_Settings::BulbMesh_13_B422D08044B1B8C08DBF839902F71EAF' has a wrong offset!");
static_assert(offsetof(FS_Bulb_02_Settings, BulbLightTransform_30_DD68AA0642AEB21CD2956FBC2A00B47F) == 0x000010, "Member 'FS_Bulb_02_Settings::BulbLightTransform_30_DD68AA0642AEB21CD2956FBC2A00B47F' has a wrong offset!");
static_assert(offsetof(FS_Bulb_02_Settings, BulbLightLocation_23_46AA75964AF35B696C2F93A46FF3E2E1) == 0x000070, "Member 'FS_Bulb_02_Settings::BulbLightLocation_23_46AA75964AF35B696C2F93A46FF3E2E1' has a wrong offset!");
static_assert(offsetof(FS_Bulb_02_Settings, BulbLightRotation_24_169C976D42DDF1B88E0AF898DFD2193E) == 0x000088, "Member 'FS_Bulb_02_Settings::BulbLightRotation_24_169C976D42DDF1B88E0AF898DFD2193E' has a wrong offset!");
static_assert(offsetof(FS_Bulb_02_Settings, BulbMeshOffset_14_108A544D4480EAAD868BB18FAA95D741) == 0x0000A0, "Member 'FS_Bulb_02_Settings::BulbMeshOffset_14_108A544D4480EAAD868BB18FAA95D741' has a wrong offset!");
static_assert(offsetof(FS_Bulb_02_Settings, BulbMeshRotationOffset_15_0BE81C9A4A9EBC01082F9AB4E75D103E) == 0x0000B8, "Member 'FS_Bulb_02_Settings::BulbMeshRotationOffset_15_0BE81C9A4A9EBC01082F9AB4E75D103E' has a wrong offset!");
static_assert(offsetof(FS_Bulb_02_Settings, BulbMeshScale_18_E94356614C289897295637B5BFF4A168) == 0x0000D0, "Member 'FS_Bulb_02_Settings::BulbMeshScale_18_E94356614C289897295637B5BFF4A168' has a wrong offset!");

}

