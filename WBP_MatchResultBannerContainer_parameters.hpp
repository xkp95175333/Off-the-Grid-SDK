#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MatchResultBannerContainer

#include "Basic.hpp"

#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function WBP_MatchResultBannerContainer.WBP_MatchResultBannerContainer_C.IsWinnerTeam
// 0x0002 (0x0002 - 0x0000)
struct WBP_MatchResultBannerContainer_C_IsWinnerTeam final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MatchResultBannerContainer_C_IsWinnerTeam) == 0x000001, "Wrong alignment on WBP_MatchResultBannerContainer_C_IsWinnerTeam");
static_assert(sizeof(WBP_MatchResultBannerContainer_C_IsWinnerTeam) == 0x000002, "Wrong size on WBP_MatchResultBannerContainer_C_IsWinnerTeam");
static_assert(offsetof(WBP_MatchResultBannerContainer_C_IsWinnerTeam, ReturnValue) == 0x000000, "Member 'WBP_MatchResultBannerContainer_C_IsWinnerTeam::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MatchResultBannerContainer_C_IsWinnerTeam, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000001, "Member 'WBP_MatchResultBannerContainer_C_IsWinnerTeam::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_MatchResultBannerContainer.WBP_MatchResultBannerContainer_C.GetMatchResultBanner
// 0x0008 (0x0008 - 0x0000)
struct WBP_MatchResultBannerContainer_C_GetMatchResultBanner final
{
public:
	class UWBP_MatchResultBanner_C*               MatchResultBanner;                                 // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MatchResultBannerContainer_C_GetMatchResultBanner) == 0x000008, "Wrong alignment on WBP_MatchResultBannerContainer_C_GetMatchResultBanner");
static_assert(sizeof(WBP_MatchResultBannerContainer_C_GetMatchResultBanner) == 0x000008, "Wrong size on WBP_MatchResultBannerContainer_C_GetMatchResultBanner");
static_assert(offsetof(WBP_MatchResultBannerContainer_C_GetMatchResultBanner, MatchResultBanner) == 0x000000, "Member 'WBP_MatchResultBannerContainer_C_GetMatchResultBanner::MatchResultBanner' has a wrong offset!");

// Function WBP_MatchResultBannerContainer.WBP_MatchResultBannerContainer_C.ExecuteUbergraph_WBP_MatchResultBannerContainer
// 0x00D0 (0x00D0 - 0x0000)
struct WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EA1[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UGzNavigationRoot*                      CallFunc_GetNavigationRoot_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EA2[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button_1;               // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;                 // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UGzNavigationRoot*                      CallFunc_GetNavigationRoot_ReturnValue_1;          // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGzNavigationWidget*                    CallFunc_AddWidgetCached_ReturnValue;              // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AGzPlayerController*                    K2Node_DynamicCast_AsGz_Player_Controller;         // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EA3[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_EscapeMenu_ExitPrompt_C*           K2Node_DynamicCast_AsWBP_Escape_Menu_Exit_Prompt;  // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EA4[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGzNavigationRoot*                      CallFunc_GetNavigationRoot_ReturnValue_2;          // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EA5[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0084(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EA6[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable_1;                          // 0x009C(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEvent_ReturnValue_1;                  // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsWinnerTeam_ReturnValue;                 // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EA7[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer) == 0x000008, "Wrong alignment on WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer");
static_assert(sizeof(WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer) == 0x0000D0, "Wrong size on WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer");
static_assert(offsetof(WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer, EntryPoint) == 0x000000, "Member 'WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer, CallFunc_Not_PreBool_ReturnValue) == 0x000014, "Member 'WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer, CallFunc_GetNavigationRoot_ReturnValue) == 0x000018, "Member 'WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer::CallFunc_GetNavigationRoot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer, K2Node_ComponentBoundEvent_Button_1) == 0x000028, "Member 'WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer, CallFunc_PlayAnimationForward_ReturnValue) == 0x000030, "Member 'WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer, K2Node_ComponentBoundEvent_Button) == 0x000038, "Member 'WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer, CallFunc_GetNavigationRoot_ReturnValue_1) == 0x000040, "Member 'WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer::CallFunc_GetNavigationRoot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer, CallFunc_GetOwningPlayer_ReturnValue) == 0x000048, "Member 'WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer, CallFunc_AddWidgetCached_ReturnValue) == 0x000050, "Member 'WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer::CallFunc_AddWidgetCached_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer, K2Node_DynamicCast_AsGz_Player_Controller) == 0x000058, "Member 'WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer::K2Node_DynamicCast_AsGz_Player_Controller' has a wrong offset!");
static_assert(offsetof(WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer, K2Node_DynamicCast_AsWBP_Escape_Menu_Exit_Prompt) == 0x000068, "Member 'WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer::K2Node_DynamicCast_AsWBP_Escape_Menu_Exit_Prompt' has a wrong offset!");
static_assert(offsetof(WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer, K2Node_DynamicCast_bSuccess_1) == 0x000070, "Member 'WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer, CallFunc_GetNavigationRoot_ReturnValue_2) == 0x000078, "Member 'WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer::CallFunc_GetNavigationRoot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer, CallFunc_IsValid_ReturnValue_1) == 0x000080, "Member 'WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer, Temp_delegate_Variable) == 0x000084, "Member 'WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer, CallFunc_PostEvent_ReturnValue) == 0x000094, "Member 'WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer::CallFunc_PostEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer, CallFunc_Not_PreBool_ReturnValue_1) == 0x000098, "Member 'WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer, Temp_delegate_Variable_1) == 0x00009C, "Member 'WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer::Temp_delegate_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer, CallFunc_PostEvent_ReturnValue_1) == 0x0000AC, "Member 'WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer::CallFunc_PostEvent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer, CallFunc_IsWinnerTeam_ReturnValue) == 0x0000B0, "Member 'WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer::CallFunc_IsWinnerTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x0000B8, "Member 'WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x0000C0, "Member 'WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer, CallFunc_IsValid_ReturnValue_2) == 0x0000C8, "Member 'WBP_MatchResultBannerContainer_C_ExecuteUbergraph_WBP_MatchResultBannerContainer::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function WBP_MatchResultBannerContainer.WBP_MatchResultBannerContainer_C.BndEvt__WBP_MatchResultBannerContainer_Spectatte_Button_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_MatchResultBannerContainer_C_BndEvt__WBP_MatchResultBannerContainer_Spectatte_Button_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MatchResultBannerContainer_C_BndEvt__WBP_MatchResultBannerContainer_Spectatte_Button_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_MatchResultBannerContainer_C_BndEvt__WBP_MatchResultBannerContainer_Spectatte_Button_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_MatchResultBannerContainer_C_BndEvt__WBP_MatchResultBannerContainer_Spectatte_Button_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_MatchResultBannerContainer_C_BndEvt__WBP_MatchResultBannerContainer_Spectatte_Button_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_MatchResultBannerContainer_C_BndEvt__WBP_MatchResultBannerContainer_Spectatte_Button_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_MatchResultBannerContainer_C_BndEvt__WBP_MatchResultBannerContainer_Spectatte_Button_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_MatchResultBannerContainer.WBP_MatchResultBannerContainer_C.BndEvt__WBP_MatchResultBannerContainer_LeaveMatch_Button_1_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_MatchResultBannerContainer_C_BndEvt__WBP_MatchResultBannerContainer_LeaveMatch_Button_1_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MatchResultBannerContainer_C_BndEvt__WBP_MatchResultBannerContainer_LeaveMatch_Button_1_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_MatchResultBannerContainer_C_BndEvt__WBP_MatchResultBannerContainer_LeaveMatch_Button_1_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_MatchResultBannerContainer_C_BndEvt__WBP_MatchResultBannerContainer_LeaveMatch_Button_1_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_MatchResultBannerContainer_C_BndEvt__WBP_MatchResultBannerContainer_LeaveMatch_Button_1_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_MatchResultBannerContainer_C_BndEvt__WBP_MatchResultBannerContainer_LeaveMatch_Button_1_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_MatchResultBannerContainer_C_BndEvt__WBP_MatchResultBannerContainer_LeaveMatch_Button_1_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_MatchResultBannerContainer.WBP_MatchResultBannerContainer_C.BP_GetDesiredFocusTarget
// 0x0008 (0x0008 - 0x0000)
struct WBP_MatchResultBannerContainer_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MatchResultBannerContainer_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_MatchResultBannerContainer_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_MatchResultBannerContainer_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong size on WBP_MatchResultBannerContainer_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_MatchResultBannerContainer_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_MatchResultBannerContainer_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");

}

