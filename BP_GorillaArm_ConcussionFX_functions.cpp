#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GorillaArm_ConcussionFX

#include "Basic.hpp"

#include "BP_GorillaArm_ConcussionFX_classes.hpp"
#include "BP_GorillaArm_ConcussionFX_parameters.hpp"


namespace SDK
{

// Function BP_GorillaArm_ConcussionFX.BP_GorillaArm_ConcussionFX_C.FadeOut
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GorillaArm_ConcussionFX_C::FadeOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GorillaArm_ConcussionFX_C", "FadeOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GorillaArm_ConcussionFX.BP_GorillaArm_ConcussionFX_C.FadeIn
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GorillaArm_ConcussionFX_C::FadeIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GorillaArm_ConcussionFX_C", "FadeIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GorillaArm_ConcussionFX.BP_GorillaArm_ConcussionFX_C.ExecuteUbergraph_BP_GorillaArm_ConcussionFX
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GorillaArm_ConcussionFX_C::ExecuteUbergraph_BP_GorillaArm_ConcussionFX(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GorillaArm_ConcussionFX_C", "ExecuteUbergraph_BP_GorillaArm_ConcussionFX");

	Params::BP_GorillaArm_ConcussionFX_C_ExecuteUbergraph_BP_GorillaArm_ConcussionFX Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GorillaArm_ConcussionFX.BP_GorillaArm_ConcussionFX_C.TickBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GorillaArm_ConcussionFX_C::TickBP(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GorillaArm_ConcussionFX_C", "TickBP");

	Params::BP_GorillaArm_ConcussionFX_C_TickBP Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GorillaArm_ConcussionFX.BP_GorillaArm_ConcussionFX_C.StopBP
// (Event, Protected, BlueprintEvent)

void UBP_GorillaArm_ConcussionFX_C::StopBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GorillaArm_ConcussionFX_C", "StopBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GorillaArm_ConcussionFX.BP_GorillaArm_ConcussionFX_C.StartBP
// (Event, Protected, BlueprintEvent)

void UBP_GorillaArm_ConcussionFX_C::StartBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GorillaArm_ConcussionFX_C", "StartBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GorillaArm_ConcussionFX.BP_GorillaArm_ConcussionFX_C.ResetMaterialParameters
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GorillaArm_ConcussionFX_C::ResetMaterialParameters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GorillaArm_ConcussionFX_C", "ResetMaterialParameters");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GorillaArm_ConcussionFX.BP_GorillaArm_ConcussionFX_C.OnFX InterpolationEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_GorillaArm_ConcussionFX_C::OnFX_InterpolationEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GorillaArm_ConcussionFX_C", "OnFX InterpolationEnd__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GorillaArm_ConcussionFX.BP_GorillaArm_ConcussionFX_C.GetMaterial Parameters
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GorillaArm_ConcussionFX_C::GetMaterial_Parameters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GorillaArm_ConcussionFX_C", "GetMaterial Parameters");

	UObject::ProcessEvent(Func, nullptr);
}

}

