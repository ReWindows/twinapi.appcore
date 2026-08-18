#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 21 member(s).
class CViewModePreferences {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CViewModePreferences@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CViewModePreferences@@QEAA@W4ViewSizePreference@ViewManagement@UI@Windows@@USize@Foundation@4@@Z
    CViewModePreferences(int, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CViewModePreferences@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CViewModePreferences@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CViewModePreferences@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CViewModePreferences@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@CViewModePreferences@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CViewModePreferences@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CViewModePreferences@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CustomSize@CViewModePreferences@@UEAAJPEAUSize@Foundation@Windows@@@Z
    virtual long get_CustomSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ViewSizePreference@CViewModePreferences@@UEAAJPEAW4ViewSizePreference@ViewManagement@UI@Windows@@@Z
    virtual long get_ViewSizePreference(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CustomSize@CViewModePreferences@@UEAAJUSize@Foundation@Windows@@@Z
    virtual long put_CustomSize(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ViewSizePreference@CViewModePreferences@@UEAAJW4ViewSizePreference@ViewManagement@UI@Windows@@@Z
    virtual long put_ViewSizePreference(int);
};
