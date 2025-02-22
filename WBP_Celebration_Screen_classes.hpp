#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Celebration_Screen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "G01_structs.hpp"
#include "G01_classes.hpp"
#include "CommonInput_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Celebration_Screen.WBP_Celebration_Screen_C
// 0x0088 (0x05B0 - 0x0528)
class UWBP_Celebration_Screen_C final : public UGzNavigationWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0528(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UGzTextBlock*                           GzTextBlock_Seed;                                  // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Navigation_DarkBG_Button_C*        LeaveMatch_Button;                                 // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         PlayerResultContainer;                             // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScreenBackground_C*                WBP_ScreenBackground;                              // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WinnerProfileItem_C*               WBP_WinnerProfileItem;                             // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WinnerProfileItem_C*               WBP_WinnerProfileItem_1;                           // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WinnerProfileItem_C*               WBP_WinnerProfileItem_2;                           // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FGzMatchEndResult                      PreviewMatchResult;                                // 0x0568(0x0018)(Edit, BlueprintVisible)
	TArray<class UGzGameStatTemplate*>            StatTemplates;                                     // 0x0580(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FMargin                                ProfileSpacing;                                    // 0x0590(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AGzGameState*                           GameState;                                         // 0x05A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bShowLeavePopup;                                   // 0x05A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateMatchEndResults(const struct FGzMatchEndResult& Result);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnInitialized();
	void OnCloseAction();
	void OnBackAction();
	void ExecuteUbergraph_WBP_Celebration_Screen(int32 EntryPoint);
	void CREATEDELEGATE_PROXYFUNCTION_0(const struct FGzMatchEndResult& Result);
	void Construct();
	void BndEvt__WBP_PostMatch_Screen_LeaveMatch_Button_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Celebration_Screen_C">();
	}
	static class UWBP_Celebration_Screen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Celebration_Screen_C>();
	}
};
static_assert(alignof(UWBP_Celebration_Screen_C) == 0x000008, "Wrong alignment on UWBP_Celebration_Screen_C");
static_assert(sizeof(UWBP_Celebration_Screen_C) == 0x0005B0, "Wrong size on UWBP_Celebration_Screen_C");
static_assert(offsetof(UWBP_Celebration_Screen_C, UberGraphFrame) == 0x000528, "Member 'UWBP_Celebration_Screen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Celebration_Screen_C, GzTextBlock_Seed) == 0x000530, "Member 'UWBP_Celebration_Screen_C::GzTextBlock_Seed' has a wrong offset!");
static_assert(offsetof(UWBP_Celebration_Screen_C, LeaveMatch_Button) == 0x000538, "Member 'UWBP_Celebration_Screen_C::LeaveMatch_Button' has a wrong offset!");
static_assert(offsetof(UWBP_Celebration_Screen_C, PlayerResultContainer) == 0x000540, "Member 'UWBP_Celebration_Screen_C::PlayerResultContainer' has a wrong offset!");
static_assert(offsetof(UWBP_Celebration_Screen_C, WBP_ScreenBackground) == 0x000548, "Member 'UWBP_Celebration_Screen_C::WBP_ScreenBackground' has a wrong offset!");
static_assert(offsetof(UWBP_Celebration_Screen_C, WBP_WinnerProfileItem) == 0x000550, "Member 'UWBP_Celebration_Screen_C::WBP_WinnerProfileItem' has a wrong offset!");
static_assert(offsetof(UWBP_Celebration_Screen_C, WBP_WinnerProfileItem_1) == 0x000558, "Member 'UWBP_Celebration_Screen_C::WBP_WinnerProfileItem_1' has a wrong offset!");
static_assert(offsetof(UWBP_Celebration_Screen_C, WBP_WinnerProfileItem_2) == 0x000560, "Member 'UWBP_Celebration_Screen_C::WBP_WinnerProfileItem_2' has a wrong offset!");
static_assert(offsetof(UWBP_Celebration_Screen_C, PreviewMatchResult) == 0x000568, "Member 'UWBP_Celebration_Screen_C::PreviewMatchResult' has a wrong offset!");
static_assert(offsetof(UWBP_Celebration_Screen_C, StatTemplates) == 0x000580, "Member 'UWBP_Celebration_Screen_C::StatTemplates' has a wrong offset!");
static_assert(offsetof(UWBP_Celebration_Screen_C, ProfileSpacing) == 0x000590, "Member 'UWBP_Celebration_Screen_C::ProfileSpacing' has a wrong offset!");
static_assert(offsetof(UWBP_Celebration_Screen_C, GameState) == 0x0005A0, "Member 'UWBP_Celebration_Screen_C::GameState' has a wrong offset!");
static_assert(offsetof(UWBP_Celebration_Screen_C, bShowLeavePopup) == 0x0005A8, "Member 'UWBP_Celebration_Screen_C::bShowLeavePopup' has a wrong offset!");

}

