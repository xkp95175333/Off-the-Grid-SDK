#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_RedeploymentBackpack

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_RedeploymentBackpack.WBP_RedeploymentBackpack_C
// 0x0068 (0x0348 - 0x02E0)
class UWBP_RedeploymentBackpack_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ChangeNumberAnim;                                  // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       BlinkAnim;                                         // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HideAnim;                                          // 0x02F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowAnim;                                          // 0x0300(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BottomLine;                                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TopLine;                                           // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnHideRedeployment;                                // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         FedeOutAnimSpeed;                                  // 0x0330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ChangeNumberAnimSpeed;                             // 0x0334(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlinkingAnimSpeed;                                 // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BlinkingAnimCount;                                 // 0x033C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FedeInAnimSpeed;                                   // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_RedeploymentBackpack(int32 EntryPoint);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void OnHideRedeployment__DelegateSignature();
	void Show(bool* Successful);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_RedeploymentBackpack_C">();
	}
	static class UWBP_RedeploymentBackpack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_RedeploymentBackpack_C>();
	}
};
static_assert(alignof(UWBP_RedeploymentBackpack_C) == 0x000008, "Wrong alignment on UWBP_RedeploymentBackpack_C");
static_assert(sizeof(UWBP_RedeploymentBackpack_C) == 0x000348, "Wrong size on UWBP_RedeploymentBackpack_C");
static_assert(offsetof(UWBP_RedeploymentBackpack_C, UberGraphFrame) == 0x0002E0, "Member 'UWBP_RedeploymentBackpack_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_RedeploymentBackpack_C, ChangeNumberAnim) == 0x0002E8, "Member 'UWBP_RedeploymentBackpack_C::ChangeNumberAnim' has a wrong offset!");
static_assert(offsetof(UWBP_RedeploymentBackpack_C, BlinkAnim) == 0x0002F0, "Member 'UWBP_RedeploymentBackpack_C::BlinkAnim' has a wrong offset!");
static_assert(offsetof(UWBP_RedeploymentBackpack_C, HideAnim) == 0x0002F8, "Member 'UWBP_RedeploymentBackpack_C::HideAnim' has a wrong offset!");
static_assert(offsetof(UWBP_RedeploymentBackpack_C, ShowAnim) == 0x000300, "Member 'UWBP_RedeploymentBackpack_C::ShowAnim' has a wrong offset!");
static_assert(offsetof(UWBP_RedeploymentBackpack_C, BottomLine) == 0x000308, "Member 'UWBP_RedeploymentBackpack_C::BottomLine' has a wrong offset!");
static_assert(offsetof(UWBP_RedeploymentBackpack_C, Icon) == 0x000310, "Member 'UWBP_RedeploymentBackpack_C::Icon' has a wrong offset!");
static_assert(offsetof(UWBP_RedeploymentBackpack_C, TopLine) == 0x000318, "Member 'UWBP_RedeploymentBackpack_C::TopLine' has a wrong offset!");
static_assert(offsetof(UWBP_RedeploymentBackpack_C, OnHideRedeployment) == 0x000320, "Member 'UWBP_RedeploymentBackpack_C::OnHideRedeployment' has a wrong offset!");
static_assert(offsetof(UWBP_RedeploymentBackpack_C, FedeOutAnimSpeed) == 0x000330, "Member 'UWBP_RedeploymentBackpack_C::FedeOutAnimSpeed' has a wrong offset!");
static_assert(offsetof(UWBP_RedeploymentBackpack_C, ChangeNumberAnimSpeed) == 0x000334, "Member 'UWBP_RedeploymentBackpack_C::ChangeNumberAnimSpeed' has a wrong offset!");
static_assert(offsetof(UWBP_RedeploymentBackpack_C, BlinkingAnimSpeed) == 0x000338, "Member 'UWBP_RedeploymentBackpack_C::BlinkingAnimSpeed' has a wrong offset!");
static_assert(offsetof(UWBP_RedeploymentBackpack_C, BlinkingAnimCount) == 0x00033C, "Member 'UWBP_RedeploymentBackpack_C::BlinkingAnimCount' has a wrong offset!");
static_assert(offsetof(UWBP_RedeploymentBackpack_C, FedeInAnimSpeed) == 0x000340, "Member 'UWBP_RedeploymentBackpack_C::FedeInAnimSpeed' has a wrong offset!");

}

