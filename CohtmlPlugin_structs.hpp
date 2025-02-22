#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CohtmlPlugin

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// Enum CohtmlPlugin.ECohtmlFocusChange
// NumValues: 0x0003
enum class ECohtmlFocusChange : uint8
{
	Received                                 = 0,
	Lost                                     = 1,
	ECohtmlFocusChange_MAX                   = 2,
};

// Enum CohtmlPlugin.ECohtmlKeys
// NumValues: 0x006C
enum class ECohtmlKeys : uint8
{
	LeftMouseButton                          = 0,
	RightMouseButton                         = 1,
	MiddleMouseButton                        = 2,
	ThumbMouseButton                         = 3,
	ThumbMouseButton2                        = 4,
	BackSpace                                = 5,
	Tab                                      = 6,
	Enter                                    = 7,
	Pause                                    = 8,
	CapsLock                                 = 9,
	Escape                                   = 10,
	SpaceBar                                 = 11,
	PageUp                                   = 12,
	PageDown                                 = 13,
	End                                      = 14,
	Home                                     = 15,
	Left                                     = 16,
	Up                                       = 17,
	Right                                    = 18,
	Down                                     = 19,
	Insert                                   = 20,
	Delete                                   = 21,
	Zero                                     = 22,
	One                                      = 23,
	Two                                      = 24,
	Three                                    = 25,
	Four                                     = 26,
	Five                                     = 27,
	Six                                      = 28,
	Seven                                    = 29,
	Eight                                    = 30,
	Nine                                     = 31,
	A                                        = 32,
	B                                        = 33,
	C                                        = 34,
	D                                        = 35,
	E                                        = 36,
	F                                        = 37,
	G                                        = 38,
	H                                        = 39,
	I                                        = 40,
	J                                        = 41,
	K                                        = 42,
	L                                        = 43,
	M                                        = 44,
	N                                        = 45,
	O                                        = 46,
	P                                        = 47,
	Q                                        = 48,
	R                                        = 49,
	S                                        = 50,
	T                                        = 51,
	U                                        = 52,
	V                                        = 53,
	W                                        = 54,
	X                                        = 55,
	Y                                        = 56,
	Z                                        = 57,
	NumPadZero                               = 58,
	NumPadOne                                = 59,
	NumPadTwo                                = 60,
	NumPadThree                              = 61,
	NumPadFour                               = 62,
	NumPadFive                               = 63,
	NumPadSix                                = 64,
	NumPadSeven                              = 65,
	NumPadEight                              = 66,
	NumPadNine                               = 67,
	Multiply                                 = 68,
	Add                                      = 69,
	Subtract                                 = 70,
	Decimal                                  = 71,
	Divide                                   = 72,
	F1                                       = 73,
	F2                                       = 74,
	F3                                       = 75,
	F4                                       = 76,
	F5                                       = 77,
	F6                                       = 78,
	F7                                       = 79,
	F8                                       = 80,
	F9                                       = 81,
	F10                                      = 82,
	F11                                      = 83,
	F12                                      = 84,
	NumLock                                  = 85,
	ScrollLock                               = 86,
	LeftShift                                = 87,
	RightShift                               = 88,
	LeftControl                              = 89,
	RightControl                             = 90,
	LeftAlt                                  = 91,
	RightAlt                                 = 92,
	LeftCommand                              = 93,
	RightCommand                             = 94,
	Semicolon                                = 95,
	Equals                                   = 96,
	Comma                                    = 97,
	Underscore                               = 98,
	Period                                   = 99,
	Slash                                    = 100,
	Tilde                                    = 101,
	LeftBracket                              = 102,
	Backslash                                = 103,
	RightBracket                             = 104,
	Quote                                    = 105,
	Unknown                                  = 106,
	ECohtmlKeys_MAX                          = 107,
};

// Enum CohtmlPlugin.ECohtmlComponentMeshInit
// NumValues: 0x0003
enum class ECohtmlComponentMeshInit : uint8
{
	LazyInit                                 = 0,
	Immediate                                = 1,
	ECohtmlComponentMeshInit_MAX             = 2,
};

// Enum CohtmlPlugin.ECohtmlTickGroup
// NumValues: 0x000A
enum class ECohtmlTickGroup : uint8
{
	CohtmlTG_PrePhysics                      = 0,
	CohtmlTG_StartPhysics                    = 1,
	CohtmlTG_DuringPhysics                   = 2,
	CohtmlTG_EndPhysics                      = 3,
	CohtmlTG_PostPhysics                     = 4,
	CohtmlTG_PostUpdateWork                  = 5,
	CohtmlTG_LastDemotable                   = 6,
	CohtmlTG_NewlySpawned                    = 7,
	CohtmlTG_ManualTick                      = 8,
	CohtmlTG_MAX                             = 9,
};

