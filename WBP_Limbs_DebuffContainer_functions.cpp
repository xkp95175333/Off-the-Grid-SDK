#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Limbs_DebuffContainer

#include "Basic.hpp"

#include "WBP_Limbs_DebuffContainer_classes.hpp"
#include "WBP_Limbs_DebuffContainer_parameters.hpp"


namespace SDK
{

// Function WBP_Limbs_DebuffContainer.WBP_Limbs_DebuffContainer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Limbs_DebuffContainer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Limbs_DebuffContainer_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Limbs_DebuffContainer.WBP_Limbs_DebuffContainer_C.ExecuteUbergraph_WBP_Limbs_DebuffContainer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Limbs_DebuffContainer_C::ExecuteUbergraph_WBP_Limbs_DebuffContainer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Limbs_DebuffContainer_C", "ExecuteUbergraph_WBP_Limbs_DebuffContainer");

	Params::WBP_Limbs_DebuffContainer_C_ExecuteUbergraph_WBP_Limbs_DebuffContainer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Limbs_DebuffContainer.WBP_Limbs_DebuffContainer_C.OnTagAdded_525530E248F7049BDB8C72B18AC39A5D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     Tag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWBP_Limbs_DebuffContainer_C::OnTagAdded_525530E248F7049BDB8C72B18AC39A5D(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Limbs_DebuffContainer_C", "OnTagAdded_525530E248F7049BDB8C72B18AC39A5D");

	Params::WBP_Limbs_DebuffContainer_C_OnTagAdded_525530E248F7049BDB8C72B18AC39A5D Parms{};

	Parms.Tag = std::move(Tag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Limbs_DebuffContainer.WBP_Limbs_DebuffContainer_C.OnTagRemoved_525530E248F7049BDB8C72B18AC39A5D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     Tag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWBP_Limbs_DebuffContainer_C::OnTagRemoved_525530E248F7049BDB8C72B18AC39A5D(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Limbs_DebuffContainer_C", "OnTagRemoved_525530E248F7049BDB8C72B18AC39A5D");

	Params::WBP_Limbs_DebuffContainer_C_OnTagRemoved_525530E248F7049BDB8C72B18AC39A5D Parms{};

	Parms.Tag = std::move(Tag);

	UObject::ProcessEvent(Func, &Parms);
}

}

