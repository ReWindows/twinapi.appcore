#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 20 member(s).
class UserActivityRequestImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UserActivityRequestImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteRequest@UserActivityRequestImpl@@QEAAXXZ
    void CompleteRequest();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UserActivityRequestImpl@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UserActivityRequestImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UserActivityRequestImpl@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UserActivityRequestImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UserActivityRequestImpl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@UserActivityRequestImpl@@QEAAJPEAUIUserActivityResponder@UserActivities@Internal@ApplicationModel@Windows@@@Z
    long RuntimeClassInitialize(::Windows::ApplicationModel::Internal::UserActivities::IUserActivityResponder *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUserActivity@UserActivityRequestImpl@@UEAAJPEAUIUserActivity@UserActivities@ApplicationModel@Windows@@@Z
    virtual long SetUserActivity(::Windows::ApplicationModel::UserActivities::IUserActivity *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UserActivityRequestImpl@@QEAA@XZ
    UserActivityRequestImpl();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UserActivityRequestImpl@@UEAA@XZ
    virtual ~UserActivityRequestImpl();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUserActivityInternal@UserActivityRequestImpl@@AEAAXPEAUIUserActivity@UserActivities@ApplicationModel@Windows@@@Z
    void SetUserActivityInternal(::Windows::ApplicationModel::UserActivities::IUserActivity *);
};