// Enum CohtmlPlugin.ECohtmlSettingsSeverity
// NumValues: 0x0007
enum class ECohtmlSettingsSeverity : uint8
{
	Trace                                    = 0,
	Debug                                    = 1,
	Info                                     = 2,
	Warning                                  = 3,
	Error                                    = 4,
	AssertFailure                            = 5,
	ECohtmlSettingsSeverity_MAX              = 6,
};

// Enum CohtmlPlugin.ECohtmlMSAA
// NumValues: 0x0004
enum class ECohtmlMSAA : uint8
{
	MSAA_1x                                  = 0,
	MSAA_2x                                  = 1,
	MSAA_4x                                  = 2,
	MSAA_MAX                                 = 3,
};

// Enum CohtmlPlugin.ECohtmlImageFormat
// NumValues: 0x000C
enum class ECohtmlImageFormat : uint8
{
	PNG                                      = 0,
	TGA                                      = 1,
	JPG                                      = 2,
	JPEG                                     = 3,
	PSD                                      = 4,
	SVG                                      = 5,
	DDS                                      = 6,
	BMP                                      = 7,
	ASTC                                     = 8,
	PKM                                      = 9,
	KTX                                      = 10,
	ECohtmlImageFormat_MAX                   = 11,
};

// Enum CohtmlPlugin.ECohtmlLinearSpaceRenderingPipeline
// NumValues: 0x0004
enum class ECohtmlLinearSpaceRenderingPipeline : uint8
{
	Disabled                                 = 0,
	SRGBTextures                             = 1,
	WideTextures                             = 2,
	ECohtmlLinearSpaceRenderingPipeline_MAX  = 3,
};

// Enum CohtmlPlugin.ECohtmlInputWidgetLineTraceMode
// NumValues: 0x0003
enum class ECohtmlInputWidgetLineTraceMode : uint8
{
	CohtmlInputLineTrace_Single              = 0,
	CohtmlInputLineTrace_Multi               = 1,
	CohtmlInputLineTrace_MAX                 = 2,
};

// Enum CohtmlPlugin.ECohtmlInputWidgetRaycastQuality
// NumValues: 0x0004
enum class ECohtmlInputWidgetRaycastQuality : uint8
{
	CohtmlRaycastQuality_Fast                = 0,
	CohtmlRaycastQuality_Balanced            = 1,
	CohtmlRaycastQuality_Accurate            = 2,
	CohtmlRaycastQuality_MAX                 = 3,
};

// Enum CohtmlPlugin.ECohtmlGamepadBehaviourOnFocusLost
// NumValues: 0x0004
enum class ECohtmlGamepadBehaviourOnFocusLost : uint8
{
	CohtmlResetState                         = 0,
	CohtmlUseCurrentState                    = 1,
	CohtmlUseStateBeforeReset                = 2,
	ECohtmlGamepadBehaviourOnFocusLost_MAX   = 3,
};

// Enum CohtmlPlugin.ECohtmlInputPropagationBehaviour
// NumValues: 0x0005
enum class ECohtmlInputPropagationBehaviour : uint8
{
	None                                     = 0,
	Keyboard                                 = 1,
	Joystick                                 = 2,
	KeyboardAndJoystick                      = 3,
	ECohtmlInputPropagationBehaviour_MAX     = 4,
};

