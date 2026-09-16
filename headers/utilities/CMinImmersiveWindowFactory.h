#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 26 member(s).
class CMinImmersiveWindowFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMinImmersiveWindowFactory@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMinImmersiveWindowFactory@@QEAA@W4_WINDOW_TYPE@@AEBUtagRECT@@@Z
    CMinImmersiveWindowFactory(int, tagRECT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CMinImmersiveWindowFactory@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CMinImmersiveWindowFactory@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CMinImmersiveWindowFactory@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMinImmersiveWindowFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMinImmersiveWindowFactory@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_Initialize@CMinImmersiveWindowFactory@@EEAAJPEAUIImmersiveMonitor@@PEBUtagRECT@@@Z
    virtual long v_Initialize(IImmersiveMonitor *, tagRECT const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMinImmersiveWindowFactory@@EEAA@XZ
    virtual ~CMinImmersiveWindowFactory();
};
