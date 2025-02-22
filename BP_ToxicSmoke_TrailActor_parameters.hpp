#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ToxicSmoke_TrailActor

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_ToxicSmoke_TrailActor.BP_ToxicSmoke_TrailActor_C.ExecuteUbergraph_BP_ToxicSmoke_TrailActor
// 0x0048 (0x0048 - 0x0000)
struct BP_ToxicSmoke_TrailActor_C_ExecuteUbergraph_BP_ToxicSmoke_TrailActor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D53[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_CustomEvent_TrailLifespan;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_ImpactLocation;                 // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_ImpactNormal;                   // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetLifeSpan_InLifespan_ImplicitCast;      // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ToxicSmoke_TrailActor_C_ExecuteUbergraph_BP_ToxicSmoke_TrailActor) == 0x000008, "Wrong alignment on BP_ToxicSmoke_TrailActor_C_ExecuteUbergraph_BP_ToxicSmoke_TrailActor");
static_assert(sizeof(BP_ToxicSmoke_TrailActor_C_ExecuteUbergraph_BP_ToxicSmoke_TrailActor) == 0x000048, "Wrong size on BP_ToxicSmoke_TrailActor_C_ExecuteUbergraph_BP_ToxicSmoke_TrailActor");
static_assert(offsetof(BP_ToxicSmoke_TrailActor_C_ExecuteUbergraph_BP_ToxicSmoke_TrailActor, EntryPoint) == 0x000000, "Member 'BP_ToxicSmoke_TrailActor_C_ExecuteUbergraph_BP_ToxicSmoke_TrailActor::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ToxicSmoke_TrailActor_C_ExecuteUbergraph_BP_ToxicSmoke_TrailActor, K2Node_CustomEvent_TrailLifespan) == 0x000008, "Member 'BP_ToxicSmoke_TrailActor_C_ExecuteUbergraph_BP_ToxicSmoke_TrailActor::K2Node_CustomEvent_TrailLifespan' has a wrong offset!");
static_assert(offsetof(BP_ToxicSmoke_TrailActor_C_ExecuteUbergraph_BP_ToxicSmoke_TrailActor, K2Node_CustomEvent_ImpactLocation) == 0x000010, "Member 'BP_ToxicSmoke_TrailActor_C_ExecuteUbergraph_BP_ToxicSmoke_TrailActor::K2Node_CustomEvent_ImpactLocation' has a wrong offset!");
static_assert(offsetof(BP_ToxicSmoke_TrailActor_C_ExecuteUbergraph_BP_ToxicSmoke_TrailActor, K2Node_CustomEvent_ImpactNormal) == 0x000028, "Member 'BP_ToxicSmoke_TrailActor_C_ExecuteUbergraph_BP_ToxicSmoke_TrailActor::K2Node_CustomEvent_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_ToxicSmoke_TrailActor_C_ExecuteUbergraph_BP_ToxicSmoke_TrailActor, CallFunc_SetLifeSpan_InLifespan_ImplicitCast) == 0x000040, "Member 'BP_ToxicSmoke_TrailActor_C_ExecuteUbergraph_BP_ToxicSmoke_TrailActor::CallFunc_SetLifeSpan_InLifespan_ImplicitCast' has a wrong offset!");

// Function BP_ToxicSmoke_TrailActor.BP_ToxicSmoke_TrailActor_C.Detach
// 0x0038 (0x0038 - 0x0000)
struct BP_ToxicSmoke_TrailActor_C_Detach final
{
public:
	double                                        TrailLifespan;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ImpactLocation;                                    // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ImpactNormal;                                      // 0x0020(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ToxicSmoke_TrailActor_C_Detach) == 0x000008, "Wrong alignment on BP_ToxicSmoke_TrailActor_C_Detach");
static_assert(sizeof(BP_ToxicSmoke_TrailActor_C_Detach) == 0x000038, "Wrong size on BP_ToxicSmoke_TrailActor_C_Detach");
static_assert(offsetof(BP_ToxicSmoke_TrailActor_C_Detach, TrailLifespan) == 0x000000, "Member 'BP_ToxicSmoke_TrailActor_C_Detach::TrailLifespan' has a wrong offset!");
static_assert(offsetof(BP_ToxicSmoke_TrailActor_C_Detach, ImpactLocation) == 0x000008, "Member 'BP_ToxicSmoke_TrailActor_C_Detach::ImpactLocation' has a wrong offset!");
static_assert(offsetof(BP_ToxicSmoke_TrailActor_C_Detach, ImpactNormal) == 0x000020, "Member 'BP_ToxicSmoke_TrailActor_C_Detach::ImpactNormal' has a wrong offset!");

}

