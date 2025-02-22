#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Redeployment

#include "Basic.hpp"

#include "G01_structs.hpp"
#include "G01_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Redeployment.WBP_Redeployment_C
// 0x00B8 (0x05E0 - 0x0528)
class UWBP_Redeployment_C final : public UGzNavigationWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0528(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         DiscountEvent_HorizontalBox;                       // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_NavigationButton_Action_C*         ExitButton;                                        // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGzTextBlock*                           Instruction_GzText;                                // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGzTextBlock*                           PlayerCurrrencyValue_GzText;                       // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           PlayerList_VerticalBox;                            // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGzTextBlock*                           RedeploymentDiscount_GzText;                       // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Team_WidgetSwitcher;                               // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         TotalBalance;                                      // 0x0568(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16EE[0x4];                                     // 0x056C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerCharacter_C*                  BP_PlayerCharacter;                                // 0x0570(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             RedeployingTeammates;                              // 0x0578(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnRedeployTeammatesSelected;                       // 0x0588(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AGzRedeploymentTerminal*                RedeploymentTerminal;                              // 0x0598(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnRemoved;                                         // 0x05A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                           EventTimerHandle;                                  // 0x05B0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentEventExpireTime;                            // 0x05B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EventActive;                                       // 0x05C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16EF[0x7];                                     // 0x05C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           EventCheckTimer;                                   // 0x05C8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGzItemChangeHandle                    InventoryHandle;                                   // 0x05D0(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateEventTime();
	void UpdateButtonRedeployCost();
	void SetIngameCurrency();
	void RedeployTeammate(class AGzPlayerState* PlayerState, class UWBP_Redeployment_MemberButton_C* RedeploymentButton);
	void RedeployingTeammates__DelegateSignature();
	void OnRemoved__DelegateSignature();
	void OnRedeployTeammatesSelected__DelegateSignature(class AController* Controller, TArray<class APlayerState*>& Teammates);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void OnEventNotificationStageDelegat(class FName NotificationID, EGzNotificationStageType StageType, const struct FGzEventNotificationData& NotificationData);
	void InventoryChange(const struct FGzInvItem& ItemDelta, EGzInvChangeEvent Event);
	TArray<class AGzPlayerState*> GetTeammates();
	void GenerateMembers(class AGzPlayerState* PlayerState);
	void ExecuteUbergraph_WBP_Redeployment(int32 EntryPoint);
	void EventCheck();
	void Destruct();
	bool CurrencyFilter(const struct FGzInvItem& Item, EGzInvChangeEvent ChangeEvent);
	void CreateMember(class AGzPlayerState* Teammate);
	void Construct();
	void BndEvt__WBP_Redeployment_WBP_NavigationButton_Action_C_0_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Redeployment_C">();
	}
	static class UWBP_Redeployment_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Redeployment_C>();
	}
};
static_assert(alignof(UWBP_Redeployment_C) == 0x000008, "Wrong alignment on UWBP_Redeployment_C");
static_assert(sizeof(UWBP_Redeployment_C) == 0x0005E0, "Wrong size on UWBP_Redeployment_C");
static_assert(offsetof(UWBP_Redeployment_C, UberGraphFrame) == 0x000528, "Member 'UWBP_Redeployment_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Redeployment_C, DiscountEvent_HorizontalBox) == 0x000530, "Member 'UWBP_Redeployment_C::DiscountEvent_HorizontalBox' has a wrong offset!");
static_assert(offsetof(UWBP_Redeployment_C, ExitButton) == 0x000538, "Member 'UWBP_Redeployment_C::ExitButton' has a wrong offset!");
static_assert(offsetof(UWBP_Redeployment_C, Instruction_GzText) == 0x000540, "Member 'UWBP_Redeployment_C::Instruction_GzText' has a wrong offset!");
static_assert(offsetof(UWBP_Redeployment_C, PlayerCurrrencyValue_GzText) == 0x000548, "Member 'UWBP_Redeployment_C::PlayerCurrrencyValue_GzText' has a wrong offset!");
static_assert(offsetof(UWBP_Redeployment_C, PlayerList_VerticalBox) == 0x000550, "Member 'UWBP_Redeployment_C::PlayerList_VerticalBox' has a wrong offset!");
static_assert(offsetof(UWBP_Redeployment_C, RedeploymentDiscount_GzText) == 0x000558, "Member 'UWBP_Redeployment_C::RedeploymentDiscount_GzText' has a wrong offset!");
static_assert(offsetof(UWBP_Redeployment_C, Team_WidgetSwitcher) == 0x000560, "Member 'UWBP_Redeployment_C::Team_WidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_Redeployment_C, TotalBalance) == 0x000568, "Member 'UWBP_Redeployment_C::TotalBalance' has a wrong offset!");
static_assert(offsetof(UWBP_Redeployment_C, BP_PlayerCharacter) == 0x000570, "Member 'UWBP_Redeployment_C::BP_PlayerCharacter' has a wrong offset!");
static_assert(offsetof(UWBP_Redeployment_C, RedeployingTeammates) == 0x000578, "Member 'UWBP_Redeployment_C::RedeployingTeammates' has a wrong offset!");
static_assert(offsetof(UWBP_Redeployment_C, OnRedeployTeammatesSelected) == 0x000588, "Member 'UWBP_Redeployment_C::OnRedeployTeammatesSelected' has a wrong offset!");
static_assert(offsetof(UWBP_Redeployment_C, RedeploymentTerminal) == 0x000598, "Member 'UWBP_Redeployment_C::RedeploymentTerminal' has a wrong offset!");
static_assert(offsetof(UWBP_Redeployment_C, OnRemoved) == 0x0005A0, "Member 'UWBP_Redeployment_C::OnRemoved' has a wrong offset!");
static_assert(offsetof(UWBP_Redeployment_C, EventTimerHandle) == 0x0005B0, "Member 'UWBP_Redeployment_C::EventTimerHandle' has a wrong offset!");
static_assert(offsetof(UWBP_Redeployment_C, CurrentEventExpireTime) == 0x0005B8, "Member 'UWBP_Redeployment_C::CurrentEventExpireTime' has a wrong offset!");
static_assert(offsetof(UWBP_Redeployment_C, EventActive) == 0x0005C0, "Member 'UWBP_Redeployment_C::EventActive' has a wrong offset!");
static_assert(offsetof(UWBP_Redeployment_C, EventCheckTimer) == 0x0005C8, "Member 'UWBP_Redeployment_C::EventCheckTimer' has a wrong offset!");
static_assert(offsetof(UWBP_Redeployment_C, InventoryHandle) == 0x0005D0, "Member 'UWBP_Redeployment_C::InventoryHandle' has a wrong offset!");

}

