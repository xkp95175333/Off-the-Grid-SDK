#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SpawnPlatformTarget

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_SpawnPlatformTarget.BP_SpawnPlatformTarget_C.GetZoneName
// 0x0050 (0x0050 - 0x0000)
struct BP_SpawnPlatformTarget_C_GetZoneName final
{
public:
	class FName                                   ZoneName;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69F1[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UGzWorldZonesSubsystem*                 CallFunc_GetWorldSubsystem_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69F2[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetZoneName_ReturnValue;                  // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default;                             // 0x0044(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SpawnPlatformTarget_C_GetZoneName) == 0x000008, "Wrong alignment on BP_SpawnPlatformTarget_C_GetZoneName");
static_assert(sizeof(BP_SpawnPlatformTarget_C_GetZoneName) == 0x000050, "Wrong size on BP_SpawnPlatformTarget_C_GetZoneName");
static_assert(offsetof(BP_SpawnPlatformTarget_C_GetZoneName, ZoneName) == 0x000000, "Member 'BP_SpawnPlatformTarget_C_GetZoneName::ZoneName' has a wrong offset!");
static_assert(offsetof(BP_SpawnPlatformTarget_C_GetZoneName, Temp_name_Variable) == 0x000008, "Member 'BP_SpawnPlatformTarget_C_GetZoneName::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BP_SpawnPlatformTarget_C_GetZoneName, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_SpawnPlatformTarget_C_GetZoneName::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpawnPlatformTarget_C_GetZoneName, Temp_bool_Variable) == 0x000011, "Member 'BP_SpawnPlatformTarget_C_GetZoneName::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_SpawnPlatformTarget_C_GetZoneName, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000018, "Member 'BP_SpawnPlatformTarget_C_GetZoneName::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpawnPlatformTarget_C_GetZoneName, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000020, "Member 'BP_SpawnPlatformTarget_C_GetZoneName::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpawnPlatformTarget_C_GetZoneName, CallFunc_IsValid_ReturnValue_1) == 0x000038, "Member 'BP_SpawnPlatformTarget_C_GetZoneName::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SpawnPlatformTarget_C_GetZoneName, CallFunc_GetZoneName_ReturnValue) == 0x00003C, "Member 'BP_SpawnPlatformTarget_C_GetZoneName::CallFunc_GetZoneName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpawnPlatformTarget_C_GetZoneName, K2Node_Select_Default) == 0x000044, "Member 'BP_SpawnPlatformTarget_C_GetZoneName::K2Node_Select_Default' has a wrong offset!");

// Function BP_SpawnPlatformTarget.BP_SpawnPlatformTarget_C.UserConstructionScript
// 0x00D0 (0x00D0 - 0x0000)
struct BP_SpawnPlatformTarget_C_UserConstructionScript final
{
public:
	class FText                                   ZoneName;                                          // 0x0000(0x0010)(Edit, BlueprintVisible)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69F3[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0018(0x0010)()
	class FName                                   CallFunc_GetZoneName_ZoneName;                     // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0030(0x0010)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0040(0x0048)(HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69F4[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0090(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00A0(0x0010)()
	class FText                                   K2Node_Select_Default;                             // 0x00B0(0x0010)()
	struct FColor                                 K2Node_MakeStruct_Color;                           // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 K2Node_MakeStruct_Color_1;                         // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 K2Node_Select_Default_1;                           // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SpawnPlatformTarget_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_SpawnPlatformTarget_C_UserConstructionScript");
static_assert(sizeof(BP_SpawnPlatformTarget_C_UserConstructionScript) == 0x0000D0, "Wrong size on BP_SpawnPlatformTarget_C_UserConstructionScript");
static_assert(offsetof(BP_SpawnPlatformTarget_C_UserConstructionScript, ZoneName) == 0x000000, "Member 'BP_SpawnPlatformTarget_C_UserConstructionScript::ZoneName' has a wrong offset!");
static_assert(offsetof(BP_SpawnPlatformTarget_C_UserConstructionScript, Temp_bool_Variable) == 0x000010, "Member 'BP_SpawnPlatformTarget_C_UserConstructionScript::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_SpawnPlatformTarget_C_UserConstructionScript, Temp_bool_Variable_1) == 0x000011, "Member 'BP_SpawnPlatformTarget_C_UserConstructionScript::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SpawnPlatformTarget_C_UserConstructionScript, Temp_text_Variable) == 0x000018, "Member 'BP_SpawnPlatformTarget_C_UserConstructionScript::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(BP_SpawnPlatformTarget_C_UserConstructionScript, CallFunc_GetZoneName_ZoneName) == 0x000028, "Member 'BP_SpawnPlatformTarget_C_UserConstructionScript::CallFunc_GetZoneName_ZoneName' has a wrong offset!");
static_assert(offsetof(BP_SpawnPlatformTarget_C_UserConstructionScript, CallFunc_Conv_NameToText_ReturnValue) == 0x000030, "Member 'BP_SpawnPlatformTarget_C_UserConstructionScript::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpawnPlatformTarget_C_UserConstructionScript, K2Node_MakeStruct_FormatArgumentData) == 0x000040, "Member 'BP_SpawnPlatformTarget_C_UserConstructionScript::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_SpawnPlatformTarget_C_UserConstructionScript, CallFunc_TextIsEmpty_ReturnValue) == 0x000088, "Member 'BP_SpawnPlatformTarget_C_UserConstructionScript::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpawnPlatformTarget_C_UserConstructionScript, K2Node_MakeArray_Array) == 0x000090, "Member 'BP_SpawnPlatformTarget_C_UserConstructionScript::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_SpawnPlatformTarget_C_UserConstructionScript, CallFunc_Format_ReturnValue) == 0x0000A0, "Member 'BP_SpawnPlatformTarget_C_UserConstructionScript::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpawnPlatformTarget_C_UserConstructionScript, K2Node_Select_Default) == 0x0000B0, "Member 'BP_SpawnPlatformTarget_C_UserConstructionScript::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_SpawnPlatformTarget_C_UserConstructionScript, K2Node_MakeStruct_Color) == 0x0000C0, "Member 'BP_SpawnPlatformTarget_C_UserConstructionScript::K2Node_MakeStruct_Color' has a wrong offset!");
static_assert(offsetof(BP_SpawnPlatformTarget_C_UserConstructionScript, K2Node_MakeStruct_Color_1) == 0x0000C4, "Member 'BP_SpawnPlatformTarget_C_UserConstructionScript::K2Node_MakeStruct_Color_1' has a wrong offset!");
static_assert(offsetof(BP_SpawnPlatformTarget_C_UserConstructionScript, K2Node_Select_Default_1) == 0x0000C8, "Member 'BP_SpawnPlatformTarget_C_UserConstructionScript::K2Node_Select_Default_1' has a wrong offset!");

}

