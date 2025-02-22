#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MissionStart_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_MissionStart_Base.BP_MissionStart_Base_C.UserConstructionScript
// 0x02F0 (0x02F0 - 0x0000)
struct BP_MissionStart_Base_C_UserConstructionScript final
{
public:
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0000(0x00F8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BFD[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_1;  // 0x0100(0x00F8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_2;  // 0x01F8(0x00F8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_MissionStart_Base_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_MissionStart_Base_C_UserConstructionScript");
static_assert(sizeof(BP_MissionStart_Base_C_UserConstructionScript) == 0x0002F0, "Wrong size on BP_MissionStart_Base_C_UserConstructionScript");
static_assert(offsetof(BP_MissionStart_Base_C_UserConstructionScript, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000000, "Member 'BP_MissionStart_Base_C_UserConstructionScript::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_MissionStart_Base_C_UserConstructionScript, K2Node_SwitchEnum_CmpSuccess) == 0x0000F8, "Member 'BP_MissionStart_Base_C_UserConstructionScript::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_MissionStart_Base_C_UserConstructionScript, CallFunc_K2_SetRelativeLocation_SweepHitResult_1) == 0x000100, "Member 'BP_MissionStart_Base_C_UserConstructionScript::CallFunc_K2_SetRelativeLocation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_MissionStart_Base_C_UserConstructionScript, CallFunc_K2_SetRelativeLocation_SweepHitResult_2) == 0x0001F8, "Member 'BP_MissionStart_Base_C_UserConstructionScript::CallFunc_K2_SetRelativeLocation_SweepHitResult_2' has a wrong offset!");

// Function BP_MissionStart_Base.BP_MissionStart_Base_C.SpawnMissionStarter
// 0x0008 (0x0008 - 0x0000)
struct BP_MissionStart_Base_C_SpawnMissionStarter final
{
public:
	class UGzMissionData*                         MissionData;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MissionStart_Base_C_SpawnMissionStarter) == 0x000008, "Wrong alignment on BP_MissionStart_Base_C_SpawnMissionStarter");
static_assert(sizeof(BP_MissionStart_Base_C_SpawnMissionStarter) == 0x000008, "Wrong size on BP_MissionStart_Base_C_SpawnMissionStarter");
static_assert(offsetof(BP_MissionStart_Base_C_SpawnMissionStarter, MissionData) == 0x000000, "Member 'BP_MissionStart_Base_C_SpawnMissionStarter::MissionData' has a wrong offset!");

// Function BP_MissionStart_Base.BP_MissionStart_Base_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_MissionStart_Base_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MissionStart_Base_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_MissionStart_Base_C_ReceiveEndPlay");
static_assert(sizeof(BP_MissionStart_Base_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_MissionStart_Base_C_ReceiveEndPlay");
static_assert(offsetof(BP_MissionStart_Base_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_MissionStart_Base_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_MissionStart_Base.BP_MissionStart_Base_C.ExecuteUbergraph_BP_MissionStart_Base
// 0x0018 (0x0018 - 0x0000)
struct BP_MissionStart_Base_C_ExecuteUbergraph_BP_MissionStart_Base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BFE[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UGzMissionData*                         K2Node_CustomEvent_MissionData;                    // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_CustomEvent_TimeToDestroy;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MissionStart_Base_C_ExecuteUbergraph_BP_MissionStart_Base) == 0x000008, "Wrong alignment on BP_MissionStart_Base_C_ExecuteUbergraph_BP_MissionStart_Base");
static_assert(sizeof(BP_MissionStart_Base_C_ExecuteUbergraph_BP_MissionStart_Base) == 0x000018, "Wrong size on BP_MissionStart_Base_C_ExecuteUbergraph_BP_MissionStart_Base");
static_assert(offsetof(BP_MissionStart_Base_C_ExecuteUbergraph_BP_MissionStart_Base, EntryPoint) == 0x000000, "Member 'BP_MissionStart_Base_C_ExecuteUbergraph_BP_MissionStart_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MissionStart_Base_C_ExecuteUbergraph_BP_MissionStart_Base, K2Node_Event_EndPlayReason) == 0x000004, "Member 'BP_MissionStart_Base_C_ExecuteUbergraph_BP_MissionStart_Base::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_MissionStart_Base_C_ExecuteUbergraph_BP_MissionStart_Base, CallFunc_IsValid_ReturnValue) == 0x000005, "Member 'BP_MissionStart_Base_C_ExecuteUbergraph_BP_MissionStart_Base::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MissionStart_Base_C_ExecuteUbergraph_BP_MissionStart_Base, K2Node_CustomEvent_MissionData) == 0x000008, "Member 'BP_MissionStart_Base_C_ExecuteUbergraph_BP_MissionStart_Base::K2Node_CustomEvent_MissionData' has a wrong offset!");
static_assert(offsetof(BP_MissionStart_Base_C_ExecuteUbergraph_BP_MissionStart_Base, K2Node_CustomEvent_TimeToDestroy) == 0x000010, "Member 'BP_MissionStart_Base_C_ExecuteUbergraph_BP_MissionStart_Base::K2Node_CustomEvent_TimeToDestroy' has a wrong offset!");

// Function BP_MissionStart_Base.BP_MissionStart_Base_C.DestroyWithTime
// 0x0008 (0x0008 - 0x0000)
struct BP_MissionStart_Base_C_DestroyWithTime final
{
public:
	double                                        TimeToDestroy;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MissionStart_Base_C_DestroyWithTime) == 0x000008, "Wrong alignment on BP_MissionStart_Base_C_DestroyWithTime");
static_assert(sizeof(BP_MissionStart_Base_C_DestroyWithTime) == 0x000008, "Wrong size on BP_MissionStart_Base_C_DestroyWithTime");
static_assert(offsetof(BP_MissionStart_Base_C_DestroyWithTime, TimeToDestroy) == 0x000000, "Member 'BP_MissionStart_Base_C_DestroyWithTime::TimeToDestroy' has a wrong offset!");

}

