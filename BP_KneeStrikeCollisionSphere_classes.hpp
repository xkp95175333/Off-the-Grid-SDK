#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_KneeStrikeCollisionSphere

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_KneeStrikeCollisionSphere.BP_KneeStrikeCollisionSphere_C
// 0x0008 (0x02A8 - 0x02A0)
class ABP_KneeStrikeCollisionSphere_C final : public AActor
{
public:
	class USphereComponent*                       KneeCollisionSphere;                               // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_KneeStrikeCollisionSphere_C">();
	}
	static class ABP_KneeStrikeCollisionSphere_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_KneeStrikeCollisionSphere_C>();
	}
};
static_assert(alignof(ABP_KneeStrikeCollisionSphere_C) == 0x000008, "Wrong alignment on ABP_KneeStrikeCollisionSphere_C");
static_assert(sizeof(ABP_KneeStrikeCollisionSphere_C) == 0x0002A8, "Wrong size on ABP_KneeStrikeCollisionSphere_C");
static_assert(offsetof(ABP_KneeStrikeCollisionSphere_C, KneeCollisionSphere) == 0x0002A0, "Member 'ABP_KneeStrikeCollisionSphere_C::KneeCollisionSphere' has a wrong offset!");

}

