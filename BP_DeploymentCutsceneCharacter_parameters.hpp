#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DeploymentCutsceneCharacter

#include "Basic.hpp"

#include "G01_structs.hpp"


namespace SDK::Params
{

// Function BP_DeploymentCutsceneCharacter.BP_DeploymentCutsceneCharacter_C.ExecuteUbergraph_BP_DeploymentCutsceneCharacter
// 0x0158 (0x0158 - 0x0000)
struct BP_DeploymentCutsceneCharacter_C_ExecuteUbergraph_BP_DeploymentCutsceneCharacter final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_448C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGzCharacterCustomizationProfile       CallFunc_GetCustomizationProfile_ReturnValue;      // 0x0008(0x0150)()
};
static_assert(alignof(BP_DeploymentCutsceneCharacter_C_ExecuteUbergraph_BP_DeploymentCutsceneCharacter) == 0x000008, "Wrong alignment on BP_DeploymentCutsceneCharacter_C_ExecuteUbergraph_BP_DeploymentCutsceneCharacter");
static_assert(sizeof(BP_DeploymentCutsceneCharacter_C_ExecuteUbergraph_BP_DeploymentCutsceneCharacter) == 0x000158, "Wrong size on BP_DeploymentCutsceneCharacter_C_ExecuteUbergraph_BP_DeploymentCutsceneCharacter");
static_assert(offsetof(BP_DeploymentCutsceneCharacter_C_ExecuteUbergraph_BP_DeploymentCutsceneCharacter, EntryPoint) == 0x000000, "Member 'BP_DeploymentCutsceneCharacter_C_ExecuteUbergraph_BP_DeploymentCutsceneCharacter::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_DeploymentCutsceneCharacter_C_ExecuteUbergraph_BP_DeploymentCutsceneCharacter, CallFunc_GetCustomizationProfile_ReturnValue) == 0x000008, "Member 'BP_DeploymentCutsceneCharacter_C_ExecuteUbergraph_BP_DeploymentCutsceneCharacter::CallFunc_GetCustomizationProfile_ReturnValue' has a wrong offset!");

// Function BP_DeploymentCutsceneCharacter.BP_DeploymentCutsceneCharacter_C.GetCustomizationProfile
// 0x02E8 (0x02E8 - 0x0000)
struct BP_DeploymentCutsceneCharacter_C_GetCustomizationProfile final
{
public:
	struct FGzCharacterCustomizationProfile       ReturnValue;                                       // 0x0000(0x0150)(ConstParm, Parm, OutParm, ReturnParm)
	class AGzPlayerState*                         TargetPlayerState;                                 // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class AGzTeam*                                LocalTeam;                                         // 0x0158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0160(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGzTeam*                                CallFunc_GetTeamFromPlayer_ReturnValue;            // 0x0168(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_448D[0x7];                                     // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGzCharacterCustomizationProfile       CallFunc_GetCustomizationProfile_ReturnValue;      // 0x0178(0x0150)(ConstParm)
	TArray<struct FGzTeamMember>                  CallFunc_GetTeamMembers_ReturnValue;               // 0x02C8(0x0010)(ConstParm, ReferenceParm)
	struct FGzTeamMember                          CallFunc_Array_Get_Item;                           // 0x02D8(0x0008)(NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x02E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x02E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DeploymentCutsceneCharacter_C_GetCustomizationProfile) == 0x000008, "Wrong alignment on BP_DeploymentCutsceneCharacter_C_GetCustomizationProfile");
static_assert(sizeof(BP_DeploymentCutsceneCharacter_C_GetCustomizationProfile) == 0x0002E8, "Wrong size on BP_DeploymentCutsceneCharacter_C_GetCustomizationProfile");
static_assert(offsetof(BP_DeploymentCutsceneCharacter_C_GetCustomizationProfile, ReturnValue) == 0x000000, "Member 'BP_DeploymentCutsceneCharacter_C_GetCustomizationProfile::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DeploymentCutsceneCharacter_C_GetCustomizationProfile, TargetPlayerState) == 0x000150, "Member 'BP_DeploymentCutsceneCharacter_C_GetCustomizationProfile::TargetPlayerState' has a wrong offset!");
static_assert(offsetof(BP_DeploymentCutsceneCharacter_C_GetCustomizationProfile, LocalTeam) == 0x000158, "Member 'BP_DeploymentCutsceneCharacter_C_GetCustomizationProfile::LocalTeam' has a wrong offset!");
static_assert(offsetof(BP_DeploymentCutsceneCharacter_C_GetCustomizationProfile, CallFunc_GetPlayerController_ReturnValue) == 0x000160, "Member 'BP_DeploymentCutsceneCharacter_C_GetCustomizationProfile::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DeploymentCutsceneCharacter_C_GetCustomizationProfile, CallFunc_GetTeamFromPlayer_ReturnValue) == 0x000168, "Member 'BP_DeploymentCutsceneCharacter_C_GetCustomizationProfile::CallFunc_GetTeamFromPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DeploymentCutsceneCharacter_C_GetCustomizationProfile, CallFunc_IsValid_ReturnValue) == 0x000170, "Member 'BP_DeploymentCutsceneCharacter_C_GetCustomizationProfile::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DeploymentCutsceneCharacter_C_GetCustomizationProfile, CallFunc_GetCustomizationProfile_ReturnValue) == 0x000178, "Member 'BP_DeploymentCutsceneCharacter_C_GetCustomizationProfile::CallFunc_GetCustomizationProfile_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DeploymentCutsceneCharacter_C_GetCustomizationProfile, CallFunc_GetTeamMembers_ReturnValue) == 0x0002C8, "Member 'BP_DeploymentCutsceneCharacter_C_GetCustomizationProfile::CallFunc_GetTeamMembers_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DeploymentCutsceneCharacter_C_GetCustomizationProfile, CallFunc_Array_Get_Item) == 0x0002D8, "Member 'BP_DeploymentCutsceneCharacter_C_GetCustomizationProfile::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DeploymentCutsceneCharacter_C_GetCustomizationProfile, CallFunc_Array_IsValidIndex_ReturnValue) == 0x0002E0, "Member 'BP_DeploymentCutsceneCharacter_C_GetCustomizationProfile::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DeploymentCutsceneCharacter_C_GetCustomizationProfile, CallFunc_IsValid_ReturnValue_1) == 0x0002E1, "Member 'BP_DeploymentCutsceneCharacter_C_GetCustomizationProfile::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

