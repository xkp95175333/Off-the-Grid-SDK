#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_AT_LMG02_GRP

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ABP_AT_LMG02_GRP.ABP_AT_LMG02_GRP_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_AT_LMG02_GRP_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_AT_LMG02_GRP_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_AT_LMG02_GRP_C_AnimGraph");
static_assert(sizeof(ABP_AT_LMG02_GRP_C_AnimGraph) == 0x000010, "Wrong size on ABP_AT_LMG02_GRP_C_AnimGraph");
static_assert(offsetof(ABP_AT_LMG02_GRP_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'ABP_AT_LMG02_GRP_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function ABP_AT_LMG02_GRP.ABP_AT_LMG02_GRP_C.ExecuteUbergraph_ABP_AT_LMG02_GRP
// 0x0004 (0x0004 - 0x0000)
struct ABP_AT_LMG02_GRP_C_ExecuteUbergraph_ABP_AT_LMG02_GRP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_AT_LMG02_GRP_C_ExecuteUbergraph_ABP_AT_LMG02_GRP) == 0x000004, "Wrong alignment on ABP_AT_LMG02_GRP_C_ExecuteUbergraph_ABP_AT_LMG02_GRP");
static_assert(sizeof(ABP_AT_LMG02_GRP_C_ExecuteUbergraph_ABP_AT_LMG02_GRP) == 0x000004, "Wrong size on ABP_AT_LMG02_GRP_C_ExecuteUbergraph_ABP_AT_LMG02_GRP");
static_assert(offsetof(ABP_AT_LMG02_GRP_C_ExecuteUbergraph_ABP_AT_LMG02_GRP, EntryPoint) == 0x000000, "Member 'ABP_AT_LMG02_GRP_C_ExecuteUbergraph_ABP_AT_LMG02_GRP::EntryPoint' has a wrong offset!");

}

