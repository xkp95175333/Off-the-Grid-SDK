#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AdvancedThirdPersonCamera

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "AdvancedThirdPersonCamera_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// Class AdvancedThirdPersonCamera.ATPCArrowDebugActor
// 0x0018 (0x02B8 - 0x02A0)
class AATPCArrowDebugActor final : public AActor
{
public:
	class USceneComponent*                        SceneRootcomponent;                                // 0x02A0(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UArrowComponent*                        ArrowComponent;                                    // 0x02A8(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1ED3[0x8];                                     // 0x02B0(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void PickActor(class AActor* Actor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ATPCArrowDebugActor">();
	}
	static class AATPCArrowDebugActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AATPCArrowDebugActor>();
	}
};
static_assert(alignof(AATPCArrowDebugActor) == 0x000008, "Wrong alignment on AATPCArrowDebugActor");
static_assert(sizeof(AATPCArrowDebugActor) == 0x0002B8, "Wrong size on AATPCArrowDebugActor");
static_assert(offsetof(AATPCArrowDebugActor, SceneRootcomponent) == 0x0002A0, "Member 'AATPCArrowDebugActor::SceneRootcomponent' has a wrong offset!");
static_assert(offsetof(AATPCArrowDebugActor, ArrowComponent) == 0x0002A8, "Member 'AATPCArrowDebugActor::ArrowComponent' has a wrong offset!");

// Class AdvancedThirdPersonCamera.ATPCCameraBaseObject
// 0x0008 (0x0030 - 0x0028)
class UATPCCameraBaseObject : public UObject
{
public:
	class UATPCCameraComponent*                   OwningCamera;                                      // 0x0028(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void K2_OnEnterCameraMode(bool bWithInterpolation);
	void K2_OnExitCameraMode();
	void K2_Tick(float DeltaSeconds);
	void K2_Validate(bool bWithInterpolation);
	void Validate(bool bWithInterpolation);

	class AActor* GetOwningActor() const;
	class UATPCCameraComponent* GetOwningCamera() const;
	class APawn* GetOwningPawn() const;
	class APlayerCameraManager* GetPlayerCameraManager() const;
	class APlayerController* GetPlayerController() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ATPCCameraBaseObject">();
	}
	static class UATPCCameraBaseObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UATPCCameraBaseObject>();
	}
};
static_assert(alignof(UATPCCameraBaseObject) == 0x000008, "Wrong alignment on UATPCCameraBaseObject");
static_assert(sizeof(UATPCCameraBaseObject) == 0x000030, "Wrong size on UATPCCameraBaseObject");
static_assert(offsetof(UATPCCameraBaseObject, OwningCamera) == 0x000028, "Member 'UATPCCameraBaseObject::OwningCamera' has a wrong offset!");

