#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Cyberlimb_Spawner_Base

#include "Basic.hpp"

#include "BP_Cyberlimb_Spawner_Base_classes.hpp"
#include "BP_Cyberlimb_Spawner_Base_parameters.hpp"


namespace SDK
{

// Function BP_Cyberlimb_Spawner_Base.BP_Cyberlimb_Spawner_Base_C.ExecuteUbergraph_BP_Cyberlimb_Spawner_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Cyberlimb_Spawner_Base_C::ExecuteUbergraph_BP_Cyberlimb_Spawner_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cyberlimb_Spawner_Base_C", "ExecuteUbergraph_BP_Cyberlimb_Spawner_Base");

	Params::BP_Cyberlimb_Spawner_Base_C_ExecuteUbergraph_BP_Cyberlimb_Spawner_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Cyberlimb_Spawner_Base.BP_Cyberlimb_Spawner_Base_C.BndEvt__BP_Cyberlimb_Spawner_Base_InteractableComponent_K2Node_ComponentBoundEvent_0_GzOnInteract__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                           InteractedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGzInteractableComponent*         Interactable                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Cyberlimb_Spawner_Base_C::BndEvt__BP_Cyberlimb_Spawner_Base_InteractableComponent_K2Node_ComponentBoundEvent_0_GzOnInteract__DelegateSignature(class AActor* InteractedBy, const class UGzInteractableComponent* Interactable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cyberlimb_Spawner_Base_C", "BndEvt__BP_Cyberlimb_Spawner_Base_InteractableComponent_K2Node_ComponentBoundEvent_0_GzOnInteract__DelegateSignature");

	Params::BP_Cyberlimb_Spawner_Base_C_BndEvt__BP_Cyberlimb_Spawner_Base_InteractableComponent_K2Node_ComponentBoundEvent_0_GzOnInteract__DelegateSignature Parms{};

	Parms.InteractedBy = InteractedBy;
	Parms.Interactable = Interactable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Cyberlimb_Spawner_Base.BP_Cyberlimb_Spawner_Base_C.SetOpenedMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Cyberlimb_Spawner_Base_C::SetOpenedMaterials()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cyberlimb_Spawner_Base_C", "SetOpenedMaterials");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Cyberlimb_Spawner_Base.BP_Cyberlimb_Spawner_Base_C.SetInActiveMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Cyberlimb_Spawner_Base_C::SetInActiveMaterials()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cyberlimb_Spawner_Base_C", "SetInActiveMaterials");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Cyberlimb_Spawner_Base.BP_Cyberlimb_Spawner_Base_C.SetActiveMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Cyberlimb_Spawner_Base_C::SetActiveMaterials()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cyberlimb_Spawner_Base_C", "SetActiveMaterials");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Cyberlimb_Spawner_Base.BP_Cyberlimb_Spawner_Base_C.SetActive
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bActive                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMissionObjective*                Objective                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Cyberlimb_Spawner_Base_C::SetActive(bool bActive, class UMissionObjective* Objective)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cyberlimb_Spawner_Base_C", "SetActive");

	Params::BP_Cyberlimb_Spawner_Base_C_SetActive Parms{};

	Parms.bActive = bActive;
	Parms.Objective = Objective;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Cyberlimb_Spawner_Base.BP_Cyberlimb_Spawner_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Cyberlimb_Spawner_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cyberlimb_Spawner_Base_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Cyberlimb_Spawner_Base.BP_Cyberlimb_Spawner_Base_C.OnLooted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Cyberlimb_Spawner_Base_C::OnLooted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cyberlimb_Spawner_Base_C", "OnLooted__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Cyberlimb_Spawner_Base.BP_Cyberlimb_Spawner_Base_C.GetDefilerTargetType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EGzDefilerTargetType                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

EGzDefilerTargetType ABP_Cyberlimb_Spawner_Base_C::GetDefilerTargetType() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cyberlimb_Spawner_Base_C", "GetDefilerTargetType");

	Params::BP_Cyberlimb_Spawner_Base_C_GetDefilerTargetType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

