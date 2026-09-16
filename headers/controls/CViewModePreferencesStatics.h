#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 22 member(s).
class CViewModePreferencesStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CViewModePreferencesStatics@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CViewModePreferencesStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CViewModePreferencesStatics@@QEAA@XZ
    CViewModePreferencesStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDefault@CViewModePreferencesStatics@@UEAAJW4ApplicationViewMode@ViewManagement@UI@Windows@@PEAPEAUIViewModePreferences@345@@Z
    virtual long CreateDefault(int, ::Windows::UI::ViewManagement::IViewModePreferences * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CViewModePreferencesStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CViewModePreferencesStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CViewModePreferencesStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CViewModePreferencesStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@CViewModePreferencesStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CViewModePreferencesStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CViewModePreferencesStatics@@UEAAKXZ
    virtual unsigned long Release();
};
