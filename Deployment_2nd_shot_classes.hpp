#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Deployment_2nd_shot

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Deployment_2nd_shot.Deployment_2nd_shot_C
// 0x0000 (0x00E0 - 0x00E0)
class UDeployment_2nd_shot_C final : public UDefaultCameraShakeBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Deployment_2nd_shot_C">();
	}
	static class UDeployment_2nd_shot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDeployment_2nd_shot_C>();
	}
};
static_assert(alignof(UDeployment_2nd_shot_C) == 0x000010, "Wrong alignment on UDeployment_2nd_shot_C");
static_assert(sizeof(UDeployment_2nd_shot_C) == 0x0000E0, "Wrong size on UDeployment_2nd_shot_C");

}

