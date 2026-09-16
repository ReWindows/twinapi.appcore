#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 17 member(s).
class CTargetApplicationChosenEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTargetApplicationChosenEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTargetApplicationChosenEventArgs@@QEAA@XZ
    CTargetApplicationChosenEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CTargetApplicationChosenEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CTargetApplicationChosenEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CTargetApplicationChosenEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTargetApplicationChosenEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTargetApplicationChosenEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationName@CTargetApplicationChosenEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ApplicationName(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTargetApplicationChosenEventArgs@@UEAA@XZ
    virtual ~CTargetApplicationChosenEventArgs();
};
