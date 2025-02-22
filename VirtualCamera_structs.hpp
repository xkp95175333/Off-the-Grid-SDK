#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VirtualCamera

#include "Basic.hpp"


namespace SDK
{

// Enum VirtualCamera.ESortOrder
// NumValues: 0x0003
enum class ESortOrder : uint8
{
	Ascending                                = 0,
	Descending                               = 1,
	ESortOrder_MAX                           = 2,
};

// Enum VirtualCamera.EAssetTagMetaDataSortType
// NumValues: 0x0004
enum class EAssetTagMetaDataSortType : uint8
{
	String                                   = 0,
	Numeric                                  = 1,
	DateTime                                 = 2,
	EAssetTagMetaDataSortType_MAX            = 3,
};

// Enum VirtualCamera.EVCamTutorialCompletionState
// NumValues: 0x0003
enum class EVCamTutorialCompletionState : uint8
{
	Pending                                  = 0,
	Completed                                = 1,
	EVCamTutorialCompletionState_MAX         = 2,
};

// ScriptStruct VirtualCamera.VCamTraceHitProxyResult
// 0x0010 (0x0010 - 0x0000)
struct FVCamTraceHitProxyResult final
{
public:
	TWeakObjectPtr<class AActor>                  HitActor;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UPrimitiveComponent>     HitComponent;                                      // 0x0008(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FVCamTraceHitProxyResult) == 0x000004, "Wrong alignment on FVCamTraceHitProxyResult");
static_assert(sizeof(FVCamTraceHitProxyResult) == 0x000010, "Wrong size on FVCamTraceHitProxyResult");
static_assert(offsetof(FVCamTraceHitProxyResult, HitActor) == 0x000000, "Member 'FVCamTraceHitProxyResult::HitActor' has a wrong offset!");
static_assert(offsetof(FVCamTraceHitProxyResult, HitComponent) == 0x000008, "Member 'FVCamTraceHitProxyResult::HitComponent' has a wrong offset!");

// ScriptStruct VirtualCamera.VCamTraceHitProxyQueryParams
// 0x0018 (0x0018 - 0x0000)
struct FVCamTraceHitProxyQueryParams final
{
public:
	int32                                         HitProxySize;                                      // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4736[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         IgnoredActors;                                     // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FVCamTraceHitProxyQueryParams) == 0x000008, "Wrong alignment on FVCamTraceHitProxyQueryParams");
static_assert(sizeof(FVCamTraceHitProxyQueryParams) == 0x000018, "Wrong size on FVCamTraceHitProxyQueryParams");
static_assert(offsetof(FVCamTraceHitProxyQueryParams, HitProxySize) == 0x000000, "Member 'FVCamTraceHitProxyQueryParams::HitProxySize' has a wrong offset!");
static_assert(offsetof(FVCamTraceHitProxyQueryParams, IgnoredActors) == 0x000008, "Member 'FVCamTraceHitProxyQueryParams::IgnoredActors' has a wrong offset!");

// ScriptStruct VirtualCamera.PilotableSequenceCameraInfo
// 0x0008 (0x0008 - 0x0000)
struct FPilotableSequenceCameraInfo final
{
public:
	class UCameraComponent*                       Camera;                                            // 0x0000(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPilotableSequenceCameraInfo) == 0x000008, "Wrong alignment on FPilotableSequenceCameraInfo");
static_assert(sizeof(FPilotableSequenceCameraInfo) == 0x000008, "Wrong size on FPilotableSequenceCameraInfo");
static_assert(offsetof(FPilotableSequenceCameraInfo, Camera) == 0x000000, "Member 'FPilotableSequenceCameraInfo::Camera' has a wrong offset!");

}

