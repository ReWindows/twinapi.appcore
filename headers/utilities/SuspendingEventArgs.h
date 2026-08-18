#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 17 member(s).
namespace Windows::ApplicationModel {
class SuspendingEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SuspendingEventArgs@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SuspendingEventArgs@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SuspendingEventArgs@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SuspendingEventArgs@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SuspendingEventArgs@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SuspendingEventArgs@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SuspendingEventArgs@ApplicationModel@Windows@@QEAA@PEAK@Z
    SuspendingEventArgs(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForAnyOutstandingDeferrals@SuspendingEventArgs@ApplicationModel@Windows@@UEAAJPEAUICoreDispatcher@Core@UI@3@@Z
    virtual long WaitForAnyOutstandingDeferrals(::Windows::UI::Core::ICoreDispatcher *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SuspendingOperation@SuspendingEventArgs@ApplicationModel@Windows@@UEAAJPEAPEAUISuspendingOperation@23@@Z
    virtual long get_SuspendingOperation(::Windows::ApplicationModel::ISuspendingOperation * *);
};
} // namespace Windows::ApplicationModel
