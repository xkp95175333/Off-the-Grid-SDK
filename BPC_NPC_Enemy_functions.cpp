#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_NPC_Enemy

#include "Basic.hpp"

#include "BPC_NPC_Enemy_classes.hpp"
#include "BPC_NPC_Enemy_parameters.hpp"


namespace SDK
{

// Function BPC_NPC_Enemy.BPC_NPC_Enemy_C.ShouldFollowVehicle
// (Public, BlueprintCallable, BlueprintEvent)

void ABPC_NPC_Enemy_C::ShouldFollowVehicle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_NPC_Enemy_C", "ShouldFollowVehicle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPC_NPC_Enemy.BPC_NPC_Enemy_C.SetMissionState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_NPC_MissionStates                     NewMissionState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_NPC_Enemy_C::SetMissionState(E_NPC_MissionStates NewMissionState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_NPC_Enemy_C", "SetMissionState");

	Params::BPC_NPC_Enemy_C_SetMissionState Parms{};

	Parms.NewMissionState = NewMissionState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_NPC_Enemy.BPC_NPC_Enemy_C.ReceiveUnPossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                            UnpossessedPawn                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABPC_NPC_Enemy_C::ReceiveUnPossess(class APawn* UnpossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_NPC_Enemy_C", "ReceiveUnPossess");

	Params::BPC_NPC_Enemy_C_ReceiveUnPossess Parms{};

	Parms.UnpossessedPawn = UnpossessedPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_NPC_Enemy.BPC_NPC_Enemy_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_NPC_Enemy_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_NPC_Enemy_C", "ReceiveTick");

	Params::BPC_NPC_Enemy_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_NPC_Enemy.BPC_NPC_Enemy_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                            PossessedPawn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABPC_NPC_Enemy_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_NPC_Enemy_C", "ReceivePossess");

	Params::BPC_NPC_Enemy_C_ReceivePossess Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_NPC_Enemy.BPC_NPC_Enemy_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABPC_NPC_Enemy_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_NPC_Enemy_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPC_NPC_Enemy.BPC_NPC_Enemy_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPC_NPC_Enemy_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_NPC_Enemy_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPC_NPC_Enemy.BPC_NPC_Enemy_C.OnNPCDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGzCharacter*                     Param_Character                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABPC_NPC_Enemy_C::OnNPCDied(class AGzCharacter* Param_Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_NPC_Enemy_C", "OnNPCDied");

	Params::BPC_NPC_Enemy_C_OnNPCDied Parms{};

	Parms.Param_Character = Param_Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_NPC_Enemy.BPC_NPC_Enemy_C.OnChangeAILOD
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGzAILOD                         AILOD                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ABPC_NPC_Enemy_C::OnChangeAILOD(const struct FGzAILOD& AILOD)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_NPC_Enemy_C", "OnChangeAILOD");

	Params::BPC_NPC_Enemy_C_OnChangeAILOD Parms{};

	Parms.AILOD = std::move(AILOD);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_NPC_Enemy.BPC_NPC_Enemy_C.NewEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABPC_NPC_Enemy_C::NewEventDispatcher__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_NPC_Enemy_C", "NewEventDispatcher__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPC_NPC_Enemy.BPC_NPC_Enemy_C.GetIdleMontageToPlay
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_NPCIdleMontages                       IdleToPlay                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                     Montage                                                (Parm, OutParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABPC_NPC_Enemy_C::GetIdleMontageToPlay(E_NPCIdleMontages IdleToPlay, class UAnimMontage** Montage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_NPC_Enemy_C", "GetIdleMontageToPlay");

	Params::BPC_NPC_Enemy_C_GetIdleMontageToPlay Parms{};

	Parms.IdleToPlay = IdleToPlay;

	UObject::ProcessEvent(Func, &Parms);

	if (Montage != nullptr)
		*Montage = Parms.Montage;
}


// Function BPC_NPC_Enemy.BPC_NPC_Enemy_C.ExecuteUbergraph_BPC_NPC_Enemy
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_NPC_Enemy_C::ExecuteUbergraph_BPC_NPC_Enemy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_NPC_Enemy_C", "ExecuteUbergraph_BPC_NPC_Enemy");

	Params::BPC_NPC_Enemy_C_ExecuteUbergraph_BPC_NPC_Enemy Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_NPC_Enemy.BPC_NPC_Enemy_C.Event_PatrolEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABPC_NPC_Enemy_C::Event_PatrolEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_NPC_Enemy_C", "Event_PatrolEnd__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPC_NPC_Enemy.BPC_NPC_Enemy_C.Event_IdleEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_NPC_Enemy_C::Event_IdleEnd__DelegateSignature(bool Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_NPC_Enemy_C", "Event_IdleEnd__DelegateSignature");

	Params::BPC_NPC_Enemy_C_Event_IdleEnd__DelegateSignature Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_NPC_Enemy.BPC_NPC_Enemy_C.Event_AlertEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_NPC_Enemy_C::Event_AlertEnd__DelegateSignature(bool Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_NPC_Enemy_C", "Event_AlertEnd__DelegateSignature");

	Params::BPC_NPC_Enemy_C_Event_AlertEnd__DelegateSignature Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_NPC_Enemy.BPC_NPC_Enemy_C.MentalStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGzMentalState                          ChangedMentalState                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_NPC_Enemy_C::MentalStateChanged(EGzMentalState ChangedMentalState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_NPC_Enemy_C", "MentalStateChanged");

	Params::BPC_NPC_Enemy_C_MentalStateChanged Parms{};

	Parms.ChangedMentalState = ChangedMentalState;

	UObject::ProcessEvent(Func, &Parms);
}

}

