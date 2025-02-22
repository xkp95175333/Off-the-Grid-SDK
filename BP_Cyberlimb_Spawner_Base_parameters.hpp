#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Cyberlimb_Spawner_Base

#include "Basic.hpp"

#include "G01_structs.hpp"


namespace SDK::Params
{

// Function BP_Cyberlimb_Spawner_Base.BP_Cyberlimb_Spawner_Base_C.ExecuteUbergraph_BP_Cyberlimb_Spawner_Base
// 0x0020 (0x0020 - 0x0000)
struct BP_Cyberlimb_Spawner_Base_C_ExecuteUbergraph_BP_Cyberlimb_Spawner_Base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bActive;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_67E9[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMissionObjective*                      K2Node_Event_Objective;                            // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_InteractedBy;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	const class UGzInteractableComponent*         K2Node_ComponentBoundEvent_Interactable;           // 0x0018(0x0008)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Cyberlimb_Spawner_Base_C_ExecuteUbergraph_BP_Cyberlimb_Spawner_Base) == 0x000008, "Wrong alignment on BP_Cyberlimb_Spawner_Base_C_ExecuteUbergraph_BP_Cyberlimb_Spawner_Base");
static_assert(sizeof(BP_Cyberlimb_Spawner_Base_C_ExecuteUbergraph_BP_Cyberlimb_Spawner_Base) == 0x000020, "Wrong size on BP_Cyberlimb_Spawner_Base_C_ExecuteUbergraph_BP_Cyberlimb_Spawner_Base");
static_assert(offsetof(BP_Cyberlimb_Spawner_Base_C_ExecuteUbergraph_BP_Cyberlimb_Spawner_Base, EntryPoint) == 0x000000, "Member 'BP_Cyberlimb_Spawner_Base_C_ExecuteUbergraph_BP_Cyberlimb_Spawner_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Cyberlimb_Spawner_Base_C_ExecuteUbergraph_BP_Cyberlimb_Spawner_Base, K2Node_Event_bActive) == 0x000004, "Member 'BP_Cyberlimb_Spawner_Base_C_ExecuteUbergraph_BP_Cyberlimb_Spawner_Base::K2Node_Event_bActive' has a wrong offset!");
static_assert(offsetof(BP_Cyberlimb_Spawner_Base_C_ExecuteUbergraph_BP_Cyberlimb_Spawner_Base, K2Node_Event_Objective) == 0x000008, "Member 'BP_Cyberlimb_Spawner_Base_C_ExecuteUbergraph_BP_Cyberlimb_Spawner_Base::K2Node_Event_Objective' has a wrong offset!");
static_assert(offsetof(BP_Cyberlimb_Spawner_Base_C_ExecuteUbergraph_BP_Cyberlimb_Spawner_Base, K2Node_ComponentBoundEvent_InteractedBy) == 0x000010, "Member 'BP_Cyberlimb_Spawner_Base_C_ExecuteUbergraph_BP_Cyberlimb_Spawner_Base::K2Node_ComponentBoundEvent_InteractedBy' has a wrong offset!");
static_assert(offsetof(BP_Cyberlimb_Spawner_Base_C_ExecuteUbergraph_BP_Cyberlimb_Spawner_Base, K2Node_ComponentBoundEvent_Interactable) == 0x000018, "Member 'BP_Cyberlimb_Spawner_Base_C_ExecuteUbergraph_BP_Cyberlimb_Spawner_Base::K2Node_ComponentBoundEvent_Interactable' has a wrong offset!");

// Function BP_Cyberlimb_Spawner_Base.BP_Cyberlimb_Spawner_Base_C.BndEvt__BP_Cyberlimb_Spawner_Base_InteractableComponent_K2Node_ComponentBoundEvent_0_GzOnInteract__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_Cyberlimb_Spawner_Base_C_BndEvt__BP_Cyberlimb_Spawner_Base_InteractableComponent_K2Node_ComponentBoundEvent_0_GzOnInteract__DelegateSignature final
{
public:
	class AActor*                                 InteractedBy;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	const class UGzInteractableComponent*         Interactable;                                      // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Cyberlimb_Spawner_Base_C_BndEvt__BP_Cyberlimb_Spawner_Base_InteractableComponent_K2Node_ComponentBoundEvent_0_GzOnInteract__DelegateSignature) == 0x000008, "Wrong alignment on BP_Cyberlimb_Spawner_Base_C_BndEvt__BP_Cyberlimb_Spawner_Base_InteractableComponent_K2Node_ComponentBoundEvent_0_GzOnInteract__DelegateSignature");
static_assert(sizeof(BP_Cyberlimb_Spawner_Base_C_BndEvt__BP_Cyberlimb_Spawner_Base_InteractableComponent_K2Node_ComponentBoundEvent_0_GzOnInteract__DelegateSignature) == 0x000010, "Wrong size on BP_Cyberlimb_Spawner_Base_C_BndEvt__BP_Cyberlimb_Spawner_Base_InteractableComponent_K2Node_ComponentBoundEvent_0_GzOnInteract__DelegateSignature");
static_assert(offsetof(BP_Cyberlimb_Spawner_Base_C_BndEvt__BP_Cyberlimb_Spawner_Base_InteractableComponent_K2Node_ComponentBoundEvent_0_GzOnInteract__DelegateSignature, InteractedBy) == 0x000000, "Member 'BP_Cyberlimb_Spawner_Base_C_BndEvt__BP_Cyberlimb_Spawner_Base_InteractableComponent_K2Node_ComponentBoundEvent_0_GzOnInteract__DelegateSignature::InteractedBy' has a wrong offset!");
static_assert(offsetof(BP_Cyberlimb_Spawner_Base_C_BndEvt__BP_Cyberlimb_Spawner_Base_InteractableComponent_K2Node_ComponentBoundEvent_0_GzOnInteract__DelegateSignature, Interactable) == 0x000008, "Member 'BP_Cyberlimb_Spawner_Base_C_BndEvt__BP_Cyberlimb_Spawner_Base_InteractableComponent_K2Node_ComponentBoundEvent_0_GzOnInteract__DelegateSignature::Interactable' has a wrong offset!");

// Function BP_Cyberlimb_Spawner_Base.BP_Cyberlimb_Spawner_Base_C.SetActive
// 0x0010 (0x0010 - 0x0000)
struct BP_Cyberlimb_Spawner_Base_C_SetActive final
{
public:
	bool                                          bActive;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_67EA[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMissionObjective*                      Objective;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Cyberlimb_Spawner_Base_C_SetActive) == 0x000008, "Wrong alignment on BP_Cyberlimb_Spawner_Base_C_SetActive");
static_assert(sizeof(BP_Cyberlimb_Spawner_Base_C_SetActive) == 0x000010, "Wrong size on BP_Cyberlimb_Spawner_Base_C_SetActive");
static_assert(offsetof(BP_Cyberlimb_Spawner_Base_C_SetActive, bActive) == 0x000000, "Member 'BP_Cyberlimb_Spawner_Base_C_SetActive::bActive' has a wrong offset!");
static_assert(offsetof(BP_Cyberlimb_Spawner_Base_C_SetActive, Objective) == 0x000008, "Member 'BP_Cyberlimb_Spawner_Base_C_SetActive::Objective' has a wrong offset!");

// Function BP_Cyberlimb_Spawner_Base.BP_Cyberlimb_Spawner_Base_C.GetDefilerTargetType
// 0x0001 (0x0001 - 0x0000)
struct BP_Cyberlimb_Spawner_Base_C_GetDefilerTargetType final
{
public:
	EGzDefilerTargetType                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Cyberlimb_Spawner_Base_C_GetDefilerTargetType) == 0x000001, "Wrong alignment on BP_Cyberlimb_Spawner_Base_C_GetDefilerTargetType");
static_assert(sizeof(BP_Cyberlimb_Spawner_Base_C_GetDefilerTargetType) == 0x000001, "Wrong size on BP_Cyberlimb_Spawner_Base_C_GetDefilerTargetType");
static_assert(offsetof(BP_Cyberlimb_Spawner_Base_C_GetDefilerTargetType, ReturnValue) == 0x000000, "Member 'BP_Cyberlimb_Spawner_Base_C_GetDefilerTargetType::ReturnValue' has a wrong offset!");

}

