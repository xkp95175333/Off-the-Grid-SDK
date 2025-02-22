#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BaseTooltip

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_BaseTooltip.WBP_BaseTooltip_C
// 0x0008 (0x02E8 - 0x02E0)
class UWBP_BaseTooltip_C : public UUserWidget
{
public:
	class UGzItemData*                            ItemData;                                          // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void GetItemData(class UGzItemData** Param_ItemData);
	void SetItemData(class UGzItemData* Param_ItemData);
	void UpdateTooltip();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_BaseTooltip_C">();
	}
	static class UWBP_BaseTooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_BaseTooltip_C>();
	}
};
static_assert(alignof(UWBP_BaseTooltip_C) == 0x000008, "Wrong alignment on UWBP_BaseTooltip_C");
static_assert(sizeof(UWBP_BaseTooltip_C) == 0x0002E8, "Wrong size on UWBP_BaseTooltip_C");
static_assert(offsetof(UWBP_BaseTooltip_C, ItemData) == 0x0002E0, "Member 'UWBP_BaseTooltip_C::ItemData' has a wrong offset!");

}

