#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VPUtilities

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// Enum VPUtilities.EAssetThumbnailDisplayMode
// NumValues: 0x0003
enum class EAssetThumbnailDisplayMode : uint8
{
	EditorThumbnail                          = 0,
	FallbackImage                            = 1,
	EAssetThumbnailDisplayMode_MAX           = 2,
};

// Enum VPUtilities.EVPCameraRigSpawnLinearApproximationMode
// NumValues: 0x0004
enum class EVPCameraRigSpawnLinearApproximationMode : uint8
{
	None                                     = 0,
	Density                                  = 1,
	IntegrationStep                          = 2,
	EVPCameraRigSpawnLinearApproximationMode_MAX = 3,
};

// Enum VPUtilities.EVPWidgetDisplayType
// NumValues: 0x0006
enum class EVPWidgetDisplayType : uint8
{
	Inactive                                 = 0,
	Viewport                                 = 1,
	PostProcessWithBlendMaterial             = 2,
	Composure                                = 3,
	PostProcessSceneViewExtension            = 4,
	EVPWidgetDisplayType_MAX                 = 5,
};

// Enum VPUtilities.EVPViewportTickableFlags
// NumValues: 0x0005
enum class EVPViewportTickableFlags : uint8
{
	Editor                                   = 1,
	Game                                     = 2,
	EditorPreview                            = 4,
	GamePreview                              = 8,
	EVPViewportTickableFlags_MAX             = 9,
};