// ScriptStruct CohtmlPlugin.TextureAtlasMappingInfo
// 0x0028 (0x0028 - 0x0000)
struct FTextureAtlasMappingInfo final
{
public:
	class FString                                 AtlasPath;                                         // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Width;                                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Height;                                            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ContentRectWidth;                                  // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ContentRectHeight;                                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         OriginX;                                           // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         OriginY;                                           // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FTextureAtlasMappingInfo) == 0x000008, "Wrong alignment on FTextureAtlasMappingInfo");
static_assert(sizeof(FTextureAtlasMappingInfo) == 0x000028, "Wrong size on FTextureAtlasMappingInfo");
static_assert(offsetof(FTextureAtlasMappingInfo, AtlasPath) == 0x000000, "Member 'FTextureAtlasMappingInfo::AtlasPath' has a wrong offset!");
static_assert(offsetof(FTextureAtlasMappingInfo, Width) == 0x000010, "Member 'FTextureAtlasMappingInfo::Width' has a wrong offset!");
static_assert(offsetof(FTextureAtlasMappingInfo, Height) == 0x000014, "Member 'FTextureAtlasMappingInfo::Height' has a wrong offset!");
static_assert(offsetof(FTextureAtlasMappingInfo, ContentRectWidth) == 0x000018, "Member 'FTextureAtlasMappingInfo::ContentRectWidth' has a wrong offset!");
static_assert(offsetof(FTextureAtlasMappingInfo, ContentRectHeight) == 0x00001C, "Member 'FTextureAtlasMappingInfo::ContentRectHeight' has a wrong offset!");
static_assert(offsetof(FTextureAtlasMappingInfo, OriginX) == 0x000020, "Member 'FTextureAtlasMappingInfo::OriginX' has a wrong offset!");
static_assert(offsetof(FTextureAtlasMappingInfo, OriginY) == 0x000024, "Member 'FTextureAtlasMappingInfo::OriginY' has a wrong offset!");

// ScriptStruct CohtmlPlugin.TextureAtlasMetaData
// 0x00B0 (0x00B0 - 0x0000)
struct FTextureAtlasMetaData final
{
public:
	TMap<class FString, class UCohtmlTextureAtlasDetails*> AtlasDetails;                                      // 0x0000(0x0050)(NativeAccessSpecifierPublic)
	uint8                                         Pad_23F8[0x60];                                    // 0x0050(0x0060)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FTextureAtlasMetaData) == 0x000008, "Wrong alignment on FTextureAtlasMetaData");
static_assert(sizeof(FTextureAtlasMetaData) == 0x0000B0, "Wrong size on FTextureAtlasMetaData");
static_assert(offsetof(FTextureAtlasMetaData, AtlasDetails) == 0x000000, "Member 'FTextureAtlasMetaData::AtlasDetails' has a wrong offset!");

// ScriptStruct CohtmlPlugin.CohtmlSound
// 0x0018 (0x0018 - 0x0000)
struct FCohtmlSound final
{
public:
	class UAudioComponent*                        AudioComponent;                                    // 0x0000(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundWaveProcedural*                   Stream;                                            // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_23F9[0x8];                                     // 0x0010(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCohtmlSound) == 0x000008, "Wrong alignment on FCohtmlSound");
static_assert(sizeof(FCohtmlSound) == 0x000018, "Wrong size on FCohtmlSound");
static_assert(offsetof(FCohtmlSound, AudioComponent) == 0x000000, "Member 'FCohtmlSound::AudioComponent' has a wrong offset!");
static_assert(offsetof(FCohtmlSound, Stream) == 0x000008, "Member 'FCohtmlSound::Stream' has a wrong offset!");

// ScriptStruct CohtmlPlugin.HudCompositorCachedMaterial
// 0x0050 (0x0050 - 0x0000)
struct FHudCompositorCachedMaterial final
{
public:
	class UTexture2D*                             Texture;                                           // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*               MaterialInstance;                                  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_23FA[0x40];                                    // 0x0010(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FHudCompositorCachedMaterial) == 0x000008, "Wrong alignment on FHudCompositorCachedMaterial");
static_assert(sizeof(FHudCompositorCachedMaterial) == 0x000050, "Wrong size on FHudCompositorCachedMaterial");
static_assert(offsetof(FHudCompositorCachedMaterial, Texture) == 0x000000, "Member 'FHudCompositorCachedMaterial::Texture' has a wrong offset!");
static_assert(offsetof(FHudCompositorCachedMaterial, MaterialInstance) == 0x000008, "Member 'FHudCompositorCachedMaterial::MaterialInstance' has a wrong offset!");

// ScriptStruct CohtmlPlugin.SingleFormatFallbacks
// 0x0018 (0x0018 - 0x0000)
struct FSingleFormatFallbacks final
{
public:
	ECohtmlImageFormat                            BaseFormat;                                        // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_23FB[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ECohtmlImageFormat>                    PossibleFallbacks;                                 // 0x0008(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSingleFormatFallbacks) == 0x000008, "Wrong alignment on FSingleFormatFallbacks");
static_assert(sizeof(FSingleFormatFallbacks) == 0x000018, "Wrong size on FSingleFormatFallbacks");
static_assert(offsetof(FSingleFormatFallbacks, BaseFormat) == 0x000000, "Member 'FSingleFormatFallbacks::BaseFormat' has a wrong offset!");
static_assert(offsetof(FSingleFormatFallbacks, PossibleFallbacks) == 0x000008, "Member 'FSingleFormatFallbacks::PossibleFallbacks' has a wrong offset!");

// ScriptStruct CohtmlPlugin.ResourceHostPair
// 0x0020 (0x0020 - 0x0000)
struct FResourceHostPair final
{
public:
	class FString                                 Host;                                              // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 HostLocation;                                      // 0x0010(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FResourceHostPair) == 0x000008, "Wrong alignment on FResourceHostPair");
static_assert(sizeof(FResourceHostPair) == 0x000020, "Wrong size on FResourceHostPair");
static_assert(offsetof(FResourceHostPair, Host) == 0x000000, "Member 'FResourceHostPair::Host' has a wrong offset!");
static_assert(offsetof(FResourceHostPair, HostLocation) == 0x000010, "Member 'FResourceHostPair::HostLocation' has a wrong offset!");

// ScriptStruct CohtmlPlugin.CohtmlViewSettings
// 0x0010 (0x0010 - 0x0000)
struct FCohtmlViewSettings final
{
public:
	int32                                         Width;                                             // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Height;                                            // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsTransparent;                                     // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_23FC[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AnimationFrameDefer;                               // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCohtmlViewSettings) == 0x000004, "Wrong alignment on FCohtmlViewSettings");
static_assert(sizeof(FCohtmlViewSettings) == 0x000010, "Wrong size on FCohtmlViewSettings");
static_assert(offsetof(FCohtmlViewSettings, Width) == 0x000000, "Member 'FCohtmlViewSettings::Width' has a wrong offset!");
static_assert(offsetof(FCohtmlViewSettings, Height) == 0x000004, "Member 'FCohtmlViewSettings::Height' has a wrong offset!");
static_assert(offsetof(FCohtmlViewSettings, IsTransparent) == 0x000008, "Member 'FCohtmlViewSettings::IsTransparent' has a wrong offset!");
static_assert(offsetof(FCohtmlViewSettings, AnimationFrameDefer) == 0x00000C, "Member 'FCohtmlViewSettings::AnimationFrameDefer' has a wrong offset!");

// ScriptStruct CohtmlPlugin.WidgetDrawData
// 0x0048 (0x0048 - 0x0000)
struct FWidgetDrawData final
{
public:
	class UTexture*                               Texture;                                           // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_23FD[0x40];                                    // 0x0008(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FWidgetDrawData) == 0x000008, "Wrong alignment on FWidgetDrawData");
static_assert(sizeof(FWidgetDrawData) == 0x000048, "Wrong size on FWidgetDrawData");
static_assert(offsetof(FWidgetDrawData, Texture) == 0x000000, "Member 'FWidgetDrawData::Texture' has a wrong offset!");

// ScriptStruct CohtmlPlugin.CohtmlWidgetTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FCohtmlWidgetTickFunction final : public FTickFunction
{
public:
	class UCohtmlWidget*                          WidgetToTick;                                      // 0x0028(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCohtmlWidgetTickFunction) == 0x000008, "Wrong alignment on FCohtmlWidgetTickFunction");
static_assert(sizeof(FCohtmlWidgetTickFunction) == 0x000030, "Wrong size on FCohtmlWidgetTickFunction");
static_assert(offsetof(FCohtmlWidgetTickFunction, WidgetToTick) == 0x000028, "Member 'FCohtmlWidgetTickFunction::WidgetToTick' has a wrong offset!");

// ScriptStruct CohtmlPlugin.GzCohtmlString
// 0x0020 (0x0020 - 0x0000)
struct alignas(0x08) FGzCohtmlString final
{
public:
	uint8                                         Pad_23FE[0x20];                                    // 0x0000(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGzCohtmlString) == 0x000008, "Wrong alignment on FGzCohtmlString");
static_assert(sizeof(FGzCohtmlString) == 0x000020, "Wrong size on FGzCohtmlString");

// ScriptStruct CohtmlPlugin.GzCohtmlStringRegistry
// 0x0050 (0x0050 - 0x0000)
struct alignas(0x08) FGzCohtmlStringRegistry final
{
public:
	uint8                                         Pad_23FF[0x50];                                    // 0x0000(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGzCohtmlStringRegistry) == 0x000008, "Wrong alignment on FGzCohtmlStringRegistry");
static_assert(sizeof(FGzCohtmlStringRegistry) == 0x000050, "Wrong size on FGzCohtmlStringRegistry");

// ScriptStruct CohtmlPlugin.CustomMaterialRenderData
// 0x0020 (0x0020 - 0x0000)
struct FCustomMaterialRenderData final
{
public:
	class UMaterialInstanceDynamic*               MaterialInstance;                                  // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             NewTexture;                                        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2400[0x10];                                    // 0x0010(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCustomMaterialRenderData) == 0x000008, "Wrong alignment on FCustomMaterialRenderData");
static_assert(sizeof(FCustomMaterialRenderData) == 0x000020, "Wrong size on FCustomMaterialRenderData");
static_assert(offsetof(FCustomMaterialRenderData, MaterialInstance) == 0x000000, "Member 'FCustomMaterialRenderData::MaterialInstance' has a wrong offset!");
static_assert(offsetof(FCustomMaterialRenderData, NewTexture) == 0x000008, "Member 'FCustomMaterialRenderData::NewTexture' has a wrong offset!");

// ScriptStruct CohtmlPlugin.CustomEffectDrawData
// 0x0020 (0x0020 - 0x0000)
struct FCustomEffectDrawData final
{
public:
	class UMaterialInstanceDynamic*               CustomMaterialInstance;                            // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             Texture;                                           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2401[0x10];                                    // 0x0010(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCustomEffectDrawData) == 0x000008, "Wrong alignment on FCustomEffectDrawData");
static_assert(sizeof(FCustomEffectDrawData) == 0x000020, "Wrong size on FCustomEffectDrawData");
static_assert(offsetof(FCustomEffectDrawData, CustomMaterialInstance) == 0x000000, "Member 'FCustomEffectDrawData::CustomMaterialInstance' has a wrong offset!");
static_assert(offsetof(FCustomEffectDrawData, Texture) == 0x000008, "Member 'FCustomEffectDrawData::Texture' has a wrong offset!");

// ScriptStruct CohtmlPlugin.ArrayWrapper_CustomMaterialRenderData
// 0x0010 (0x0010 - 0x0000)
struct FArrayWrapper_CustomMaterialRenderData final
{
public:
	TArray<struct FCustomMaterialRenderData>      Array;                                             // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FArrayWrapper_CustomMaterialRenderData) == 0x000008, "Wrong alignment on FArrayWrapper_CustomMaterialRenderData");
static_assert(sizeof(FArrayWrapper_CustomMaterialRenderData) == 0x000010, "Wrong size on FArrayWrapper_CustomMaterialRenderData");
static_assert(offsetof(FArrayWrapper_CustomMaterialRenderData, Array) == 0x000000, "Member 'FArrayWrapper_CustomMaterialRenderData::Array' has a wrong offset!");

// ScriptStruct CohtmlPlugin.ArrayWrapper_CustomEffectDrawData
// 0x0010 (0x0010 - 0x0000)
struct FArrayWrapper_CustomEffectDrawData final
{
public:
	TArray<struct FCustomEffectDrawData>          Array;                                             // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FArrayWrapper_CustomEffectDrawData) == 0x000008, "Wrong alignment on FArrayWrapper_CustomEffectDrawData");
static_assert(sizeof(FArrayWrapper_CustomEffectDrawData) == 0x000010, "Wrong size on FArrayWrapper_CustomEffectDrawData");
static_assert(offsetof(FArrayWrapper_CustomEffectDrawData, Array) == 0x000000, "Member 'FArrayWrapper_CustomEffectDrawData::Array' has a wrong offset!");

// ScriptStruct CohtmlPlugin.RenderData
// 0x0018 (0x0018 - 0x0000)
struct FRenderData final
{
public:
	uint8                                         Pad_2402[0x8];                                     // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             NewTexture;                                        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2403[0x8];                                     // 0x0010(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRenderData) == 0x000008, "Wrong alignment on FRenderData");
static_assert(sizeof(FRenderData) == 0x000018, "Wrong size on FRenderData");
static_assert(offsetof(FRenderData, NewTexture) == 0x000008, "Member 'FRenderData::NewTexture' has a wrong offset!");

// ScriptStruct CohtmlPlugin.CompositionData
// 0x0020 (0x0020 - 0x0000)
struct FCompositionData final
{
public:
	uint8                                         Pad_2404[0x8];                                     // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   Component;                                         // 0x0008(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             Texture;                                           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*               MaterialInstance;                                  // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCompositionData) == 0x000008, "Wrong alignment on FCompositionData");
static_assert(sizeof(FCompositionData) == 0x000020, "Wrong size on FCompositionData");
static_assert(offsetof(FCompositionData, Component) == 0x000008, "Member 'FCompositionData::Component' has a wrong offset!");
static_assert(offsetof(FCompositionData, Texture) == 0x000010, "Member 'FCompositionData::Texture' has a wrong offset!");
static_assert(offsetof(FCompositionData, MaterialInstance) == 0x000018, "Member 'FCompositionData::MaterialInstance' has a wrong offset!");

}