// Class AdvancedThirdPersonCamera.ATPCCameraComponent
// 0x0420 (0x0650 - 0x0230)
#pragma pack(push, 0x1)
class alignas(0x10) UATPCCameraComponent : public USceneComponent
{
public:
	FMulticastInlineDelegateProperty_             OnCameraModeChangedDelegate;                       // 0x0230(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_1ED4[0x4];                                     // 0x0240(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           DefaultCameraModeTag;                              // 0x0244(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1ED5[0x4];                                     // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UATPCCameraModeDataAsset*>       CameraModesAssets;                                 // 0x0250(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<struct FGameplayTag, class UATPCCameraModeDataAsset*> SortedCameraModes;                                 // 0x0260(0x0050)(Protected, NativeAccessSpecifierProtected)
	class UATPCCameraModeDataAsset*               CustomCameraMode;                                  // 0x02B0(0x0008)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1ED6[0x8];                                     // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bPrintErrorsToScreen;                              // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1ED7[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UATPCCameraLocationObject>  LocationObjectClass;                               // 0x02C8(0x0008)(Edit, ZeroConstructor, NoClear, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UATPCCameraFOVObject>       FOVObjectClass;                                    // 0x02D0(0x0008)(Edit, ZeroConstructor, NoClear, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UATPCCameraFadingObject>    FadingObjectClass;                                 // 0x02D8(0x0008)(Edit, ZeroConstructor, NoClear, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UATPCCameraFollowTerrainObject> FollowTerrainObjectClass;                          // 0x02E0(0x0008)(Edit, ZeroConstructor, NoClear, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UATPCCameraShakesObject>    CameraShakesObjectClass;                           // 0x02E8(0x0008)(Edit, ZeroConstructor, NoClear, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UATPCCameraLockOnTargetObject> LockOnTargetObjectClass;                           // 0x02F0(0x0008)(Edit, ZeroConstructor, NoClear, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UATPCCameraLocationObject*              LocationObject;                                    // 0x02F8(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UATPCCameraFOVObject*                   FOVObject;                                         // 0x0300(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UATPCCameraFadingObject*                FadingObject;                                      // 0x0308(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UATPCCameraFollowTerrainObject*         FollowTerrainObject;                               // 0x0310(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UATPCCameraShakesObject*                CameraShakesObject;                                // 0x0318(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UATPCCameraLockOnTargetObject*          LockOnTargetObject;                                // 0x0320(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UATPCCameraBaseObject*>          CameraObjList;                                     // 0x0328(0x0010)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_1ED8[0x18];                                    // 0x0338(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	class UATPCCameraModeDataAsset*               EmptyCameraMode;                                   // 0x0350(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FATPCCameraMode                        CameraModeDEV;                                     // 0x0358(0x02D8)(NativeAccessSpecifierPrivate)
	uint8                                         Pad_1ED9[0x18];                                    // 0x0630(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddCameraMode(const struct FGameplayTag& CameraModeName, class UATPCCameraModeDataAsset* CameraMode);
	void ClearAllCameraModes();
	class UATPCCameraModeDataAsset* GetCameraMode(const struct FGameplayTag& CameraModeName);
	class UATPCCameraModeDataAsset* GetCurrentCameraMode();
	void OnCameraModeChangedDelegate__DelegateSignature();
	void RemoveCameraMode(const struct FGameplayTag& CameraModeName);
	void ResetCustomCameraMode(bool bWithInterpolation);
	void SetCameraDistance(float NewDistance, bool bInterpolate);
	void SetCameraMode(const struct FGameplayTag& CameraModeTag, bool bWithInterpolation);
	void SetCustomCameraMode(class UATPCCameraModeDataAsset* CameraMode, bool bWithInterpolation);
	void ValidateComponents(bool bWithInterpolation);
	void ZoomIn();
	void ZoomOut();

