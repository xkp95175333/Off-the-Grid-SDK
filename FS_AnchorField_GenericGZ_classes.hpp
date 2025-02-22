#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FS_AnchorField_GenericGZ

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FieldSystemEngine_classes.hpp"
#include "Chaos_structs.hpp"
#include "EFieldShapeType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass FS_AnchorField_GenericGZ.FS_AnchorField_GenericGZ_C
// 0x0108 (0x03B0 - 0x02A8)
class AFS_AnchorField_GenericGZ_C final : public AFieldSystemActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          PlaneVolumeCol;                                    // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   ActiveTitleText;                                   // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   Anchor_Title_Text;                                 // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   ActiveValueText;                                   // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   Anchor_Text;                                       // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SphereVolume;                                      // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   BoxVolume;                                         // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       SphereVolumeCol;                                   // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCullingField*                          CullingField_Plane;                                // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCullingField*                          CullingField_Sphere;                               // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URadialFalloff*                         RadialFalloff;                                     // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   PlaneVolume;                                       // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPlaneFalloff*                          PlaneFalloff;                                      // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCullingField*                          CullingField_Box;                                  // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BoxVolumeCol;                                      // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxFalloff*                            BoxFalloff;                                        // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UUniformInteger*                        UniformInteger;                                    // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URadialVector*                          RadialVector;                                      // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	EObjectStateTypeEnum                          Dynamic_State;                                     // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Anchor_Active;                                     // 0x0349(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFieldShapeType                               Anchor_Falloff_Shape;                              // 0x034A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Debug;                                             // 0x034B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           AnchorColour;                                      // 0x034C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Deactivated;                                       // 0x035C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_618C[0x4];                                     // 0x036C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   AnchorVolume;                                      // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                   AnchorTextDisplay;                                 // 0x0378(0x0010)(Edit, BlueprintVisible)
	bool                                          ViewDebugText;                                     // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ViewWireFrame;                                     // 0x0389(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ViewSolidShapes;                                   // 0x038A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_618D[0x5];                                     // 0x038B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        TextVerticalOffset;                                // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           DeactivatedText;                                   // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TextScaleMult;                                     // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();
	void SetFalloffVisibility();
	void ReceiveBeginPlay();
	void Falloff_Field_Switch(class UUniformInteger* UniformInt, class UCullingField** CullingField);
	void ExecuteUbergraph_FS_AnchorField_GenericGZ(int32 EntryPoint);
	void AnchorDebugSetup();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FS_AnchorField_GenericGZ_C">();
	}
	static class AFS_AnchorField_GenericGZ_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFS_AnchorField_GenericGZ_C>();
	}
};
static_assert(alignof(AFS_AnchorField_GenericGZ_C) == 0x000008, "Wrong alignment on AFS_AnchorField_GenericGZ_C");
static_assert(sizeof(AFS_AnchorField_GenericGZ_C) == 0x0003B0, "Wrong size on AFS_AnchorField_GenericGZ_C");
static_assert(offsetof(AFS_AnchorField_GenericGZ_C, UberGraphFrame) == 0x0002A8, "Member 'AFS_AnchorField_GenericGZ_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AFS_AnchorField_GenericGZ_C, PlaneVolumeCol) == 0x0002B0, "Member 'AFS_AnchorField_GenericGZ_C::PlaneVolumeCol' has a wrong offset!");
static_assert(offsetof(AFS_AnchorField_GenericGZ_C, ActiveTitleText) == 0x0002B8, "Member 'AFS_AnchorField_GenericGZ_C::ActiveTitleText' has a wrong offset!");
static_assert(offsetof(AFS_AnchorField_GenericGZ_C, Anchor_Title_Text) == 0x0002C0, "Member 'AFS_AnchorField_GenericGZ_C::Anchor_Title_Text' has a wrong offset!");
static_assert(offsetof(AFS_AnchorField_GenericGZ_C, ActiveValueText) == 0x0002C8, "Member 'AFS_AnchorField_GenericGZ_C::ActiveValueText' has a wrong offset!");
static_assert(offsetof(AFS_AnchorField_GenericGZ_C, Anchor_Text) == 0x0002D0, "Member 'AFS_AnchorField_GenericGZ_C::Anchor_Text' has a wrong offset!");
static_assert(offsetof(AFS_AnchorField_GenericGZ_C, SphereVolume) == 0x0002D8, "Member 'AFS_AnchorField_GenericGZ_C::SphereVolume' has a wrong offset!");
static_assert(offsetof(AFS_AnchorField_GenericGZ_C, BoxVolume) == 0x0002E0, "Member 'AFS_AnchorField_GenericGZ_C::BoxVolume' has a wrong offset!");
static_assert(offsetof(AFS_AnchorField_GenericGZ_C, Arrow) == 0x0002E8, "Member 'AFS_AnchorField_GenericGZ_C::Arrow' has a wrong offset!");
static_assert(offsetof(AFS_AnchorField_GenericGZ_C, SphereVolumeCol) == 0x0002F0, "Member 'AFS_AnchorField_GenericGZ_C::SphereVolumeCol' has a wrong offset!");
static_assert(offsetof(AFS_AnchorField_GenericGZ_C, CullingField_Plane) == 0x0002F8, "Member 'AFS_AnchorField_GenericGZ_C::CullingField_Plane' has a wrong offset!");
static_assert(offsetof(AFS_AnchorField_GenericGZ_C, CullingField_Sphere) == 0x000300, "Member 'AFS_AnchorField_GenericGZ_C::CullingField_Sphere' has a wrong offset!");
static_assert(offsetof(AFS_AnchorField_GenericGZ_C, RadialFalloff) == 0x000308, "Member 'AFS_AnchorField_GenericGZ_C::RadialFalloff' has a wrong offset!");
static_assert(offsetof(AFS_AnchorField_GenericGZ_C, PlaneVolume) == 0x000310, "Member 'AFS_AnchorField_GenericGZ_C::PlaneVolume' has a wrong offset!");
static_assert(offsetof(AFS_AnchorField_GenericGZ_C, PlaneFalloff) == 0x000318, "Member 'AFS_AnchorField_GenericGZ_C::PlaneFalloff' has a wrong offset!");
static_assert(offsetof(AFS_AnchorField_GenericGZ_C, CullingField_Box) == 0x000320, "Member 'AFS_AnchorField_GenericGZ_C::CullingField_Box' has a wrong offset!");
static_assert(offsetof(AFS_AnchorField_GenericGZ_C, BoxVolumeCol) == 0x000328, "Member 'AFS_AnchorField_GenericGZ_C::BoxVolumeCol' has a wrong offset!");
static_assert(offsetof(AFS_AnchorField_GenericGZ_C, BoxFalloff) == 0x000330, "Member 'AFS_AnchorField_GenericGZ_C::BoxFalloff' has a wrong offset!");
static_assert(offsetof(AFS_AnchorField_GenericGZ_C, UniformInteger) == 0x000338, "Member 'AFS_AnchorField_GenericGZ_C::UniformInteger' has a wrong offset!");
static_assert(offsetof(AFS_AnchorField_GenericGZ_C, RadialVector) == 0x000340, "Member 'AFS_AnchorField_GenericGZ_C::RadialVector' has a wrong offset!");
static_assert(offsetof(AFS_AnchorField_GenericGZ_C, Dynamic_State) == 0x000348, "Member 'AFS_AnchorField_GenericGZ_C::Dynamic_State' has a wrong offset!");
static_assert(offsetof(AFS_AnchorField_GenericGZ_C, Anchor_Active) == 0x000349, "Member 'AFS_AnchorField_GenericGZ_C::Anchor_Active' has a wrong offset!");
static_assert(offsetof(AFS_AnchorField_GenericGZ_C, Anchor_Falloff_Shape) == 0x00034A, "Member 'AFS_AnchorField_GenericGZ_C::Anchor_Falloff_Shape' has a wrong offset!");
static_assert(offsetof(AFS_AnchorField_GenericGZ_C, Debug) == 0x00034B, "Member 'AFS_AnchorField_GenericGZ_C::Debug' has a wrong offset!");
static_assert(offsetof(AFS_AnchorField_GenericGZ_C, AnchorColour) == 0x00034C, "Member 'AFS_AnchorField_GenericGZ_C::AnchorColour' has a wrong offset!");
static_assert(offsetof(AFS_AnchorField_GenericGZ_C, Deactivated) == 0x00035C, "Member 'AFS_AnchorField_GenericGZ_C::Deactivated' has a wrong offset!");
static_assert(offsetof(AFS_AnchorField_GenericGZ_C, AnchorVolume) == 0x000370, "Member 'AFS_AnchorField_GenericGZ_C::AnchorVolume' has a wrong offset!");
static_assert(offsetof(AFS_AnchorField_GenericGZ_C, AnchorTextDisplay) == 0x000378, "Member 'AFS_AnchorField_GenericGZ_C::AnchorTextDisplay' has a wrong offset!");
static_assert(offsetof(AFS_AnchorField_GenericGZ_C, ViewDebugText) == 0x000388, "Member 'AFS_AnchorField_GenericGZ_C::ViewDebugText' has a wrong offset!");
static_assert(offsetof(AFS_AnchorField_GenericGZ_C, ViewWireFrame) == 0x000389, "Member 'AFS_AnchorField_GenericGZ_C::ViewWireFrame' has a wrong offset!");
static_assert(offsetof(AFS_AnchorField_GenericGZ_C, ViewSolidShapes) == 0x00038A, "Member 'AFS_AnchorField_GenericGZ_C::ViewSolidShapes' has a wrong offset!");
static_assert(offsetof(AFS_AnchorField_GenericGZ_C, TextVerticalOffset) == 0x000390, "Member 'AFS_AnchorField_GenericGZ_C::TextVerticalOffset' has a wrong offset!");
static_assert(offsetof(AFS_AnchorField_GenericGZ_C, DeactivatedText) == 0x000398, "Member 'AFS_AnchorField_GenericGZ_C::DeactivatedText' has a wrong offset!");
static_assert(offsetof(AFS_AnchorField_GenericGZ_C, TextScaleMult) == 0x0003A8, "Member 'AFS_AnchorField_GenericGZ_C::TextScaleMult' has a wrong offset!");

}

