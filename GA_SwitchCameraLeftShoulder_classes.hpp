#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SwitchCameraLeftShoulder

#include "Basic.hpp"

#include "G01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_SwitchCameraLeftShoulder.GA_SwitchCameraLeftShoulder_C
// 0x0000 (0x0550 - 0x0550)
class UGA_SwitchCameraLeftShoulder_C final : public UGzGA_CharacterState
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_SwitchCameraLeftShoulder_C">();
	}
	static class UGA_SwitchCameraLeftShoulder_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_SwitchCameraLeftShoulder_C>();
	}
};
static_assert(alignof(UGA_SwitchCameraLeftShoulder_C) == 0x000008, "Wrong alignment on UGA_SwitchCameraLeftShoulder_C");
static_assert(sizeof(UGA_SwitchCameraLeftShoulder_C) == 0x000550, "Wrong size on UGA_SwitchCameraLeftShoulder_C");

}

