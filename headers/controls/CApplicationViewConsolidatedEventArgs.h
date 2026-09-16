#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 23 member(s).
class CApplicationViewConsolidatedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CApplicationViewConsolidatedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CApplicationViewConsolidatedEventArgs@@QEAA@W4WINDOW_CONSOLIDATED_FLAGS@@@Z
    CApplicationViewConsolidatedEventArgs(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CApplicationViewConsolidatedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CApplicationViewConsolidatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CApplicationViewConsolidatedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CApplicationViewConsolidatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CApplicationViewConsolidatedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsAppInitiated@CApplicationViewConsolidatedEventArgs@@UEAAJPEAE@Z
    virtual long get_IsAppInitiated(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsUserInitiated@CApplicationViewConsolidatedEventArgs@@UEAAJPEAE@Z
    virtual long get_IsUserInitiated(unsigned char *);
};
