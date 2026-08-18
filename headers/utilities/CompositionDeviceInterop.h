#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 19 member(s).
class CompositionDeviceInterop {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionDeviceInterop@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CompositionDeviceInterop@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CompositionDeviceInterop@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CompositionDeviceInterop@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CompositionDeviceInterop@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@CompositionDeviceInterop@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionDeviceInterop@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionDeviceInterop@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Device@CompositionDeviceInterop@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long get_Device(IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Device@CompositionDeviceInterop@@UEAAJPEAUIUnknown@@@Z
    virtual long put_Device(IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionDeviceInterop@@UEAA@XZ
    virtual ~CompositionDeviceInterop();
};
