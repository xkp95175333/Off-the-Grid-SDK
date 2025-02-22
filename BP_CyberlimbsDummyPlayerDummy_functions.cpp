#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CyberlimbsDummyPlayerDummy

#include "Basic.hpp"

#include "BP_CyberlimbsDummyPlayerDummy_classes.hpp"
#include "BP_CyberlimbsDummyPlayerDummy_parameters.hpp"


namespace SDK
{

// Function BP_CyberlimbsDummyPlayerDummy.BP_CyberlimbsDummyPlayerDummy_C.AddDampedImpulse
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Impulse                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CyberlimbsDummyPlayerDummy_C::AddDampedImpulse(const struct FVector& Impulse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CyberlimbsDummyPlayerDummy_C", "AddDampedImpulse");

	Params::BP_CyberlimbsDummyPlayerDummy_C_AddDampedImpulse Parms{};

	Parms.Impulse = std::move(Impulse);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CyberlimbsDummyPlayerDummy.BP_CyberlimbsDummyPlayerDummy_C.AttachNewLimb
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGzLimbType                             LimbType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CyberlimbsDummyPlayerDummy_C::AttachNewLimb(EGzLimbType LimbType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CyberlimbsDummyPlayerDummy_C", "AttachNewLimb");

	Params::BP_CyberlimbsDummyPlayerDummy_C_AttachNewLimb Parms{};

	Parms.LimbType = LimbType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CyberlimbsDummyPlayerDummy.BP_CyberlimbsDummyPlayerDummy_C.ExecuteUbergraph_BP_CyberlimbsDummyPlayerDummy
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CyberlimbsDummyPlayerDummy_C::ExecuteUbergraph_BP_CyberlimbsDummyPlayerDummy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CyberlimbsDummyPlayerDummy_C", "ExecuteUbergraph_BP_CyberlimbsDummyPlayerDummy");

	Params::BP_CyberlimbsDummyPlayerDummy_C_ExecuteUbergraph_BP_CyberlimbsDummyPlayerDummy Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CyberlimbsDummyPlayerDummy.BP_CyberlimbsDummyPlayerDummy_C.GetLimbItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGzLimbType                             LimbType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGzLimbInvItem                   Limb_Item                                              (Parm, OutParm)

void ABP_CyberlimbsDummyPlayerDummy_C::GetLimbItem(EGzLimbType LimbType, struct FGzLimbInvItem* Limb_Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CyberlimbsDummyPlayerDummy_C", "GetLimbItem");

	Params::BP_CyberlimbsDummyPlayerDummy_C_GetLimbItem Parms{};

	Parms.LimbType = LimbType;

	UObject::ProcessEvent(Func, &Parms);

	if (Limb_Item != nullptr)
		*Limb_Item = std::move(Parms.Limb_Item);
}


// Function BP_CyberlimbsDummyPlayerDummy.BP_CyberlimbsDummyPlayerDummy_C.OnAttributeChanged_72526699439C27C16244F4BF62D625F7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAttribute               Attribute                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// float                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   OldValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CyberlimbsDummyPlayerDummy_C::OnAttributeChanged_72526699439C27C16244F4BF62D625F7(const struct FGameplayAttribute& Attribute, float NewValue, float OldValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CyberlimbsDummyPlayerDummy_C", "OnAttributeChanged_72526699439C27C16244F4BF62D625F7");

	Params::BP_CyberlimbsDummyPlayerDummy_C_OnAttributeChanged_72526699439C27C16244F4BF62D625F7 Parms{};

	Parms.Attribute = std::move(Attribute);
	Parms.NewValue = NewValue;
	Parms.OldValue = OldValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CyberlimbsDummyPlayerDummy.BP_CyberlimbsDummyPlayerDummy_C.OnAttributeChanged_88F63EA441B89C72D89D97B526C77AA6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAttribute               Attribute                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// float                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   OldValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CyberlimbsDummyPlayerDummy_C::OnAttributeChanged_88F63EA441B89C72D89D97B526C77AA6(const struct FGameplayAttribute& Attribute, float NewValue, float OldValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CyberlimbsDummyPlayerDummy_C", "OnAttributeChanged_88F63EA441B89C72D89D97B526C77AA6");

	Params::BP_CyberlimbsDummyPlayerDummy_C_OnAttributeChanged_88F63EA441B89C72D89D97B526C77AA6 Parms{};

	Parms.Attribute = std::move(Attribute);
	Parms.NewValue = NewValue;
	Parms.OldValue = OldValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CyberlimbsDummyPlayerDummy.BP_CyberlimbsDummyPlayerDummy_C.OnAttributeChanged_8B20D2FD4E65AD15C18B4D8FFAA64443
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAttribute               Attribute                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// float                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   OldValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CyberlimbsDummyPlayerDummy_C::OnAttributeChanged_8B20D2FD4E65AD15C18B4D8FFAA64443(const struct FGameplayAttribute& Attribute, float NewValue, float OldValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CyberlimbsDummyPlayerDummy_C", "OnAttributeChanged_8B20D2FD4E65AD15C18B4D8FFAA64443");

	Params::BP_CyberlimbsDummyPlayerDummy_C_OnAttributeChanged_8B20D2FD4E65AD15C18B4D8FFAA64443 Parms{};

	Parms.Attribute = std::move(Attribute);
	Parms.NewValue = NewValue;
	Parms.OldValue = OldValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CyberlimbsDummyPlayerDummy.BP_CyberlimbsDummyPlayerDummy_C.OnAttributeChanged_AABF4C8141D66983D935B78C980B9D2F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAttribute               Attribute                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// float                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   OldValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CyberlimbsDummyPlayerDummy_C::OnAttributeChanged_AABF4C8141D66983D935B78C980B9D2F(const struct FGameplayAttribute& Attribute, float NewValue, float OldValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CyberlimbsDummyPlayerDummy_C", "OnAttributeChanged_AABF4C8141D66983D935B78C980B9D2F");

	Params::BP_CyberlimbsDummyPlayerDummy_C_OnAttributeChanged_AABF4C8141D66983D935B78C980B9D2F Parms{};

	Parms.Attribute = std::move(Attribute);
	Parms.NewValue = NewValue;
	Parms.OldValue = OldValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CyberlimbsDummyPlayerDummy.BP_CyberlimbsDummyPlayerDummy_C.OnAttributeChanged_DCB0028C4B12318184EB748B126EBC3E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAttribute               Attribute                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// float                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   OldValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CyberlimbsDummyPlayerDummy_C::OnAttributeChanged_DCB0028C4B12318184EB748B126EBC3E(const struct FGameplayAttribute& Attribute, float NewValue, float OldValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CyberlimbsDummyPlayerDummy_C", "OnAttributeChanged_DCB0028C4B12318184EB748B126EBC3E");

	Params::BP_CyberlimbsDummyPlayerDummy_C_OnAttributeChanged_DCB0028C4B12318184EB748B126EBC3E Parms{};

	Parms.Attribute = std::move(Attribute);
	Parms.NewValue = NewValue;
	Parms.OldValue = OldValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CyberlimbsDummyPlayerDummy.BP_CyberlimbsDummyPlayerDummy_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CyberlimbsDummyPlayerDummy_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CyberlimbsDummyPlayerDummy_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CyberlimbsDummyPlayerDummy.BP_CyberlimbsDummyPlayerDummy_C.RestoreLimbs
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CyberlimbsDummyPlayerDummy_C::RestoreLimbs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CyberlimbsDummyPlayerDummy_C", "RestoreLimbs");

	UObject::ProcessEvent(Func, nullptr);
}

}