	bool CanSetCameraMode(const struct FGameplayTag& CameraModeTag) const;
	class AATPCCameraVolume* FindOverlapCameraVolume() const;
	float GetCameraDistance() const;
	class UATPCCameraFadingObject* GetCameraFadingObject() const;
	class UATPCCameraFollowTerrainObject* GetCameraFollowTerrainObject() const;
	class UATPCCameraFOVObject* GetCameraFOVObject() const;
	struct FVector GetCameraLocation() const;
	class UATPCCameraLocationObject* GetCameraLocationObject() const;
	class UATPCCameraLockOnTargetObject* GetCameraLockOnTargetObject() const;
	struct FGameplayTag GetCameraModeTagFromOverlapCameraVolume() const;
	struct FRotator GetCameraRotation() const;
	class UATPCCameraShakesObject* GetCameraShakesObject() const;
	struct FGameplayTag GetCurrentCameraModeTag() const;
	struct FGameplayTag GetDesiredCameraModeTag() const;
	struct FGameplayTag GetInitialCameraModeTag() const;
	bool HasCameraMode(const struct FGameplayTag& CameraModeName) const;
	bool IsSetCustomCameraMode() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ATPCCameraComponent">();
	}
	static class UATPCCameraComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UATPCCameraComponent>();
	}
};
#pragma pack(pop)
static_assert(alignof(UATPCCameraComponent) == 0x000010, "Wrong alignment on UATPCCameraComponent");
static_assert(sizeof(UATPCCameraComponent) == 0x000650, "Wrong size on UATPCCameraComponent");
static_assert(offsetof(UATPCCameraComponent, OnCameraModeChangedDelegate) == 0x000230, "Member 'UATPCCameraComponent::OnCameraModeChangedDelegate' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, DefaultCameraModeTag) == 0x000244, "Member 'UATPCCameraComponent::DefaultCameraModeTag' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, CameraModesAssets) == 0x000250, "Member 'UATPCCameraComponent::CameraModesAssets' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, SortedCameraModes) == 0x000260, "Member 'UATPCCameraComponent::SortedCameraModes' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, CustomCameraMode) == 0x0002B0, "Member 'UATPCCameraComponent::CustomCameraMode' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, bPrintErrorsToScreen) == 0x0002C0, "Member 'UATPCCameraComponent::bPrintErrorsToScreen' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, LocationObjectClass) == 0x0002C8, "Member 'UATPCCameraComponent::LocationObjectClass' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, FOVObjectClass) == 0x0002D0, "Member 'UATPCCameraComponent::FOVObjectClass' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, FadingObjectClass) == 0x0002D8, "Member 'UATPCCameraComponent::FadingObjectClass' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, FollowTerrainObjectClass) == 0x0002E0, "Member 'UATPCCameraComponent::FollowTerrainObjectClass' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, CameraShakesObjectClass) == 0x0002E8, "Member 'UATPCCameraComponent::CameraShakesObjectClass' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, LockOnTargetObjectClass) == 0x0002F0, "Member 'UATPCCameraComponent::LockOnTargetObjectClass' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, LocationObject) == 0x0002F8, "Member 'UATPCCameraComponent::LocationObject' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, FOVObject) == 0x000300, "Member 'UATPCCameraComponent::FOVObject' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, FadingObject) == 0x000308, "Member 'UATPCCameraComponent::FadingObject' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, FollowTerrainObject) == 0x000310, "Member 'UATPCCameraComponent::FollowTerrainObject' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, CameraShakesObject) == 0x000318, "Member 'UATPCCameraComponent::CameraShakesObject' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, LockOnTargetObject) == 0x000320, "Member 'UATPCCameraComponent::LockOnTargetObject' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, CameraObjList) == 0x000328, "Member 'UATPCCameraComponent::CameraObjList' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, EmptyCameraMode) == 0x000350, "Member 'UATPCCameraComponent::EmptyCameraMode' has a wrong offset!");
static_assert(offsetof(UATPCCameraComponent, CameraModeDEV) == 0x000358, "Member 'UATPCCameraComponent::CameraModeDEV' has a wrong offset!");

// Class AdvancedThirdPersonCamera.ATPCCameraFadingObject
// 0x00B0 (0x00E0 - 0x0030)
class UATPCCameraFadingObject final : public UATPCCameraBaseObject
{
public:
	uint8                                         Pad_1EDF[0xB0];                                    // 0x0030(0x00B0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddIgnoredActor(class AActor* Actor);
	void AddManualFadeActor(class AActor* Actor, bool bWithCustomTime, float CustomFadeOutTime);
	void ClearIgnoredActors();
	void ClearManualFadeActors();
	void RemoveIgnoredActor(class AActor* Actor);
	void RemoveManualFadeActor(class AActor* Actor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ATPCCameraFadingObject">();
	}
	static class UATPCCameraFadingObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UATPCCameraFadingObject>();
	}
};
static_assert(alignof(UATPCCameraFadingObject) == 0x000008, "Wrong alignment on UATPCCameraFadingObject");
static_assert(sizeof(UATPCCameraFadingObject) == 0x0000E0, "Wrong size on UATPCCameraFadingObject");

