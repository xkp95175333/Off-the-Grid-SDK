#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPP_LK_BusStop_01_BreakableGlass

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPP_LK_BusStop_01_BreakableGlass.BPP_LK_BusStop_01_BreakableGlass_C
// 0x0018 (0x0358 - 0x0340)
class ABPP_LK_BusStop_01_BreakableGlass_C final : public APackedLevelActor
{
public:
	class UGzMultipleDamageableComponent*         GzMultipleDamageable;                              // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GzDamageableSMComp_4X4_Without_Edge_C* BP_GzDamageableSMComp_4X4_Without_Edge1;           // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GzDamageableSMComp_4X4_Without_Edge_C* BP_GzDamageableSMComp_4X4_Without_Edge;            // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPP_LK_BusStop_01_BreakableGlass_C">();
	}
	static class ABPP_LK_BusStop_01_BreakableGlass_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABPP_LK_BusStop_01_BreakableGlass_C>();
	}
};
static_assert(alignof(ABPP_LK_BusStop_01_BreakableGlass_C) == 0x000008, "Wrong alignment on ABPP_LK_BusStop_01_BreakableGlass_C");
static_assert(sizeof(ABPP_LK_BusStop_01_BreakableGlass_C) == 0x000358, "Wrong size on ABPP_LK_BusStop_01_BreakableGlass_C");
static_assert(offsetof(ABPP_LK_BusStop_01_BreakableGlass_C, GzMultipleDamageable) == 0x000340, "Member 'ABPP_LK_BusStop_01_BreakableGlass_C::GzMultipleDamageable' has a wrong offset!");
static_assert(offsetof(ABPP_LK_BusStop_01_BreakableGlass_C, BP_GzDamageableSMComp_4X4_Without_Edge1) == 0x000348, "Member 'ABPP_LK_BusStop_01_BreakableGlass_C::BP_GzDamageableSMComp_4X4_Without_Edge1' has a wrong offset!");
static_assert(offsetof(ABPP_LK_BusStop_01_BreakableGlass_C, BP_GzDamageableSMComp_4X4_Without_Edge) == 0x000350, "Member 'ABPP_LK_BusStop_01_BreakableGlass_C::BP_GzDamageableSMComp_4X4_Without_Edge' has a wrong offset!");

}

