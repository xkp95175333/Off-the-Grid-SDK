#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Vehicle_Layout_TAC

#include "Basic.hpp"

#include "WBP_Vehicle_Layout_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Vehicle_Layout_TAC.WBP_Vehicle_Layout_TAC_C
// 0x0030 (0x0368 - 0x0338)
class UWBP_Vehicle_Layout_TAC_C final : public UWBP_Vehicle_Layout_C
{
public:
	class UWBP_Vehicle_Seat_C*                    BackPassengerGunner;                               // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Vehicle_Seat_C*                    BackPassengerLeft;                                 // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Vehicle_Seat_C*                    BackPassengerRight;                                // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Vehicle_Seat_C*                    Driver;                                            // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Vehicle_Seat_C*                    PassengerRight;                                    // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                      UGP_Holder;                                        // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void InitSeatType();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Vehicle_Layout_TAC_C">();
	}
	static class UWBP_Vehicle_Layout_TAC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Vehicle_Layout_TAC_C>();
	}
};
static_assert(alignof(UWBP_Vehicle_Layout_TAC_C) == 0x000008, "Wrong alignment on UWBP_Vehicle_Layout_TAC_C");
static_assert(sizeof(UWBP_Vehicle_Layout_TAC_C) == 0x000368, "Wrong size on UWBP_Vehicle_Layout_TAC_C");
static_assert(offsetof(UWBP_Vehicle_Layout_TAC_C, BackPassengerGunner) == 0x000338, "Member 'UWBP_Vehicle_Layout_TAC_C::BackPassengerGunner' has a wrong offset!");
static_assert(offsetof(UWBP_Vehicle_Layout_TAC_C, BackPassengerLeft) == 0x000340, "Member 'UWBP_Vehicle_Layout_TAC_C::BackPassengerLeft' has a wrong offset!");
static_assert(offsetof(UWBP_Vehicle_Layout_TAC_C, BackPassengerRight) == 0x000348, "Member 'UWBP_Vehicle_Layout_TAC_C::BackPassengerRight' has a wrong offset!");
static_assert(offsetof(UWBP_Vehicle_Layout_TAC_C, Driver) == 0x000350, "Member 'UWBP_Vehicle_Layout_TAC_C::Driver' has a wrong offset!");
static_assert(offsetof(UWBP_Vehicle_Layout_TAC_C, PassengerRight) == 0x000358, "Member 'UWBP_Vehicle_Layout_TAC_C::PassengerRight' has a wrong offset!");
static_assert(offsetof(UWBP_Vehicle_Layout_TAC_C, UGP_Holder) == 0x000360, "Member 'UWBP_Vehicle_Layout_TAC_C::UGP_Holder' has a wrong offset!");

}

