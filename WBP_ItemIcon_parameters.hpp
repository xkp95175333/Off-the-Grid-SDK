#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ItemIcon

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_ItemIcon.WBP_ItemIcon_C.ExecuteUbergraph_WBP_ItemIcon
// 0x0018 (0x0018 - 0x0000)
struct WBP_ItemIcon_C_ExecuteUbergraph_WBP_ItemIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B29[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGzItemData*                            K2Node_Event_Item_Data;                            // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemIcon_C_ExecuteUbergraph_WBP_ItemIcon) == 0x000008, "Wrong alignment on WBP_ItemIcon_C_ExecuteUbergraph_WBP_ItemIcon");
static_assert(sizeof(WBP_ItemIcon_C_ExecuteUbergraph_WBP_ItemIcon) == 0x000018, "Wrong size on WBP_ItemIcon_C_ExecuteUbergraph_WBP_ItemIcon");
static_assert(offsetof(WBP_ItemIcon_C_ExecuteUbergraph_WBP_ItemIcon, EntryPoint) == 0x000000, "Member 'WBP_ItemIcon_C_ExecuteUbergraph_WBP_ItemIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ItemIcon_C_ExecuteUbergraph_WBP_ItemIcon, K2Node_Event_Item_Data) == 0x000008, "Member 'WBP_ItemIcon_C_ExecuteUbergraph_WBP_ItemIcon::K2Node_Event_Item_Data' has a wrong offset!");
static_assert(offsetof(WBP_ItemIcon_C_ExecuteUbergraph_WBP_ItemIcon, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_ItemIcon_C_ExecuteUbergraph_WBP_ItemIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_ItemIcon.WBP_ItemIcon_C.OnItemUpdated
// 0x0008 (0x0008 - 0x0000)
struct WBP_ItemIcon_C_OnItemUpdated final
{
public:
	class UGzItemData*                            Param_Item_Data;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemIcon_C_OnItemUpdated) == 0x000008, "Wrong alignment on WBP_ItemIcon_C_OnItemUpdated");
static_assert(sizeof(WBP_ItemIcon_C_OnItemUpdated) == 0x000008, "Wrong size on WBP_ItemIcon_C_OnItemUpdated");
static_assert(offsetof(WBP_ItemIcon_C_OnItemUpdated, Param_Item_Data) == 0x000000, "Member 'WBP_ItemIcon_C_OnItemUpdated::Param_Item_Data' has a wrong offset!");

}

