#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LoadoutSelection_Loadout_GridView_Rarity

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "G01_structs.hpp"


namespace SDK::Params
{

// Function WBP_LoadoutSelection_Loadout_GridView_Rarity.WBP_LoadoutSelection_Loadout_GridView_Rarity_C.Load_Slots
// 0x0130 (0x0130 - 0x0000)
struct WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots final
{
public:
	struct FGzLoadoutDataConfig                   LoadoutConfig;                                     // 0x0000(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61D9[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EGzLoadoutSlots, struct FGzInvItem>      CallFunc_GetLoadoutItemsForSlotsFromConfig_ReturnValue; // 0x0078(0x0050)()
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGzLoadoutSlots                               CallFunc_Array_Get_Item;                           // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61DA[0x3];                                     // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGzInvItem                             CallFunc_Map_Find_Value;                           // 0x00D0(0x0010)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61DB[0x3];                                     // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGzItemData*                            CallFunc_GetItemData_ReturnValue;                  // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61DC[0x3];                                     // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_GetRarityColor_ReturnValue;               // 0x00F4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61DD[0x3];                                     // 0x0109(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0110(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61DE[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 K2Node_DynamicCast_AsImage;                        // 0x0120(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots) == 0x000008, "Wrong alignment on WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots");
static_assert(sizeof(WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots) == 0x000130, "Wrong size on WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots");
static_assert(offsetof(WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots, LoadoutConfig) == 0x000000, "Member 'WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots::LoadoutConfig' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots, Temp_int_Array_Index_Variable) == 0x000070, "Member 'WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots, CallFunc_GetLoadoutItemsForSlotsFromConfig_ReturnValue) == 0x000078, "Member 'WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots::CallFunc_GetLoadoutItemsForSlotsFromConfig_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots, Temp_int_Loop_Counter_Variable) == 0x0000C8, "Member 'WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots, CallFunc_Array_Get_Item) == 0x0000CC, "Member 'WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots, CallFunc_Map_Find_Value) == 0x0000D0, "Member 'WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots, CallFunc_Map_Find_ReturnValue) == 0x0000E0, "Member 'WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots, CallFunc_Add_IntInt_ReturnValue) == 0x0000E4, "Member 'WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots, CallFunc_GetItemData_ReturnValue) == 0x0000E8, "Member 'WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots::CallFunc_GetItemData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots, CallFunc_IsValid_ReturnValue) == 0x0000F0, "Member 'WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots, CallFunc_GetRarityColor_ReturnValue) == 0x0000F4, "Member 'WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots::CallFunc_GetRarityColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots, CallFunc_Array_Length_ReturnValue) == 0x000104, "Member 'WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots, CallFunc_Less_IntInt_ReturnValue) == 0x000108, "Member 'WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots, CallFunc_GetChildrenCount_ReturnValue) == 0x00010C, "Member 'WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots, CallFunc_GetChildAt_ReturnValue) == 0x000110, "Member 'WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots, CallFunc_Less_IntInt_ReturnValue_1) == 0x000118, "Member 'WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots, K2Node_DynamicCast_AsImage) == 0x000120, "Member 'WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots::K2Node_DynamicCast_AsImage' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots, K2Node_DynamicCast_bSuccess) == 0x000128, "Member 'WBP_LoadoutSelection_Loadout_GridView_Rarity_C_Load_Slots::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

