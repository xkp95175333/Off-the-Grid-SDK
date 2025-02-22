#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PerformanceStats

#include "Basic.hpp"

#include "G01_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PerformanceStats.WBP_PerformanceStats_C
// 0x0000 (0x0328 - 0x0328)
class UWBP_PerformanceStats_C final : public UGzPerformanceStatsWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PerformanceStats_C">();
	}
	static class UWBP_PerformanceStats_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PerformanceStats_C>();
	}
};
static_assert(alignof(UWBP_PerformanceStats_C) == 0x000008, "Wrong alignment on UWBP_PerformanceStats_C");
static_assert(sizeof(UWBP_PerformanceStats_C) == 0x000328, "Wrong size on UWBP_PerformanceStats_C");

}

