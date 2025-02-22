#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: XsollaUIBuilder

#include "Basic.hpp"

#include "XsollaUIBuilder_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function XsollaUIBuilder.XsollaGenericWrapper.ThemeUpdated
// 0x0008 (0x0008 - 0x0000)
struct XsollaGenericWrapper_ThemeUpdated final
{
public:
	TSubclassOf<class UXsollaUIBuilderTheme>      NewTheme;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(XsollaGenericWrapper_ThemeUpdated) == 0x000008, "Wrong alignment on XsollaGenericWrapper_ThemeUpdated");
static_assert(sizeof(XsollaGenericWrapper_ThemeUpdated) == 0x000008, "Wrong size on XsollaGenericWrapper_ThemeUpdated");
static_assert(offsetof(XsollaGenericWrapper_ThemeUpdated, NewTheme) == 0x000000, "Member 'XsollaGenericWrapper_ThemeUpdated::NewTheme' has a wrong offset!");

// Function XsollaUIBuilder.XsollaGenericWrapper.UpdateThemeParameters
// 0x00F0 (0x00F0 - 0x0000)
struct XsollaGenericWrapper_UpdateThemeParameters final
{
public:
	struct FThemeParameters                       InParameters;                                      // 0x0000(0x00F0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(XsollaGenericWrapper_UpdateThemeParameters) == 0x000008, "Wrong alignment on XsollaGenericWrapper_UpdateThemeParameters");
static_assert(sizeof(XsollaGenericWrapper_UpdateThemeParameters) == 0x0000F0, "Wrong size on XsollaGenericWrapper_UpdateThemeParameters");
static_assert(offsetof(XsollaGenericWrapper_UpdateThemeParameters, InParameters) == 0x000000, "Member 'XsollaGenericWrapper_UpdateThemeParameters::InParameters' has a wrong offset!");

// Function XsollaUIBuilder.XsollaGenericWrapper.GetWidgetClass
// 0x0008 (0x0008 - 0x0000)
struct XsollaGenericWrapper_GetWidgetClass final
{
public:
	TSubclassOf<class UXsollaGenericPrimitive>    ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(XsollaGenericWrapper_GetWidgetClass) == 0x000008, "Wrong alignment on XsollaGenericWrapper_GetWidgetClass");
static_assert(sizeof(XsollaGenericWrapper_GetWidgetClass) == 0x000008, "Wrong size on XsollaGenericWrapper_GetWidgetClass");
static_assert(offsetof(XsollaGenericWrapper_GetWidgetClass, ReturnValue) == 0x000000, "Member 'XsollaGenericWrapper_GetWidgetClass::ReturnValue' has a wrong offset!");

// Function XsollaUIBuilder.XsollaUIBuilderLibrary.Clear
// 0x00F0 (0x00F0 - 0x0000)
struct XsollaUIBuilderLibrary_Clear final
{
public:
	struct FThemeParameters                       Parameters;                                        // 0x0000(0x00F0)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(XsollaUIBuilderLibrary_Clear) == 0x000008, "Wrong alignment on XsollaUIBuilderLibrary_Clear");
static_assert(sizeof(XsollaUIBuilderLibrary_Clear) == 0x0000F0, "Wrong size on XsollaUIBuilderLibrary_Clear");
static_assert(offsetof(XsollaUIBuilderLibrary_Clear, Parameters) == 0x000000, "Member 'XsollaUIBuilderLibrary_Clear::Parameters' has a wrong offset!");

// Function XsollaUIBuilder.XsollaUIBuilderLibrary.GetCurrentTheme
// 0x0008 (0x0008 - 0x0000)
struct XsollaUIBuilderLibrary_GetCurrentTheme final
{
public:
	class UXsollaUIBuilderTheme*                  ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(XsollaUIBuilderLibrary_GetCurrentTheme) == 0x000008, "Wrong alignment on XsollaUIBuilderLibrary_GetCurrentTheme");
static_assert(sizeof(XsollaUIBuilderLibrary_GetCurrentTheme) == 0x000008, "Wrong size on XsollaUIBuilderLibrary_GetCurrentTheme");
static_assert(offsetof(XsollaUIBuilderLibrary_GetCurrentTheme, ReturnValue) == 0x000000, "Member 'XsollaUIBuilderLibrary_GetCurrentTheme::ReturnValue' has a wrong offset!");

// Function XsollaUIBuilder.XsollaUIBuilderLibrary.GetCurrentWidgetsLibrary
// 0x0008 (0x0008 - 0x0000)
struct XsollaUIBuilderLibrary_GetCurrentWidgetsLibrary final
{
public:
	class UXsollaUIBuilderWidgetsLibrary*         ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(XsollaUIBuilderLibrary_GetCurrentWidgetsLibrary) == 0x000008, "Wrong alignment on XsollaUIBuilderLibrary_GetCurrentWidgetsLibrary");
static_assert(sizeof(XsollaUIBuilderLibrary_GetCurrentWidgetsLibrary) == 0x000008, "Wrong size on XsollaUIBuilderLibrary_GetCurrentWidgetsLibrary");
static_assert(offsetof(XsollaUIBuilderLibrary_GetCurrentWidgetsLibrary, ReturnValue) == 0x000000, "Member 'XsollaUIBuilderLibrary_GetCurrentWidgetsLibrary::ReturnValue' has a wrong offset!");

// Function XsollaUIBuilder.XsollaUIBuilderLibrary.GetTheme
// 0x0010 (0x0010 - 0x0000)
struct XsollaUIBuilderLibrary_GetTheme final
{
public:
	TSubclassOf<class UXsollaUIBuilderTheme>      ThemeClass;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UXsollaUIBuilderTheme*                  ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(XsollaUIBuilderLibrary_GetTheme) == 0x000008, "Wrong alignment on XsollaUIBuilderLibrary_GetTheme");
static_assert(sizeof(XsollaUIBuilderLibrary_GetTheme) == 0x000010, "Wrong size on XsollaUIBuilderLibrary_GetTheme");
static_assert(offsetof(XsollaUIBuilderLibrary_GetTheme, ThemeClass) == 0x000000, "Member 'XsollaUIBuilderLibrary_GetTheme::ThemeClass' has a wrong offset!");
static_assert(offsetof(XsollaUIBuilderLibrary_GetTheme, ReturnValue) == 0x000008, "Member 'XsollaUIBuilderLibrary_GetTheme::ReturnValue' has a wrong offset!");

// Function XsollaUIBuilder.XsollaUIBuilderLibrary.GetUIBuilderSettings
// 0x0008 (0x0008 - 0x0000)
struct XsollaUIBuilderLibrary_GetUIBuilderSettings final
{
public:
	class UXsollaUIBuilderSettings*               ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(XsollaUIBuilderLibrary_GetUIBuilderSettings) == 0x000008, "Wrong alignment on XsollaUIBuilderLibrary_GetUIBuilderSettings");
static_assert(sizeof(XsollaUIBuilderLibrary_GetUIBuilderSettings) == 0x000008, "Wrong size on XsollaUIBuilderLibrary_GetUIBuilderSettings");
static_assert(offsetof(XsollaUIBuilderLibrary_GetUIBuilderSettings, ReturnValue) == 0x000000, "Member 'XsollaUIBuilderLibrary_GetUIBuilderSettings::ReturnValue' has a wrong offset!");

// Function XsollaUIBuilder.XsollaUIBuilderLibrary.GetWidgetsLibrary
// 0x0010 (0x0010 - 0x0000)
struct XsollaUIBuilderLibrary_GetWidgetsLibrary final
{
public:
	TSubclassOf<class UXsollaUIBuilderWidgetsLibrary> WidgetLibraryClass;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UXsollaUIBuilderWidgetsLibrary*         ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(XsollaUIBuilderLibrary_GetWidgetsLibrary) == 0x000008, "Wrong alignment on XsollaUIBuilderLibrary_GetWidgetsLibrary");
static_assert(sizeof(XsollaUIBuilderLibrary_GetWidgetsLibrary) == 0x000010, "Wrong size on XsollaUIBuilderLibrary_GetWidgetsLibrary");
static_assert(offsetof(XsollaUIBuilderLibrary_GetWidgetsLibrary, WidgetLibraryClass) == 0x000000, "Member 'XsollaUIBuilderLibrary_GetWidgetsLibrary::WidgetLibraryClass' has a wrong offset!");
static_assert(offsetof(XsollaUIBuilderLibrary_GetWidgetsLibrary, ReturnValue) == 0x000008, "Member 'XsollaUIBuilderLibrary_GetWidgetsLibrary::ReturnValue' has a wrong offset!");

// Function XsollaUIBuilder.XsollaUIBuilderLibrary.IsEmpty
// 0x00F8 (0x00F8 - 0x0000)
struct XsollaUIBuilderLibrary_IsEmpty final
{
public:
	struct FThemeParameters                       Parameters;                                        // 0x0000(0x00F0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x00F0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4911[0x7];                                     // 0x00F1(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(XsollaUIBuilderLibrary_IsEmpty) == 0x000008, "Wrong alignment on XsollaUIBuilderLibrary_IsEmpty");
static_assert(sizeof(XsollaUIBuilderLibrary_IsEmpty) == 0x0000F8, "Wrong size on XsollaUIBuilderLibrary_IsEmpty");
static_assert(offsetof(XsollaUIBuilderLibrary_IsEmpty, Parameters) == 0x000000, "Member 'XsollaUIBuilderLibrary_IsEmpty::Parameters' has a wrong offset!");
static_assert(offsetof(XsollaUIBuilderLibrary_IsEmpty, ReturnValue) == 0x0000F0, "Member 'XsollaUIBuilderLibrary_IsEmpty::ReturnValue' has a wrong offset!");

// Function XsollaUIBuilder.XsollaUIBuilderSettings.UpdateTheme
// 0x0008 (0x0008 - 0x0000)
struct XsollaUIBuilderSettings_UpdateTheme final
{
public:
	TSubclassOf<class UXsollaUIBuilderTheme>      NewTheme;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(XsollaUIBuilderSettings_UpdateTheme) == 0x000008, "Wrong alignment on XsollaUIBuilderSettings_UpdateTheme");
static_assert(sizeof(XsollaUIBuilderSettings_UpdateTheme) == 0x000008, "Wrong size on XsollaUIBuilderSettings_UpdateTheme");
static_assert(offsetof(XsollaUIBuilderSettings_UpdateTheme, NewTheme) == 0x000000, "Member 'XsollaUIBuilderSettings_UpdateTheme::NewTheme' has a wrong offset!");

// Function XsollaUIBuilder.XsollaUIBuilderTheme.GetBrushByType
// 0x00E0 (0x00E0 - 0x0000)
struct XsollaUIBuilderTheme_GetBrushByType final
{
public:
	EBrushThemeType                               BrushType;                                         // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsFound;                                          // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4912[0xE];                                     // 0x0002(0x000E)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            ReturnValue;                                       // 0x0010(0x00D0)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(XsollaUIBuilderTheme_GetBrushByType) == 0x000010, "Wrong alignment on XsollaUIBuilderTheme_GetBrushByType");
static_assert(sizeof(XsollaUIBuilderTheme_GetBrushByType) == 0x0000E0, "Wrong size on XsollaUIBuilderTheme_GetBrushByType");
static_assert(offsetof(XsollaUIBuilderTheme_GetBrushByType, BrushType) == 0x000000, "Member 'XsollaUIBuilderTheme_GetBrushByType::BrushType' has a wrong offset!");
static_assert(offsetof(XsollaUIBuilderTheme_GetBrushByType, bIsFound) == 0x000001, "Member 'XsollaUIBuilderTheme_GetBrushByType::bIsFound' has a wrong offset!");
static_assert(offsetof(XsollaUIBuilderTheme_GetBrushByType, ReturnValue) == 0x000010, "Member 'XsollaUIBuilderTheme_GetBrushByType::ReturnValue' has a wrong offset!");

// Function XsollaUIBuilder.XsollaUIBuilderTheme.GetColorByType
// 0x0008 (0x0008 - 0x0000)
struct XsollaUIBuilderTheme_GetColorByType final
{
public:
	EColorType                                    ColorType;                                         // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsFound;                                          // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4913[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FColor                                 ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(XsollaUIBuilderTheme_GetColorByType) == 0x000004, "Wrong alignment on XsollaUIBuilderTheme_GetColorByType");
static_assert(sizeof(XsollaUIBuilderTheme_GetColorByType) == 0x000008, "Wrong size on XsollaUIBuilderTheme_GetColorByType");
static_assert(offsetof(XsollaUIBuilderTheme_GetColorByType, ColorType) == 0x000000, "Member 'XsollaUIBuilderTheme_GetColorByType::ColorType' has a wrong offset!");
static_assert(offsetof(XsollaUIBuilderTheme_GetColorByType, bIsFound) == 0x000001, "Member 'XsollaUIBuilderTheme_GetColorByType::bIsFound' has a wrong offset!");
static_assert(offsetof(XsollaUIBuilderTheme_GetColorByType, ReturnValue) == 0x000004, "Member 'XsollaUIBuilderTheme_GetColorByType::ReturnValue' has a wrong offset!");

// Function XsollaUIBuilder.XsollaUIBuilderTheme.GetFontByType
// 0x0068 (0x0068 - 0x0000)
struct XsollaUIBuilderTheme_GetFontByType final
{
public:
	EFontType                                     FontType;                                          // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsFound;                                          // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4914[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateFontInfo                         ReturnValue;                                       // 0x0008(0x0060)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(XsollaUIBuilderTheme_GetFontByType) == 0x000008, "Wrong alignment on XsollaUIBuilderTheme_GetFontByType");
static_assert(sizeof(XsollaUIBuilderTheme_GetFontByType) == 0x000068, "Wrong size on XsollaUIBuilderTheme_GetFontByType");
static_assert(offsetof(XsollaUIBuilderTheme_GetFontByType, FontType) == 0x000000, "Member 'XsollaUIBuilderTheme_GetFontByType::FontType' has a wrong offset!");
static_assert(offsetof(XsollaUIBuilderTheme_GetFontByType, bIsFound) == 0x000001, "Member 'XsollaUIBuilderTheme_GetFontByType::bIsFound' has a wrong offset!");
static_assert(offsetof(XsollaUIBuilderTheme_GetFontByType, ReturnValue) == 0x000008, "Member 'XsollaUIBuilderTheme_GetFontByType::ReturnValue' has a wrong offset!");

// Function XsollaUIBuilder.XsollaUIBuilderWidgetsLibrary.GetWidgetByType
// 0x0010 (0x0010 - 0x0000)
struct XsollaUIBuilderWidgetsLibrary_GetWidgetByType final
{
public:
	EWidgetType                                   WidgetType;                                        // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4915[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UXsollaGenericPrimitive>    ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(XsollaUIBuilderWidgetsLibrary_GetWidgetByType) == 0x000008, "Wrong alignment on XsollaUIBuilderWidgetsLibrary_GetWidgetByType");
static_assert(sizeof(XsollaUIBuilderWidgetsLibrary_GetWidgetByType) == 0x000010, "Wrong size on XsollaUIBuilderWidgetsLibrary_GetWidgetByType");
static_assert(offsetof(XsollaUIBuilderWidgetsLibrary_GetWidgetByType, WidgetType) == 0x000000, "Member 'XsollaUIBuilderWidgetsLibrary_GetWidgetByType::WidgetType' has a wrong offset!");
static_assert(offsetof(XsollaUIBuilderWidgetsLibrary_GetWidgetByType, ReturnValue) == 0x000008, "Member 'XsollaUIBuilderWidgetsLibrary_GetWidgetByType::ReturnValue' has a wrong offset!");

}

