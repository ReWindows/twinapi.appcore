#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 27 member(s).
class PinnedWebsiteImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PinnedWebsiteImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PinnedWebsiteImpl@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PinnedWebsiteImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PinnedWebsiteImpl@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@PinnedWebsiteImpl@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@PinnedWebsiteImpl@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PinnedWebsiteImpl@@QEAA@XZ
    PinnedWebsiteImpl();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PinnedWebsiteImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PinnedWebsiteImpl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IconPath@PinnedWebsiteImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_IconPath(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Title@PinnedWebsiteImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Title(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Url@PinnedWebsiteImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Url(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PinnedWebsiteImpl@@UEAA@XZ
    virtual ~PinnedWebsiteImpl();
};
