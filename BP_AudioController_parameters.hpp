#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AudioController

#include "Basic.hpp"

#include "G01_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function BP_AudioController.BP_AudioController_C.GetMissionVoiceLineTag
// 0x0060 (0x0060 - 0x0000)
struct BP_AudioController_C_GetMissionVoiceLineTag final
{
public:
	class AGzMission*                             InMission;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EMissionState                                 MissionState;                                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60E8[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           ReturnValue;                                       // 0x000C(0x0008)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x0014(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60E9[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Mission_Bounty_Target_C*            K2Node_DynamicCast_AsBP_Mission_Bounty_Target;     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60EA[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           Temp_struct_Variable_1;                            // 0x002C(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60EB[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60EC[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGzPlayerState*                         CallFunc_GetPlayerStateFromContext_ReturnValue;    // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60ED[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           K2Node_Select_Default;                             // 0x0054(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AudioController_C_GetMissionVoiceLineTag) == 0x000008, "Wrong alignment on BP_AudioController_C_GetMissionVoiceLineTag");
static_assert(sizeof(BP_AudioController_C_GetMissionVoiceLineTag) == 0x000060, "Wrong size on BP_AudioController_C_GetMissionVoiceLineTag");
static_assert(offsetof(BP_AudioController_C_GetMissionVoiceLineTag, InMission) == 0x000000, "Member 'BP_AudioController_C_GetMissionVoiceLineTag::InMission' has a wrong offset!");
static_assert(offsetof(BP_AudioController_C_GetMissionVoiceLineTag, MissionState) == 0x000008, "Member 'BP_AudioController_C_GetMissionVoiceLineTag::MissionState' has a wrong offset!");
static_assert(offsetof(BP_AudioController_C_GetMissionVoiceLineTag, ReturnValue) == 0x00000C, "Member 'BP_AudioController_C_GetMissionVoiceLineTag::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AudioController_C_GetMissionVoiceLineTag, Temp_struct_Variable) == 0x000014, "Member 'BP_AudioController_C_GetMissionVoiceLineTag::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_AudioController_C_GetMissionVoiceLineTag, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00001C, "Member 'BP_AudioController_C_GetMissionVoiceLineTag::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AudioController_C_GetMissionVoiceLineTag, K2Node_DynamicCast_AsBP_Mission_Bounty_Target) == 0x000020, "Member 'BP_AudioController_C_GetMissionVoiceLineTag::K2Node_DynamicCast_AsBP_Mission_Bounty_Target' has a wrong offset!");
static_assert(offsetof(BP_AudioController_C_GetMissionVoiceLineTag, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_AudioController_C_GetMissionVoiceLineTag::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AudioController_C_GetMissionVoiceLineTag, Temp_struct_Variable_1) == 0x00002C, "Member 'BP_AudioController_C_GetMissionVoiceLineTag::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_AudioController_C_GetMissionVoiceLineTag, CallFunc_GetOwner_ReturnValue) == 0x000038, "Member 'BP_AudioController_C_GetMissionVoiceLineTag::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AudioController_C_GetMissionVoiceLineTag, Temp_bool_Variable) == 0x000040, "Member 'BP_AudioController_C_GetMissionVoiceLineTag::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_AudioController_C_GetMissionVoiceLineTag, CallFunc_GetPlayerStateFromContext_ReturnValue) == 0x000048, "Member 'BP_AudioController_C_GetMissionVoiceLineTag::CallFunc_GetPlayerStateFromContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AudioController_C_GetMissionVoiceLineTag, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000050, "Member 'BP_AudioController_C_GetMissionVoiceLineTag::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AudioController_C_GetMissionVoiceLineTag, K2Node_Select_Default) == 0x000054, "Member 'BP_AudioController_C_GetMissionVoiceLineTag::K2Node_Select_Default' has a wrong offset!");

}

