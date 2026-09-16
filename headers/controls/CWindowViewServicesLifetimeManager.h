#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 6 member(s).
class CWindowViewServicesLifetimeManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rundown@CWindowViewServicesLifetimeManager@@UEAAJPEAUIViewServiceIdentity@@@Z
    virtual long Rundown(IViewServiceIdentity *);
    // Category: Method | Source: PE Export
    // Symbol: ?ServiceRegistered@CWindowViewServicesLifetimeManager@@UEAAJPEAUIViewServiceIdentity@@AEBU_GUID@@PEAUIUnknown@@@Z
    virtual long ServiceRegistered(IViewServiceIdentity *, _GUID const &, IUnknown *);
    // Category: Method | Source: PE Export
    // Symbol: ?ServiceUnregistered@CWindowViewServicesLifetimeManager@@UEAAJPEAUIViewServiceIdentity@@AEBU_GUID@@@Z
    virtual long ServiceUnregistered(IViewServiceIdentity *, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupRundownCallback@CWindowViewServicesLifetimeManager@@UEAAJXZ
    virtual long SetupRundownCallback();
};
