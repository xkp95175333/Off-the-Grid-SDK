#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Barrier_Preview

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Barrier_Preview.BP_Barrier_Preview_C
// 0x0068 (0x0308 - 0x02A0)
class ABP_Barrier_Preview_C final : public AActor
{
public:
	class UStaticMeshComponent*                   Cube7;                                             // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube6;                                             // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        TL;                                                // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube5;                                             // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube4;                                             // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        TR;                                                // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube3;                                             // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube2;                                             // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        BR;                                                // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube;                                              // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube1;                                             // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        BL;                                                // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void SetUp(double Height, double WidthR, double WidthL);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Barrier_Preview_C">();
	}
	static class ABP_Barrier_Preview_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Barrier_Preview_C>();
	}
};
static_assert(alignof(ABP_Barrier_Preview_C) == 0x000008, "Wrong alignment on ABP_Barrier_Preview_C");
static_assert(sizeof(ABP_Barrier_Preview_C) == 0x000308, "Wrong size on ABP_Barrier_Preview_C");
static_assert(offsetof(ABP_Barrier_Preview_C, Cube7) == 0x0002A0, "Member 'ABP_Barrier_Preview_C::Cube7' has a wrong offset!");
static_assert(offsetof(ABP_Barrier_Preview_C, Cube6) == 0x0002A8, "Member 'ABP_Barrier_Preview_C::Cube6' has a wrong offset!");
static_assert(offsetof(ABP_Barrier_Preview_C, TL) == 0x0002B0, "Member 'ABP_Barrier_Preview_C::TL' has a wrong offset!");
static_assert(offsetof(ABP_Barrier_Preview_C, Cube5) == 0x0002B8, "Member 'ABP_Barrier_Preview_C::Cube5' has a wrong offset!");
static_assert(offsetof(ABP_Barrier_Preview_C, Cube4) == 0x0002C0, "Member 'ABP_Barrier_Preview_C::Cube4' has a wrong offset!");
static_assert(offsetof(ABP_Barrier_Preview_C, TR) == 0x0002C8, "Member 'ABP_Barrier_Preview_C::TR' has a wrong offset!");
static_assert(offsetof(ABP_Barrier_Preview_C, Cube3) == 0x0002D0, "Member 'ABP_Barrier_Preview_C::Cube3' has a wrong offset!");
static_assert(offsetof(ABP_Barrier_Preview_C, Cube2) == 0x0002D8, "Member 'ABP_Barrier_Preview_C::Cube2' has a wrong offset!");
static_assert(offsetof(ABP_Barrier_Preview_C, BR) == 0x0002E0, "Member 'ABP_Barrier_Preview_C::BR' has a wrong offset!");
static_assert(offsetof(ABP_Barrier_Preview_C, Cube) == 0x0002E8, "Member 'ABP_Barrier_Preview_C::Cube' has a wrong offset!");
static_assert(offsetof(ABP_Barrier_Preview_C, Cube1) == 0x0002F0, "Member 'ABP_Barrier_Preview_C::Cube1' has a wrong offset!");
static_assert(offsetof(ABP_Barrier_Preview_C, BL) == 0x0002F8, "Member 'ABP_Barrier_Preview_C::BL' has a wrong offset!");
static_assert(offsetof(ABP_Barrier_Preview_C, DefaultSceneRoot) == 0x000300, "Member 'ABP_Barrier_Preview_C::DefaultSceneRoot' has a wrong offset!");

}