// Class AdvancedThirdPersonCamera.ATPCCameraFollowTerrainObject
// 0x0050 (0x0080 - 0x0030)
class UATPCCameraFollowTerrainObject final : public UATPCCameraBaseObject
{
public:
	uint8                                         Pad_1EE1[0x50];                                    // 0x0030(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ATPCCameraFollowTerrainObject">();
	}
	static class UATPCCameraFollowTerrainObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UATPCCameraFollowTerrainObject>();
	}
};
static_assert(alignof(UATPCCameraFollowTerrainObject) == 0x000008, "Wrong alignment on UATPCCameraFollowTerrainObject");
static_assert(sizeof(UATPCCameraFollowTerrainObject) == 0x000080, "Wrong size on UATPCCameraFollowTerrainObject");

// Class AdvancedThirdPersonCamera.ATPCCameraFOVObject
// 0x0020 (0x0050 - 0x0030)
class UATPCCameraFOVObject final : public UATPCCameraBaseObject
{
public:
	uint8                                         Pad_1EE2[0x8];                                     // 0x0030(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            OffsetCurve;                                       // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1EE3[0x10];                                    // 0x0040(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	float GetOverrideFOV();
	void ResetOverrideFOV(bool bWithInterp);
	void SetOverrideFOV(float NewFOV, bool bWithInterp);

	float GetCurrentFOV() const;
	float GetInterpFOV(float InFOV, float InDeltaTime) const;
	float GetTargetFOV(const class APlayerCameraManager* InCameraManager, bool bInWithInterpolation, float InDeltaTime) const;
	bool IsOverrideFOV() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ATPCCameraFOVObject">();
	}
	static class UATPCCameraFOVObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UATPCCameraFOVObject>();
	}
};
static_assert(alignof(UATPCCameraFOVObject) == 0x000008, "Wrong alignment on UATPCCameraFOVObject");
static_assert(sizeof(UATPCCameraFOVObject) == 0x000050, "Wrong size on UATPCCameraFOVObject");
static_assert(offsetof(UATPCCameraFOVObject, OffsetCurve) == 0x000038, "Member 'UATPCCameraFOVObject::OffsetCurve' has a wrong offset!");

// Class AdvancedThirdPersonCamera.ATPCCameraLocationObject
// 0x03A0 (0x03D0 - 0x0030)
#pragma pack(push, 0x1)
class alignas(0x10) UATPCCameraLocationObject : public UATPCCameraBaseObject
{
public:
	FMulticastInlineDelegateProperty_             OnDesiredCameraRotationReached;                    // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_1EE7[0x358];                                   // 0x0040(0x0358)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveVector*                           OffsetVectorCurve;                                 // 0x0398(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1EE8[0x28];                                    // 0x03A0(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AttachCameraToComponent(class USceneComponent* ParentComponent, const struct FVector& RelativeLocation, class FName SocketName, bool bWithInterp, float InterpSpeed);
	void ResetCustomSocketOffset(bool bWithInterpolation);
	void ResetCustomTargetOffset(bool bWithInterpolation);
	void ResetOverrideCameraDistance(bool bWithInterpolation);
	void ResetOverrideCameraLocation();
	void ResetOverrideCameraRotation();
	void ResetOverrideCameraRotationSettings();
	void SetCameraDistance(float NewDist, bool bInterpolate);
	void SetCustomSocketOffset(const struct FVector& NewSocketOffset, bool bWithInterpolation, float InterpSpeed);
	void SetCustomTargetOffset(const struct FVector& NewTargetOffset, bool bWithInterpolation, float InterpSpeed);
	void SetOverrideCameraDistance(float NewOverrideDistance, bool bWithInterpolation, float InterpSpeed);
	void SetOverrideCameraLocation(const struct FVector& NewOverrideLocation);
	void SetOverrideCameraRotation(const struct FATPCOverrideCameraRotation& NewOverrideRotation);
	void SetOverrideOffsetCameraRotationSettings(const struct FATPCRotationOffsetSettings& Settings, bool bWithInterp);
	void SetViewRotation(const struct FRotator& Rotation);

