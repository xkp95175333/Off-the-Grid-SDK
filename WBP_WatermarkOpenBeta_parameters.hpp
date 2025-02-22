#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_WatermarkOpenBeta

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_WatermarkOpenBeta.WBP_WatermarkOpenBeta_C.ExecuteUbergraph_WBP_WatermarkOpenBeta
// 0x0078 (0x0078 - 0x0000)
struct WBP_WatermarkOpenBeta_C_ExecuteUbergraph_WBP_WatermarkOpenBeta final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6EAF[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0018(0x0010)()
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0028(0x0010)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0038(0x0010)(ReferenceParm)
	class FString                                 K2Node_Event_InWord;                               // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0058(0x0010)()
	class FText                                   CallFunc_TextToUpper_ReturnValue_1;                // 0x0068(0x0010)()
};
static_assert(alignof(WBP_WatermarkOpenBeta_C_ExecuteUbergraph_WBP_WatermarkOpenBeta) == 0x000008, "Wrong alignment on WBP_WatermarkOpenBeta_C_ExecuteUbergraph_WBP_WatermarkOpenBeta");
static_assert(sizeof(WBP_WatermarkOpenBeta_C_ExecuteUbergraph_WBP_WatermarkOpenBeta) == 0x000078, "Wrong size on WBP_WatermarkOpenBeta_C_ExecuteUbergraph_WBP_WatermarkOpenBeta");
static_assert(offsetof(WBP_WatermarkOpenBeta_C_ExecuteUbergraph_WBP_WatermarkOpenBeta, EntryPoint) == 0x000000, "Member 'WBP_WatermarkOpenBeta_C_ExecuteUbergraph_WBP_WatermarkOpenBeta::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_WatermarkOpenBeta_C_ExecuteUbergraph_WBP_WatermarkOpenBeta, K2Node_MakeArray_Array) == 0x000008, "Member 'WBP_WatermarkOpenBeta_C_ExecuteUbergraph_WBP_WatermarkOpenBeta::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_WatermarkOpenBeta_C_ExecuteUbergraph_WBP_WatermarkOpenBeta, CallFunc_Format_ReturnValue) == 0x000018, "Member 'WBP_WatermarkOpenBeta_C_ExecuteUbergraph_WBP_WatermarkOpenBeta::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_WatermarkOpenBeta_C_ExecuteUbergraph_WBP_WatermarkOpenBeta, CallFunc_TextToUpper_ReturnValue) == 0x000028, "Member 'WBP_WatermarkOpenBeta_C_ExecuteUbergraph_WBP_WatermarkOpenBeta::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_WatermarkOpenBeta_C_ExecuteUbergraph_WBP_WatermarkOpenBeta, K2Node_MakeArray_Array_1) == 0x000038, "Member 'WBP_WatermarkOpenBeta_C_ExecuteUbergraph_WBP_WatermarkOpenBeta::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_WatermarkOpenBeta_C_ExecuteUbergraph_WBP_WatermarkOpenBeta, K2Node_Event_InWord) == 0x000048, "Member 'WBP_WatermarkOpenBeta_C_ExecuteUbergraph_WBP_WatermarkOpenBeta::K2Node_Event_InWord' has a wrong offset!");
static_assert(offsetof(WBP_WatermarkOpenBeta_C_ExecuteUbergraph_WBP_WatermarkOpenBeta, CallFunc_Format_ReturnValue_1) == 0x000058, "Member 'WBP_WatermarkOpenBeta_C_ExecuteUbergraph_WBP_WatermarkOpenBeta::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_WatermarkOpenBeta_C_ExecuteUbergraph_WBP_WatermarkOpenBeta, CallFunc_TextToUpper_ReturnValue_1) == 0x000068, "Member 'WBP_WatermarkOpenBeta_C_ExecuteUbergraph_WBP_WatermarkOpenBeta::CallFunc_TextToUpper_ReturnValue_1' has a wrong offset!");

// Function WBP_WatermarkOpenBeta.WBP_WatermarkOpenBeta_C.SetWaterMarkRepeatWord
// 0x0010 (0x0010 - 0x0000)
struct WBP_WatermarkOpenBeta_C_SetWaterMarkRepeatWord final
{
public:
	class FString                                 InWord;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_WatermarkOpenBeta_C_SetWaterMarkRepeatWord) == 0x000008, "Wrong alignment on WBP_WatermarkOpenBeta_C_SetWaterMarkRepeatWord");
static_assert(sizeof(WBP_WatermarkOpenBeta_C_SetWaterMarkRepeatWord) == 0x000010, "Wrong size on WBP_WatermarkOpenBeta_C_SetWaterMarkRepeatWord");
static_assert(offsetof(WBP_WatermarkOpenBeta_C_SetWaterMarkRepeatWord, InWord) == 0x000000, "Member 'WBP_WatermarkOpenBeta_C_SetWaterMarkRepeatWord::InWord' has a wrong offset!");

}

