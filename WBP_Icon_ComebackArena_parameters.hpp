#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Icon_ComebackArena

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_Icon_ComebackArena.WBP_Icon_ComebackArena_C.ComebackArenaStateChanged
// 0x0008 (0x0008 - 0x0000)
struct WBP_Icon_ComebackArena_C_ComebackArenaStateChanged final
{
public:
	class AGzPlayerState*                         PlayerState;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Icon_ComebackArena_C_ComebackArenaStateChanged) == 0x000008, "Wrong alignment on WBP_Icon_ComebackArena_C_ComebackArenaStateChanged");
static_assert(sizeof(WBP_Icon_ComebackArena_C_ComebackArenaStateChanged) == 0x000008, "Wrong size on WBP_Icon_ComebackArena_C_ComebackArenaStateChanged");
static_assert(offsetof(WBP_Icon_ComebackArena_C_ComebackArenaStateChanged, PlayerState) == 0x000000, "Member 'WBP_Icon_ComebackArena_C_ComebackArenaStateChanged::PlayerState' has a wrong offset!");

// Function WBP_Icon_ComebackArena.WBP_Icon_ComebackArena_C.CustomEvent
// 0x0008 (0x0008 - 0x0000)
struct WBP_Icon_ComebackArena_C_CustomEvent final
{
public:
	const class UGzGameMessage*                   Message;                                           // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Icon_ComebackArena_C_CustomEvent) == 0x000008, "Wrong alignment on WBP_Icon_ComebackArena_C_CustomEvent");
static_assert(sizeof(WBP_Icon_ComebackArena_C_CustomEvent) == 0x000008, "Wrong size on WBP_Icon_ComebackArena_C_CustomEvent");
static_assert(offsetof(WBP_Icon_ComebackArena_C_CustomEvent, Message) == 0x000000, "Member 'WBP_Icon_ComebackArena_C_CustomEvent::Message' has a wrong offset!");

// Function WBP_Icon_ComebackArena.WBP_Icon_ComebackArena_C.ExecuteUbergraph_WBP_Icon_ComebackArena
// 0x00C8 (0x00C8 - 0x0000)
struct WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B6A[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AGzGameModeSubsystem* Subsystem)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGzGameModeSubsystem*                   K2Node_CustomEvent_Subsystem_1;                    // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGzGameModeSubsystem*                   Temp_object_Variable;                              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGzWaitSubsystem*                       CallFunc_WaitSubsystem_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B6B[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGzGameMessageSubsystem*                K2Node_DynamicCast_AsGz_Game_Message_Subsystem;    // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B6C[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGzGameModeSubsystem*                   K2Node_CustomEvent_Subsystem;                      // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AGzGameModeSubsystem* Subsystem)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGzGameModeSubsystem*                   Temp_object_Variable_1;                            // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGzWaitSubsystem*                       CallFunc_WaitSubsystem_ReturnValue_1;              // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B6D[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGzGameMessageSubsystem*                K2Node_DynamicCast_AsGz_Game_Message_Subsystem_1;  // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B6E[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class UGzGameMessage*                   K2Node_CustomEvent_Message;                        // 0x0088(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AGzPlayerState* PlayerState)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0090(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UGzGameMessage* Message)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x00A0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGzPlayerState*                         K2Node_DynamicCast_AsGz_Player_State;              // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena) == 0x000008, "Wrong alignment on WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena");
static_assert(sizeof(WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena) == 0x0000C8, "Wrong size on WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena");
static_assert(offsetof(WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena, EntryPoint) == 0x000000, "Member 'WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena, K2Node_CustomEvent_Subsystem_1) == 0x000018, "Member 'WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena::K2Node_CustomEvent_Subsystem_1' has a wrong offset!");
static_assert(offsetof(WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena, Temp_object_Variable) == 0x000020, "Member 'WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena, CallFunc_WaitSubsystem_ReturnValue) == 0x000028, "Member 'WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena::CallFunc_WaitSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena, K2Node_DynamicCast_AsGz_Game_Message_Subsystem) == 0x000038, "Member 'WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena::K2Node_DynamicCast_AsGz_Game_Message_Subsystem' has a wrong offset!");
static_assert(offsetof(WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena, K2Node_CustomEvent_Subsystem) == 0x000048, "Member 'WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena::K2Node_CustomEvent_Subsystem' has a wrong offset!");
static_assert(offsetof(WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena, K2Node_CreateDelegate_OutputDelegate_1) == 0x000050, "Member 'WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena, Temp_object_Variable_1) == 0x000060, "Member 'WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena, CallFunc_WaitSubsystem_ReturnValue_1) == 0x000068, "Member 'WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena::CallFunc_WaitSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena, CallFunc_IsValid_ReturnValue_2) == 0x000070, "Member 'WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena, K2Node_DynamicCast_AsGz_Game_Message_Subsystem_1) == 0x000078, "Member 'WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena::K2Node_DynamicCast_AsGz_Game_Message_Subsystem_1' has a wrong offset!");
static_assert(offsetof(WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena, K2Node_DynamicCast_bSuccess_1) == 0x000080, "Member 'WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena, K2Node_CustomEvent_Message) == 0x000088, "Member 'WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena::K2Node_CustomEvent_Message' has a wrong offset!");
static_assert(offsetof(WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena, K2Node_CreateDelegate_OutputDelegate_2) == 0x000090, "Member 'WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000A0, "Member 'WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena, CallFunc_GetOwningPlayer_ReturnValue) == 0x0000B0, "Member 'WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena, K2Node_DynamicCast_AsGz_Player_State) == 0x0000B8, "Member 'WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena::K2Node_DynamicCast_AsGz_Player_State' has a wrong offset!");
static_assert(offsetof(WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena, K2Node_DynamicCast_bSuccess_2) == 0x0000C0, "Member 'WBP_Icon_ComebackArena_C_ExecuteUbergraph_WBP_Icon_ComebackArena::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

// Function WBP_Icon_ComebackArena.WBP_Icon_ComebackArena_C.OnReady_8AD6979B4D4B8E90C1559FA83A366867
// 0x0008 (0x0008 - 0x0000)
struct WBP_Icon_ComebackArena_C_OnReady_8AD6979B4D4B8E90C1559FA83A366867 final
{
public:
	class AGzGameModeSubsystem*                   Subsystem;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Icon_ComebackArena_C_OnReady_8AD6979B4D4B8E90C1559FA83A366867) == 0x000008, "Wrong alignment on WBP_Icon_ComebackArena_C_OnReady_8AD6979B4D4B8E90C1559FA83A366867");
static_assert(sizeof(WBP_Icon_ComebackArena_C_OnReady_8AD6979B4D4B8E90C1559FA83A366867) == 0x000008, "Wrong size on WBP_Icon_ComebackArena_C_OnReady_8AD6979B4D4B8E90C1559FA83A366867");
static_assert(offsetof(WBP_Icon_ComebackArena_C_OnReady_8AD6979B4D4B8E90C1559FA83A366867, Subsystem) == 0x000000, "Member 'WBP_Icon_ComebackArena_C_OnReady_8AD6979B4D4B8E90C1559FA83A366867::Subsystem' has a wrong offset!");

// Function WBP_Icon_ComebackArena.WBP_Icon_ComebackArena_C.OnReady_C882CD314295DAE66C29779BFA94A52C
// 0x0008 (0x0008 - 0x0000)
struct WBP_Icon_ComebackArena_C_OnReady_C882CD314295DAE66C29779BFA94A52C final
{
public:
	class AGzGameModeSubsystem*                   Subsystem;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Icon_ComebackArena_C_OnReady_C882CD314295DAE66C29779BFA94A52C) == 0x000008, "Wrong alignment on WBP_Icon_ComebackArena_C_OnReady_C882CD314295DAE66C29779BFA94A52C");
static_assert(sizeof(WBP_Icon_ComebackArena_C_OnReady_C882CD314295DAE66C29779BFA94A52C) == 0x000008, "Wrong size on WBP_Icon_ComebackArena_C_OnReady_C882CD314295DAE66C29779BFA94A52C");
static_assert(offsetof(WBP_Icon_ComebackArena_C_OnReady_C882CD314295DAE66C29779BFA94A52C, Subsystem) == 0x000000, "Member 'WBP_Icon_ComebackArena_C_OnReady_C882CD314295DAE66C29779BFA94A52C::Subsystem' has a wrong offset!");

// Function WBP_Icon_ComebackArena.WBP_Icon_ComebackArena_C.SetPlayerState
// 0x0008 (0x0008 - 0x0000)
struct WBP_Icon_ComebackArena_C_SetPlayerState final
{
public:
	class AGzPlayerState*                         NewPlayerState;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Icon_ComebackArena_C_SetPlayerState) == 0x000008, "Wrong alignment on WBP_Icon_ComebackArena_C_SetPlayerState");
static_assert(sizeof(WBP_Icon_ComebackArena_C_SetPlayerState) == 0x000008, "Wrong size on WBP_Icon_ComebackArena_C_SetPlayerState");
static_assert(offsetof(WBP_Icon_ComebackArena_C_SetPlayerState, NewPlayerState) == 0x000000, "Member 'WBP_Icon_ComebackArena_C_SetPlayerState::NewPlayerState' has a wrong offset!");

// Function WBP_Icon_ComebackArena.WBP_Icon_ComebackArena_C.Update VisibilityAndColor
// 0x0010 (0x0010 - 0x0000)
struct WBP_Icon_ComebackArena_C_Update_VisibilityAndColor final
{
public:
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Icon_ComebackArena_C_Update_VisibilityAndColor) == 0x000004, "Wrong alignment on WBP_Icon_ComebackArena_C_Update_VisibilityAndColor");
static_assert(sizeof(WBP_Icon_ComebackArena_C_Update_VisibilityAndColor) == 0x000010, "Wrong size on WBP_Icon_ComebackArena_C_Update_VisibilityAndColor");
static_assert(offsetof(WBP_Icon_ComebackArena_C_Update_VisibilityAndColor, CallFunc_SelectColor_ReturnValue) == 0x000000, "Member 'WBP_Icon_ComebackArena_C_Update_VisibilityAndColor::CallFunc_SelectColor_ReturnValue' has a wrong offset!");

}

