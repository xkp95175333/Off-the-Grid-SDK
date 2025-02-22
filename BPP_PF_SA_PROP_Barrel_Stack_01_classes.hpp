#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPP_PF_SA_PROP_Barrel_Stack_01

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPP_PF_SA_PROP_Barrel_Stack_01.BPP_PF_SA_PROP_Barrel_Stack_01_C
// 0x0010 (0x0350 - 0x0340)
class ABPP_PF_SA_PROP_Barrel_Stack_01_C final : public APackedLevelActor
{
public:
	class UInstancedStaticMeshComponent*          InstancedStaticMesh3;                              // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInstancedStaticMeshComponent*          InstancedStaticMesh2;                              // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPP_PF_SA_PROP_Barrel_Stack_01_C">();
	}
	static class ABPP_PF_SA_PROP_Barrel_Stack_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABPP_PF_SA_PROP_Barrel_Stack_01_C>();
	}
};
static_assert(alignof(ABPP_PF_SA_PROP_Barrel_Stack_01_C) == 0x000008, "Wrong alignment on ABPP_PF_SA_PROP_Barrel_Stack_01_C");
static_assert(sizeof(ABPP_PF_SA_PROP_Barrel_Stack_01_C) == 0x000350, "Wrong size on ABPP_PF_SA_PROP_Barrel_Stack_01_C");
static_assert(offsetof(ABPP_PF_SA_PROP_Barrel_Stack_01_C, InstancedStaticMesh3) == 0x000340, "Member 'ABPP_PF_SA_PROP_Barrel_Stack_01_C::InstancedStaticMesh3' has a wrong offset!");
static_assert(offsetof(ABPP_PF_SA_PROP_Barrel_Stack_01_C, InstancedStaticMesh2) == 0x000348, "Member 'ABPP_PF_SA_PROP_Barrel_Stack_01_C::InstancedStaticMesh2' has a wrong offset!");

}

