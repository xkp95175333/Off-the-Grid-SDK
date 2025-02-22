#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HEX_Generator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "G01_classes.hpp"
#include "AIModule_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HEX_Generator.BP_HEX_Generator_C
// 0x0128 (0x0418 - 0x02F0)
class ABP_HEX_Generator_C final : public AGzExtractorTowerSupply
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   TopCollisionCube;                                  // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_HEX_Generator_01;                               // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_HEX_Generator_01_Jet_b;                         // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_HEX_Generator_01_Slide_b;                       // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_HEX_Generator_01_Jet_a;                         // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_HEX_Generator_01_Slide_a;                       // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_HEX_Generator_01_Top;                           // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_HEX_Generator_01;                               // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      HeatNiagara;                                       // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      SmokeNiagara;                                      // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   HeatSink21;                                        // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   HeatSink19;                                        // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   HeatSink18;                                        // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   HeatSink17;                                        // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   HeatSink16;                                        // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   HeatSink13;                                        // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   HeatSink12;                                        // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   HeatSink11;                                        // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   HeatSink10;                                        // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   HeatSink9;                                         // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        HeatSinksRoot;                                     // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   AnchorComponent;                                   // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGzMarkerComponent*                     MarkerComponent;                                   // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         ReprintPlatesPosition_ZPosition_B83C21E045F78A2D9AFB26A7139FD459; // 0x03B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            ReprintPlatesPosition__Direction_B83C21E045F78A2D9AFB26A7139FD459; // 0x03BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68C3[0x3];                                     // 0x03BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     ReprintPlatesPosition;                             // 0x03C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        ProtectionTime;                                    // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ResetDelay;                                        // 0x03D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShieldFullyDown;                                  // 0x03D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AllowFriendlyFire;                                 // 0x03D5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68C4[0x2];                                     // 0x03D6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           WarningState;                                      // 0x03D8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bReprint;                                          // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68C5[0x7];                                     // 0x03E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_HEX_Extractor_C*                    MyTerminal;                                        // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InitialHeatSinkLocation;                           // 0x03F0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AStaticMeshActor*                       GeneratorCable;                                    // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CableDynamicMaterial;                              // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	TArray<class AGzDestructibleHeatSink*> CollectHeatSinks();
	void ExecuteUbergraph_BP_HEX_Generator(int32 EntryPoint);
	void HexDataChanged(const struct FGzExtractionData& Current);
	void InitializeAnchors();
	void InitializeFriendlyFire();
	void IsLocalPlayerInExtractingTeam(bool* IsInTeam, bool* Valid);
	void ReceiveBeginPlay();
	void ReceiveProtectionDownChanged();
	void ReceiveRequiredHeatSinksDestroyed();
	void Reprint(bool On);
	void ReprintPlatesPosition__FinishedFunc();
	void ReprintPlatesPosition__UpdateFunc();
	void SetHeatingEnabled(bool bEnabled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HEX_Generator_C">();
	}
	static class ABP_HEX_Generator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_HEX_Generator_C>();
	}
};
static_assert(alignof(ABP_HEX_Generator_C) == 0x000008, "Wrong alignment on ABP_HEX_Generator_C");
static_assert(sizeof(ABP_HEX_Generator_C) == 0x000418, "Wrong size on ABP_HEX_Generator_C");
static_assert(offsetof(ABP_HEX_Generator_C, UberGraphFrame) == 0x0002F0, "Member 'ABP_HEX_Generator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_HEX_Generator_C, TopCollisionCube) == 0x0002F8, "Member 'ABP_HEX_Generator_C::TopCollisionCube' has a wrong offset!");
static_assert(offsetof(ABP_HEX_Generator_C, SM_HEX_Generator_01) == 0x000300, "Member 'ABP_HEX_Generator_C::SM_HEX_Generator_01' has a wrong offset!");
static_assert(offsetof(ABP_HEX_Generator_C, SM_HEX_Generator_01_Jet_b) == 0x000308, "Member 'ABP_HEX_Generator_C::SM_HEX_Generator_01_Jet_b' has a wrong offset!");
static_assert(offsetof(ABP_HEX_Generator_C, SM_HEX_Generator_01_Slide_b) == 0x000310, "Member 'ABP_HEX_Generator_C::SM_HEX_Generator_01_Slide_b' has a wrong offset!");
static_assert(offsetof(ABP_HEX_Generator_C, SM_HEX_Generator_01_Jet_a) == 0x000318, "Member 'ABP_HEX_Generator_C::SM_HEX_Generator_01_Jet_a' has a wrong offset!");
static_assert(offsetof(ABP_HEX_Generator_C, SM_HEX_Generator_01_Slide_a) == 0x000320, "Member 'ABP_HEX_Generator_C::SM_HEX_Generator_01_Slide_a' has a wrong offset!");
static_assert(offsetof(ABP_HEX_Generator_C, SM_HEX_Generator_01_Top) == 0x000328, "Member 'ABP_HEX_Generator_C::SM_HEX_Generator_01_Top' has a wrong offset!");
static_assert(offsetof(ABP_HEX_Generator_C, SK_HEX_Generator_01) == 0x000330, "Member 'ABP_HEX_Generator_C::SK_HEX_Generator_01' has a wrong offset!");
static_assert(offsetof(ABP_HEX_Generator_C, HeatNiagara) == 0x000338, "Member 'ABP_HEX_Generator_C::HeatNiagara' has a wrong offset!");
static_assert(offsetof(ABP_HEX_Generator_C, SmokeNiagara) == 0x000340, "Member 'ABP_HEX_Generator_C::SmokeNiagara' has a wrong offset!");
static_assert(offsetof(ABP_HEX_Generator_C, HeatSink21) == 0x000348, "Member 'ABP_HEX_Generator_C::HeatSink21' has a wrong offset!");
static_assert(offsetof(ABP_HEX_Generator_C, HeatSink19) == 0x000350, "Member 'ABP_HEX_Generator_C::HeatSink19' has a wrong offset!");
static_assert(offsetof(ABP_HEX_Generator_C, HeatSink18) == 0x000358, "Member 'ABP_HEX_Generator_C::HeatSink18' has a wrong offset!");
static_assert(offsetof(ABP_HEX_Generator_C, HeatSink17) == 0x000360, "Member 'ABP_HEX_Generator_C::HeatSink17' has a wrong offset!");
static_assert(offsetof(ABP_HEX_Generator_C, HeatSink16) == 0x000368, "Member 'ABP_HEX_Generator_C::HeatSink16' has a wrong offset!");
static_assert(offsetof(ABP_HEX_Generator_C, HeatSink13) == 0x000370, "Member 'ABP_HEX_Generator_C::HeatSink13' has a wrong offset!");
static_assert(offsetof(ABP_HEX_Generator_C, HeatSink12) == 0x000378, "Member 'ABP_HEX_Generator_C::HeatSink12' has a wrong offset!");
static_assert(offsetof(ABP_HEX_Generator_C, HeatSink11) == 0x000380, "Member 'ABP_HEX_Generator_C::HeatSink11' has a wrong offset!");
static_assert(offsetof(ABP_HEX_Generator_C, HeatSink10) == 0x000388, "Member 'ABP_HEX_Generator_C::HeatSink10' has a wrong offset!");
static_assert(offsetof(ABP_HEX_Generator_C, HeatSink9) == 0x000390, "Member 'ABP_HEX_Generator_C::HeatSink9' has a wrong offset!");
static_assert(offsetof(ABP_HEX_Generator_C, HeatSinksRoot) == 0x000398, "Member 'ABP_HEX_Generator_C::HeatSinksRoot' has a wrong offset!");
static_assert(offsetof(ABP_HEX_Generator_C, AnchorComponent) == 0x0003A0, "Member 'ABP_HEX_Generator_C::AnchorComponent' has a wrong offset!");
static_assert(offsetof(ABP_HEX_Generator_C, MarkerComponent) == 0x0003A8, "Member 'ABP_HEX_Generator_C::MarkerComponent' has a wrong offset!");
static_assert(offsetof(ABP_HEX_Generator_C, DefaultSceneRoot) == 0x0003B0, "Member 'ABP_HEX_Generator_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_HEX_Generator_C, ReprintPlatesPosition_ZPosition_B83C21E045F78A2D9AFB26A7139FD459) == 0x0003B8, "Member 'ABP_HEX_Generator_C::ReprintPlatesPosition_ZPosition_B83C21E045F78A2D9AFB26A7139FD459' has a wrong offset!");
static_assert(offsetof(ABP_HEX_Generator_C, ReprintPlatesPosition__Direction_B83C21E045F78A2D9AFB26A7139FD459) == 0x0003BC, "Member 'ABP_HEX_Generator_C::ReprintPlatesPosition__Direction_B83C21E045F78A2D9AFB26A7139FD459' has a wrong offset!");
static_assert(offsetof(ABP_HEX_Generator_C, ReprintPlatesPosition) == 0x0003C0, "Member 'ABP_HEX_Generator_C::ReprintPlatesPosition' has a wrong offset!");
static_assert(offsetof(ABP_HEX_Generator_C, ProtectionTime) == 0x0003C8, "Member 'ABP_HEX_Generator_C::ProtectionTime' has a wrong offset!");
static_assert(offsetof(ABP_HEX_Generator_C, ResetDelay) == 0x0003D0, "Member 'ABP_HEX_Generator_C::ResetDelay' has a wrong offset!");
static_assert(offsetof(ABP_HEX_Generator_C, bShieldFullyDown) == 0x0003D4, "Member 'ABP_HEX_Generator_C::bShieldFullyDown' has a wrong offset!");
static_assert(offsetof(ABP_HEX_Generator_C, AllowFriendlyFire) == 0x0003D5, "Member 'ABP_HEX_Generator_C::AllowFriendlyFire' has a wrong offset!");
static_assert(offsetof(ABP_HEX_Generator_C, WarningState) == 0x0003D8, "Member 'ABP_HEX_Generator_C::WarningState' has a wrong offset!");
static_assert(offsetof(ABP_HEX_Generator_C, bReprint) == 0x0003E0, "Member 'ABP_HEX_Generator_C::bReprint' has a wrong offset!");
static_assert(offsetof(ABP_HEX_Generator_C, MyTerminal) == 0x0003E8, "Member 'ABP_HEX_Generator_C::MyTerminal' has a wrong offset!");
static_assert(offsetof(ABP_HEX_Generator_C, InitialHeatSinkLocation) == 0x0003F0, "Member 'ABP_HEX_Generator_C::InitialHeatSinkLocation' has a wrong offset!");
static_assert(offsetof(ABP_HEX_Generator_C, GeneratorCable) == 0x000408, "Member 'ABP_HEX_Generator_C::GeneratorCable' has a wrong offset!");
static_assert(offsetof(ABP_HEX_Generator_C, CableDynamicMaterial) == 0x000410, "Member 'ABP_HEX_Generator_C::CableDynamicMaterial' has a wrong offset!");

}