	struct FVector GetAllSocketOffsets() const;
	float GetCameraDistance() const;
	struct FVector GetCameraLocation() const;
	struct FRotator GetCameraRotation() const;
	float GetCameraTargetDistance() const;
	struct FVector GetCustomSocketOffset() const;
	struct FVector GetCustomTargetOffset() const;
	float GetOverrideCameraDistance() const;
	struct FVector GetOverrideCameraLocation() const;
	const struct FATPCOverrideCameraRotation GetOverrideCameraRotation() const;
	const struct FATPCRotationOffsetSettings GetOverrideOffsetCameraRotationSettings() const;
	float GetRealCameraDistance() const;
	struct FVector GetSocketOffset() const;
	struct FVector GetTargetOffset() const;
	struct FRotator GetViewRotation() const;
	bool HasCustomSocketOffset() const;
	bool HasCustomTargetOffset() const;
	bool IsOverrideCameraDistance() const;
	bool IsOverrideCameraLocation() const;
	bool IsOverrideCameraRotation() const;
	bool IsOverrideCameraRotationSettings() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ATPCCameraLocationObject">();
	}
	static class UATPCCameraLocationObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UATPCCameraLocationObject>();
	}
};
#pragma pack(pop)
static_assert(alignof(UATPCCameraLocationObject) == 0x000010, "Wrong alignment on UATPCCameraLocationObject");
static_assert(sizeof(UATPCCameraLocationObject) == 0x0003D0, "Wrong size on UATPCCameraLocationObject");
static_assert(offsetof(UATPCCameraLocationObject, OnDesiredCameraRotationReached) == 0x000030, "Member 'UATPCCameraLocationObject::OnDesiredCameraRotationReached' has a wrong offset!");
static_assert(offsetof(UATPCCameraLocationObject, OffsetVectorCurve) == 0x000398, "Member 'UATPCCameraLocationObject::OffsetVectorCurve' has a wrong offset!");

// Class AdvancedThirdPersonCamera.ATPCCameraLockOnTargetObject
// 0x0040 (0x0070 - 0x0030)
class UATPCCameraLockOnTargetObject final : public UATPCCameraBaseObject
{
public:
	FMulticastInlineDelegateProperty_             OnTargetChangeDelegate;                            // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_1EEF[0x10];                                    // 0x0040(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class AATPCArrowDebugActor*                   TargetDebugActor;                                  // 0x0050(0x0008)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1EF0[0x18];                                    // 0x0058(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnTargetChangeDelegate__DelegateSignature(class AActor* NewTarget);
	bool SetTargetActor(class AActor* NewTargetActor);
	bool SetTargetActorWithResetTimer(class AActor* NewTargetActor, float TargetResetTime);

	class AActor* GetTargetActor() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ATPCCameraLockOnTargetObject">();
	}
	static class UATPCCameraLockOnTargetObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UATPCCameraLockOnTargetObject>();
	}
};
static_assert(alignof(UATPCCameraLockOnTargetObject) == 0x000008, "Wrong alignment on UATPCCameraLockOnTargetObject");
static_assert(sizeof(UATPCCameraLockOnTargetObject) == 0x000070, "Wrong size on UATPCCameraLockOnTargetObject");
static_assert(offsetof(UATPCCameraLockOnTargetObject, OnTargetChangeDelegate) == 0x000030, "Member 'UATPCCameraLockOnTargetObject::OnTargetChangeDelegate' has a wrong offset!");
static_assert(offsetof(UATPCCameraLockOnTargetObject, TargetDebugActor) == 0x000050, "Member 'UATPCCameraLockOnTargetObject::TargetDebugActor' has a wrong offset!");

