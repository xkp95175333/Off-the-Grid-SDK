#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_WeaponReload

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayCameras_structs.hpp"


namespace SDK::Params
{

// Function GA_WeaponReload.GA_WeaponReload_C.ExecuteUbergraph_GA_WeaponReload
// 0x0198 (0x0198 - 0x0000)
struct GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsStandalone_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6393[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6394[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6395[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitGameplayTagRemoved*    CallFunc_WaitGameplayTagRemove_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameplayCamerasSubsystem*              CallFunc_GetWorldSubsystem_ReturnValue;            // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6396[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x003C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6397[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue_1;         // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6398[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1; // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGzPlayerCharacter*                     K2Node_DynamicCast_AsGz_Player_Character;          // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6399[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerCharacter_C*                  K2Node_DynamicCast_AsBP_Player_Character;          // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_639A[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGzCombatComponent*                     CallFunc_GetCombatComponent_ReturnValue;           // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      K2Node_DynamicCast_AsPlayer_Controller;            // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_639B[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGzWeaponActor*                         CallFunc_GetEquippedWeapon_ReturnValue;            // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameplayCamerasSubsystem*              CallFunc_GetWorldSubsystem_ReturnValue_1;          // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGzWeaponItemData*                      CallFunc_GetItemData_ReturnValue;                  // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_HasAuthority_ReturnValue;              // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MatchesTag_ReturnValue;                   // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MatchesTag_ReturnValue_1;                 // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MatchesTag_ReturnValue_2;                 // 0x00CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MatchesTag_ReturnValue_3;                 // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MatchesTag_ReturnValue_4;                 // 0x00CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MatchesTag_ReturnValue_5;                 // 0x00CE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MatchesTag_ReturnValue_6;                 // 0x00CF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2; // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGzPlayerCharacter*                     K2Node_DynamicCast_AsGz_Player_Character_1;        // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_639C[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue_1;              // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetTimeSeconds_ReturnValue;               // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      K2Node_DynamicCast_AsPlayer_Controller_1;          // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_639D[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetTimeSeconds_ReturnValue_1;             // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0110(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0128(0x0008)(NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMax_ReturnValue;                         // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue;                        // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_639E[0x4];                                     // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCameraAnimationParams                 K2Node_MakeStruct_CameraAnimationParams;           // 0x0148(0x0048)(NoDestructor)
	struct FCameraAnimationHandle                 CallFunc_PlayCameraAnimation_ReturnValue;          // 0x0190(0x0004)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload) == 0x000008, "Wrong alignment on GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload");
static_assert(sizeof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload) == 0x000198, "Wrong size on GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, EntryPoint) == 0x000000, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, CallFunc_IsStandalone_ReturnValue) == 0x000004, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::CallFunc_IsStandalone_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, CallFunc_WaitGameplayTagAdd_ReturnValue) == 0x000008, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::CallFunc_WaitGameplayTagAdd_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, CallFunc_WaitGameplayTagRemove_ReturnValue) == 0x000028, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::CallFunc_WaitGameplayTagRemove_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000030, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, CallFunc_IsValid_ReturnValue_1) == 0x000038, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, K2Node_CreateDelegate_OutputDelegate_1) == 0x00003C, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, CallFunc_WaitGameplayTagAdd_ReturnValue_1) == 0x000050, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::CallFunc_WaitGameplayTagAdd_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, CallFunc_IsValid_ReturnValue_2) == 0x000058, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, K2Node_Event_bWasCancelled) == 0x000059, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000060, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x000068, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, K2Node_DynamicCast_AsGz_Player_Character) == 0x000070, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::K2Node_DynamicCast_AsGz_Player_Character' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, K2Node_DynamicCast_AsBP_Player_Character) == 0x000080, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::K2Node_DynamicCast_AsBP_Player_Character' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, K2Node_DynamicCast_bSuccess_1) == 0x000088, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, CallFunc_GetController_ReturnValue) == 0x000090, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, CallFunc_GetCombatComponent_ReturnValue) == 0x000098, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::CallFunc_GetCombatComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, K2Node_DynamicCast_AsPlayer_Controller) == 0x0000A0, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::K2Node_DynamicCast_AsPlayer_Controller' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, K2Node_DynamicCast_bSuccess_2) == 0x0000A8, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, CallFunc_GetEquippedWeapon_ReturnValue) == 0x0000B0, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::CallFunc_GetEquippedWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, CallFunc_GetWorldSubsystem_ReturnValue_1) == 0x0000B8, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::CallFunc_GetWorldSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, CallFunc_GetItemData_ReturnValue) == 0x0000C0, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::CallFunc_GetItemData_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, CallFunc_K2_HasAuthority_ReturnValue) == 0x0000C8, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::CallFunc_K2_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, CallFunc_MatchesTag_ReturnValue) == 0x0000C9, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::CallFunc_MatchesTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, CallFunc_MatchesTag_ReturnValue_1) == 0x0000CA, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::CallFunc_MatchesTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, CallFunc_MatchesTag_ReturnValue_2) == 0x0000CB, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::CallFunc_MatchesTag_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, CallFunc_MatchesTag_ReturnValue_3) == 0x0000CC, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::CallFunc_MatchesTag_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, CallFunc_MatchesTag_ReturnValue_4) == 0x0000CD, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::CallFunc_MatchesTag_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, CallFunc_MatchesTag_ReturnValue_5) == 0x0000CE, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::CallFunc_MatchesTag_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, CallFunc_MatchesTag_ReturnValue_6) == 0x0000CF, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::CallFunc_MatchesTag_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2) == 0x0000D0, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, K2Node_DynamicCast_AsGz_Player_Character_1) == 0x0000D8, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::K2Node_DynamicCast_AsGz_Player_Character_1' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, K2Node_DynamicCast_bSuccess_3) == 0x0000E0, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, CallFunc_GetController_ReturnValue_1) == 0x0000E8, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::CallFunc_GetController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, CallFunc_GetTimeSeconds_ReturnValue) == 0x0000F0, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::CallFunc_GetTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, K2Node_DynamicCast_AsPlayer_Controller_1) == 0x0000F8, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::K2Node_DynamicCast_AsPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, K2Node_DynamicCast_bSuccess_4) == 0x000100, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, CallFunc_GetTimeSeconds_ReturnValue_1) == 0x000108, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::CallFunc_GetTimeSeconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, K2Node_CreateDelegate_OutputDelegate_2) == 0x000110, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000120, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000128, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, CallFunc_FMax_ReturnValue) == 0x000130, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000138, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, CallFunc_Round_ReturnValue) == 0x000140, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, K2Node_MakeStruct_CameraAnimationParams) == 0x000148, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::K2Node_MakeStruct_CameraAnimationParams' has a wrong offset!");
static_assert(offsetof(GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload, CallFunc_PlayCameraAnimation_ReturnValue) == 0x000190, "Member 'GA_WeaponReload_C_ExecuteUbergraph_GA_WeaponReload::CallFunc_PlayCameraAnimation_ReturnValue' has a wrong offset!");

// Function GA_WeaponReload.GA_WeaponReload_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_WeaponReload_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_WeaponReload_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_WeaponReload_C_K2_OnEndAbility");
static_assert(sizeof(GA_WeaponReload_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_WeaponReload_C_K2_OnEndAbility");
static_assert(offsetof(GA_WeaponReload_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_WeaponReload_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}

