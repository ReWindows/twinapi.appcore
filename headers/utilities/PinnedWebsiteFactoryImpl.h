#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 19 member(s).
class PinnedWebsiteFactoryImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PinnedWebsiteFactoryImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePinnedWebsite@PinnedWebsiteFactoryImpl@@UEAAJPEAUHSTRING__@@00PEAPEAUIPinnedWebsite@Taskbar@Internal@Windows@@@Z
    virtual long CreatePinnedWebsite(HSTRING__*, HSTRING__*, HSTRING__*, ::Windows::Internal::Taskbar::IPinnedWebsite * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PinnedWebsiteFactoryImpl@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PinnedWebsiteFactoryImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PinnedWebsiteFactoryImpl@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PinnedWebsiteFactoryImpl@@QEAA@XZ
    PinnedWebsiteFactoryImpl();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PinnedWebsiteFactoryImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PinnedWebsiteFactoryImpl@@UEAAKXZ
    virtual unsigned long Release();
};
