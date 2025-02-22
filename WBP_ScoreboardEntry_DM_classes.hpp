#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ScoreboardEntry_DM

#include "Basic.hpp"

#include "G01_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ScoreboardEntry_DM.WBP_ScoreboardEntry_DM_C
// 0x0028 (0x0358 - 0x0330)
class UWBP_ScoreboardEntry_DM_C final : public UGzScoreboardEntry
{
public:
	class UBorder*                                HeaderBorder;                                      // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScoreValue_DM_C*                   WBP_ScoreValue_DM;                                 // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScoreValue_DM_C*                   WBP_ScoreValue_DM_1;                               // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScoreValue_DM_C*                   WBP_ScoreValue_DM_2;                               // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScoreValue_DM_C*                   WBP_ScoreValue_DM_39;                              // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ScoreboardEntry_DM_C">();
	}
	static class UWBP_ScoreboardEntry_DM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ScoreboardEntry_DM_C>();
	}
};
static_assert(alignof(UWBP_ScoreboardEntry_DM_C) == 0x000008, "Wrong alignment on UWBP_ScoreboardEntry_DM_C");
static_assert(sizeof(UWBP_ScoreboardEntry_DM_C) == 0x000358, "Wrong size on UWBP_ScoreboardEntry_DM_C");
static_assert(offsetof(UWBP_ScoreboardEntry_DM_C, HeaderBorder) == 0x000330, "Member 'UWBP_ScoreboardEntry_DM_C::HeaderBorder' has a wrong offset!");
static_assert(offsetof(UWBP_ScoreboardEntry_DM_C, WBP_ScoreValue_DM) == 0x000338, "Member 'UWBP_ScoreboardEntry_DM_C::WBP_ScoreValue_DM' has a wrong offset!");
static_assert(offsetof(UWBP_ScoreboardEntry_DM_C, WBP_ScoreValue_DM_1) == 0x000340, "Member 'UWBP_ScoreboardEntry_DM_C::WBP_ScoreValue_DM_1' has a wrong offset!");
static_assert(offsetof(UWBP_ScoreboardEntry_DM_C, WBP_ScoreValue_DM_2) == 0x000348, "Member 'UWBP_ScoreboardEntry_DM_C::WBP_ScoreValue_DM_2' has a wrong offset!");
static_assert(offsetof(UWBP_ScoreboardEntry_DM_C, WBP_ScoreValue_DM_39) == 0x000350, "Member 'UWBP_ScoreboardEntry_DM_C::WBP_ScoreValue_DM_39' has a wrong offset!");

}

