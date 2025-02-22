#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Crosshair_Default

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "G01_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Crosshair_Default.WBP_Crosshair_Default_C
// 0x0038 (0x0368 - 0x0330)
class UWBP_Crosshair_Default_C final : public UGzWeaponCrosshair
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0330(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           Crosshair_CanvasPanel;                             // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Dot_Image;                                         // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CrosshairLeaf_C*                   Leaf_Bottom;                                       // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CrosshairLeaf_C*                   Leaf_Left;                                         // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CrosshairLeaf_C*                   Leaf_Right;                                        // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CrosshairLeaf_C*                   Leaf_Top;                                          // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Crosshair_Default(int32 EntryPoint);
	void OnAdsUpdated(bool bIsInAds);
	void OnUpdatedMaxPrecisionStateBP(bool bEnable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Crosshair_Default_C">();
	}
	static class UWBP_Crosshair_Default_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Crosshair_Default_C>();
	}
};
static_assert(alignof(UWBP_Crosshair_Default_C) == 0x000008, "Wrong alignment on UWBP_Crosshair_Default_C");
static_assert(sizeof(UWBP_Crosshair_Default_C) == 0x000368, "Wrong size on UWBP_Crosshair_Default_C");
static_assert(offsetof(UWBP_Crosshair_Default_C, UberGraphFrame) == 0x000330, "Member 'UWBP_Crosshair_Default_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Crosshair_Default_C, Crosshair_CanvasPanel) == 0x000338, "Member 'UWBP_Crosshair_Default_C::Crosshair_CanvasPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Crosshair_Default_C, Dot_Image) == 0x000340, "Member 'UWBP_Crosshair_Default_C::Dot_Image' has a wrong offset!");
static_assert(offsetof(UWBP_Crosshair_Default_C, Leaf_Bottom) == 0x000348, "Member 'UWBP_Crosshair_Default_C::Leaf_Bottom' has a wrong offset!");
static_assert(offsetof(UWBP_Crosshair_Default_C, Leaf_Left) == 0x000350, "Member 'UWBP_Crosshair_Default_C::Leaf_Left' has a wrong offset!");
static_assert(offsetof(UWBP_Crosshair_Default_C, Leaf_Right) == 0x000358, "Member 'UWBP_Crosshair_Default_C::Leaf_Right' has a wrong offset!");
static_assert(offsetof(UWBP_Crosshair_Default_C, Leaf_Top) == 0x000360, "Member 'UWBP_Crosshair_Default_C::Leaf_Top' has a wrong offset!");

}

