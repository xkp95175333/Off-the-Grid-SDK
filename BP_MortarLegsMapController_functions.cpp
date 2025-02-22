#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MortarLegsMapController

#include "Basic.hpp"

#include "BP_MortarLegsMapController_classes.hpp"
#include "BP_MortarLegsMapController_parameters.hpp"


namespace SDK
{

// Function BP_MortarLegsMapController.BP_MortarLegsMapController_C.AddMapIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        WorldPos                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MortarLegsMapController_C::AddMapIndicator(const struct FVector2D& WorldPos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MortarLegsMapController_C", "AddMapIndicator");

	Params::BP_MortarLegsMapController_C_AddMapIndicator Parms{};

	Parms.WorldPos = std::move(WorldPos);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MortarLegsMapController.BP_MortarLegsMapController_C.ClearMapIndicators
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_MortarLegsMapController_C::ClearMapIndicators()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MortarLegsMapController_C", "ClearMapIndicators");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MortarLegsMapController.BP_MortarLegsMapController_C.ExecuteUbergraph_BP_MortarLegsMapController
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MortarLegsMapController_C::ExecuteUbergraph_BP_MortarLegsMapController(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MortarLegsMapController_C", "ExecuteUbergraph_BP_MortarLegsMapController");

	Params::BP_MortarLegsMapController_C_ExecuteUbergraph_BP_MortarLegsMapController Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MortarLegsMapController.BP_MortarLegsMapController_C.OnHideMap
// (Event, Public, BlueprintEvent)

void UBP_MortarLegsMapController_C::OnHideMap()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MortarLegsMapController_C", "OnHideMap");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MortarLegsMapController.BP_MortarLegsMapController_C.OnMapClick
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVector2D                        ScreenPosition                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        WorldPos                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MortarLegsMapController_C::OnMapClick(const struct FVector2D& ScreenPosition, const struct FVector2D& WorldPos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MortarLegsMapController_C", "OnMapClick");

	Params::BP_MortarLegsMapController_C_OnMapClick Parms{};

	Parms.ScreenPosition = std::move(ScreenPosition);
	Parms.WorldPos = std::move(WorldPos);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MortarLegsMapController.BP_MortarLegsMapController_C.OnMapReady
// (Event, Protected, BlueprintEvent)

void UBP_MortarLegsMapController_C::OnMapReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MortarLegsMapController_C", "OnMapReady");

	UObject::ProcessEvent(Func, nullptr);
}

}

