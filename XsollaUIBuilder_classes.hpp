#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: XsollaUIBuilder

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "XsollaUIBuilder_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// Class XsollaUIBuilder.XsollaGenericPrimitive
// 0x0000 (0x02E0 - 0x02E0)
class UXsollaGenericPrimitive final : public UUserWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"XsollaGenericPrimitive">();
	}
	static class UXsollaGenericPrimitive* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXsollaGenericPrimitive>();
	}
};
static_assert(alignof(UXsollaGenericPrimitive) == 0x000008, "Wrong alignment on UXsollaGenericPrimitive");
static_assert(sizeof(UXsollaGenericPrimitive) == 0x0002E0, "Wrong size on UXsollaGenericPrimitive");

// Class XsollaUIBuilder.XsollaGenericWrapper
// 0x0110 (0x03F0 - 0x02E0)
class UXsollaGenericWrapper final : public UUserWidget
{
public:
	EWidgetType                                   WidgetLibraryType;                                 // 0x02E0(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_490F[0x7];                                     // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UXsollaGenericPrimitive>    OverrideWidget;                                    // 0x02E8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          OverrideDefaultTheme;                              // 0x02F0(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4910[0x7];                                     // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UXsollaUIBuilderTheme>      Theme;                                             // 0x02F8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FThemeParameters                       Parameters;                                        // 0x0300(0x00F0)(Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn, NativeAccessSpecifierPublic)

public:
	void ThemeUpdated(TSubclassOf<class UXsollaUIBuilderTheme> NewTheme);
	void UpdateThemeParameters(const struct FThemeParameters& InParameters);
	void UpdateWrapperTheme();

	TSubclassOf<class UXsollaGenericPrimitive> GetWidgetClass() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"XsollaGenericWrapper">();
	}
	static class UXsollaGenericWrapper* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXsollaGenericWrapper>();
	}
};
static_assert(alignof(UXsollaGenericWrapper) == 0x000008, "Wrong alignment on UXsollaGenericWrapper");
static_assert(sizeof(UXsollaGenericWrapper) == 0x0003F0, "Wrong size on UXsollaGenericWrapper");
static_assert(offsetof(UXsollaGenericWrapper, WidgetLibraryType) == 0x0002E0, "Member 'UXsollaGenericWrapper::WidgetLibraryType' has a wrong offset!");
static_assert(offsetof(UXsollaGenericWrapper, OverrideWidget) == 0x0002E8, "Member 'UXsollaGenericWrapper::OverrideWidget' has a wrong offset!");
static_assert(offsetof(UXsollaGenericWrapper, OverrideDefaultTheme) == 0x0002F0, "Member 'UXsollaGenericWrapper::OverrideDefaultTheme' has a wrong offset!");
static_assert(offsetof(UXsollaGenericWrapper, Theme) == 0x0002F8, "Member 'UXsollaGenericWrapper::Theme' has a wrong offset!");
static_assert(offsetof(UXsollaGenericWrapper, Parameters) == 0x000300, "Member 'UXsollaGenericWrapper::Parameters' has a wrong offset!");

// Class XsollaUIBuilder.XsollaUIBuilderLibrary
// 0x0000 (0x0028 - 0x0028)
class UXsollaUIBuilderLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void Clear(struct FThemeParameters& Parameters);
	static class UXsollaUIBuilderTheme* GetCurrentTheme();
	static class UXsollaUIBuilderWidgetsLibrary* GetCurrentWidgetsLibrary();
	static class UXsollaUIBuilderTheme* GetTheme(TSubclassOf<class UXsollaUIBuilderTheme> ThemeClass);
	static class UXsollaUIBuilderSettings* GetUIBuilderSettings();
	static class UXsollaUIBuilderWidgetsLibrary* GetWidgetsLibrary(TSubclassOf<class UXsollaUIBuilderWidgetsLibrary> WidgetLibraryClass);
	static bool IsEmpty(const struct FThemeParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"XsollaUIBuilderLibrary">();
	}
	static class UXsollaUIBuilderLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXsollaUIBuilderLibrary>();
	}
};
static_assert(alignof(UXsollaUIBuilderLibrary) == 0x000008, "Wrong alignment on UXsollaUIBuilderLibrary");
static_assert(sizeof(UXsollaUIBuilderLibrary) == 0x000028, "Wrong size on UXsollaUIBuilderLibrary");

