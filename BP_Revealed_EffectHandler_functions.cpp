#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Revealed_EffectHandler

#include "Basic.hpp"

#include "BP_Revealed_EffectHandler_classes.hpp"
#include "BP_Revealed_EffectHandler_parameters.hpp"


namespace SDK
{

// Function BP_Revealed_EffectHandler.BP_Revealed_EffectHandler_C.OnEffectAdded
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGzAbilitySystemComponent*        Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpec              Spec                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_Revealed_EffectHandler_C::OnEffectAdded(class UGzAbilitySystemComponent* Target, const struct FGameplayEffectSpec& Spec) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Revealed_EffectHandler_C", "OnEffectAdded");

	Params::BP_Revealed_EffectHandler_C_OnEffectAdded Parms{};

	Parms.Target = Target;
	Parms.Spec = std::move(Spec);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Revealed_EffectHandler.BP_Revealed_EffectHandler_C.OnEffectRemoved
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGzAbilitySystemComponent*        Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpec              Spec                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_Revealed_EffectHandler_C::OnEffectRemoved(class UGzAbilitySystemComponent* Target, const struct FGameplayEffectSpec& Spec) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Revealed_EffectHandler_C", "OnEffectRemoved");

	Params::BP_Revealed_EffectHandler_C_OnEffectRemoved Parms{};

	Parms.Target = Target;
	Parms.Spec = std::move(Spec);

	UObject::ProcessEvent(Func, &Parms);
}

}

