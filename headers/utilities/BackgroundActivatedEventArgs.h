#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 17 member(s).
namespace Windows::ApplicationModel::Activation {
class BackgroundActivatedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BackgroundActivatedEventArgs@Activation@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BackgroundActivatedEventArgs@Activation@ApplicationModel@Windows@@QEAA@PEAUIBackgroundTaskInstance@Background@23@@Z
    BackgroundActivatedEventArgs(::Windows::ApplicationModel::Background::IBackgroundTaskInstance *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@BackgroundActivatedEventArgs@Activation@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@BackgroundActivatedEventArgs@Activation@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@BackgroundActivatedEventArgs@Activation@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BackgroundActivatedEventArgs@Activation@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BackgroundActivatedEventArgs@Activation@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TaskInstance@BackgroundActivatedEventArgs@Activation@ApplicationModel@Windows@@UEAAJPEAPEAUIBackgroundTaskInstance@Background@34@@Z
    virtual long get_TaskInstance(::Windows::ApplicationModel::Background::IBackgroundTaskInstance * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BackgroundActivatedEventArgs@Activation@ApplicationModel@Windows@@UEAA@XZ
    virtual ~BackgroundActivatedEventArgs();
};
} // namespace Windows::ApplicationModel::Activation
