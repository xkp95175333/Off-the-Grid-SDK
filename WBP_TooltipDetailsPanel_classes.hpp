#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TooltipDetailsPanel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "G01_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TooltipDetailsPanel.WBP_TooltipDetailsPanel_C
// 0x0038 (0x0318 - 0x02E0)
class UWBP_TooltipDetailsPanel_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_Rarity;                                     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGzTextBlock*                           Count_GzText;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         CounterHorizontalBox;                              // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGzTextBlock*                           Name_GzText;                                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGzTextBlock*                           Rarity_GzText;                                     // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bEnableRarity;                                     // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEnableCount;                                      // 0x0311(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_TooltipDetailsPanel(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetDetailsFromItemAsset(class UGzItemData* ItemData);
	void SetEnableRarity(bool Param_bEnableRarity, EGzItemRarity NewRarity);
	void SetItemCount(int32 Count);
	void SetItemName(const class FText& Param_Name);
	void SetRarity(EGzItemRarity Rarity);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TooltipDetailsPanel_C">();
	}
	static class UWBP_TooltipDetailsPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TooltipDetailsPanel_C>();
	}
};
static_assert(alignof(UWBP_TooltipDetailsPanel_C) == 0x000008, "Wrong alignment on UWBP_TooltipDetailsPanel_C");
static_assert(sizeof(UWBP_TooltipDetailsPanel_C) == 0x000318, "Wrong size on UWBP_TooltipDetailsPanel_C");
static_assert(offsetof(UWBP_TooltipDetailsPanel_C, UberGraphFrame) == 0x0002E0, "Member 'UWBP_TooltipDetailsPanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TooltipDetailsPanel_C, Border_Rarity) == 0x0002E8, "Member 'UWBP_TooltipDetailsPanel_C::Border_Rarity' has a wrong offset!");
static_assert(offsetof(UWBP_TooltipDetailsPanel_C, Count_GzText) == 0x0002F0, "Member 'UWBP_TooltipDetailsPanel_C::Count_GzText' has a wrong offset!");
static_assert(offsetof(UWBP_TooltipDetailsPanel_C, CounterHorizontalBox) == 0x0002F8, "Member 'UWBP_TooltipDetailsPanel_C::CounterHorizontalBox' has a wrong offset!");
static_assert(offsetof(UWBP_TooltipDetailsPanel_C, Name_GzText) == 0x000300, "Member 'UWBP_TooltipDetailsPanel_C::Name_GzText' has a wrong offset!");
static_assert(offsetof(UWBP_TooltipDetailsPanel_C, Rarity_GzText) == 0x000308, "Member 'UWBP_TooltipDetailsPanel_C::Rarity_GzText' has a wrong offset!");
static_assert(offsetof(UWBP_TooltipDetailsPanel_C, bEnableRarity) == 0x000310, "Member 'UWBP_TooltipDetailsPanel_C::bEnableRarity' has a wrong offset!");
static_assert(offsetof(UWBP_TooltipDetailsPanel_C, bEnableCount) == 0x000311, "Member 'UWBP_TooltipDetailsPanel_C::bEnableCount' has a wrong offset!");

}

