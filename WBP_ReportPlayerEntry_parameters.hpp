#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ReportPlayerEntry

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_ReportPlayerEntry.WBP_ReportPlayerEntry_C.BndEvt__WBP_ReportPlayerEntry_WBP_NavigationButton_Action_C_0_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_ReportPlayerEntry_C_BndEvt__WBP_ReportPlayerEntry_WBP_NavigationButton_Action_C_0_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ReportPlayerEntry_C_BndEvt__WBP_ReportPlayerEntry_WBP_NavigationButton_Action_C_0_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_ReportPlayerEntry_C_BndEvt__WBP_ReportPlayerEntry_WBP_NavigationButton_Action_C_0_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_ReportPlayerEntry_C_BndEvt__WBP_ReportPlayerEntry_WBP_NavigationButton_Action_C_0_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_ReportPlayerEntry_C_BndEvt__WBP_ReportPlayerEntry_WBP_NavigationButton_Action_C_0_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_ReportPlayerEntry_C_BndEvt__WBP_ReportPlayerEntry_WBP_NavigationButton_Action_C_0_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_ReportPlayerEntry_C_BndEvt__WBP_ReportPlayerEntry_WBP_NavigationButton_Action_C_0_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_ReportPlayerEntry.WBP_ReportPlayerEntry_C.ConstructButton
// 0x0001 (0x0001 - 0x0000)
struct WBP_ReportPlayerEntry_C_ConstructButton final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ReportPlayerEntry_C_ConstructButton) == 0x000001, "Wrong alignment on WBP_ReportPlayerEntry_C_ConstructButton");
static_assert(sizeof(WBP_ReportPlayerEntry_C_ConstructButton) == 0x000001, "Wrong size on WBP_ReportPlayerEntry_C_ConstructButton");
static_assert(offsetof(WBP_ReportPlayerEntry_C_ConstructButton, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'WBP_ReportPlayerEntry_C_ConstructButton::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_ReportPlayerEntry.WBP_ReportPlayerEntry_C.ExecuteUbergraph_WBP_ReportPlayerEntry
// 0x0010 (0x0010 - 0x0000)
struct WBP_ReportPlayerEntry_C_ExecuteUbergraph_WBP_ReportPlayerEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_675F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ReportPlayerEntry_C_ExecuteUbergraph_WBP_ReportPlayerEntry) == 0x000008, "Wrong alignment on WBP_ReportPlayerEntry_C_ExecuteUbergraph_WBP_ReportPlayerEntry");
static_assert(sizeof(WBP_ReportPlayerEntry_C_ExecuteUbergraph_WBP_ReportPlayerEntry) == 0x000010, "Wrong size on WBP_ReportPlayerEntry_C_ExecuteUbergraph_WBP_ReportPlayerEntry");
static_assert(offsetof(WBP_ReportPlayerEntry_C_ExecuteUbergraph_WBP_ReportPlayerEntry, EntryPoint) == 0x000000, "Member 'WBP_ReportPlayerEntry_C_ExecuteUbergraph_WBP_ReportPlayerEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ReportPlayerEntry_C_ExecuteUbergraph_WBP_ReportPlayerEntry, K2Node_ComponentBoundEvent_Button) == 0x000008, "Member 'WBP_ReportPlayerEntry_C_ExecuteUbergraph_WBP_ReportPlayerEntry::K2Node_ComponentBoundEvent_Button' has a wrong offset!");

// Function WBP_ReportPlayerEntry.WBP_ReportPlayerEntry_C.SetPlayerName
// 0x00F8 (0x00F8 - 0x0000)
struct WBP_ReportPlayerEntry_C_SetPlayerName final
{
public:
	class FString                                 CallFunc_GetPlayerName_ReturnValue;                // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerClanTag_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0010)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0030(0x0010)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0040(0x0048)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0088(0x0048)(HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6760[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00D8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00E8(0x0010)()
};
static_assert(alignof(WBP_ReportPlayerEntry_C_SetPlayerName) == 0x000008, "Wrong alignment on WBP_ReportPlayerEntry_C_SetPlayerName");
static_assert(sizeof(WBP_ReportPlayerEntry_C_SetPlayerName) == 0x0000F8, "Wrong size on WBP_ReportPlayerEntry_C_SetPlayerName");
static_assert(offsetof(WBP_ReportPlayerEntry_C_SetPlayerName, CallFunc_GetPlayerName_ReturnValue) == 0x000000, "Member 'WBP_ReportPlayerEntry_C_SetPlayerName::CallFunc_GetPlayerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ReportPlayerEntry_C_SetPlayerName, CallFunc_GetPlayerClanTag_ReturnValue) == 0x000010, "Member 'WBP_ReportPlayerEntry_C_SetPlayerName::CallFunc_GetPlayerClanTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ReportPlayerEntry_C_SetPlayerName, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'WBP_ReportPlayerEntry_C_SetPlayerName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ReportPlayerEntry_C_SetPlayerName, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000030, "Member 'WBP_ReportPlayerEntry_C_SetPlayerName::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ReportPlayerEntry_C_SetPlayerName, K2Node_MakeStruct_FormatArgumentData) == 0x000040, "Member 'WBP_ReportPlayerEntry_C_SetPlayerName::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_ReportPlayerEntry_C_SetPlayerName, K2Node_MakeStruct_FormatArgumentData_1) == 0x000088, "Member 'WBP_ReportPlayerEntry_C_SetPlayerName::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_ReportPlayerEntry_C_SetPlayerName, CallFunc_TextIsEmpty_ReturnValue) == 0x0000D0, "Member 'WBP_ReportPlayerEntry_C_SetPlayerName::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ReportPlayerEntry_C_SetPlayerName, K2Node_MakeArray_Array) == 0x0000D8, "Member 'WBP_ReportPlayerEntry_C_SetPlayerName::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_ReportPlayerEntry_C_SetPlayerName, CallFunc_Format_ReturnValue) == 0x0000E8, "Member 'WBP_ReportPlayerEntry_C_SetPlayerName::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WBP_ReportPlayerEntry.WBP_ReportPlayerEntry_C.SetStyle
// 0x0050 (0x0050 - 0x0000)
struct WBP_ReportPlayerEntry_C_SetStyle final
{
public:
	ETeamAttitude                                 Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6761[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable_1;                             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable_2;                             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ETeamAttitude                                 Temp_byte_Variable_1;                              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6762[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UCommonButtonStyle>         Temp_class_Variable_3;                             // 0x0028(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UCommonButtonStyle>         Temp_class_Variable_4;                             // 0x0030(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UCommonButtonStyle>         Temp_class_Variable_5;                             // 0x0038(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                 K2Node_Select_Default;                             // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UCommonButtonStyle>         K2Node_Select_Default_1;                           // 0x0048(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ReportPlayerEntry_C_SetStyle) == 0x000008, "Wrong alignment on WBP_ReportPlayerEntry_C_SetStyle");
static_assert(sizeof(WBP_ReportPlayerEntry_C_SetStyle) == 0x000050, "Wrong size on WBP_ReportPlayerEntry_C_SetStyle");
static_assert(offsetof(WBP_ReportPlayerEntry_C_SetStyle, Temp_byte_Variable) == 0x000000, "Member 'WBP_ReportPlayerEntry_C_SetStyle::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ReportPlayerEntry_C_SetStyle, Temp_class_Variable) == 0x000008, "Member 'WBP_ReportPlayerEntry_C_SetStyle::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ReportPlayerEntry_C_SetStyle, Temp_class_Variable_1) == 0x000010, "Member 'WBP_ReportPlayerEntry_C_SetStyle::Temp_class_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ReportPlayerEntry_C_SetStyle, Temp_class_Variable_2) == 0x000018, "Member 'WBP_ReportPlayerEntry_C_SetStyle::Temp_class_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_ReportPlayerEntry_C_SetStyle, Temp_byte_Variable_1) == 0x000020, "Member 'WBP_ReportPlayerEntry_C_SetStyle::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ReportPlayerEntry_C_SetStyle, Temp_class_Variable_3) == 0x000028, "Member 'WBP_ReportPlayerEntry_C_SetStyle::Temp_class_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_ReportPlayerEntry_C_SetStyle, Temp_class_Variable_4) == 0x000030, "Member 'WBP_ReportPlayerEntry_C_SetStyle::Temp_class_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_ReportPlayerEntry_C_SetStyle, Temp_class_Variable_5) == 0x000038, "Member 'WBP_ReportPlayerEntry_C_SetStyle::Temp_class_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_ReportPlayerEntry_C_SetStyle, K2Node_Select_Default) == 0x000040, "Member 'WBP_ReportPlayerEntry_C_SetStyle::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_ReportPlayerEntry_C_SetStyle, K2Node_Select_Default_1) == 0x000048, "Member 'WBP_ReportPlayerEntry_C_SetStyle::K2Node_Select_Default_1' has a wrong offset!");

}