// Class XsollaUIBuilder.XsollaUIBuilderSettings
// 0x0060 (0x0088 - 0x0028)
class UXsollaUIBuilderSettings final : public UObject
{
public:
	FMulticastInlineDelegateProperty_             ThemeChanged;                                      // 0x0028(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FEntityTypeName>                WidgetTypes;                                       // 0x0038(0x0010)(Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<struct FEntityTypeName>                ColorTypes;                                        // 0x0048(0x0010)(Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<struct FEntityTypeName>                FontTypes;                                         // 0x0058(0x0010)(Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<struct FEntityTypeName>                BrushTypes;                                        // 0x0068(0x0010)(Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)
	TSubclassOf<class UXsollaUIBuilderTheme>      InterfaceTheme;                                    // 0x0078(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UXsollaUIBuilderWidgetsLibrary> WidgetsLibrary;                                    // 0x0080(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void UpdateTheme(TSubclassOf<class UXsollaUIBuilderTheme> NewTheme);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"XsollaUIBuilderSettings">();
	}
	static class UXsollaUIBuilderSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXsollaUIBuilderSettings>();
	}
};
static_assert(alignof(UXsollaUIBuilderSettings) == 0x000008, "Wrong alignment on UXsollaUIBuilderSettings");
static_assert(sizeof(UXsollaUIBuilderSettings) == 0x000088, "Wrong size on UXsollaUIBuilderSettings");
static_assert(offsetof(UXsollaUIBuilderSettings, ThemeChanged) == 0x000028, "Member 'UXsollaUIBuilderSettings::ThemeChanged' has a wrong offset!");
static_assert(offsetof(UXsollaUIBuilderSettings, WidgetTypes) == 0x000038, "Member 'UXsollaUIBuilderSettings::WidgetTypes' has a wrong offset!");
static_assert(offsetof(UXsollaUIBuilderSettings, ColorTypes) == 0x000048, "Member 'UXsollaUIBuilderSettings::ColorTypes' has a wrong offset!");
static_assert(offsetof(UXsollaUIBuilderSettings, FontTypes) == 0x000058, "Member 'UXsollaUIBuilderSettings::FontTypes' has a wrong offset!");
static_assert(offsetof(UXsollaUIBuilderSettings, BrushTypes) == 0x000068, "Member 'UXsollaUIBuilderSettings::BrushTypes' has a wrong offset!");
static_assert(offsetof(UXsollaUIBuilderSettings, InterfaceTheme) == 0x000078, "Member 'UXsollaUIBuilderSettings::InterfaceTheme' has a wrong offset!");
static_assert(offsetof(UXsollaUIBuilderSettings, WidgetsLibrary) == 0x000080, "Member 'UXsollaUIBuilderSettings::WidgetsLibrary' has a wrong offset!");

// Class XsollaUIBuilder.XsollaUIBuilderTheme
// 0x00F0 (0x0118 - 0x0028)
class UXsollaUIBuilderTheme final : public UObject
{
public:
	TMap<EColorType, struct FColor>               ColorsMap;                                         // 0x0028(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<EFontType, struct FSlateFontInfo>        FontsMap;                                          // 0x0078(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<EBrushThemeType, struct FSlateBrush>     BrushesMap;                                        // 0x00C8(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

public:
	struct FSlateBrush GetBrushByType(const EBrushThemeType BrushType, bool* bIsFound) const;
	struct FColor GetColorByType(const EColorType ColorType, bool* bIsFound) const;
	struct FSlateFontInfo GetFontByType(const EFontType FontType, bool* bIsFound) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"XsollaUIBuilderTheme">();
	}
	static class UXsollaUIBuilderTheme* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXsollaUIBuilderTheme>();
	}
};
static_assert(alignof(UXsollaUIBuilderTheme) == 0x000008, "Wrong alignment on UXsollaUIBuilderTheme");
static_assert(sizeof(UXsollaUIBuilderTheme) == 0x000118, "Wrong size on UXsollaUIBuilderTheme");
static_assert(offsetof(UXsollaUIBuilderTheme, ColorsMap) == 0x000028, "Member 'UXsollaUIBuilderTheme::ColorsMap' has a wrong offset!");
static_assert(offsetof(UXsollaUIBuilderTheme, FontsMap) == 0x000078, "Member 'UXsollaUIBuilderTheme::FontsMap' has a wrong offset!");
static_assert(offsetof(UXsollaUIBuilderTheme, BrushesMap) == 0x0000C8, "Member 'UXsollaUIBuilderTheme::BrushesMap' has a wrong offset!");

// Class XsollaUIBuilder.XsollaUIBuilderWidgetsLibrary
// 0x0050 (0x0078 - 0x0028)
class UXsollaUIBuilderWidgetsLibrary final : public UObject
{
public:
	TMap<EWidgetType, TSubclassOf<class UXsollaGenericPrimitive>> Widgets;                                           // 0x0028(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, NativeAccessSpecifierPublic)

public:
	TSubclassOf<class UXsollaGenericPrimitive> GetWidgetByType(const EWidgetType WidgetType) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"XsollaUIBuilderWidgetsLibrary">();
	}
	static class UXsollaUIBuilderWidgetsLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXsollaUIBuilderWidgetsLibrary>();
	}
};
static_assert(alignof(UXsollaUIBuilderWidgetsLibrary) == 0x000008, "Wrong alignment on UXsollaUIBuilderWidgetsLibrary");
static_assert(sizeof(UXsollaUIBuilderWidgetsLibrary) == 0x000078, "Wrong size on UXsollaUIBuilderWidgetsLibrary");
static_assert(offsetof(UXsollaUIBuilderWidgetsLibrary, Widgets) == 0x000028, "Member 'UXsollaUIBuilderWidgetsLibrary::Widgets' has a wrong offset!");

}

