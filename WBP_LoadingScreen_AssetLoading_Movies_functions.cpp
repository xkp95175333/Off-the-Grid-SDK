#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LoadingScreen_AssetLoading_Movies

#include "Basic.hpp"

#include "WBP_LoadingScreen_AssetLoading_Movies_classes.hpp"
#include "WBP_LoadingScreen_AssetLoading_Movies_parameters.hpp"


namespace SDK
{

// Function WBP_LoadingScreen_AssetLoading_Movies.WBP_LoadingScreen_AssetLoading_Movies_C.OnShutdownAvailable
// (Event, Protected, BlueprintEvent)

void UWBP_LoadingScreen_AssetLoading_Movies_C::OnShutdownAvailable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LoadingScreen_AssetLoading_Movies_C", "OnShutdownAvailable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_LoadingScreen_AssetLoading_Movies.WBP_LoadingScreen_AssetLoading_Movies_C.GetContinueWidgetIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LoadingScreen_AssetLoading_Movies_C::GetContinueWidgetIndex(int32* Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LoadingScreen_AssetLoading_Movies_C", "GetContinueWidgetIndex");

	Params::WBP_LoadingScreen_AssetLoading_Movies_C_GetContinueWidgetIndex Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Index != nullptr)
		*Param_Index = Parms.Param_Index;
}


// Function WBP_LoadingScreen_AssetLoading_Movies.WBP_LoadingScreen_AssetLoading_Movies_C.ExecuteUbergraph_WBP_LoadingScreen_AssetLoading_Movies
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LoadingScreen_AssetLoading_Movies_C::ExecuteUbergraph_WBP_LoadingScreen_AssetLoading_Movies(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LoadingScreen_AssetLoading_Movies_C", "ExecuteUbergraph_WBP_LoadingScreen_AssetLoading_Movies");

	Params::WBP_LoadingScreen_AssetLoading_Movies_C_ExecuteUbergraph_WBP_LoadingScreen_AssetLoading_Movies Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_LoadingScreen_AssetLoading_Movies.WBP_LoadingScreen_AssetLoading_Movies_C.GetBackgroundWidgets
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class UWidget*>                  ReturnValue                                            (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class UWidget*> UWBP_LoadingScreen_AssetLoading_Movies_C::GetBackgroundWidgets() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LoadingScreen_AssetLoading_Movies_C", "GetBackgroundWidgets");

	Params::WBP_LoadingScreen_AssetLoading_Movies_C_GetBackgroundWidgets Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

