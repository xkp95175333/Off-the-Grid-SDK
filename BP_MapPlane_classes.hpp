#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MapPlane

#include "Basic.hpp"

#include "MapRenderer_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MapPlane.BP_MapPlane_C
// 0x0000 (0x02F0 - 0x02F0)
class ABP_MapPlane_C final : public AMapPlaneActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapPlane_C">();
	}
	static class ABP_MapPlane_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MapPlane_C>();
	}
};
static_assert(alignof(ABP_MapPlane_C) == 0x000008, "Wrong alignment on ABP_MapPlane_C");
static_assert(sizeof(ABP_MapPlane_C) == 0x0002F0, "Wrong size on ABP_MapPlane_C");

}

