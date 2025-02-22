#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MapMarkerContainer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "G01_classes.hpp"
#include "AIModule_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MapMarkerContainer.WBP_MapMarkerContainer_C
// 0x0018 (0x0560 - 0x0548)
class UWBP_MapMarkerContainer_C : public UGzMapMarkerContainer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0548(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AGzCharacter*                           Character;                                         // 0x0550(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UGzMarkerWidget*                        Marker_Widget;                                     // 0x0558(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_MapMarkerContainer(int32 EntryPoint);
	struct FVector2D GetMarkerLocation(const class UGzMarkerComponent* MarkerComponent);
	float GetMarkerRotation(const class UGzMarkerComponent* MarkerComponent);
	void GetRelativeLocalPlayerState(class APlayerState** OutPlayerState);
	void GetTeamAttitude(class AActor* InPlayerState, ETeamAttitude* TeamAttitude);
	bool IsSupportingRotation(const class UGzMarkerComponent* MarkerComponent);
	void OnMarkerAdded(class UGzMarkerWidget* MarkerWidget, class UGzMarkerComponent* MarkerComponent);

	double CalculatePlayerMarkerRotationForRemoteClient(class AActor* InActor) const;
	void GetActorLocation(const class AActor* Actor) const;
	float GetActorRotation(const class AActor* Actor) const;
	struct FVector2D GetPlayerActorPositionFromMarker(class UWidget* Widget) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MapMarkerContainer_C">();
	}
	static class UWBP_MapMarkerContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MapMarkerContainer_C>();
	}
};
static_assert(alignof(UWBP_MapMarkerContainer_C) == 0x000008, "Wrong alignment on UWBP_MapMarkerContainer_C");
static_assert(sizeof(UWBP_MapMarkerContainer_C) == 0x000560, "Wrong size on UWBP_MapMarkerContainer_C");
static_assert(offsetof(UWBP_MapMarkerContainer_C, UberGraphFrame) == 0x000548, "Member 'UWBP_MapMarkerContainer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarkerContainer_C, Character) == 0x000550, "Member 'UWBP_MapMarkerContainer_C::Character' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarkerContainer_C, Marker_Widget) == 0x000558, "Member 'UWBP_MapMarkerContainer_C::Marker_Widget' has a wrong offset!");

}

