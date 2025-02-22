#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ToxicSmoke_TrailActor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ToxicSmoke_TrailActor.BP_ToxicSmoke_TrailActor_C
// 0x0018 (0x02B8 - 0x02A0)
class ABP_ToxicSmoke_TrailActor_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      TrailVFX;                                          // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ToxicSmoke_TrailActor(int32 EntryPoint);
	void Detach(double TrailLifespan, const struct FVector& ImpactLocation, const struct FVector& ImpactNormal);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ToxicSmoke_TrailActor_C">();
	}
	static class ABP_ToxicSmoke_TrailActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ToxicSmoke_TrailActor_C>();
	}
};
static_assert(alignof(ABP_ToxicSmoke_TrailActor_C) == 0x000008, "Wrong alignment on ABP_ToxicSmoke_TrailActor_C");
static_assert(sizeof(ABP_ToxicSmoke_TrailActor_C) == 0x0002B8, "Wrong size on ABP_ToxicSmoke_TrailActor_C");
static_assert(offsetof(ABP_ToxicSmoke_TrailActor_C, UberGraphFrame) == 0x0002A0, "Member 'ABP_ToxicSmoke_TrailActor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ToxicSmoke_TrailActor_C, TrailVFX) == 0x0002A8, "Member 'ABP_ToxicSmoke_TrailActor_C::TrailVFX' has a wrong offset!");
static_assert(offsetof(ABP_ToxicSmoke_TrailActor_C, DefaultSceneRoot) == 0x0002B0, "Member 'ABP_ToxicSmoke_TrailActor_C::DefaultSceneRoot' has a wrong offset!");

}

