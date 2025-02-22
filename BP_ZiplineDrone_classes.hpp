#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ZiplineDrone

#include "Basic.hpp"

#include "BP_ZiplineTemplate_classes.hpp"
#include "Engine_structs.hpp"
#include "G01_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ZiplineDrone.BP_ZiplineDrone_C
// 0x0090 (0x07C0 - 0x0730)
class ABP_ZiplineDrone_C final : public ABP_ZiplineTemplate_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ZiplineDrone_C;                  // 0x0730(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        RepulsionLocation;                                 // 0x0738(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Zipline_Drone_zip;                              // 0x0740(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Propeller_F_R_d;                                // 0x0748(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Zipline_Drone_body;                             // 0x0750(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Propeller_B_L_u;                                // 0x0758(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Propeller_B_L_d;                                // 0x0760(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Propeller_F_L_u;                                // 0x0768(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Propeller_B_R_u;                                // 0x0770(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Propeller_F_L_d;                                // 0x0778(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Propeller_F_R_u;                                // 0x0780(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Propeller_B_R_d;                                // 0x0788(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_Zipline_Drone;                                  // 0x0790(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGzStaticAkComponent*                   StaticAudioDroneMovement;                          // 0x0798(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGzMarkerComponent*                     MarkerComponent;                                   // 0x07A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FGzPingVoiceLineData                   PingVoiceLine;                                     // 0x07A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	double                                        MaxDistanceToTickSK;                               // 0x07B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ZiplineDrone(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SpawnRepulsionZone();

	const struct FGzPingVoiceLineData GetPingVoiceLineData() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ZiplineDrone_C">();
	}
	static class ABP_ZiplineDrone_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ZiplineDrone_C>();
	}
};
static_assert(alignof(ABP_ZiplineDrone_C) == 0x000010, "Wrong alignment on ABP_ZiplineDrone_C");
static_assert(sizeof(ABP_ZiplineDrone_C) == 0x0007C0, "Wrong size on ABP_ZiplineDrone_C");
static_assert(offsetof(ABP_ZiplineDrone_C, UberGraphFrame_BP_ZiplineDrone_C) == 0x000730, "Member 'ABP_ZiplineDrone_C::UberGraphFrame_BP_ZiplineDrone_C' has a wrong offset!");
static_assert(offsetof(ABP_ZiplineDrone_C, RepulsionLocation) == 0x000738, "Member 'ABP_ZiplineDrone_C::RepulsionLocation' has a wrong offset!");
static_assert(offsetof(ABP_ZiplineDrone_C, SM_Zipline_Drone_zip) == 0x000740, "Member 'ABP_ZiplineDrone_C::SM_Zipline_Drone_zip' has a wrong offset!");
static_assert(offsetof(ABP_ZiplineDrone_C, SM_Propeller_F_R_d) == 0x000748, "Member 'ABP_ZiplineDrone_C::SM_Propeller_F_R_d' has a wrong offset!");
static_assert(offsetof(ABP_ZiplineDrone_C, SM_Zipline_Drone_body) == 0x000750, "Member 'ABP_ZiplineDrone_C::SM_Zipline_Drone_body' has a wrong offset!");
static_assert(offsetof(ABP_ZiplineDrone_C, SM_Propeller_B_L_u) == 0x000758, "Member 'ABP_ZiplineDrone_C::SM_Propeller_B_L_u' has a wrong offset!");
static_assert(offsetof(ABP_ZiplineDrone_C, SM_Propeller_B_L_d) == 0x000760, "Member 'ABP_ZiplineDrone_C::SM_Propeller_B_L_d' has a wrong offset!");
static_assert(offsetof(ABP_ZiplineDrone_C, SM_Propeller_F_L_u) == 0x000768, "Member 'ABP_ZiplineDrone_C::SM_Propeller_F_L_u' has a wrong offset!");
static_assert(offsetof(ABP_ZiplineDrone_C, SM_Propeller_B_R_u) == 0x000770, "Member 'ABP_ZiplineDrone_C::SM_Propeller_B_R_u' has a wrong offset!");
static_assert(offsetof(ABP_ZiplineDrone_C, SM_Propeller_F_L_d) == 0x000778, "Member 'ABP_ZiplineDrone_C::SM_Propeller_F_L_d' has a wrong offset!");
static_assert(offsetof(ABP_ZiplineDrone_C, SM_Propeller_F_R_u) == 0x000780, "Member 'ABP_ZiplineDrone_C::SM_Propeller_F_R_u' has a wrong offset!");
static_assert(offsetof(ABP_ZiplineDrone_C, SM_Propeller_B_R_d) == 0x000788, "Member 'ABP_ZiplineDrone_C::SM_Propeller_B_R_d' has a wrong offset!");
static_assert(offsetof(ABP_ZiplineDrone_C, SK_Zipline_Drone) == 0x000790, "Member 'ABP_ZiplineDrone_C::SK_Zipline_Drone' has a wrong offset!");
static_assert(offsetof(ABP_ZiplineDrone_C, StaticAudioDroneMovement) == 0x000798, "Member 'ABP_ZiplineDrone_C::StaticAudioDroneMovement' has a wrong offset!");
static_assert(offsetof(ABP_ZiplineDrone_C, MarkerComponent) == 0x0007A0, "Member 'ABP_ZiplineDrone_C::MarkerComponent' has a wrong offset!");
static_assert(offsetof(ABP_ZiplineDrone_C, PingVoiceLine) == 0x0007A8, "Member 'ABP_ZiplineDrone_C::PingVoiceLine' has a wrong offset!");
static_assert(offsetof(ABP_ZiplineDrone_C, MaxDistanceToTickSK) == 0x0007B8, "Member 'ABP_ZiplineDrone_C::MaxDistanceToTickSK' has a wrong offset!");

}

