#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DamageTakenLimb_Collector

#include "Basic.hpp"

#include "G01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DamageTakenLimb_Collector.BP_DamageTakenLimb_Collector_C
// 0x0000 (0x00A8 - 0x00A8)
class UBP_DamageTakenLimb_Collector_C final : public UGzPlayerDamageTakenStatCollector
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DamageTakenLimb_Collector_C">();
	}
	static class UBP_DamageTakenLimb_Collector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DamageTakenLimb_Collector_C>();
	}
};
static_assert(alignof(UBP_DamageTakenLimb_Collector_C) == 0x000008, "Wrong alignment on UBP_DamageTakenLimb_Collector_C");
static_assert(sizeof(UBP_DamageTakenLimb_Collector_C) == 0x0000A8, "Wrong size on UBP_DamageTakenLimb_Collector_C");

}

