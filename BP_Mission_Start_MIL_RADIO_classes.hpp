#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Mission_Start_MIL_RADIO

#include "Basic.hpp"

#include "BP_MissionStart_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Mission_Start_MIL_RADIO.BP_Mission_Start_MIL_RADIO_C
// 0x0008 (0x0350 - 0x0348)
class ABP_Mission_Start_MIL_RADIO_C final : public ABP_MissionStart_Base_C
{
public:
	class UStaticMeshComponent*                   PlacementDebug_0;                                  // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Mission_Start_MIL_RADIO_C">();
	}
	static class ABP_Mission_Start_MIL_RADIO_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Mission_Start_MIL_RADIO_C>();
	}
};
static_assert(alignof(ABP_Mission_Start_MIL_RADIO_C) == 0x000008, "Wrong alignment on ABP_Mission_Start_MIL_RADIO_C");
static_assert(sizeof(ABP_Mission_Start_MIL_RADIO_C) == 0x000350, "Wrong size on ABP_Mission_Start_MIL_RADIO_C");
static_assert(offsetof(ABP_Mission_Start_MIL_RADIO_C, PlacementDebug_0) == 0x000348, "Member 'ABP_Mission_Start_MIL_RADIO_C::PlacementDebug_0' has a wrong offset!");

}

