#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_AT_SHG02_S0103_STK

#include "Basic.hpp"

#include "ABP_AT_SHG02_S0103_STK_classes.hpp"
#include "ABP_AT_SHG02_S0103_STK_parameters.hpp"


namespace SDK
{

// Function ABP_AT_SHG02_S0103_STK.ABP_AT_SHG02_S0103_STK_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UABP_AT_SHG02_S0103_STK_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_AT_SHG02_S0103_STK_C", "AnimGraph");

	Params::ABP_AT_SHG02_S0103_STK_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function ABP_AT_SHG02_S0103_STK.ABP_AT_SHG02_S0103_STK_C.ExecuteUbergraph_ABP_AT_SHG02_S0103_STK
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_AT_SHG02_S0103_STK_C::ExecuteUbergraph_ABP_AT_SHG02_S0103_STK(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_AT_SHG02_S0103_STK_C", "ExecuteUbergraph_ABP_AT_SHG02_S0103_STK");

	Params::ABP_AT_SHG02_S0103_STK_C_ExecuteUbergraph_ABP_AT_SHG02_S0103_STK Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

