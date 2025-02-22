#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Hitmark_ShieldBreakV2_IconOnly

#include "Basic.hpp"

#include "WBP_Hitmark_V2_Base_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Hitmark_ShieldBreakV2_IconOnly.WBP_Hitmark_ShieldBreakV2_IconOnly_C
// 0x0010 (0x0318 - 0x0308)
class UWBP_Hitmark_ShieldBreakV2_IconOnly_C final : public UWBP_Hitmark_V2_Base_C
{
public:
	class UImage*                                 Image_LimbShotOffIcon;                             // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_LimbShotOffIcon_1;                           // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	class UWidgetAnimation* GetDisplayAnimation() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Hitmark_ShieldBreakV2_IconOnly_C">();
	}
	static class UWBP_Hitmark_ShieldBreakV2_IconOnly_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Hitmark_ShieldBreakV2_IconOnly_C>();
	}
};
static_assert(alignof(UWBP_Hitmark_ShieldBreakV2_IconOnly_C) == 0x000008, "Wrong alignment on UWBP_Hitmark_ShieldBreakV2_IconOnly_C");
static_assert(sizeof(UWBP_Hitmark_ShieldBreakV2_IconOnly_C) == 0x000318, "Wrong size on UWBP_Hitmark_ShieldBreakV2_IconOnly_C");
static_assert(offsetof(UWBP_Hitmark_ShieldBreakV2_IconOnly_C, Image_LimbShotOffIcon) == 0x000308, "Member 'UWBP_Hitmark_ShieldBreakV2_IconOnly_C::Image_LimbShotOffIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Hitmark_ShieldBreakV2_IconOnly_C, Image_LimbShotOffIcon_1) == 0x000310, "Member 'UWBP_Hitmark_ShieldBreakV2_IconOnly_C::Image_LimbShotOffIcon_1' has a wrong offset!");

}

