#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Submissive_LowerBody

#include "Basic.hpp"

#include "ABP_Submissive_LowerBody_classes.hpp"
#include "ABP_Submissive_LowerBody_parameters.hpp"


namespace SDK
{

// Function ABP_Submissive_LowerBody.ABP_Submissive_LowerBody_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UABP_Submissive_LowerBody_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Submissive_LowerBody_C", "AnimGraph");

	Params::ABP_Submissive_LowerBody_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function ABP_Submissive_LowerBody.ABP_Submissive_LowerBody_C.ExecuteUbergraph_ABP_Submissive_LowerBody
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Submissive_LowerBody_C::ExecuteUbergraph_ABP_Submissive_LowerBody(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Submissive_LowerBody_C", "ExecuteUbergraph_ABP_Submissive_LowerBody");

	Params::ABP_Submissive_LowerBody_C_ExecuteUbergraph_ABP_Submissive_LowerBody Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

