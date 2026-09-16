#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 47 member(s).
class CViewSwitcherStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CViewSwitcherStatics@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CViewSwitcherStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableShowingMainViewOnActivation@CViewSwitcherStatics@@UEAAJXZ
    virtual long DisableShowingMainViewOnActivation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableSystemViewActivationPolicy@CViewSwitcherStatics@@UEAAJXZ
    virtual long DisableSystemViewActivationPolicy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CViewSwitcherStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CViewSwitcherStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CViewSwitcherStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CViewSwitcherStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@CViewSwitcherStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareForCustomAnimatedSwitchAsync@CViewSwitcherStatics@@UEAAJHHW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long PrepareForCustomAnimatedSwitchAsync(int, int, int, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CViewSwitcherStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CViewSwitcherStatics@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchAsync@CViewSwitcherStatics@@UEAAJHPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long SwitchAsync(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchFromViewAsync@CViewSwitcherStatics@@UEAAJHHPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long SwitchFromViewAsync(int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchFromViewWithOptionsAsync@CViewSwitcherStatics@@UEAAJHHW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAPEAUIAsyncAction@Foundation@5@@Z
    virtual long SwitchFromViewWithOptionsAsync(int, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryShowAsStandaloneAsync@CViewSwitcherStatics@@UEAAJHPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long TryShowAsStandaloneAsync(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryShowAsStandaloneWithAnchorViewAndSizePreferenceAsync@CViewSwitcherStatics@@UEAAJHW4ViewSizePreference@ViewManagement@UI@Windows@@H0PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long TryShowAsStandaloneWithAnchorViewAndSizePreferenceAsync(int, int, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryShowAsStandaloneWithSizePreferenceAsync@CViewSwitcherStatics@@UEAAJHW4ViewSizePreference@ViewManagement@UI@Windows@@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long TryShowAsStandaloneWithSizePreferenceAsync(int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryShowAsViewModeAsync@CViewSwitcherStatics@@UEAAJHW4ApplicationViewMode@ViewManagement@UI@Windows@@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long TryShowAsViewModeAsync(int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryShowAsViewModeWithPreferencesAsync@CViewSwitcherStatics@@UEAAJHW4ApplicationViewMode@ViewManagement@UI@Windows@@PEAUIViewModePreferences@345@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long TryShowAsViewModeWithPreferencesAsync(int, int, ::Windows::UI::ViewManagement::IViewModePreferences *, WindissectOpaque * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowViewAsync@CViewSwitcherStatics@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1PEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    long _ShowViewAsync(HWND__*, HWND__*, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SwitchViewsAsync@CViewSwitcherStatics@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAPEAUIAsyncAction@Foundation@Windows@@@Z
    long _SwitchViewsAsync(HWND__*, HWND__*, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_GetCoreWindowForCurrentThread@CViewSwitcherStatics@@CAJPEAPEAUHWND__@@@Z
    static long _s_GetCoreWindowForCurrentThread(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_TransformIfErrorAndOriginateError@CViewSwitcherStatics@@CAXPEAJ@Z
    static void _s_TransformIfErrorAndOriginateError(long *);
};
