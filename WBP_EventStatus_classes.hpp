#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_EventStatus

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_EventStatus.WBP_EventStatus_C
// 0x00D8 (0x03B8 - 0x02E0)
class UWBP_EventStatus_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Background;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border;                                            // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Image;                                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               IconContainer;                                     // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGzTextBlock*                           Name_Text;                                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               NameOverlay;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar;                                       // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGzTextBlock*                           Time_Text;                                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               TimerText_Container;                               // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Title_Background;                                  // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Title_Background_1;                                // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGzTextBlock*                           Title_Text;                                        // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               TitleOverlay;                                      // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bShowTitleBackground;                              // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bShowTimer;                                        // 0x0351(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShowIconProgress;                                 // 0x0352(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bShowIconBackground;                               // 0x0353(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                           BackgroundColor;                                   // 0x0354(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ProgressColor;                                     // 0x0364(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6ADE[0x4];                                     // 0x0374(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        TimerTimeMax;                                      // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           TimerHandler;                                      // 0x0380(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentTime;                                       // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnEventTimeExpired;                                // 0x0390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FGameplayTag                           EventTag;                                          // 0x03A0(0x0008)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bInitiallyVisible;                                 // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_6ADF[0x3];                                     // 0x03A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   EvenID;                                            // 0x03AC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bShowName;                                         // 0x03B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          EnableTitleText;                                   // 0x03B5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bStatic;                                           // 0x03B6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ClearTimer();
	void Construct();
	void DecrementTime();
	void ExecuteUbergraph_WBP_EventStatus(int32 EntryPoint);
	void GetCurrentTime(double* Param_CurrentTime);
	void GetEventTag(struct FGameplayTag* Param_EventTag);
	void HideAllEllements();
	void OnEventTimeExpired__DelegateSignature(class UWBP_EventStatus_C* InfoPanelSlot);
	void PostEventEndAnnouncement();
	void SetIconTexture(class UTexture2D* Texture);
	void SetProgressColor(const struct FLinearColor& Param_ProgressColor);
	void SetTitleText(const class FText& InText, bool bForceShow);
	void ShowIconBackground();
	void ShowTimer();
	void ShowTitle(bool bShowTitleText);
	void StartTimer(double Time);
	void StartTimerDelay();
	void Update_Background_Visibility();
	void UpdateColors();
	void UpdateDisplayTime();
	void UpdateIconVisibility();
	void UpdateProgressColor();
	void UpdateTitle(bool ForceHide, const class FText& Param_Name);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_EventStatus_C">();
	}
	static class UWBP_EventStatus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_EventStatus_C>();
	}
};
static_assert(alignof(UWBP_EventStatus_C) == 0x000008, "Wrong alignment on UWBP_EventStatus_C");
static_assert(sizeof(UWBP_EventStatus_C) == 0x0003B8, "Wrong size on UWBP_EventStatus_C");
static_assert(offsetof(UWBP_EventStatus_C, UberGraphFrame) == 0x0002E0, "Member 'UWBP_EventStatus_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_EventStatus_C, Background) == 0x0002E8, "Member 'UWBP_EventStatus_C::Background' has a wrong offset!");
static_assert(offsetof(UWBP_EventStatus_C, Border) == 0x0002F0, "Member 'UWBP_EventStatus_C::Border' has a wrong offset!");
static_assert(offsetof(UWBP_EventStatus_C, Icon_Image) == 0x0002F8, "Member 'UWBP_EventStatus_C::Icon_Image' has a wrong offset!");
static_assert(offsetof(UWBP_EventStatus_C, IconContainer) == 0x000300, "Member 'UWBP_EventStatus_C::IconContainer' has a wrong offset!");
static_assert(offsetof(UWBP_EventStatus_C, Name_Text) == 0x000308, "Member 'UWBP_EventStatus_C::Name_Text' has a wrong offset!");
static_assert(offsetof(UWBP_EventStatus_C, NameOverlay) == 0x000310, "Member 'UWBP_EventStatus_C::NameOverlay' has a wrong offset!");
static_assert(offsetof(UWBP_EventStatus_C, ProgressBar) == 0x000318, "Member 'UWBP_EventStatus_C::ProgressBar' has a wrong offset!");
static_assert(offsetof(UWBP_EventStatus_C, Time_Text) == 0x000320, "Member 'UWBP_EventStatus_C::Time_Text' has a wrong offset!");
static_assert(offsetof(UWBP_EventStatus_C, TimerText_Container) == 0x000328, "Member 'UWBP_EventStatus_C::TimerText_Container' has a wrong offset!");
static_assert(offsetof(UWBP_EventStatus_C, Title_Background) == 0x000330, "Member 'UWBP_EventStatus_C::Title_Background' has a wrong offset!");
static_assert(offsetof(UWBP_EventStatus_C, Title_Background_1) == 0x000338, "Member 'UWBP_EventStatus_C::Title_Background_1' has a wrong offset!");
static_assert(offsetof(UWBP_EventStatus_C, Title_Text) == 0x000340, "Member 'UWBP_EventStatus_C::Title_Text' has a wrong offset!");
static_assert(offsetof(UWBP_EventStatus_C, TitleOverlay) == 0x000348, "Member 'UWBP_EventStatus_C::TitleOverlay' has a wrong offset!");
static_assert(offsetof(UWBP_EventStatus_C, bShowTitleBackground) == 0x000350, "Member 'UWBP_EventStatus_C::bShowTitleBackground' has a wrong offset!");
static_assert(offsetof(UWBP_EventStatus_C, bShowTimer) == 0x000351, "Member 'UWBP_EventStatus_C::bShowTimer' has a wrong offset!");
static_assert(offsetof(UWBP_EventStatus_C, bShowIconProgress) == 0x000352, "Member 'UWBP_EventStatus_C::bShowIconProgress' has a wrong offset!");
static_assert(offsetof(UWBP_EventStatus_C, bShowIconBackground) == 0x000353, "Member 'UWBP_EventStatus_C::bShowIconBackground' has a wrong offset!");
static_assert(offsetof(UWBP_EventStatus_C, BackgroundColor) == 0x000354, "Member 'UWBP_EventStatus_C::BackgroundColor' has a wrong offset!");
static_assert(offsetof(UWBP_EventStatus_C, ProgressColor) == 0x000364, "Member 'UWBP_EventStatus_C::ProgressColor' has a wrong offset!");
static_assert(offsetof(UWBP_EventStatus_C, TimerTimeMax) == 0x000378, "Member 'UWBP_EventStatus_C::TimerTimeMax' has a wrong offset!");
static_assert(offsetof(UWBP_EventStatus_C, TimerHandler) == 0x000380, "Member 'UWBP_EventStatus_C::TimerHandler' has a wrong offset!");
static_assert(offsetof(UWBP_EventStatus_C, CurrentTime) == 0x000388, "Member 'UWBP_EventStatus_C::CurrentTime' has a wrong offset!");
static_assert(offsetof(UWBP_EventStatus_C, OnEventTimeExpired) == 0x000390, "Member 'UWBP_EventStatus_C::OnEventTimeExpired' has a wrong offset!");
static_assert(offsetof(UWBP_EventStatus_C, EventTag) == 0x0003A0, "Member 'UWBP_EventStatus_C::EventTag' has a wrong offset!");
static_assert(offsetof(UWBP_EventStatus_C, bInitiallyVisible) == 0x0003A8, "Member 'UWBP_EventStatus_C::bInitiallyVisible' has a wrong offset!");
static_assert(offsetof(UWBP_EventStatus_C, EvenID) == 0x0003AC, "Member 'UWBP_EventStatus_C::EvenID' has a wrong offset!");
static_assert(offsetof(UWBP_EventStatus_C, bShowName) == 0x0003B4, "Member 'UWBP_EventStatus_C::bShowName' has a wrong offset!");
static_assert(offsetof(UWBP_EventStatus_C, EnableTitleText) == 0x0003B5, "Member 'UWBP_EventStatus_C::EnableTitleText' has a wrong offset!");
static_assert(offsetof(UWBP_EventStatus_C, bStatic) == 0x0003B6, "Member 'UWBP_EventStatus_C::bStatic' has a wrong offset!");

}

