#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 19 member(s).
class CompositionVisualInterop {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionVisualInterop@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CompositionVisualInterop@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CompositionVisualInterop@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CompositionVisualInterop@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CompositionVisualInterop@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@CompositionVisualInterop@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionVisualInterop@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionVisualInterop@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Visual@CompositionVisualInterop@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long get_Visual(IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Visual@CompositionVisualInterop@@UEAAJPEAUIUnknown@@@Z
    virtual long put_Visual(IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionVisualInterop@@UEAA@XZ
    virtual ~CompositionVisualInterop();
};
