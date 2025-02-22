#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPP_SA_Hill_MudRoad_01

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPP_SA_Hill_MudRoad_01.BPP_SA_Hill_MudRoad_01_C
// 0x0018 (0x0358 - 0x0340)
class ABPP_SA_Hill_MudRoad_01_C final : public APackedLevelActor
{
public:
	class UInstancedStaticMeshComponent*          InstancedStaticMesh2;                              // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInstancedStaticMeshComponent*          InstancedStaticMesh1;                              // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInstancedStaticMeshComponent*          InstancedStaticMesh;                               // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPP_SA_Hill_MudRoad_01_C">();
	}
	static class ABPP_SA_Hill_MudRoad_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABPP_SA_Hill_MudRoad_01_C>();
	}
};
static_assert(alignof(ABPP_SA_Hill_MudRoad_01_C) == 0x000008, "Wrong alignment on ABPP_SA_Hill_MudRoad_01_C");
static_assert(sizeof(ABPP_SA_Hill_MudRoad_01_C) == 0x000358, "Wrong size on ABPP_SA_Hill_MudRoad_01_C");
static_assert(offsetof(ABPP_SA_Hill_MudRoad_01_C, InstancedStaticMesh2) == 0x000340, "Member 'ABPP_SA_Hill_MudRoad_01_C::InstancedStaticMesh2' has a wrong offset!");
static_assert(offsetof(ABPP_SA_Hill_MudRoad_01_C, InstancedStaticMesh1) == 0x000348, "Member 'ABPP_SA_Hill_MudRoad_01_C::InstancedStaticMesh1' has a wrong offset!");
static_assert(offsetof(ABPP_SA_Hill_MudRoad_01_C, InstancedStaticMesh) == 0x000350, "Member 'ABPP_SA_Hill_MudRoad_01_C::InstancedStaticMesh' has a wrong offset!");

}

