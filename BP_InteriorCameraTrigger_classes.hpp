#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InteriorCameraTrigger

#include "Basic.hpp"

#include "G01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_InteriorCameraTrigger.BP_InteriorCameraTrigger_C
// 0x0000 (0x02B8 - 0x02B8)
class ABP_InteriorCameraTrigger_C final : public AGzInteriorCameraVolume
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_InteriorCameraTrigger_C">();
	}
	static class ABP_InteriorCameraTrigger_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_InteriorCameraTrigger_C>();
	}
};
static_assert(alignof(ABP_InteriorCameraTrigger_C) == 0x000008, "Wrong alignment on ABP_InteriorCameraTrigger_C");
static_assert(sizeof(ABP_InteriorCameraTrigger_C) == 0x0002B8, "Wrong size on ABP_InteriorCameraTrigger_C");

}

