#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AssaultDroneComponent

#include "Basic.hpp"

#include "BP_AssaultDroneComponent_classes.hpp"
#include "BP_AssaultDroneComponent_parameters.hpp"


namespace SDK
{

// Function BP_AssaultDroneComponent.BP_AssaultDroneComponent_C.CacheNewDrone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Param_AssaulteDroneCached                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AssaultDroneComponent_C::CacheNewDrone(class AActor* Param_AssaulteDroneCached)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultDroneComponent_C", "CacheNewDrone");

	Params::BP_AssaultDroneComponent_C_CacheNewDrone Parms{};

	Parms.Param_AssaulteDroneCached = Param_AssaulteDroneCached;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AssaultDroneComponent.BP_AssaultDroneComponent_C.Calculate Location and Redirect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       HitResult                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_AssaultDroneComponent_C::Calculate_Location_and_Redirect(const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultDroneComponent_C", "Calculate Location and Redirect");

	Params::BP_AssaultDroneComponent_C_Calculate_Location_and_Redirect Parms{};

	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AssaultDroneComponent.BP_AssaultDroneComponent_C.CheckValidMarker
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_AssaultDroneComponent_C::CheckValidMarker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultDroneComponent_C", "CheckValidMarker");

	Params::BP_AssaultDroneComponent_C_CheckValidMarker Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_AssaultDroneComponent.BP_AssaultDroneComponent_C.DestroyMarker
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void UBP_AssaultDroneComponent_C::DestroyMarker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultDroneComponent_C", "DestroyMarker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AssaultDroneComponent.BP_AssaultDroneComponent_C.ExecuteUbergraph_BP_AssaultDroneComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AssaultDroneComponent_C::ExecuteUbergraph_BP_AssaultDroneComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultDroneComponent_C", "ExecuteUbergraph_BP_AssaultDroneComponent");

	Params::BP_AssaultDroneComponent_C_ExecuteUbergraph_BP_AssaultDroneComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AssaultDroneComponent.BP_AssaultDroneComponent_C.GetRetargetPoint
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FHitResult                       HitResult                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         HitResultRotation                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AssaultDroneComponent_C::GetRetargetPoint(const struct FHitResult& HitResult, struct FVector* Location, struct FRotator* HitResultRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultDroneComponent_C", "GetRetargetPoint");

	Params::BP_AssaultDroneComponent_C_GetRetargetPoint Parms{};

	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (HitResultRotation != nullptr)
		*HitResultRotation = std::move(Parms.HitResultRotation);
}


// Function BP_AssaultDroneComponent.BP_AssaultDroneComponent_C.OnDestroyed_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AssaultDroneComponent_C::OnDestroyed_Event(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultDroneComponent_C", "OnDestroyed_Event");

	Params::BP_AssaultDroneComponent_C_OnDestroyed_Event Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AssaultDroneComponent.BP_AssaultDroneComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AssaultDroneComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultDroneComponent_C", "ReceiveTick");

	Params::BP_AssaultDroneComponent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AssaultDroneComponent.BP_AssaultDroneComponent_C.Redirect
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       HitResult                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_AssaultDroneComponent_C::Redirect(const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultDroneComponent_C", "Redirect");

	Params::BP_AssaultDroneComponent_C_Redirect Parms{};

	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AssaultDroneComponent.BP_AssaultDroneComponent_C.SetMarkActor
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       Transform                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AssaultDroneComponent_C::SetMarkActor(const struct FTransform& Transform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultDroneComponent_C", "SetMarkActor");

	Params::BP_AssaultDroneComponent_C_SetMarkActor Parms{};

	Parms.Transform = std::move(Transform);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AssaultDroneComponent.BP_AssaultDroneComponent_C.SpawnMark
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       Transform                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AssaultDroneComponent_C::SpawnMark(const struct FTransform& Transform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultDroneComponent_C", "SpawnMark");

	Params::BP_AssaultDroneComponent_C_SpawnMark Parms{};

	Parms.Transform = std::move(Transform);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AssaultDroneComponent.BP_AssaultDroneComponent_C.IsRight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AssaultDroneComponent_C::IsRight(bool* NewParam) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultDroneComponent_C", "IsRight");

	Params::BP_AssaultDroneComponent_C_IsRight Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}

}