// ScriptStruct VPUtilities.VPCameraRigSpawnParams
// 0x0008 (0x0008 - 0x0000)
struct FVPCameraRigSpawnParams final
{
public:
	bool                                          bUseWorldSpace;                                    // 0x0000(0x0001)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseFirstPointAsSpawnLocation;                     // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EVPCameraRigSpawnLinearApproximationMode      LinearApproximationMode;                           // 0x0002(0x0001)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4709[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LinearApproximationParam;                          // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FVPCameraRigSpawnParams) == 0x000004, "Wrong alignment on FVPCameraRigSpawnParams");
static_assert(sizeof(FVPCameraRigSpawnParams) == 0x000008, "Wrong size on FVPCameraRigSpawnParams");
static_assert(offsetof(FVPCameraRigSpawnParams, bUseWorldSpace) == 0x000000, "Member 'FVPCameraRigSpawnParams::bUseWorldSpace' has a wrong offset!");
static_assert(offsetof(FVPCameraRigSpawnParams, bUseFirstPointAsSpawnLocation) == 0x000001, "Member 'FVPCameraRigSpawnParams::bUseFirstPointAsSpawnLocation' has a wrong offset!");
static_assert(offsetof(FVPCameraRigSpawnParams, LinearApproximationMode) == 0x000002, "Member 'FVPCameraRigSpawnParams::LinearApproximationMode' has a wrong offset!");
static_assert(offsetof(FVPCameraRigSpawnParams, LinearApproximationParam) == 0x000004, "Member 'FVPCameraRigSpawnParams::LinearApproximationParam' has a wrong offset!");

// ScriptStruct VPUtilities.VPFullScreenUserWidget_Viewport
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FVPFullScreenUserWidget_Viewport final
{
public:
	uint8                                         Pad_470A[0x10];                                    // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FVPFullScreenUserWidget_Viewport) == 0x000008, "Wrong alignment on FVPFullScreenUserWidget_Viewport");
static_assert(sizeof(FVPFullScreenUserWidget_Viewport) == 0x000010, "Wrong size on FVPFullScreenUserWidget_Viewport");

// ScriptStruct VPUtilities.VPFullScreenUserWidget_PostProcessBase
// 0x0090 (0x0090 - 0x0000)
struct FVPFullScreenUserWidget_PostProcessBase
{
public:
	uint8                                         Pad_470B[0x8];                                     // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     PostProcessMaterial;                               // 0x0008(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           PostProcessTintColorAndOpacity;                    // 0x0010(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PostProcessOpacityFromTexture;                     // 0x0020(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseWidgetDrawSize;                                // 0x0024(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_470C[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FIntPoint                              WidgetDrawSize;                                    // 0x0028(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bWindowFocusable;                                  // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EWindowVisibility                             WindowVisibility;                                  // 0x0031(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bReceiveHardwareInput;                             // 0x0032(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_470D[0x1];                                     // 0x0033(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           RenderTargetBackgroundColor;                       // 0x0034(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EWidgetBlendMode                              RenderTargetBlendMode;                             // 0x0044(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_470E[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextureRenderTarget2D*                 WidgetRenderTarget;                                // 0x0048(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_470F[0x40];                                    // 0x0050(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FVPFullScreenUserWidget_PostProcessBase) == 0x000008, "Wrong alignment on FVPFullScreenUserWidget_PostProcessBase");
static_assert(sizeof(FVPFullScreenUserWidget_PostProcessBase) == 0x000090, "Wrong size on FVPFullScreenUserWidget_PostProcessBase");
static_assert(offsetof(FVPFullScreenUserWidget_PostProcessBase, PostProcessMaterial) == 0x000008, "Member 'FVPFullScreenUserWidget_PostProcessBase::PostProcessMaterial' has a wrong offset!");
static_assert(offsetof(FVPFullScreenUserWidget_PostProcessBase, PostProcessTintColorAndOpacity) == 0x000010, "Member 'FVPFullScreenUserWidget_PostProcessBase::PostProcessTintColorAndOpacity' has a wrong offset!");
static_assert(offsetof(FVPFullScreenUserWidget_PostProcessBase, PostProcessOpacityFromTexture) == 0x000020, "Member 'FVPFullScreenUserWidget_PostProcessBase::PostProcessOpacityFromTexture' has a wrong offset!");
static_assert(offsetof(FVPFullScreenUserWidget_PostProcessBase, bUseWidgetDrawSize) == 0x000024, "Member 'FVPFullScreenUserWidget_PostProcessBase::bUseWidgetDrawSize' has a wrong offset!");
static_assert(offsetof(FVPFullScreenUserWidget_PostProcessBase, WidgetDrawSize) == 0x000028, "Member 'FVPFullScreenUserWidget_PostProcessBase::WidgetDrawSize' has a wrong offset!");
static_assert(offsetof(FVPFullScreenUserWidget_PostProcessBase, bWindowFocusable) == 0x000030, "Member 'FVPFullScreenUserWidget_PostProcessBase::bWindowFocusable' has a wrong offset!");
static_assert(offsetof(FVPFullScreenUserWidget_PostProcessBase, WindowVisibility) == 0x000031, "Member 'FVPFullScreenUserWidget_PostProcessBase::WindowVisibility' has a wrong offset!");
static_assert(offsetof(FVPFullScreenUserWidget_PostProcessBase, bReceiveHardwareInput) == 0x000032, "Member 'FVPFullScreenUserWidget_PostProcessBase::bReceiveHardwareInput' has a wrong offset!");
static_assert(offsetof(FVPFullScreenUserWidget_PostProcessBase, RenderTargetBackgroundColor) == 0x000034, "Member 'FVPFullScreenUserWidget_PostProcessBase::RenderTargetBackgroundColor' has a wrong offset!");
static_assert(offsetof(FVPFullScreenUserWidget_PostProcessBase, RenderTargetBlendMode) == 0x000044, "Member 'FVPFullScreenUserWidget_PostProcessBase::RenderTargetBlendMode' has a wrong offset!");
static_assert(offsetof(FVPFullScreenUserWidget_PostProcessBase, WidgetRenderTarget) == 0x000048, "Member 'FVPFullScreenUserWidget_PostProcessBase::WidgetRenderTarget' has a wrong offset!");

// ScriptStruct VPUtilities.VPFullScreenUserWidget_PostProcess
// 0x0030 (0x00C0 - 0x0090)
struct FVPFullScreenUserWidget_PostProcess final : public FVPFullScreenUserWidget_PostProcessBase
{
public:
	TArray<class ACompositingElement*>            ComposureLayerTargets;                             // 0x0090(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UPostProcessComponent*                  PostProcessComponent;                              // 0x00A0(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInstanceDynamic*               PostProcessMaterialInstance;                       // 0x00A8(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4710[0x10];                                    // 0x00B0(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FVPFullScreenUserWidget_PostProcess) == 0x000008, "Wrong alignment on FVPFullScreenUserWidget_PostProcess");
static_assert(sizeof(FVPFullScreenUserWidget_PostProcess) == 0x0000C0, "Wrong size on FVPFullScreenUserWidget_PostProcess");
static_assert(offsetof(FVPFullScreenUserWidget_PostProcess, ComposureLayerTargets) == 0x000090, "Member 'FVPFullScreenUserWidget_PostProcess::ComposureLayerTargets' has a wrong offset!");
static_assert(offsetof(FVPFullScreenUserWidget_PostProcess, PostProcessComponent) == 0x0000A0, "Member 'FVPFullScreenUserWidget_PostProcess::PostProcessComponent' has a wrong offset!");
static_assert(offsetof(FVPFullScreenUserWidget_PostProcess, PostProcessMaterialInstance) == 0x0000A8, "Member 'FVPFullScreenUserWidget_PostProcess::PostProcessMaterialInstance' has a wrong offset!");

// ScriptStruct VPUtilities.VPFullScreenUserWidget_PostProcessWithSVE
// 0x0020 (0x00B0 - 0x0090)
struct FVPFullScreenUserWidget_PostProcessWithSVE final : public FVPFullScreenUserWidget_PostProcessBase
{
public:
	uint8                                         Pad_4711[0x20];                                    // 0x0090(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FVPFullScreenUserWidget_PostProcessWithSVE) == 0x000008, "Wrong alignment on FVPFullScreenUserWidget_PostProcessWithSVE");
static_assert(sizeof(FVPFullScreenUserWidget_PostProcessWithSVE) == 0x0000B0, "Wrong size on FVPFullScreenUserWidget_PostProcessWithSVE");

}

