#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SquadInfoInventorySlot

#include "Basic.hpp"

#include "G01_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_SquadInfoInventorySlot.WBP_SquadInfoInventorySlot_C.ExecuteUbergraph_WBP_SquadInfoInventorySlot
// 0x0070 (0x0070 - 0x0000)
struct WBP_SquadInfoInventorySlot_C_ExecuteUbergraph_WBP_SquadInfoInventorySlot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C02[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0008(0x0048)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0050(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0060(0x0010)()
};
static_assert(alignof(WBP_SquadInfoInventorySlot_C_ExecuteUbergraph_WBP_SquadInfoInventorySlot) == 0x000008, "Wrong alignment on WBP_SquadInfoInventorySlot_C_ExecuteUbergraph_WBP_SquadInfoInventorySlot");
static_assert(sizeof(WBP_SquadInfoInventorySlot_C_ExecuteUbergraph_WBP_SquadInfoInventorySlot) == 0x000070, "Wrong size on WBP_SquadInfoInventorySlot_C_ExecuteUbergraph_WBP_SquadInfoInventorySlot");
static_assert(offsetof(WBP_SquadInfoInventorySlot_C_ExecuteUbergraph_WBP_SquadInfoInventorySlot, EntryPoint) == 0x000000, "Member 'WBP_SquadInfoInventorySlot_C_ExecuteUbergraph_WBP_SquadInfoInventorySlot::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_SquadInfoInventorySlot_C_ExecuteUbergraph_WBP_SquadInfoInventorySlot, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_SquadInfoInventorySlot_C_ExecuteUbergraph_WBP_SquadInfoInventorySlot::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_SquadInfoInventorySlot_C_ExecuteUbergraph_WBP_SquadInfoInventorySlot, K2Node_MakeStruct_FormatArgumentData) == 0x000008, "Member 'WBP_SquadInfoInventorySlot_C_ExecuteUbergraph_WBP_SquadInfoInventorySlot::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_SquadInfoInventorySlot_C_ExecuteUbergraph_WBP_SquadInfoInventorySlot, K2Node_MakeArray_Array) == 0x000050, "Member 'WBP_SquadInfoInventorySlot_C_ExecuteUbergraph_WBP_SquadInfoInventorySlot::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_SquadInfoInventorySlot_C_ExecuteUbergraph_WBP_SquadInfoInventorySlot, CallFunc_Format_ReturnValue) == 0x000060, "Member 'WBP_SquadInfoInventorySlot_C_ExecuteUbergraph_WBP_SquadInfoInventorySlot::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WBP_SquadInfoInventorySlot.WBP_SquadInfoInventorySlot_C.GetItemData
// 0x0058 (0x0058 - 0x0000)
struct WBP_SquadInfoInventorySlot_C_GetItemData final
{
public:
	class UGzItemData*                            ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetPawn_ReturnValue;                      // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGzPlayerCharacter*                     K2Node_DynamicCast_AsGz_Player_Character;          // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C03[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGzInvComponent*                        CallFunc_GetInventoryComponent_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGzInvPocket                           CallFunc_GetPocketBySlot_ReturnValue;              // 0x0028(0x0028)(ConstParm)
	class UGzItemData*                            CallFunc_GetItemData_ReturnValue;                  // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SquadInfoInventorySlot_C_GetItemData) == 0x000008, "Wrong alignment on WBP_SquadInfoInventorySlot_C_GetItemData");
static_assert(sizeof(WBP_SquadInfoInventorySlot_C_GetItemData) == 0x000058, "Wrong size on WBP_SquadInfoInventorySlot_C_GetItemData");
static_assert(offsetof(WBP_SquadInfoInventorySlot_C_GetItemData, ReturnValue) == 0x000000, "Member 'WBP_SquadInfoInventorySlot_C_GetItemData::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SquadInfoInventorySlot_C_GetItemData, CallFunc_GetPawn_ReturnValue) == 0x000008, "Member 'WBP_SquadInfoInventorySlot_C_GetItemData::CallFunc_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SquadInfoInventorySlot_C_GetItemData, K2Node_DynamicCast_AsGz_Player_Character) == 0x000010, "Member 'WBP_SquadInfoInventorySlot_C_GetItemData::K2Node_DynamicCast_AsGz_Player_Character' has a wrong offset!");
static_assert(offsetof(WBP_SquadInfoInventorySlot_C_GetItemData, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_SquadInfoInventorySlot_C_GetItemData::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_SquadInfoInventorySlot_C_GetItemData, CallFunc_GetInventoryComponent_ReturnValue) == 0x000020, "Member 'WBP_SquadInfoInventorySlot_C_GetItemData::CallFunc_GetInventoryComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SquadInfoInventorySlot_C_GetItemData, CallFunc_GetPocketBySlot_ReturnValue) == 0x000028, "Member 'WBP_SquadInfoInventorySlot_C_GetItemData::CallFunc_GetPocketBySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SquadInfoInventorySlot_C_GetItemData, CallFunc_GetItemData_ReturnValue) == 0x000050, "Member 'WBP_SquadInfoInventorySlot_C_GetItemData::CallFunc_GetItemData_ReturnValue' has a wrong offset!");

// Function WBP_SquadInfoInventorySlot.WBP_SquadInfoInventorySlot_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_SquadInfoInventorySlot_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SquadInfoInventorySlot_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_SquadInfoInventorySlot_C_PreConstruct");
static_assert(sizeof(WBP_SquadInfoInventorySlot_C_PreConstruct) == 0x000001, "Wrong size on WBP_SquadInfoInventorySlot_C_PreConstruct");
static_assert(offsetof(WBP_SquadInfoInventorySlot_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_SquadInfoInventorySlot_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_SquadInfoInventorySlot.WBP_SquadInfoInventorySlot_C.UpdateItem
// 0x0040 (0x0040 - 0x0000)
struct WBP_SquadInfoInventorySlot_C_UpdateItem final
{
public:
	class UGzItemData*                            ItemData;                                          // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGzWeaponItemData*                      K2Node_DynamicCast_AsGz_Weapon_Item_Data;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C04[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetAmmoTypeImage_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGzItemData*                            CallFunc_GetItemData_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C05[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_GetRarityColor_ReturnValue;               // 0x002C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SquadInfoInventorySlot_C_UpdateItem) == 0x000008, "Wrong alignment on WBP_SquadInfoInventorySlot_C_UpdateItem");
static_assert(sizeof(WBP_SquadInfoInventorySlot_C_UpdateItem) == 0x000040, "Wrong size on WBP_SquadInfoInventorySlot_C_UpdateItem");
static_assert(offsetof(WBP_SquadInfoInventorySlot_C_UpdateItem, ItemData) == 0x000000, "Member 'WBP_SquadInfoInventorySlot_C_UpdateItem::ItemData' has a wrong offset!");
static_assert(offsetof(WBP_SquadInfoInventorySlot_C_UpdateItem, K2Node_DynamicCast_AsGz_Weapon_Item_Data) == 0x000008, "Member 'WBP_SquadInfoInventorySlot_C_UpdateItem::K2Node_DynamicCast_AsGz_Weapon_Item_Data' has a wrong offset!");
static_assert(offsetof(WBP_SquadInfoInventorySlot_C_UpdateItem, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'WBP_SquadInfoInventorySlot_C_UpdateItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_SquadInfoInventorySlot_C_UpdateItem, CallFunc_GetAmmoTypeImage_ReturnValue) == 0x000018, "Member 'WBP_SquadInfoInventorySlot_C_UpdateItem::CallFunc_GetAmmoTypeImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SquadInfoInventorySlot_C_UpdateItem, CallFunc_GetItemData_ReturnValue) == 0x000020, "Member 'WBP_SquadInfoInventorySlot_C_UpdateItem::CallFunc_GetItemData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SquadInfoInventorySlot_C_UpdateItem, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'WBP_SquadInfoInventorySlot_C_UpdateItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SquadInfoInventorySlot_C_UpdateItem, CallFunc_GetRarityColor_ReturnValue) == 0x00002C, "Member 'WBP_SquadInfoInventorySlot_C_UpdateItem::CallFunc_GetRarityColor_ReturnValue' has a wrong offset!");

}

