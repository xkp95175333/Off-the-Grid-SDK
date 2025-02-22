#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FloodLight_Set_03

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FloodLight_Set_03.BP_FloodLight_Set_03_C
// 0x0020 (0x02C0 - 0x02A0)
class ABP_FloodLight_Set_03_C final : public AActor
{
public:
	class UStaticMeshComponent*                   SM_FloodLight_Set_03_Glass;                        // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_FloodLight_Set_03;                              // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          LIT_MODE__;                                        // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FloodLight_Set_03_C">();
	}
	static class ABP_FloodLight_Set_03_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FloodLight_Set_03_C>();
	}
};
static_assert(alignof(ABP_FloodLight_Set_03_C) == 0x000008, "Wrong alignment on ABP_FloodLight_Set_03_C");
static_assert(sizeof(ABP_FloodLight_Set_03_C) == 0x0002C0, "Wrong size on ABP_FloodLight_Set_03_C");
static_assert(offsetof(ABP_FloodLight_Set_03_C, SM_FloodLight_Set_03_Glass) == 0x0002A0, "Member 'ABP_FloodLight_Set_03_C::SM_FloodLight_Set_03_Glass' has a wrong offset!");
static_assert(offsetof(ABP_FloodLight_Set_03_C, SM_FloodLight_Set_03) == 0x0002A8, "Member 'ABP_FloodLight_Set_03_C::SM_FloodLight_Set_03' has a wrong offset!");
static_assert(offsetof(ABP_FloodLight_Set_03_C, DefaultSceneRoot) == 0x0002B0, "Member 'ABP_FloodLight_Set_03_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_FloodLight_Set_03_C, LIT_MODE__) == 0x0002B8, "Member 'ABP_FloodLight_Set_03_C::LIT_MODE__' has a wrong offset!");

}

