#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 16 member(s).
namespace Windows::ApplicationModel::Core {
class ActivationEventCallback {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivationHandled@ActivationEventCallback@Core@ApplicationModel@Windows@@UEAAJXZ
    virtual long ActivationHandled();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ActivationEventCallback@Core@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ActivationEventCallback@Core@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ActivationEventCallback@Core@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ActivationEventCallback@Core@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ActivationEventCallback@Core@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ActivationEventCallback@Core@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ActivationEventCallback@Core@ApplicationModel@Windows@@UEAA@XZ
    virtual ~ActivationEventCallback();
};
} // namespace Windows::ApplicationModel::Core
