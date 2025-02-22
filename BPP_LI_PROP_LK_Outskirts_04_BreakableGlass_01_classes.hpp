#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPP_LI_PROP_LK_Outskirts_04_BreakableGlass_01

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPP_LI_PROP_LK_Outskirts_04_BreakableGlass_01.BPP_LI_PROP_LK_Outskirts_04_BreakableGlass_01_C
// 0x0018 (0x0358 - 0x0340)
class ABPP_LI_PROP_LK_Outskirts_04_BreakableGlass_01_C final : public APackedLevelActor
{
public:
	class UGzMultipleDamageableComponent*         GzMultipleDamageable;                              // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GzDamageableSMComp_4X4_Without_Edge_C* BP_GzDamageableSMComp_4X4_Without_Edge1;           // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GzDamageableSMComp_4X4_Without_Edge_C* BP_GzDamageableSMComp_4X4_Without_Edge;            // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPP_LI_PROP_LK_Outskirts_04_BreakableGlass_01_C">();
	}
	static class ABPP_LI_PROP_LK_Outskirts_04_BreakableGlass_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABPP_LI_PROP_LK_Outskirts_04_BreakableGlass_01_C>();
	}
};
static_assert(alignof(ABPP_LI_PROP_LK_Outskirts_04_BreakableGlass_01_C) == 0x000008, "Wrong alignment on ABPP_LI_PROP_LK_Outskirts_04_BreakableGlass_01_C");
static_assert(sizeof(ABPP_LI_PROP_LK_Outskirts_04_BreakableGlass_01_C) == 0x000358, "Wrong size on ABPP_LI_PROP_LK_Outskirts_04_BreakableGlass_01_C");
static_assert(offsetof(ABPP_LI_PROP_LK_Outskirts_04_BreakableGlass_01_C, GzMultipleDamageable) == 0x000340, "Member 'ABPP_LI_PROP_LK_Outskirts_04_BreakableGlass_01_C::GzMultipleDamageable' has a wrong offset!");
static_assert(offsetof(ABPP_LI_PROP_LK_Outskirts_04_BreakableGlass_01_C, BP_GzDamageableSMComp_4X4_Without_Edge1) == 0x000348, "Member 'ABPP_LI_PROP_LK_Outskirts_04_BreakableGlass_01_C::BP_GzDamageableSMComp_4X4_Without_Edge1' has a wrong offset!");
static_assert(offsetof(ABPP_LI_PROP_LK_Outskirts_04_BreakableGlass_01_C, BP_GzDamageableSMComp_4X4_Without_Edge) == 0x000350, "Member 'ABPP_LI_PROP_LK_Outskirts_04_BreakableGlass_01_C::BP_GzDamageableSMComp_4X4_Without_Edge' has a wrong offset!");

}

