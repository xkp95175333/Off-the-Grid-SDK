#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TurretState

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_DefaultSeatState_classes.hpp"
#include "G01_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_TurretState.GA_TurretState_C
// 0x0008 (0x0560 - 0x0558)
class UGA_TurretState_C final : public UGA_DefaultSeatState_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void OnSeatChanged(class AGzCharacter* Character, EGzVehicleSeatType NewSeat, EGzVehicleSeatType OldSeat);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_TurretState(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_TurretState_C">();
	}
	static class UGA_TurretState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_TurretState_C>();
	}
};
static_assert(alignof(UGA_TurretState_C) == 0x000008, "Wrong alignment on UGA_TurretState_C");
static_assert(sizeof(UGA_TurretState_C) == 0x000560, "Wrong size on UGA_TurretState_C");
static_assert(offsetof(UGA_TurretState_C, UberGraphFrame) == 0x000558, "Member 'UGA_TurretState_C::UberGraphFrame' has a wrong offset!");

}

