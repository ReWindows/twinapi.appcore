#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 20 member(s).
class CActivationViewSwitcherFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CActivationViewSwitcherFactory@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CActivationViewSwitcherFactory@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CActivationViewSwitcherFactory@@QEAA@XZ
    CActivationViewSwitcherFactory();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForActivation@CActivationViewSwitcherFactory@@UEAAJPEAUIInspectable@@PEAPEAU2@@Z
    virtual long GetForActivation(IInspectable *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CActivationViewSwitcherFactory@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CActivationViewSwitcherFactory@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CActivationViewSwitcherFactory@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CActivationViewSwitcherFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CActivationViewSwitcherFactory@@UEAAKXZ
    virtual unsigned long Release();
};
