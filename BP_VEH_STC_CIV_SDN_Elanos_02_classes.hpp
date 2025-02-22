#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VEH_STC_CIV_SDN_Elanos_02

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_VEH_STC_CIV_SDN_Elanos_02.BP_VEH_STC_CIV_SDN_Elanos_02_C
// 0x0030 (0x02D0 - 0x02A0)
class ABP_VEH_STC_CIV_SDN_Elanos_02_C final : public AActor
{
public:
	class UStaticMeshComponent*                   SM_VEH_STC_CIV_SDN_Elanos_01;                      // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_VEH_STC_CIV_SDN_Elanos_01_ATT_bw;               // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_VEH_STC_CIV_SDN_Elanos_01_ATT_fw;               // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_VEH_STC_CIV_SDN_Elanos_01_Decals;               // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_VEH_STC_CIV_SDN_Elanos_01_Wheel_Covers_01;      // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VEH_STC_CIV_SDN_Elanos_02_C">();
	}
	static class ABP_VEH_STC_CIV_SDN_Elanos_02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_VEH_STC_CIV_SDN_Elanos_02_C>();
	}
};
static_assert(alignof(ABP_VEH_STC_CIV_SDN_Elanos_02_C) == 0x000008, "Wrong alignment on ABP_VEH_STC_CIV_SDN_Elanos_02_C");
static_assert(sizeof(ABP_VEH_STC_CIV_SDN_Elanos_02_C) == 0x0002D0, "Wrong size on ABP_VEH_STC_CIV_SDN_Elanos_02_C");
static_assert(offsetof(ABP_VEH_STC_CIV_SDN_Elanos_02_C, SM_VEH_STC_CIV_SDN_Elanos_01) == 0x0002A0, "Member 'ABP_VEH_STC_CIV_SDN_Elanos_02_C::SM_VEH_STC_CIV_SDN_Elanos_01' has a wrong offset!");
static_assert(offsetof(ABP_VEH_STC_CIV_SDN_Elanos_02_C, SM_VEH_STC_CIV_SDN_Elanos_01_ATT_bw) == 0x0002A8, "Member 'ABP_VEH_STC_CIV_SDN_Elanos_02_C::SM_VEH_STC_CIV_SDN_Elanos_01_ATT_bw' has a wrong offset!");
static_assert(offsetof(ABP_VEH_STC_CIV_SDN_Elanos_02_C, SM_VEH_STC_CIV_SDN_Elanos_01_ATT_fw) == 0x0002B0, "Member 'ABP_VEH_STC_CIV_SDN_Elanos_02_C::SM_VEH_STC_CIV_SDN_Elanos_01_ATT_fw' has a wrong offset!");
static_assert(offsetof(ABP_VEH_STC_CIV_SDN_Elanos_02_C, SM_VEH_STC_CIV_SDN_Elanos_01_Decals) == 0x0002B8, "Member 'ABP_VEH_STC_CIV_SDN_Elanos_02_C::SM_VEH_STC_CIV_SDN_Elanos_01_Decals' has a wrong offset!");
static_assert(offsetof(ABP_VEH_STC_CIV_SDN_Elanos_02_C, SM_VEH_STC_CIV_SDN_Elanos_01_Wheel_Covers_01) == 0x0002C0, "Member 'ABP_VEH_STC_CIV_SDN_Elanos_02_C::SM_VEH_STC_CIV_SDN_Elanos_01_Wheel_Covers_01' has a wrong offset!");
static_assert(offsetof(ABP_VEH_STC_CIV_SDN_Elanos_02_C, DefaultSceneRoot) == 0x0002C8, "Member 'ABP_VEH_STC_CIV_SDN_Elanos_02_C::DefaultSceneRoot' has a wrong offset!");

}