// Class AdvancedThirdPersonCamera.ATPCCameraModeDataAsset
// 0x02F8 (0x0328 - 0x0030)
class UATPCCameraModeDataAsset final : public UDataAsset
{
public:
	struct FGameplayTag                           CameraModeTag;                                     // 0x0030(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FATPCCameraMode                        CameraModeSettings;                                // 0x0038(0x02D8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class UATPCCameraModeScript*>          CameraModeScripts;                                 // 0x0310(0x0010)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                         Priority;                                          // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1EF3[0x4];                                     // 0x0324(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ATPCCameraModeDataAsset">();
	}
	static class UATPCCameraModeDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UATPCCameraModeDataAsset>();
	}
};
static_assert(alignof(UATPCCameraModeDataAsset) == 0x000008, "Wrong alignment on UATPCCameraModeDataAsset");
static_assert(sizeof(UATPCCameraModeDataAsset) == 0x000328, "Wrong size on UATPCCameraModeDataAsset");
static_assert(offsetof(UATPCCameraModeDataAsset, CameraModeTag) == 0x000030, "Member 'UATPCCameraModeDataAsset::CameraModeTag' has a wrong offset!");
static_assert(offsetof(UATPCCameraModeDataAsset, CameraModeSettings) == 0x000038, "Member 'UATPCCameraModeDataAsset::CameraModeSettings' has a wrong offset!");
static_assert(offsetof(UATPCCameraModeDataAsset, CameraModeScripts) == 0x000310, "Member 'UATPCCameraModeDataAsset::CameraModeScripts' has a wrong offset!");
static_assert(offsetof(UATPCCameraModeDataAsset, Priority) == 0x000320, "Member 'UATPCCameraModeDataAsset::Priority' has a wrong offset!");

// Class AdvancedThirdPersonCamera.ATPCCameraModeScript
// 0x0018 (0x0040 - 0x0028)
class UATPCCameraModeScript : public UObject
{
public:
	class UATPCCameraComponent*                   OwningCamera;                                      // 0x0028(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bEnableTick;                                       // 0x0030(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1EF4[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	EATPCCameraModeScriptTickGroup                TickGroup;                                         // 0x0034(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1EF5[0x8];                                     // 0x0038(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void K2_OnEnterCameraMode(class UATPCCameraComponent* Camera);
	void K2_OnExitCameraMode(class UATPCCameraComponent* Camera);
	void K2_Tick(class UATPCCameraComponent* Camera, float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ATPCCameraModeScript">();
	}
	static class UATPCCameraModeScript* GetDefaultObj()
	{
		return GetDefaultObjImpl<UATPCCameraModeScript>();
	}
};
static_assert(alignof(UATPCCameraModeScript) == 0x000008, "Wrong alignment on UATPCCameraModeScript");
static_assert(sizeof(UATPCCameraModeScript) == 0x000040, "Wrong size on UATPCCameraModeScript");
static_assert(offsetof(UATPCCameraModeScript, OwningCamera) == 0x000028, "Member 'UATPCCameraModeScript::OwningCamera' has a wrong offset!");
static_assert(offsetof(UATPCCameraModeScript, bEnableTick) == 0x000030, "Member 'UATPCCameraModeScript::bEnableTick' has a wrong offset!");
static_assert(offsetof(UATPCCameraModeScript, TickGroup) == 0x000034, "Member 'UATPCCameraModeScript::TickGroup' has a wrong offset!");

