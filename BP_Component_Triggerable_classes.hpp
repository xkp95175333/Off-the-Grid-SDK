#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Component_Triggerable

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "BP_Enum_GroupEvaluationMode_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Component_Triggerable.BP_Component_Triggerable_C
// 0x0058 (0x0100 - 0x00A8)
class UBP_Component_Triggerable_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class AActor*>                         TriggerActors;                                     // 0x00B0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class UBP_Component_Trigger_C*>        ActivatedTriggers;                                 // 0x00C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	EBP_Enum_GroupEvaluationMode                  EvaluationMode;                                    // 0x00D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_665D[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Verified_Trigger_Actors;                           // 0x00D8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             Triggered;                                         // 0x00E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          HasTriggered;                                      // 0x00F8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                          Oneshot;                                           // 0x00F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void VerifyTriggerActors(TArray<class AActor*>& Array, TArray<class AActor*>* VerifiedTriggerActors);
	void Triggered__DelegateSignature();
	void Trigger();
	void ReceiveBeginPlay();
	void OnTriggerStateChange(class UBP_Component_Trigger_C* TriggerComp, bool Param_Triggered);
	void OnRep_HasTriggered();
	void GetTriggeredState(bool* Param_HasTriggered);
	void ExecuteUbergraph_BP_Component_Triggerable(int32 EntryPoint);
	void EvaluateGateCondition();
	void AddTriggerActor(class AActor* TriggerActor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Component_Triggerable_C">();
	}
	static class UBP_Component_Triggerable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Component_Triggerable_C>();
	}
};
static_assert(alignof(UBP_Component_Triggerable_C) == 0x000008, "Wrong alignment on UBP_Component_Triggerable_C");
static_assert(sizeof(UBP_Component_Triggerable_C) == 0x000100, "Wrong size on UBP_Component_Triggerable_C");
static_assert(offsetof(UBP_Component_Triggerable_C, UberGraphFrame) == 0x0000A8, "Member 'UBP_Component_Triggerable_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Component_Triggerable_C, TriggerActors) == 0x0000B0, "Member 'UBP_Component_Triggerable_C::TriggerActors' has a wrong offset!");
static_assert(offsetof(UBP_Component_Triggerable_C, ActivatedTriggers) == 0x0000C0, "Member 'UBP_Component_Triggerable_C::ActivatedTriggers' has a wrong offset!");
static_assert(offsetof(UBP_Component_Triggerable_C, EvaluationMode) == 0x0000D0, "Member 'UBP_Component_Triggerable_C::EvaluationMode' has a wrong offset!");
static_assert(offsetof(UBP_Component_Triggerable_C, Verified_Trigger_Actors) == 0x0000D8, "Member 'UBP_Component_Triggerable_C::Verified_Trigger_Actors' has a wrong offset!");
static_assert(offsetof(UBP_Component_Triggerable_C, Triggered) == 0x0000E8, "Member 'UBP_Component_Triggerable_C::Triggered' has a wrong offset!");
static_assert(offsetof(UBP_Component_Triggerable_C, HasTriggered) == 0x0000F8, "Member 'UBP_Component_Triggerable_C::HasTriggered' has a wrong offset!");
static_assert(offsetof(UBP_Component_Triggerable_C, Oneshot) == 0x0000F9, "Member 'UBP_Component_Triggerable_C::Oneshot' has a wrong offset!");

}

