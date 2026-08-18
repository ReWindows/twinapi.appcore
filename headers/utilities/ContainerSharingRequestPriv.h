#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 12 member(s).
class ContainerSharingRequestPriv {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Complete@ContainerSharingRequestPriv@@UEAAJXZ
    virtual long Complete();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ContainerSharingRequestPriv@@QEAA@XZ
    ContainerSharingRequestPriv();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventHandlerReturned@ContainerSharingRequestPriv@@UEAAJXZ
    virtual long EventHandlerReturned();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FailWithDisplayText@ContainerSharingRequestPriv@@UEAAJPEBG@Z
    virtual long FailWithDisplayText(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetData@ContainerSharingRequestPriv@@QEAAJPEAPEAUIUnknown@@@Z
    long GetData(IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportError@ContainerSharingRequestPriv@@UEAAJJ@Z
    virtual long ReportError(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetData@ContainerSharingRequestPriv@@UEAAJPEAUIUnknown@@@Z
    virtual long SetData(IUnknown *);
    // Category: Method | Source: PE Export
    // Symbol: ?SetupDeferral@ContainerSharingRequestPriv@@UEAAJXZ
    virtual long SetupDeferral();
    // Category: Method | Source: PE Export
    // Symbol: ?Timeout@ContainerSharingRequestPriv@@UEAAJXZ
    virtual long Timeout();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContainerSharingRequestPriv@@UEAA@XZ
    virtual ~ContainerSharingRequestPriv();
};
