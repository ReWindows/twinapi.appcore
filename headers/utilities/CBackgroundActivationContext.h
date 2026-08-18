#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 45 member(s).
class CBackgroundActivationContext {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBackgroundActivationContext@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBackgroundActivationContext@@QEAA@XZ
    CBackgroundActivationContext();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CBackgroundActivationContext@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CBackgroundActivationContext@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CBackgroundActivationContext@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBackgroundActivationContext@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBackgroundActivationContext@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InitData@CBackgroundActivationContext@@UEAAJPEAKPEAPEAE@Z
    virtual long get_InitData(unsigned long *, unsigned char * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBackgroundActivationContext@@UEAA@XZ
    virtual ~CBackgroundActivationContext();
};
