#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 130 member(s).
class CApplicationView {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CApplicationView@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyApplicationUserModelID@CApplicationView@@UEAAJPEAUHSTRING__@@@Z
    virtual long ApplyApplicationUserModelID(HSTRING__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CApplicationView@@QEAA@XZ
    CApplicationView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExitFullScreenMode@CApplicationView@@UEAAJXZ
    virtual long ExitFullScreenMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayRegions@CApplicationView@@UEAAJPEAPEAU?$IVectorView@PEAVDisplayRegion@WindowManagement@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long GetDisplayRegions(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CApplicationView@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CApplicationView@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpanningRects@CApplicationView@@UEAAJPEAPEAU?$IVectorView@URect@Foundation@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long GetSpanningRects(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CApplicationView@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CApplicationView@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@CApplicationView@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsViewModeSupported@CApplicationView@@UEAAJW4ApplicationViewMode@ViewManagement@UI@Windows@@PEAE@Z
    virtual long IsViewModeSupported(int, unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CApplicationView@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CApplicationView@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDesiredBoundsMode@CApplicationView@@UEAAJW4ApplicationViewBoundsMode@ViewManagement@UI@Windows@@PEAE@Z
    virtual long SetDesiredBoundsMode(int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreferredMinSize@CApplicationView@@UEAAJUSize@Foundation@Windows@@@Z
    virtual long SetPreferredMinSize(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowStandardSystemOverlays@CApplicationView@@UEAAJXZ
    virtual long ShowStandardSystemOverlays();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryConsolidateAsync@CApplicationView@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long TryConsolidateAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryEnterFullScreenMode@CApplicationView@@UEAAJPEAE@Z
    virtual long TryEnterFullScreenMode(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryEnterViewModeAsync@CApplicationView@@UEAAJW4ApplicationViewMode@ViewManagement@UI@Windows@@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long TryEnterViewModeAsync(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryEnterViewModeWithPreferencesAsync@CApplicationView@@UEAAJW4ApplicationViewMode@ViewManagement@UI@Windows@@PEAUIViewModePreferences@345@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long TryEnterViewModeWithPreferencesAsync(int, ::Windows::UI::ViewManagement::IViewModePreferences *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryPositionView@CApplicationView@@UEAAJUtagRECT@@W4TryPositionViewFlags@@PEAE@Z
    virtual long TryPositionView(tagRECT, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryResizeView@CApplicationView@@UEAAJUSize@Foundation@Windows@@PEAE@Z
    virtual long TryResizeView(WindissectOpaque, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Consolidated@CApplicationView@@UEAAJPEAU?$ITypedEventHandler@PEAVApplicationView@ViewManagement@UI@Windows@@PEAVApplicationViewConsolidatedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Consolidated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_VisibleBoundsChanged@CApplicationView@@UEAAJPEAU?$ITypedEventHandler@PEAVApplicationView@ViewManagement@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_VisibleBoundsChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AdjacentToLeftDisplayEdge@CApplicationView@@UEAAJPEAE@Z
    virtual long get_AdjacentToLeftDisplayEdge(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AdjacentToRightDisplayEdge@CApplicationView@@UEAAJPEAE@Z
    virtual long get_AdjacentToRightDisplayEdge(unsigned char *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_CriticalInputMismatch@CApplicationView@@UEAAJPEAE@Z
    virtual long get_CriticalInputMismatch(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DesiredBoundsMode@CApplicationView@@UEAAJPEAW4ApplicationViewBoundsMode@ViewManagement@UI@Windows@@@Z
    virtual long get_DesiredBoundsMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FullScreenSystemOverlayMode@CApplicationView@@UEAAJPEAW4FullScreenSystemOverlayMode@ViewManagement@UI@Windows@@@Z
    virtual long get_FullScreenSystemOverlayMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@CApplicationView@@UEAAJPEAH@Z
    virtual long get_Id(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsFullScreen@CApplicationView@@UEAAJPEAE@Z
    virtual long get_IsFullScreen(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsFullScreenMode@CApplicationView@@UEAAJPEAE@Z
    virtual long get_IsFullScreenMode(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsFullScreenModeDisabled@CApplicationView@@UEAAJPEAE@Z
    virtual long get_IsFullScreenModeDisabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsLightweightFullScreenModeAllowed@CApplicationView@@UEAAJPEAE@Z
    virtual long get_IsLightweightFullScreenModeAllowed(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsOnLockScreen@CApplicationView@@UEAAJPEAE@Z
    virtual long get_IsOnLockScreen(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsScreenCaptureEnabled@CApplicationView@@UEAAJPEAE@Z
    virtual long get_IsScreenCaptureEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Orientation@CApplicationView@@UEAAJPEAW4ApplicationViewOrientation@ViewManagement@UI@Windows@@@Z
    virtual long get_Orientation(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PersistedStateId@CApplicationView@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PersistedStateId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SuppressSystemOverlays@CApplicationView@@UEAAJPEAE@Z
    virtual long get_SuppressSystemOverlays(unsigned char *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_TemporaryInputMismatch@CApplicationView@@UEAAJPEAE@Z
    virtual long get_TemporaryInputMismatch(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Title@CApplicationView@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Title(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBar@CApplicationView@@UEAAJPEAPEAUIApplicationViewTitleBar@ViewManagement@UI@Windows@@@Z
    virtual long get_TitleBar(::Windows::UI::ViewManagement::IApplicationViewTitleBar * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UIContext@CApplicationView@@UEAAJPEAPEAUIUIContext@UI@Windows@@@Z
    virtual long get_UIContext(::Windows::UI::IUIContext * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ViewMode@CApplicationView@@UEAAJPEAW4ApplicationViewMode@ViewManagement@UI@Windows@@@Z
    virtual long get_ViewMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleBounds@CApplicationView@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long get_VisibleBounds(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowId@CApplicationView@@UEAAJPEAUWindowId@UI@Windows@@@Z
    virtual long get_WindowId(::Windows::UI::WindowId *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowingEnvironment@CApplicationView@@UEAAJPEAPEAUIWindowingEnvironment@WindowManagement@UI@Windows@@@Z
    virtual long get_WindowingEnvironment(::Windows::UI::WindowManagement::IWindowingEnvironment * *);
    // Category: Method | Source: PE Export
    // Symbol: ?put_CriticalInputMismatch@CApplicationView@@UEAAJE@Z
    virtual long put_CriticalInputMismatch(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FullScreenSystemOverlayMode@CApplicationView@@UEAAJW4FullScreenSystemOverlayMode@ViewManagement@UI@Windows@@@Z
    virtual long put_FullScreenSystemOverlayMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsFullScreenModeDisabled@CApplicationView@@UEAAJE@Z
    virtual long put_IsFullScreenModeDisabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsLightweightFullScreenModeAllowed@CApplicationView@@UEAAJE@Z
    virtual long put_IsLightweightFullScreenModeAllowed(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsScreenCaptureEnabled@CApplicationView@@UEAAJE@Z
    virtual long put_IsScreenCaptureEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PersistedStateId@CApplicationView@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_PersistedStateId(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SuppressSystemOverlays@CApplicationView@@UEAAJE@Z
    virtual long put_SuppressSystemOverlays(unsigned char);
    // Category: Method | Source: PE Export
    // Symbol: ?put_TemporaryInputMismatch@CApplicationView@@UEAAJE@Z
    virtual long put_TemporaryInputMismatch(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Title@CApplicationView@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Title(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Consolidated@CApplicationView@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Consolidated(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_VisibleBoundsChanged@CApplicationView@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_VisibleBoundsChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CApplicationView@@UEAA@XZ
    virtual ~CApplicationView();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAdjacentDisplayEdges@CApplicationView@@AEAAXPEAW4ADJACENT_DISPLAY_EDGES@@@Z
    void _GetAdjacentDisplayEdges(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnConsolidated@CApplicationView@@AEAAJPEAUICoreWindow@Core@UI@Windows@@PEAUIApplicationViewConsolidatedEventArgsInternal@345@@Z
    long _OnConsolidated(::Windows::UI::Core::ICoreWindow *, ::Windows::UI::Core::IApplicationViewConsolidatedEventArgsInternal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnVisibleBoundsChanged@CApplicationView@@AEAAJPEAUICoreWindow@Core@UI@Windows@@PEAUIInspectable@@@Z
    long _OnVisibleBoundsChanged(::Windows::UI::Core::ICoreWindow *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryEnterViewModeHelperAsync@CApplicationView@@AEAAJW4ApplicationViewMode@ViewManagement@UI@Windows@@PEAUIViewModePreferences@345@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    long _TryEnterViewModeHelperAsync(int, ::Windows::UI::ViewManagement::IViewModePreferences *, WindissectOpaque * *);
};
