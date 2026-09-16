#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 24 member(s).
class UserActivityRequestManagerImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UserActivityRequestManagerImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UserActivityRequestManagerImpl@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UserActivityRequestManagerImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UserActivityRequestManagerImpl@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UserActivityRequestManagerImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UserActivityRequestManagerImpl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestUserActivity@UserActivityRequestManagerImpl@@UEAAJPEAUIUserActivityResponder@UserActivities@Internal@ApplicationModel@Windows@@@Z
    virtual long RequestUserActivity(::Windows::ApplicationModel::Internal::UserActivities::IUserActivityResponder *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UserActivityRequestManagerImpl@@QEAA@XZ
    UserActivityRequestManagerImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_UserActivityRequested@UserActivityRequestManagerImpl@@UEAAJPEAU?$ITypedEventHandler@PEAVUserActivityRequestManager@UserActivities@ApplicationModel@Windows@@PEAVUserActivityRequestedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_UserActivityRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_UserActivityRequested@UserActivityRequestManagerImpl@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_UserActivityRequested(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UserActivityRequestManagerImpl@@UEAA@XZ
    virtual ~UserActivityRequestManagerImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalRequestUserActivity@UserActivityRequestManagerImpl@@AEAAXAEAVOnRequestUserActivity@UserActivityRequestManagerProvider@@PEAUIUserActivityResponder@UserActivities@Internal@ApplicationModel@Windows@@@Z
    void InternalRequestUserActivity(WindissectOpaque &, ::Windows::ApplicationModel::Internal::UserActivities::IUserActivityResponder *);
};
