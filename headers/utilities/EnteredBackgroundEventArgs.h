#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 18 member(s).
namespace Windows::ApplicationModel {
class EnteredBackgroundEventArgs {
public:
    class EnteredBackgroundCompletionHandler;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@EnteredBackgroundEventArgs@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecrementInvokeAllFinishedAsyncCount@EnteredBackgroundEventArgs@ApplicationModel@Windows@@QEAAXXZ
    void DecrementInvokeAllFinishedAsyncCount();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EnteredBackgroundEventArgs@ApplicationModel@Windows@@QEAA@XZ
    EnteredBackgroundEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@EnteredBackgroundEventArgs@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@EnteredBackgroundEventArgs@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@EnteredBackgroundEventArgs@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCompleteHandler@EnteredBackgroundEventArgs@ApplicationModel@Windows@@QEAAXXZ
    void InvokeCompleteHandler();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@EnteredBackgroundEventArgs@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@EnteredBackgroundEventArgs@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EnteredBackgroundEventArgs@ApplicationModel@Windows@@UEAA@XZ
    virtual ~EnteredBackgroundEventArgs();
};
} // namespace Windows::ApplicationModel
