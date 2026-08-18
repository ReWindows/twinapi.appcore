#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 23 member(s).
class UserActivityRequestedEventArgsImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UserActivityRequestedEventArgsImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecrementDeferralCount@UserActivityRequestedEventArgsImpl@@QEAAXXZ
    void DecrementDeferralCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeferral@UserActivityRequestedEventArgsImpl@@UEAAJPEAPEAUIDeferral@Foundation@Windows@@@Z
    virtual long GetDeferral(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UserActivityRequestedEventArgsImpl@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UserActivityRequestedEventArgsImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UserActivityRequestedEventArgsImpl@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UserActivityRequestedEventArgsImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UserActivityRequestedEventArgsImpl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@UserActivityRequestedEventArgsImpl@@QEAAJPEAUIUserActivityResponder@UserActivities@Internal@ApplicationModel@Windows@@VOnRequestUserActivity@UserActivityRequestManagerProvider@@@Z
    long RuntimeClassInitialize(::Windows::ApplicationModel::Internal::UserActivities::IUserActivityResponder *, WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UserActivityRequestedEventArgsImpl@@QEAA@XZ
    UserActivityRequestedEventArgsImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Request@UserActivityRequestedEventArgsImpl@@UEAAJPEAPEAUIUserActivityRequest@UserActivities@ApplicationModel@Windows@@@Z
    virtual long get_Request(::Windows::ApplicationModel::UserActivities::IUserActivityRequest * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UserActivityRequestedEventArgsImpl@@UEAA@XZ
    virtual ~UserActivityRequestedEventArgsImpl();
};
