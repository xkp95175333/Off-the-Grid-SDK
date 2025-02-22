#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SwapLimb

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "G01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_SwapLimb.GA_SwapLimb_C
// 0x0008 (0x0738 - 0x0730)
class UGA_SwapLimb_C final : public UGzGA_SwapLimb
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0730(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_SwapLimb(int32 EntryPoint);
	void InitiateCancelByPlayerEvent();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void RecallCancelByPlayerEvent();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_SwapLimb_C">();
	}
	static class UGA_SwapLimb_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_SwapLimb_C>();
	}
};
static_assert(alignof(UGA_SwapLimb_C) == 0x000008, "Wrong alignment on UGA_SwapLimb_C");
static_assert(sizeof(UGA_SwapLimb_C) == 0x000738, "Wrong size on UGA_SwapLimb_C");
static_assert(offsetof(UGA_SwapLimb_C, UberGraphFrame) == 0x000730, "Member 'UGA_SwapLimb_C::UberGraphFrame' has a wrong offset!");

}

