#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CyberlimbsPanel_DOS

#include "Basic.hpp"

#include "G01_structs.hpp"


namespace SDK::Params
{

// Function WBP_CyberlimbsPanel_DOS.WBP_CyberlimbsPanel_DOS_C.BlockedTagChange
// 0x0001 (0x0001 - 0x0000)
struct WBP_CyberlimbsPanel_DOS_C_BlockedTagChange final
{
public:
	bool                                          bLocked;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CyberlimbsPanel_DOS_C_BlockedTagChange) == 0x000001, "Wrong alignment on WBP_CyberlimbsPanel_DOS_C_BlockedTagChange");
static_assert(sizeof(WBP_CyberlimbsPanel_DOS_C_BlockedTagChange) == 0x000001, "Wrong size on WBP_CyberlimbsPanel_DOS_C_BlockedTagChange");
static_assert(offsetof(WBP_CyberlimbsPanel_DOS_C_BlockedTagChange, bLocked) == 0x000000, "Member 'WBP_CyberlimbsPanel_DOS_C_BlockedTagChange::bLocked' has a wrong offset!");

// Function WBP_CyberlimbsPanel_DOS.WBP_CyberlimbsPanel_DOS_C.DamageReceiveVisibilityCheck
// 0x0020 (0x0020 - 0x0000)
struct WBP_CyberlimbsPanel_DOS_C_DamageReceiveVisibilityCheck final
{
public:
	class AActor*                                 Damager;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EGzDamageIndicatorType                        Type;                                              // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C57[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Damage;                                            // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCrit;                                             // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C58[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CyberlimbsPanel_DOS_C_DamageReceiveVisibilityCheck) == 0x000008, "Wrong alignment on WBP_CyberlimbsPanel_DOS_C_DamageReceiveVisibilityCheck");
static_assert(sizeof(WBP_CyberlimbsPanel_DOS_C_DamageReceiveVisibilityCheck) == 0x000020, "Wrong size on WBP_CyberlimbsPanel_DOS_C_DamageReceiveVisibilityCheck");
static_assert(offsetof(WBP_CyberlimbsPanel_DOS_C_DamageReceiveVisibilityCheck, Damager) == 0x000000, "Member 'WBP_CyberlimbsPanel_DOS_C_DamageReceiveVisibilityCheck::Damager' has a wrong offset!");
static_assert(offsetof(WBP_CyberlimbsPanel_DOS_C_DamageReceiveVisibilityCheck, Type) == 0x000008, "Member 'WBP_CyberlimbsPanel_DOS_C_DamageReceiveVisibilityCheck::Type' has a wrong offset!");
static_assert(offsetof(WBP_CyberlimbsPanel_DOS_C_DamageReceiveVisibilityCheck, Damage) == 0x00000C, "Member 'WBP_CyberlimbsPanel_DOS_C_DamageReceiveVisibilityCheck::Damage' has a wrong offset!");
static_assert(offsetof(WBP_CyberlimbsPanel_DOS_C_DamageReceiveVisibilityCheck, bCrit) == 0x000010, "Member 'WBP_CyberlimbsPanel_DOS_C_DamageReceiveVisibilityCheck::bCrit' has a wrong offset!");
static_assert(offsetof(WBP_CyberlimbsPanel_DOS_C_DamageReceiveVisibilityCheck, CallFunc_PlayAnimationForward_ReturnValue) == 0x000018, "Member 'WBP_CyberlimbsPanel_DOS_C_DamageReceiveVisibilityCheck::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function WBP_CyberlimbsPanel_DOS.WBP_CyberlimbsPanel_DOS_C.ExecuteUbergraph_WBP_CyberlimbsPanel_DOS
// 0x0018 (0x0018 - 0x0000)
struct WBP_CyberlimbsPanel_DOS_C_ExecuteUbergraph_WBP_CyberlimbsPanel_DOS final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C59[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_NewViewTarget;                        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_OldViewTarget;                        // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CyberlimbsPanel_DOS_C_ExecuteUbergraph_WBP_CyberlimbsPanel_DOS) == 0x000008, "Wrong alignment on WBP_CyberlimbsPanel_DOS_C_ExecuteUbergraph_WBP_CyberlimbsPanel_DOS");
static_assert(sizeof(WBP_CyberlimbsPanel_DOS_C_ExecuteUbergraph_WBP_CyberlimbsPanel_DOS) == 0x000018, "Wrong size on WBP_CyberlimbsPanel_DOS_C_ExecuteUbergraph_WBP_CyberlimbsPanel_DOS");
static_assert(offsetof(WBP_CyberlimbsPanel_DOS_C_ExecuteUbergraph_WBP_CyberlimbsPanel_DOS, EntryPoint) == 0x000000, "Member 'WBP_CyberlimbsPanel_DOS_C_ExecuteUbergraph_WBP_CyberlimbsPanel_DOS::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CyberlimbsPanel_DOS_C_ExecuteUbergraph_WBP_CyberlimbsPanel_DOS, K2Node_Event_NewViewTarget) == 0x000008, "Member 'WBP_CyberlimbsPanel_DOS_C_ExecuteUbergraph_WBP_CyberlimbsPanel_DOS::K2Node_Event_NewViewTarget' has a wrong offset!");
static_assert(offsetof(WBP_CyberlimbsPanel_DOS_C_ExecuteUbergraph_WBP_CyberlimbsPanel_DOS, K2Node_Event_OldViewTarget) == 0x000010, "Member 'WBP_CyberlimbsPanel_DOS_C_ExecuteUbergraph_WBP_CyberlimbsPanel_DOS::K2Node_Event_OldViewTarget' has a wrong offset!");

// Function WBP_CyberlimbsPanel_DOS.WBP_CyberlimbsPanel_DOS_C.OnKnockdownStateChanged
// 0x0018 (0x0018 - 0x0000)
struct WBP_CyberlimbsPanel_DOS_C_OnKnockdownStateChanged final
{
public:
	bool                                          bBecomeKnocked;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C5A[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CyberlimbsPanel_DOS_C_OnKnockdownStateChanged) == 0x000008, "Wrong alignment on WBP_CyberlimbsPanel_DOS_C_OnKnockdownStateChanged");
static_assert(sizeof(WBP_CyberlimbsPanel_DOS_C_OnKnockdownStateChanged) == 0x000018, "Wrong size on WBP_CyberlimbsPanel_DOS_C_OnKnockdownStateChanged");
static_assert(offsetof(WBP_CyberlimbsPanel_DOS_C_OnKnockdownStateChanged, bBecomeKnocked) == 0x000000, "Member 'WBP_CyberlimbsPanel_DOS_C_OnKnockdownStateChanged::bBecomeKnocked' has a wrong offset!");
static_assert(offsetof(WBP_CyberlimbsPanel_DOS_C_OnKnockdownStateChanged, CallFunc_SelectFloat_ReturnValue) == 0x000008, "Member 'WBP_CyberlimbsPanel_DOS_C_OnKnockdownStateChanged::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CyberlimbsPanel_DOS_C_OnKnockdownStateChanged, CallFunc_SetRenderOpacity_InOpacity_ImplicitCast) == 0x000010, "Member 'WBP_CyberlimbsPanel_DOS_C_OnKnockdownStateChanged::CallFunc_SetRenderOpacity_InOpacity_ImplicitCast' has a wrong offset!");

// Function WBP_CyberlimbsPanel_DOS.WBP_CyberlimbsPanel_DOS_C.ReceiveBindEvents
// 0x0008 (0x0008 - 0x0000)
struct WBP_CyberlimbsPanel_DOS_C_ReceiveBindEvents final
{
public:
	class APawn*                                  NewViewTarget;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CyberlimbsPanel_DOS_C_ReceiveBindEvents) == 0x000008, "Wrong alignment on WBP_CyberlimbsPanel_DOS_C_ReceiveBindEvents");
static_assert(sizeof(WBP_CyberlimbsPanel_DOS_C_ReceiveBindEvents) == 0x000008, "Wrong size on WBP_CyberlimbsPanel_DOS_C_ReceiveBindEvents");
static_assert(offsetof(WBP_CyberlimbsPanel_DOS_C_ReceiveBindEvents, NewViewTarget) == 0x000000, "Member 'WBP_CyberlimbsPanel_DOS_C_ReceiveBindEvents::NewViewTarget' has a wrong offset!");

// Function WBP_CyberlimbsPanel_DOS.WBP_CyberlimbsPanel_DOS_C.ReceiveUnbindEvents
// 0x0008 (0x0008 - 0x0000)
struct WBP_CyberlimbsPanel_DOS_C_ReceiveUnbindEvents final
{
public:
	class APawn*                                  OldViewTarget;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CyberlimbsPanel_DOS_C_ReceiveUnbindEvents) == 0x000008, "Wrong alignment on WBP_CyberlimbsPanel_DOS_C_ReceiveUnbindEvents");
static_assert(sizeof(WBP_CyberlimbsPanel_DOS_C_ReceiveUnbindEvents) == 0x000008, "Wrong size on WBP_CyberlimbsPanel_DOS_C_ReceiveUnbindEvents");
static_assert(offsetof(WBP_CyberlimbsPanel_DOS_C_ReceiveUnbindEvents, OldViewTarget) == 0x000000, "Member 'WBP_CyberlimbsPanel_DOS_C_ReceiveUnbindEvents::OldViewTarget' has a wrong offset!");

}