// Class AdvancedThirdPersonCamera.ATPCCameraModeScript_ChangeMovementSpeed
// 0x0010 (0x0050 - 0x0040)
class UATPCCameraModeScript_ChangeMovementSpeed final : public UATPCCameraModeScript
{
public:
	float                                         NewMaxMovementSpeed;                               // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRestoreOldMovementSpeedOnExitCameraMode;          // 0x0044(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1EF7[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         OldMaxMovementSpeed;                               // 0x0048(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1EF8[0x4];                                     // 0x004C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ATPCCameraModeScript_ChangeMovementSpeed">();
	}
	static class UATPCCameraModeScript_ChangeMovementSpeed* GetDefaultObj()
	{
		return GetDefaultObjImpl<UATPCCameraModeScript_ChangeMovementSpeed>();
	}
};
static_assert(alignof(UATPCCameraModeScript_ChangeMovementSpeed) == 0x000008, "Wrong alignment on UATPCCameraModeScript_ChangeMovementSpeed");
static_assert(sizeof(UATPCCameraModeScript_ChangeMovementSpeed) == 0x000050, "Wrong size on UATPCCameraModeScript_ChangeMovementSpeed");
static_assert(offsetof(UATPCCameraModeScript_ChangeMovementSpeed, NewMaxMovementSpeed) == 0x000040, "Member 'UATPCCameraModeScript_ChangeMovementSpeed::NewMaxMovementSpeed' has a wrong offset!");
static_assert(offsetof(UATPCCameraModeScript_ChangeMovementSpeed, bRestoreOldMovementSpeedOnExitCameraMode) == 0x000044, "Member 'UATPCCameraModeScript_ChangeMovementSpeed::bRestoreOldMovementSpeedOnExitCameraMode' has a wrong offset!");
static_assert(offsetof(UATPCCameraModeScript_ChangeMovementSpeed, OldMaxMovementSpeed) == 0x000048, "Member 'UATPCCameraModeScript_ChangeMovementSpeed::OldMaxMovementSpeed' has a wrong offset!");

// Class AdvancedThirdPersonCamera.ATPCCameraModeScript_PawnUseControllerRotation
// 0x0008 (0x0048 - 0x0040)
class UATPCCameraModeScript_PawnUseControllerRotation final : public UATPCCameraModeScript
{
public:
	bool                                          OrientRotationToMovement;                          // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          UseControllerDesiredRotation;                      // 0x0041(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRestoreOldValuesOnExitCameraMode;                 // 0x0042(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          OldOrientRotationToMovement;                       // 0x0043(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          OldUseControllerDesiredRotation;                   // 0x0044(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1EF9[0x3];                                     // 0x0045(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ATPCCameraModeScript_PawnUseControllerRotation">();
	}
	static class UATPCCameraModeScript_PawnUseControllerRotation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UATPCCameraModeScript_PawnUseControllerRotation>();
	}
};
static_assert(alignof(UATPCCameraModeScript_PawnUseControllerRotation) == 0x000008, "Wrong alignment on UATPCCameraModeScript_PawnUseControllerRotation");
static_assert(sizeof(UATPCCameraModeScript_PawnUseControllerRotation) == 0x000048, "Wrong size on UATPCCameraModeScript_PawnUseControllerRotation");
static_assert(offsetof(UATPCCameraModeScript_PawnUseControllerRotation, OrientRotationToMovement) == 0x000040, "Member 'UATPCCameraModeScript_PawnUseControllerRotation::OrientRotationToMovement' has a wrong offset!");
static_assert(offsetof(UATPCCameraModeScript_PawnUseControllerRotation, UseControllerDesiredRotation) == 0x000041, "Member 'UATPCCameraModeScript_PawnUseControllerRotation::UseControllerDesiredRotation' has a wrong offset!");
static_assert(offsetof(UATPCCameraModeScript_PawnUseControllerRotation, bRestoreOldValuesOnExitCameraMode) == 0x000042, "Member 'UATPCCameraModeScript_PawnUseControllerRotation::bRestoreOldValuesOnExitCameraMode' has a wrong offset!");
static_assert(offsetof(UATPCCameraModeScript_PawnUseControllerRotation, OldOrientRotationToMovement) == 0x000043, "Member 'UATPCCameraModeScript_PawnUseControllerRotation::OldOrientRotationToMovement' has a wrong offset!");
static_assert(offsetof(UATPCCameraModeScript_PawnUseControllerRotation, OldUseControllerDesiredRotation) == 0x000044, "Member 'UATPCCameraModeScript_PawnUseControllerRotation::OldUseControllerDesiredRotation' has a wrong offset!");

