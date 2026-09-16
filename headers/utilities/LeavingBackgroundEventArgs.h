#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 18 member(s).
namespace Windows::ApplicationModel {
class LeavingBackgroundEventArgs {
public:
    class LeavingBackgroundCompletionHandler;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@LeavingBackgroundEventArgs@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecrementInvokeAllFinishedAsyncCount@LeavingBackgroundEventArgs@ApplicationModel@Windows@@QEAAXXZ
    void DecrementInvokeAllFinishedAsyncCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@LeavingBackgroundEventArgs@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@LeavingBackgroundEventArgs@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@LeavingBackgroundEventArgs@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCompleteHandler@LeavingBackgroundEventArgs@ApplicationModel@Windows@@QEAAXXZ
    void InvokeCompleteHandler();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LeavingBackgroundEventArgs@ApplicationModel@Windows@@QEAA@XZ
    LeavingBackgroundEventArgs();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@LeavingBackgroundEventArgs@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@LeavingBackgroundEventArgs@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LeavingBackgroundEventArgs@ApplicationModel@Windows@@UEAA@XZ
    virtual ~LeavingBackgroundEventArgs();
};
} // namespace Windows::ApplicationModel
