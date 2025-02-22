#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TTR_Cash_Collected

#include "Basic.hpp"

#include "G01_structs.hpp"
#include "G01_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass TTR_Cash_Collected.TTR_Cash_Collected_C
// 0x0028 (0x0060 - 0x0038)
class UTTR_Cash_Collected_C : public UGzTrialTracker
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0038(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGzItemChangeHandle                    InventorySubHandle;                                // 0x0040(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_664E[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGzInvComponent*                        Inventory;                                         // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         RequiredCash;                                      // 0x0058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TTR_Cash_Collected(int32 EntryPoint);
	bool IsMoneyChangeEvent(const struct FGzInvItem& Item, EGzInvChangeEvent ChangeEvent);
	void OnCurrencyAdded(const struct FGzInvItem& ItemDelta, EGzInvChangeEvent Event);
	void OnTrackingStarted();
	void SubscribeToInventory(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn);
	void SubscribeToPawnChange();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TTR_Cash_Collected_C">();
	}
	static class UTTR_Cash_Collected_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTTR_Cash_Collected_C>();
	}
};
static_assert(alignof(UTTR_Cash_Collected_C) == 0x000008, "Wrong alignment on UTTR_Cash_Collected_C");
static_assert(sizeof(UTTR_Cash_Collected_C) == 0x000060, "Wrong size on UTTR_Cash_Collected_C");
static_assert(offsetof(UTTR_Cash_Collected_C, UberGraphFrame) == 0x000038, "Member 'UTTR_Cash_Collected_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTTR_Cash_Collected_C, InventorySubHandle) == 0x000040, "Member 'UTTR_Cash_Collected_C::InventorySubHandle' has a wrong offset!");
static_assert(offsetof(UTTR_Cash_Collected_C, Inventory) == 0x000050, "Member 'UTTR_Cash_Collected_C::Inventory' has a wrong offset!");
static_assert(offsetof(UTTR_Cash_Collected_C, RequiredCash) == 0x000058, "Member 'UTTR_Cash_Collected_C::RequiredCash' has a wrong offset!");

}

