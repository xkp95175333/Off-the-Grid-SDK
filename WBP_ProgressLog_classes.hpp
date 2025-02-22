#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ProgressLog

#include "Basic.hpp"

#include "G01_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ProgressLog.WBP_ProgressLog_C
// 0x0018 (0x03C0 - 0x03A8)
class UWBP_ProgressLog_C final : public UGzProgressLogWidget
{
public:
	class UImage*                                 Image_44;                                          // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CloakArmProgress_C*                WBP_CloakArmProgress;                              // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Limbs_SuperSprint_Energy_C*        WBP_Limbs_SuperSprint_Energy;                      // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ProgressLog_C">();
	}
	static class UWBP_ProgressLog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ProgressLog_C>();
	}
};
static_assert(alignof(UWBP_ProgressLog_C) == 0x000008, "Wrong alignment on UWBP_ProgressLog_C");
static_assert(sizeof(UWBP_ProgressLog_C) == 0x0003C0, "Wrong size on UWBP_ProgressLog_C");
static_assert(offsetof(UWBP_ProgressLog_C, Image_44) == 0x0003A8, "Member 'UWBP_ProgressLog_C::Image_44' has a wrong offset!");
static_assert(offsetof(UWBP_ProgressLog_C, WBP_CloakArmProgress) == 0x0003B0, "Member 'UWBP_ProgressLog_C::WBP_CloakArmProgress' has a wrong offset!");
static_assert(offsetof(UWBP_ProgressLog_C, WBP_Limbs_SuperSprint_Energy) == 0x0003B8, "Member 'UWBP_ProgressLog_C::WBP_Limbs_SuperSprint_Energy' has a wrong offset!");

}

