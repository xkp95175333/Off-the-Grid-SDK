#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameRuleEnabled_IC

#include "Basic.hpp"

#include "BP_GameRuleEnabled_IC_classes.hpp"
#include "BP_GameRuleEnabled_IC_parameters.hpp"


namespace SDK
{

// Function BP_GameRuleEnabled_IC.BP_GameRuleEnabled_IC_C.IsInteractionConditionPassed
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGzCharacter*                     InteractedBy                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           InteractableOwner                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_GameRuleEnabled_IC_C::IsInteractionConditionPassed(const class AGzCharacter* InteractedBy, const class AActor* InteractableOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameRuleEnabled_IC_C", "IsInteractionConditionPassed");

	Params::BP_GameRuleEnabled_IC_C_IsInteractionConditionPassed Parms{};

	Parms.InteractedBy = InteractedBy;
	Parms.InteractableOwner = InteractableOwner;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

