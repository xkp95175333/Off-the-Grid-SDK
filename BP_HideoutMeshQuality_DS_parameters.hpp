#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HideoutMeshQuality_DS

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_HideoutMeshQuality_DS.BP_HideoutMeshQuality_DS_C.ExecuteUbergraph_BP_HideoutMeshQuality_DS
// 0x0028 (0x0028 - 0x0000)
struct BP_HideoutMeshQuality_DS_C_ExecuteUbergraph_BP_HideoutMeshQuality_DS final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50C9[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Event_NewValue;                             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UGzGameUserSettings*                    CallFunc_GetUserSettings_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HideoutMeshQuality_DS_C_ExecuteUbergraph_BP_HideoutMeshQuality_DS) == 0x000008, "Wrong alignment on BP_HideoutMeshQuality_DS_C_ExecuteUbergraph_BP_HideoutMeshQuality_DS");
static_assert(sizeof(BP_HideoutMeshQuality_DS_C_ExecuteUbergraph_BP_HideoutMeshQuality_DS) == 0x000028, "Wrong size on BP_HideoutMeshQuality_DS_C_ExecuteUbergraph_BP_HideoutMeshQuality_DS");
static_assert(offsetof(BP_HideoutMeshQuality_DS_C_ExecuteUbergraph_BP_HideoutMeshQuality_DS, EntryPoint) == 0x000000, "Member 'BP_HideoutMeshQuality_DS_C_ExecuteUbergraph_BP_HideoutMeshQuality_DS::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_HideoutMeshQuality_DS_C_ExecuteUbergraph_BP_HideoutMeshQuality_DS, K2Node_Event_NewValue) == 0x000008, "Member 'BP_HideoutMeshQuality_DS_C_ExecuteUbergraph_BP_HideoutMeshQuality_DS::K2Node_Event_NewValue' has a wrong offset!");
static_assert(offsetof(BP_HideoutMeshQuality_DS_C_ExecuteUbergraph_BP_HideoutMeshQuality_DS, CallFunc_GetUserSettings_ReturnValue) == 0x000018, "Member 'BP_HideoutMeshQuality_DS_C_ExecuteUbergraph_BP_HideoutMeshQuality_DS::CallFunc_GetUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HideoutMeshQuality_DS_C_ExecuteUbergraph_BP_HideoutMeshQuality_DS, CallFunc_Array_Find_ReturnValue) == 0x000020, "Member 'BP_HideoutMeshQuality_DS_C_ExecuteUbergraph_BP_HideoutMeshQuality_DS::CallFunc_Array_Find_ReturnValue' has a wrong offset!");

// Function BP_HideoutMeshQuality_DS.BP_HideoutMeshQuality_DS_C.GetValue
// 0x0020 (0x0020 - 0x0000)
struct BP_HideoutMeshQuality_DS_C_GetValue final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class UGzGameUserSettings*                    CallFunc_GetUserSettings_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetHideoutMeshMinLODQuality_ReturnValue;  // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HideoutMeshQuality_DS_C_GetValue) == 0x000008, "Wrong alignment on BP_HideoutMeshQuality_DS_C_GetValue");
static_assert(sizeof(BP_HideoutMeshQuality_DS_C_GetValue) == 0x000020, "Wrong size on BP_HideoutMeshQuality_DS_C_GetValue");
static_assert(offsetof(BP_HideoutMeshQuality_DS_C_GetValue, ReturnValue) == 0x000000, "Member 'BP_HideoutMeshQuality_DS_C_GetValue::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HideoutMeshQuality_DS_C_GetValue, CallFunc_GetUserSettings_ReturnValue) == 0x000010, "Member 'BP_HideoutMeshQuality_DS_C_GetValue::CallFunc_GetUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HideoutMeshQuality_DS_C_GetValue, CallFunc_GetHideoutMeshMinLODQuality_ReturnValue) == 0x000018, "Member 'BP_HideoutMeshQuality_DS_C_GetValue::CallFunc_GetHideoutMeshMinLODQuality_ReturnValue' has a wrong offset!");

// Function BP_HideoutMeshQuality_DS.BP_HideoutMeshQuality_DS_C.SetValue
// 0x0010 (0x0010 - 0x0000)
struct BP_HideoutMeshQuality_DS_C_SetValue final
{
public:
	class FString                                 NewValue;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HideoutMeshQuality_DS_C_SetValue) == 0x000008, "Wrong alignment on BP_HideoutMeshQuality_DS_C_SetValue");
static_assert(sizeof(BP_HideoutMeshQuality_DS_C_SetValue) == 0x000010, "Wrong size on BP_HideoutMeshQuality_DS_C_SetValue");
static_assert(offsetof(BP_HideoutMeshQuality_DS_C_SetValue, NewValue) == 0x000000, "Member 'BP_HideoutMeshQuality_DS_C_SetValue::NewValue' has a wrong offset!");

}