// Class AdvancedThirdPersonCamera.ATPCCameraModeScript_RotateActorToTarget
// 0x0008 (0x0048 - 0x0040)
class UATPCCameraModeScript_RotateActorToTarget final : public UATPCCameraModeScript
{
public:
	float                                         RotationSpeed;                                     // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1EFA[0x4];                                     // 0x0044(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ATPCCameraModeScript_RotateActorToTarget">();
	}
	static class UATPCCameraModeScript_RotateActorToTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UATPCCameraModeScript_RotateActorToTarget>();
	}
};
static_assert(alignof(UATPCCameraModeScript_RotateActorToTarget) == 0x000008, "Wrong alignment on UATPCCameraModeScript_RotateActorToTarget");
static_assert(sizeof(UATPCCameraModeScript_RotateActorToTarget) == 0x000048, "Wrong size on UATPCCameraModeScript_RotateActorToTarget");
static_assert(offsetof(UATPCCameraModeScript_RotateActorToTarget, RotationSpeed) == 0x000040, "Member 'UATPCCameraModeScript_RotateActorToTarget::RotationSpeed' has a wrong offset!");

// Class AdvancedThirdPersonCamera.ATPCCameraShakesObject
// 0x0010 (0x0040 - 0x0030)
class UATPCCameraShakesObject final : public UATPCCameraBaseObject
{
public:
	uint8                                         Pad_1EFB[0x10];                                    // 0x0030(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ATPCCameraShakesObject">();
	}
	static class UATPCCameraShakesObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UATPCCameraShakesObject>();
	}
};
static_assert(alignof(UATPCCameraShakesObject) == 0x000008, "Wrong alignment on UATPCCameraShakesObject");
static_assert(sizeof(UATPCCameraShakesObject) == 0x000040, "Wrong size on UATPCCameraShakesObject");

// Class AdvancedThirdPersonCamera.ATPCCameraVolume
// 0x0020 (0x02F8 - 0x02D8)
class AATPCCameraVolume final : public AVolume
{
public:
	struct FGameplayTag                           CameraModeTag;                                     // 0x02D8(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bChangeCameraModeWithInterp;                       // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCheckFilterActorClassWithCamera;                  // 0x02E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1EFC[0x6];                                     // 0x02E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TSubclassOf<class AActor>>             FilterActorClassesWithCamera;                      // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

public:
	void OnVolumeBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnVolumeEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ATPCCameraVolume">();
	}
	static class AATPCCameraVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<AATPCCameraVolume>();
	}
};
static_assert(alignof(AATPCCameraVolume) == 0x000008, "Wrong alignment on AATPCCameraVolume");
static_assert(sizeof(AATPCCameraVolume) == 0x0002F8, "Wrong size on AATPCCameraVolume");
static_assert(offsetof(AATPCCameraVolume, CameraModeTag) == 0x0002D8, "Member 'AATPCCameraVolume::CameraModeTag' has a wrong offset!");
static_assert(offsetof(AATPCCameraVolume, bChangeCameraModeWithInterp) == 0x0002E0, "Member 'AATPCCameraVolume::bChangeCameraModeWithInterp' has a wrong offset!");
static_assert(offsetof(AATPCCameraVolume, bCheckFilterActorClassWithCamera) == 0x0002E1, "Member 'AATPCCameraVolume::bCheckFilterActorClassWithCamera' has a wrong offset!");
static_assert(offsetof(AATPCCameraVolume, FilterActorClassesWithCamera) == 0x0002E8, "Member 'AATPCCameraVolume::FilterActorClassesWithCamera' has a wrong offset!");

// Class AdvancedThirdPersonCamera.ATPCLockOnTargetLocationComponent
// 0x0000 (0x0230 - 0x0230)
class UATPCLockOnTargetLocationComponent final : public USceneComponent
{
public:
	struct FVector GetTargetLocation();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ATPCLockOnTargetLocationComponent">();
	}
	static class UATPCLockOnTargetLocationComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UATPCLockOnTargetLocationComponent>();
	}
};
static_assert(alignof(UATPCLockOnTargetLocationComponent) == 0x000010, "Wrong alignment on UATPCLockOnTargetLocationComponent");
static_assert(sizeof(UATPCLockOnTargetLocationComponent) == 0x000230, "Wrong size on UATPCLockOnTargetLocationComponent");

}

