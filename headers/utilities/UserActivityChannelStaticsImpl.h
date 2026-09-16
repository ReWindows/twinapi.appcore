#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 36 member(s).
class UserActivityChannelStaticsImpl {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?ActivateInstance@UserActivityChannelStaticsImpl@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UserActivityChannelStaticsImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableAutoSessionCreation@UserActivityChannelStaticsImpl@@UEAAJXZ
    virtual long DisableAutoSessionCreation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefault@UserActivityChannelStaticsImpl@@UEAAJPEAPEAUIUserActivityChannel@UserActivities@ApplicationModel@Windows@@@Z
    virtual long GetDefault(::Windows::ApplicationModel::UserActivities::IUserActivityChannel * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForUser@UserActivityChannelStaticsImpl@@UEAAJPEAUIUser@System@Windows@@PEAPEAUIUserActivityChannel@UserActivities@ApplicationModel@4@@Z
    virtual long GetForUser(::Windows::System::IUser *, ::Windows::ApplicationModel::UserActivities::IUserActivityChannel * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UserActivityChannelStaticsImpl@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UserActivityChannelStaticsImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UserActivityChannelStaticsImpl@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@UserActivityChannelStaticsImpl@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@UserActivityChannelStaticsImpl@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UserActivityChannelStaticsImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UserActivityChannelStaticsImpl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetForWebAccount@UserActivityChannelStaticsImpl@@UEAAJPEAUIWebAccount@Credentials@Security@Windows@@PEAPEAUIUserActivityChannel@UserActivities@ApplicationModel@5@@Z
    virtual long TryGetForWebAccount(::Windows::Security::Credentials::IWebAccount *, ::Windows::ApplicationModel::UserActivities::IUserActivityChannel * *);
};
