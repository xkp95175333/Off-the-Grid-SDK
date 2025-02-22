#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TTR_Cash_Collected

#include "Basic.hpp"

#include "G01_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function TTR_Cash_Collected.TTR_Cash_Collected_C.ExecuteUbergraph_TTR_Cash_Collected
// 0x0030 (0x0030 - 0x0000)
struct TTR_Cash_Collected_C_ExecuteUbergraph_TTR_Cash_Collected final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x0004(0x0008)(ConstParm, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_664F[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGzInvItem                             K2Node_CustomEvent_ItemDelta;                      // 0x0010(0x0010)(ConstParm)
	EGzInvChangeEvent                             K2Node_CustomEvent_Event;                          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6650[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetItemCountByType_ReturnValue;           // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TTR_Cash_Collected_C_ExecuteUbergraph_TTR_Cash_Collected) == 0x000008, "Wrong alignment on TTR_Cash_Collected_C_ExecuteUbergraph_TTR_Cash_Collected");
static_assert(sizeof(TTR_Cash_Collected_C_ExecuteUbergraph_TTR_Cash_Collected) == 0x000030, "Wrong size on TTR_Cash_Collected_C_ExecuteUbergraph_TTR_Cash_Collected");
static_assert(offsetof(TTR_Cash_Collected_C_ExecuteUbergraph_TTR_Cash_Collected, EntryPoint) == 0x000000, "Member 'TTR_Cash_Collected_C_ExecuteUbergraph_TTR_Cash_Collected::EntryPoint' has a wrong offset!");
static_assert(offsetof(TTR_Cash_Collected_C_ExecuteUbergraph_TTR_Cash_Collected, Temp_struct_Variable) == 0x000004, "Member 'TTR_Cash_Collected_C_ExecuteUbergraph_TTR_Cash_Collected::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(TTR_Cash_Collected_C_ExecuteUbergraph_TTR_Cash_Collected, K2Node_CustomEvent_ItemDelta) == 0x000010, "Member 'TTR_Cash_Collected_C_ExecuteUbergraph_TTR_Cash_Collected::K2Node_CustomEvent_ItemDelta' has a wrong offset!");
static_assert(offsetof(TTR_Cash_Collected_C_ExecuteUbergraph_TTR_Cash_Collected, K2Node_CustomEvent_Event) == 0x000020, "Member 'TTR_Cash_Collected_C_ExecuteUbergraph_TTR_Cash_Collected::K2Node_CustomEvent_Event' has a wrong offset!");
static_assert(offsetof(TTR_Cash_Collected_C_ExecuteUbergraph_TTR_Cash_Collected, CallFunc_GetItemCountByType_ReturnValue) == 0x000024, "Member 'TTR_Cash_Collected_C_ExecuteUbergraph_TTR_Cash_Collected::CallFunc_GetItemCountByType_ReturnValue' has a wrong offset!");
static_assert(offsetof(TTR_Cash_Collected_C_ExecuteUbergraph_TTR_Cash_Collected, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000028, "Member 'TTR_Cash_Collected_C_ExecuteUbergraph_TTR_Cash_Collected::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function TTR_Cash_Collected.TTR_Cash_Collected_C.IsMoneyChangeEvent
// 0x0028 (0x0028 - 0x0000)
struct TTR_Cash_Collected_C_IsMoneyChangeEvent final
{
public:
	struct FGzInvItem                             Item;                                              // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	EGzInvChangeEvent                             ChangeEvent;                                       // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0011(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6651[0x5];                                     // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UGzItemData*                            CallFunc_GetItemData_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MatchesTag_ReturnValue;                   // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TTR_Cash_Collected_C_IsMoneyChangeEvent) == 0x000008, "Wrong alignment on TTR_Cash_Collected_C_IsMoneyChangeEvent");
static_assert(sizeof(TTR_Cash_Collected_C_IsMoneyChangeEvent) == 0x000028, "Wrong size on TTR_Cash_Collected_C_IsMoneyChangeEvent");
static_assert(offsetof(TTR_Cash_Collected_C_IsMoneyChangeEvent, Item) == 0x000000, "Member 'TTR_Cash_Collected_C_IsMoneyChangeEvent::Item' has a wrong offset!");
static_assert(offsetof(TTR_Cash_Collected_C_IsMoneyChangeEvent, ChangeEvent) == 0x000010, "Member 'TTR_Cash_Collected_C_IsMoneyChangeEvent::ChangeEvent' has a wrong offset!");
static_assert(offsetof(TTR_Cash_Collected_C_IsMoneyChangeEvent, ReturnValue) == 0x000011, "Member 'TTR_Cash_Collected_C_IsMoneyChangeEvent::ReturnValue' has a wrong offset!");
static_assert(offsetof(TTR_Cash_Collected_C_IsMoneyChangeEvent, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000012, "Member 'TTR_Cash_Collected_C_IsMoneyChangeEvent::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(TTR_Cash_Collected_C_IsMoneyChangeEvent, CallFunc_GetItemData_ReturnValue) == 0x000018, "Member 'TTR_Cash_Collected_C_IsMoneyChangeEvent::CallFunc_GetItemData_ReturnValue' has a wrong offset!");
static_assert(offsetof(TTR_Cash_Collected_C_IsMoneyChangeEvent, CallFunc_MatchesTag_ReturnValue) == 0x000020, "Member 'TTR_Cash_Collected_C_IsMoneyChangeEvent::CallFunc_MatchesTag_ReturnValue' has a wrong offset!");

// Function TTR_Cash_Collected.TTR_Cash_Collected_C.OnCurrencyAdded
// 0x0018 (0x0018 - 0x0000)
struct TTR_Cash_Collected_C_OnCurrencyAdded final
{
public:
	struct FGzInvItem                             ItemDelta;                                         // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	EGzInvChangeEvent                             Event;                                             // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TTR_Cash_Collected_C_OnCurrencyAdded) == 0x000008, "Wrong alignment on TTR_Cash_Collected_C_OnCurrencyAdded");
static_assert(sizeof(TTR_Cash_Collected_C_OnCurrencyAdded) == 0x000018, "Wrong size on TTR_Cash_Collected_C_OnCurrencyAdded");
static_assert(offsetof(TTR_Cash_Collected_C_OnCurrencyAdded, ItemDelta) == 0x000000, "Member 'TTR_Cash_Collected_C_OnCurrencyAdded::ItemDelta' has a wrong offset!");
static_assert(offsetof(TTR_Cash_Collected_C_OnCurrencyAdded, Event) == 0x000010, "Member 'TTR_Cash_Collected_C_OnCurrencyAdded::Event' has a wrong offset!");

// Function TTR_Cash_Collected.TTR_Cash_Collected_C.SubscribeToInventory
// 0x0068 (0x0068 - 0x0000)
struct TTR_Cash_Collected_C_SubscribeToInventory final
{
public:
	class APlayerState*                           Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  NewPawn;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  OldPawn;                                           // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGzPlayerViewTargetInterface> K2Node_DynamicCast_AsGz_Player_View_Target_Interface; // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6652[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UGzInvComponent*                        CallFunc_GetViewTargetInventory_ReturnValue;       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGzInvItem& ItemDelta, EGzInvChangeEvent Event)> K2Node_CreateDelegate_OutputDelegate;              // 0x0038(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGzInvComponent*                        Temp_object_Variable;                              // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGzInvItem& Item, EGzInvChangeEvent ChangeEvent)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TTR_Cash_Collected_C_SubscribeToInventory) == 0x000008, "Wrong alignment on TTR_Cash_Collected_C_SubscribeToInventory");
static_assert(sizeof(TTR_Cash_Collected_C_SubscribeToInventory) == 0x000068, "Wrong size on TTR_Cash_Collected_C_SubscribeToInventory");
static_assert(offsetof(TTR_Cash_Collected_C_SubscribeToInventory, Player) == 0x000000, "Member 'TTR_Cash_Collected_C_SubscribeToInventory::Player' has a wrong offset!");
static_assert(offsetof(TTR_Cash_Collected_C_SubscribeToInventory, NewPawn) == 0x000008, "Member 'TTR_Cash_Collected_C_SubscribeToInventory::NewPawn' has a wrong offset!");
static_assert(offsetof(TTR_Cash_Collected_C_SubscribeToInventory, OldPawn) == 0x000010, "Member 'TTR_Cash_Collected_C_SubscribeToInventory::OldPawn' has a wrong offset!");
static_assert(offsetof(TTR_Cash_Collected_C_SubscribeToInventory, K2Node_DynamicCast_AsGz_Player_View_Target_Interface) == 0x000018, "Member 'TTR_Cash_Collected_C_SubscribeToInventory::K2Node_DynamicCast_AsGz_Player_View_Target_Interface' has a wrong offset!");
static_assert(offsetof(TTR_Cash_Collected_C_SubscribeToInventory, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'TTR_Cash_Collected_C_SubscribeToInventory::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TTR_Cash_Collected_C_SubscribeToInventory, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'TTR_Cash_Collected_C_SubscribeToInventory::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TTR_Cash_Collected_C_SubscribeToInventory, CallFunc_GetViewTargetInventory_ReturnValue) == 0x000030, "Member 'TTR_Cash_Collected_C_SubscribeToInventory::CallFunc_GetViewTargetInventory_ReturnValue' has a wrong offset!");
static_assert(offsetof(TTR_Cash_Collected_C_SubscribeToInventory, K2Node_CreateDelegate_OutputDelegate) == 0x000038, "Member 'TTR_Cash_Collected_C_SubscribeToInventory::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TTR_Cash_Collected_C_SubscribeToInventory, Temp_object_Variable) == 0x000048, "Member 'TTR_Cash_Collected_C_SubscribeToInventory::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(TTR_Cash_Collected_C_SubscribeToInventory, K2Node_CreateDelegate_OutputDelegate_1) == 0x000050, "Member 'TTR_Cash_Collected_C_SubscribeToInventory::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(TTR_Cash_Collected_C_SubscribeToInventory, CallFunc_IsValid_ReturnValue_1) == 0x000060, "Member 'TTR_Cash_Collected_C_SubscribeToInventory::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function TTR_Cash_Collected.TTR_Cash_Collected_C.SubscribeToPawnChange
// 0x0030 (0x0030 - 0x0000)
struct TTR_Cash_Collected_C_SubscribeToPawnChange final
{
public:
	class AGzPlayerState*                         PlayerState;                                       // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetPawn_ReturnValue;                      // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6653[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGzPlayerState*                         CallFunc_GetPlayerStateFromPlayerId_ReturnValue;   // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TTR_Cash_Collected_C_SubscribeToPawnChange) == 0x000008, "Wrong alignment on TTR_Cash_Collected_C_SubscribeToPawnChange");
static_assert(sizeof(TTR_Cash_Collected_C_SubscribeToPawnChange) == 0x000030, "Wrong size on TTR_Cash_Collected_C_SubscribeToPawnChange");
static_assert(offsetof(TTR_Cash_Collected_C_SubscribeToPawnChange, PlayerState) == 0x000000, "Member 'TTR_Cash_Collected_C_SubscribeToPawnChange::PlayerState' has a wrong offset!");
static_assert(offsetof(TTR_Cash_Collected_C_SubscribeToPawnChange, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'TTR_Cash_Collected_C_SubscribeToPawnChange::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TTR_Cash_Collected_C_SubscribeToPawnChange, CallFunc_GetPawn_ReturnValue) == 0x000018, "Member 'TTR_Cash_Collected_C_SubscribeToPawnChange::CallFunc_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(TTR_Cash_Collected_C_SubscribeToPawnChange, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'TTR_Cash_Collected_C_SubscribeToPawnChange::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TTR_Cash_Collected_C_SubscribeToPawnChange, CallFunc_GetPlayerStateFromPlayerId_ReturnValue) == 0x000028, "Member 'TTR_Cash_Collected_C_SubscribeToPawnChange::CallFunc_GetPlayerStateFromPlayerId_ReturnValue' has a wrong offset!");

}

