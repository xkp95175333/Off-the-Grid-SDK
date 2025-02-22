#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SwitchZoomHint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SwitchZoomHint.WBP_SwitchZoomHint_C
// 0x0028 (0x0308 - 0x02E0)
class UWBP_SwitchZoomHint_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Fade;                                              // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_Crosshair_InputAction_C*           WBP_Crosshair_InputAction;                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                           FadeTimer;                                         // 0x02F8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         VisibilityDuration;                                // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void End();
	void ExecuteUbergraph_WBP_SwitchZoomHint(int32 EntryPoint);
	void FadeIn();
	void FadeOut();
	void OnTagAdded_CDF81E5C4509CDD9B30AC7832250ADE9(const struct FGameplayTag& Tag);
	void OnTagRemoved_CDF81E5C4509CDD9B30AC7832250ADE9(const struct FGameplayTag& Tag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SwitchZoomHint_C">();
	}
	static class UWBP_SwitchZoomHint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SwitchZoomHint_C>();
	}
};
static_assert(alignof(UWBP_SwitchZoomHint_C) == 0x000008, "Wrong alignment on UWBP_SwitchZoomHint_C");
static_assert(sizeof(UWBP_SwitchZoomHint_C) == 0x000308, "Wrong size on UWBP_SwitchZoomHint_C");
static_assert(offsetof(UWBP_SwitchZoomHint_C, UberGraphFrame) == 0x0002E0, "Member 'UWBP_SwitchZoomHint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_SwitchZoomHint_C, Fade) == 0x0002E8, "Member 'UWBP_SwitchZoomHint_C::Fade' has a wrong offset!");
static_assert(offsetof(UWBP_SwitchZoomHint_C, WBP_Crosshair_InputAction) == 0x0002F0, "Member 'UWBP_SwitchZoomHint_C::WBP_Crosshair_InputAction' has a wrong offset!");
static_assert(offsetof(UWBP_SwitchZoomHint_C, FadeTimer) == 0x0002F8, "Member 'UWBP_SwitchZoomHint_C::FadeTimer' has a wrong offset!");
static_assert(offsetof(UWBP_SwitchZoomHint_C, VisibilityDuration) == 0x000300, "Member 'UWBP_SwitchZoomHint_C::VisibilityDuration' has a wrong offset!");

}

