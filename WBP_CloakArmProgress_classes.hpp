#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CloakArmProgress

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "G01_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CloakArmProgress.WBP_CloakArmProgress_C
// 0x0070 (0x0378 - 0x0308)
class UWBP_CloakArmProgress_C final : public UGzProgressLogEntryWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 NameGlitch;                                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ProgressGlitch;                                    // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ProgressImage;                                     // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TimerEndBackground;                                // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TimerGlitch;                                       // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGzTextBlock*                           TimerText;                                         // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstance*                      MaterialInstance;                                  // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MaterialInstanceDynamic;                           // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         TimerUpdateRate;                                   // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E5D[0x4];                                     // 0x0354(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CloseToEndTime;                                    // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UpdateOnCloseToEnd;                                // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E5E[0x3];                                     // 0x0361(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           ProgressEndColor;                                  // 0x0364(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_CloakArmProgress(int32 EntryPoint);
	void OnInit_BP();
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateTimer();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CloakArmProgress_C">();
	}
	static class UWBP_CloakArmProgress_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CloakArmProgress_C>();
	}
};
static_assert(alignof(UWBP_CloakArmProgress_C) == 0x000008, "Wrong alignment on UWBP_CloakArmProgress_C");
static_assert(sizeof(UWBP_CloakArmProgress_C) == 0x000378, "Wrong size on UWBP_CloakArmProgress_C");
static_assert(offsetof(UWBP_CloakArmProgress_C, UberGraphFrame) == 0x000308, "Member 'UWBP_CloakArmProgress_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CloakArmProgress_C, NameGlitch) == 0x000310, "Member 'UWBP_CloakArmProgress_C::NameGlitch' has a wrong offset!");
static_assert(offsetof(UWBP_CloakArmProgress_C, ProgressGlitch) == 0x000318, "Member 'UWBP_CloakArmProgress_C::ProgressGlitch' has a wrong offset!");
static_assert(offsetof(UWBP_CloakArmProgress_C, ProgressImage) == 0x000320, "Member 'UWBP_CloakArmProgress_C::ProgressImage' has a wrong offset!");
static_assert(offsetof(UWBP_CloakArmProgress_C, TimerEndBackground) == 0x000328, "Member 'UWBP_CloakArmProgress_C::TimerEndBackground' has a wrong offset!");
static_assert(offsetof(UWBP_CloakArmProgress_C, TimerGlitch) == 0x000330, "Member 'UWBP_CloakArmProgress_C::TimerGlitch' has a wrong offset!");
static_assert(offsetof(UWBP_CloakArmProgress_C, TimerText) == 0x000338, "Member 'UWBP_CloakArmProgress_C::TimerText' has a wrong offset!");
static_assert(offsetof(UWBP_CloakArmProgress_C, MaterialInstance) == 0x000340, "Member 'UWBP_CloakArmProgress_C::MaterialInstance' has a wrong offset!");
static_assert(offsetof(UWBP_CloakArmProgress_C, MaterialInstanceDynamic) == 0x000348, "Member 'UWBP_CloakArmProgress_C::MaterialInstanceDynamic' has a wrong offset!");
static_assert(offsetof(UWBP_CloakArmProgress_C, TimerUpdateRate) == 0x000350, "Member 'UWBP_CloakArmProgress_C::TimerUpdateRate' has a wrong offset!");
static_assert(offsetof(UWBP_CloakArmProgress_C, CloseToEndTime) == 0x000358, "Member 'UWBP_CloakArmProgress_C::CloseToEndTime' has a wrong offset!");
static_assert(offsetof(UWBP_CloakArmProgress_C, UpdateOnCloseToEnd) == 0x000360, "Member 'UWBP_CloakArmProgress_C::UpdateOnCloseToEnd' has a wrong offset!");
static_assert(offsetof(UWBP_CloakArmProgress_C, ProgressEndColor) == 0x000364, "Member 'UWBP_CloakArmProgress_C::ProgressEndColor' has a wrong offset!");

}

