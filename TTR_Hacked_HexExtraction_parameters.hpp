#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TTR_Hacked_HexExtraction

#include "Basic.hpp"

#include "G01_structs.hpp"


namespace SDK::Params
{

// Function TTR_Hacked_HexExtraction.TTR_Hacked_HexExtraction_C.ExecuteUbergraph_TTR_Hacked_HexExtraction
// 0x0050 (0x0050 - 0x0000)
struct TTR_Hacked_HexExtraction_C_ExecuteUbergraph_TTR_Hacked_HexExtraction final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UGzGameMessage* Message)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1475[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UGzGameMessage*                   K2Node_CustomEvent_Message;                        // 0x0018(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGzGameModeSubsystem*                   CallFunc_GetSubsystem_OutSubsystem;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EGzGetSubsystemResult                         CallFunc_GetSubsystem_OutExecNodes;                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1476[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGzHexExtractionHackedMessage*          K2Node_DynamicCast_AsGz_Hex_Extraction_Hacked_Message; // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1477[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetHackedPlayerId_ReturnValue;            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGzGameMessageSubsystem*                K2Node_DynamicCast_AsGz_Game_Message_Subsystem;    // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TTR_Hacked_HexExtraction_C_ExecuteUbergraph_TTR_Hacked_HexExtraction) == 0x000008, "Wrong alignment on TTR_Hacked_HexExtraction_C_ExecuteUbergraph_TTR_Hacked_HexExtraction");
static_assert(sizeof(TTR_Hacked_HexExtraction_C_ExecuteUbergraph_TTR_Hacked_HexExtraction) == 0x000050, "Wrong size on TTR_Hacked_HexExtraction_C_ExecuteUbergraph_TTR_Hacked_HexExtraction");
static_assert(offsetof(TTR_Hacked_HexExtraction_C_ExecuteUbergraph_TTR_Hacked_HexExtraction, EntryPoint) == 0x000000, "Member 'TTR_Hacked_HexExtraction_C_ExecuteUbergraph_TTR_Hacked_HexExtraction::EntryPoint' has a wrong offset!");
static_assert(offsetof(TTR_Hacked_HexExtraction_C_ExecuteUbergraph_TTR_Hacked_HexExtraction, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'TTR_Hacked_HexExtraction_C_ExecuteUbergraph_TTR_Hacked_HexExtraction::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TTR_Hacked_HexExtraction_C_ExecuteUbergraph_TTR_Hacked_HexExtraction, K2Node_CustomEvent_Message) == 0x000018, "Member 'TTR_Hacked_HexExtraction_C_ExecuteUbergraph_TTR_Hacked_HexExtraction::K2Node_CustomEvent_Message' has a wrong offset!");
static_assert(offsetof(TTR_Hacked_HexExtraction_C_ExecuteUbergraph_TTR_Hacked_HexExtraction, CallFunc_GetSubsystem_OutSubsystem) == 0x000020, "Member 'TTR_Hacked_HexExtraction_C_ExecuteUbergraph_TTR_Hacked_HexExtraction::CallFunc_GetSubsystem_OutSubsystem' has a wrong offset!");
static_assert(offsetof(TTR_Hacked_HexExtraction_C_ExecuteUbergraph_TTR_Hacked_HexExtraction, CallFunc_GetSubsystem_OutExecNodes) == 0x000028, "Member 'TTR_Hacked_HexExtraction_C_ExecuteUbergraph_TTR_Hacked_HexExtraction::CallFunc_GetSubsystem_OutExecNodes' has a wrong offset!");
static_assert(offsetof(TTR_Hacked_HexExtraction_C_ExecuteUbergraph_TTR_Hacked_HexExtraction, K2Node_DynamicCast_AsGz_Hex_Extraction_Hacked_Message) == 0x000030, "Member 'TTR_Hacked_HexExtraction_C_ExecuteUbergraph_TTR_Hacked_HexExtraction::K2Node_DynamicCast_AsGz_Hex_Extraction_Hacked_Message' has a wrong offset!");
static_assert(offsetof(TTR_Hacked_HexExtraction_C_ExecuteUbergraph_TTR_Hacked_HexExtraction, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'TTR_Hacked_HexExtraction_C_ExecuteUbergraph_TTR_Hacked_HexExtraction::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TTR_Hacked_HexExtraction_C_ExecuteUbergraph_TTR_Hacked_HexExtraction, K2Node_SwitchEnum_CmpSuccess) == 0x000039, "Member 'TTR_Hacked_HexExtraction_C_ExecuteUbergraph_TTR_Hacked_HexExtraction::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(TTR_Hacked_HexExtraction_C_ExecuteUbergraph_TTR_Hacked_HexExtraction, CallFunc_GetHackedPlayerId_ReturnValue) == 0x00003C, "Member 'TTR_Hacked_HexExtraction_C_ExecuteUbergraph_TTR_Hacked_HexExtraction::CallFunc_GetHackedPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(TTR_Hacked_HexExtraction_C_ExecuteUbergraph_TTR_Hacked_HexExtraction, K2Node_DynamicCast_AsGz_Game_Message_Subsystem) == 0x000040, "Member 'TTR_Hacked_HexExtraction_C_ExecuteUbergraph_TTR_Hacked_HexExtraction::K2Node_DynamicCast_AsGz_Game_Message_Subsystem' has a wrong offset!");
static_assert(offsetof(TTR_Hacked_HexExtraction_C_ExecuteUbergraph_TTR_Hacked_HexExtraction, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'TTR_Hacked_HexExtraction_C_ExecuteUbergraph_TTR_Hacked_HexExtraction::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(TTR_Hacked_HexExtraction_C_ExecuteUbergraph_TTR_Hacked_HexExtraction, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000049, "Member 'TTR_Hacked_HexExtraction_C_ExecuteUbergraph_TTR_Hacked_HexExtraction::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function TTR_Hacked_HexExtraction.TTR_Hacked_HexExtraction_C.OnHexExtractionCompleted
// 0x0008 (0x0008 - 0x0000)
struct TTR_Hacked_HexExtraction_C_OnHexExtractionCompleted final
{
public:
	const class UGzGameMessage*                   Message;                                           // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TTR_Hacked_HexExtraction_C_OnHexExtractionCompleted) == 0x000008, "Wrong alignment on TTR_Hacked_HexExtraction_C_OnHexExtractionCompleted");
static_assert(sizeof(TTR_Hacked_HexExtraction_C_OnHexExtractionCompleted) == 0x000008, "Wrong size on TTR_Hacked_HexExtraction_C_OnHexExtractionCompleted");
static_assert(offsetof(TTR_Hacked_HexExtraction_C_OnHexExtractionCompleted, Message) == 0x000000, "Member 'TTR_Hacked_HexExtraction_C_OnHexExtractionCompleted::Message' has a wrong offset!");

}

