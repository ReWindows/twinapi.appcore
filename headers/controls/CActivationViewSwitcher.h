#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 20 member(s).
class CActivationViewSwitcher {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CActivationViewSwitcher@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CActivationViewSwitcher@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CActivationViewSwitcher@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CActivationViewSwitcher@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CActivationViewSwitcher@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@CActivationViewSwitcher@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsViewPresentedOnActivationVirtualDesktop@CActivationViewSwitcher@@UEAAJHPEAE@Z
    virtual long IsViewPresentedOnActivationVirtualDesktop(int, unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CActivationViewSwitcher@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CActivationViewSwitcher@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAsStandaloneAsync@CActivationViewSwitcher@@UEAAJHPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long ShowAsStandaloneAsync(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAsStandaloneWithSizePreferenceAsync@CActivationViewSwitcher@@UEAAJHW4ViewSizePreference@ViewManagement@UI@Windows@@PEAPEAUIAsyncAction@Foundation@5@@Z
    virtual long ShowAsStandaloneWithSizePreferenceAsync(int, int, WindissectOpaque * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowViewAsync@CActivationViewSwitcher@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1PEAPEAUIAsyncAction@Foundation@Windows@@@Z
    long _ShowViewAsync(HWND__*, HWND__*, int, int, WindissectOpaque * *);
};
