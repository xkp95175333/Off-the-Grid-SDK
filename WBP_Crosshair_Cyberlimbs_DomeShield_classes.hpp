#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Crosshair_Cyberlimbs_DomeShield

#include "Basic.hpp"

#include "G01_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Crosshair_Cyberlimbs_DomeShield.WBP_Crosshair_Cyberlimbs_DomeShield_C
// 0x0020 (0x0310 - 0x02F0)
class UWBP_Crosshair_Cyberlimbs_DomeShield_C final : public UGzLimbCrosshair
{
public:
	class UImage*                                 HP_Image;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HP_Image_1;                                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           HP_ProgressBar;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           HP_ProgressBar_1;                                  // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Crosshair_Cyberlimbs_DomeShield_C">();
	}
	static class UWBP_Crosshair_Cyberlimbs_DomeShield_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Crosshair_Cyberlimbs_DomeShield_C>();
	}
};
static_assert(alignof(UWBP_Crosshair_Cyberlimbs_DomeShield_C) == 0x000008, "Wrong alignment on UWBP_Crosshair_Cyberlimbs_DomeShield_C");
static_assert(sizeof(UWBP_Crosshair_Cyberlimbs_DomeShield_C) == 0x000310, "Wrong size on UWBP_Crosshair_Cyberlimbs_DomeShield_C");
static_assert(offsetof(UWBP_Crosshair_Cyberlimbs_DomeShield_C, HP_Image) == 0x0002F0, "Member 'UWBP_Crosshair_Cyberlimbs_DomeShield_C::HP_Image' has a wrong offset!");
static_assert(offsetof(UWBP_Crosshair_Cyberlimbs_DomeShield_C, HP_Image_1) == 0x0002F8, "Member 'UWBP_Crosshair_Cyberlimbs_DomeShield_C::HP_Image_1' has a wrong offset!");
static_assert(offsetof(UWBP_Crosshair_Cyberlimbs_DomeShield_C, HP_ProgressBar) == 0x000300, "Member 'UWBP_Crosshair_Cyberlimbs_DomeShield_C::HP_ProgressBar' has a wrong offset!");
static_assert(offsetof(UWBP_Crosshair_Cyberlimbs_DomeShield_C, HP_ProgressBar_1) == 0x000308, "Member 'UWBP_Crosshair_Cyberlimbs_DomeShield_C::HP_ProgressBar_1' has a wrong offset!");

}

