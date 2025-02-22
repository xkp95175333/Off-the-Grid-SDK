#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_Test

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BI_Test.BI_Test_C
// 0x0000 (0x0028 - 0x0028)
class IBI_Test_C final : public IInterface
{
public:
	void NewFunction(const struct FStructure& Structure_Input, double Directional_Intensity, double* Directional_Intensity_Output);
	void Whatever(const struct FStructure& WhateverStrut);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BI_Test_C">();
	}
	static class IBI_Test_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBI_Test_C>();
	}
};
static_assert(alignof(IBI_Test_C) == 0x000008, "Wrong alignment on IBI_Test_C");
static_assert(sizeof(IBI_Test_C) == 0x000028, "Wrong size on IBI_Test_C");

}

