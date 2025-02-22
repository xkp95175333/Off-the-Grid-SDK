#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Throwable_FragGrenade

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "G01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Throwable_FragGrenade.BP_Throwable_FragGrenade_C
// 0x0008 (0x0380 - 0x0378)
class ABP_Throwable_FragGrenade_C final : public AGzProjectileGrenade
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_Throwable_FragGrenade(int32 EntryPoint);
	void OnDeath(class UGzDamageableComponent* Receiver, const struct FGzMultiHitDamage& Hit);
	void OnDeath2(class UGzDamageableComponent* Receiver, const struct FGzSingleHitDamage& Hit);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Throwable_FragGrenade_C">();
	}
	static class ABP_Throwable_FragGrenade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Throwable_FragGrenade_C>();
	}
};
static_assert(alignof(ABP_Throwable_FragGrenade_C) == 0x000008, "Wrong alignment on ABP_Throwable_FragGrenade_C");
static_assert(sizeof(ABP_Throwable_FragGrenade_C) == 0x000380, "Wrong size on ABP_Throwable_FragGrenade_C");
static_assert(offsetof(ABP_Throwable_FragGrenade_C, UberGraphFrame) == 0x000378, "Member 'ABP_Throwable_FragGrenade_C::UberGraphFrame' has a wrong offset!");

}

