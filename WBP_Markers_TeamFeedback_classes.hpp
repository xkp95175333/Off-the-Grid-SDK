#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Markers_TeamFeedback

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Markers_TeamFeedback.WBP_Markers_TeamFeedback_C
// 0x0040 (0x0320 - 0x02E0)
class UWBP_Markers_TeamFeedback_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Player1_IMG;                                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Player2_IMG;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Player3_IMG;                                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Player4_IMG;                                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGzMarkerComponent*                     Marker;                                            // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AGzPlayerState*                         Ping_Source;                                       // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Item;                                           // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CheckDibs(class AGzPlayerState* PlayerState, bool Agree);
	void ClearAll();
	void DibsConstruct();
	void ExecuteUbergraph_WBP_Markers_TeamFeedback(int32 EntryPoint);
	void GetIndexInTeam(class APlayerState* PlayerState, int32* OutputPin);
	void InitialPingUpdate();
	void InitTeamFeedback(class UGzMarkerComponent* MarkerComponent, bool IsItem);
	void OnPingAgreementsChanged(class AGzPlayerState* PlayerState, const struct FGzPingData& PingData, bool bAgree);
	void OnPingDataChanged(class UGzMarkerComponent* MarkerComponent, const struct FGzPingData& PingData);
	void PreConstruct(bool IsDesignTime);
	void SetPlayerShapesAndColors();
	void Team_Feedback(class AGzPlayerState* PlayerState1, bool Agree);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Markers_TeamFeedback_C">();
	}
	static class UWBP_Markers_TeamFeedback_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Markers_TeamFeedback_C>();
	}
};
static_assert(alignof(UWBP_Markers_TeamFeedback_C) == 0x000008, "Wrong alignment on UWBP_Markers_TeamFeedback_C");
static_assert(sizeof(UWBP_Markers_TeamFeedback_C) == 0x000320, "Wrong size on UWBP_Markers_TeamFeedback_C");
static_assert(offsetof(UWBP_Markers_TeamFeedback_C, UberGraphFrame) == 0x0002E0, "Member 'UWBP_Markers_TeamFeedback_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Markers_TeamFeedback_C, Player1_IMG) == 0x0002E8, "Member 'UWBP_Markers_TeamFeedback_C::Player1_IMG' has a wrong offset!");
static_assert(offsetof(UWBP_Markers_TeamFeedback_C, Player2_IMG) == 0x0002F0, "Member 'UWBP_Markers_TeamFeedback_C::Player2_IMG' has a wrong offset!");
static_assert(offsetof(UWBP_Markers_TeamFeedback_C, Player3_IMG) == 0x0002F8, "Member 'UWBP_Markers_TeamFeedback_C::Player3_IMG' has a wrong offset!");
static_assert(offsetof(UWBP_Markers_TeamFeedback_C, Player4_IMG) == 0x000300, "Member 'UWBP_Markers_TeamFeedback_C::Player4_IMG' has a wrong offset!");
static_assert(offsetof(UWBP_Markers_TeamFeedback_C, Marker) == 0x000308, "Member 'UWBP_Markers_TeamFeedback_C::Marker' has a wrong offset!");
static_assert(offsetof(UWBP_Markers_TeamFeedback_C, Ping_Source) == 0x000310, "Member 'UWBP_Markers_TeamFeedback_C::Ping_Source' has a wrong offset!");
static_assert(offsetof(UWBP_Markers_TeamFeedback_C, Is_Item) == 0x000318, "Member 'UWBP_Markers_TeamFeedback_C::Is_Item' has a wrong offset!");

}

