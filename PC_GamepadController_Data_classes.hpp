#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PC_GamepadController_Data

#include "Basic.hpp"

#include "G01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PC_GamepadController_Data.PC_GamepadController_Data_C
// 0x0000 (0x0300 - 0x0300)
class UPC_GamepadController_Data_C final : public UGzInputControllerData
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PC_GamepadController_Data_C">();
	}
	static class UPC_GamepadController_Data_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPC_GamepadController_Data_C>();
	}
};
static_assert(alignof(UPC_GamepadController_Data_C) == 0x000010, "Wrong alignment on UPC_GamepadController_Data_C");
static_assert(sizeof(UPC_GamepadController_Data_C) == 0x000300, "Wrong size on UPC_GamepadController_Data_C");

}

