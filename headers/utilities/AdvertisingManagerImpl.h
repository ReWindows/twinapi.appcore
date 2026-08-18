#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 30 member(s).
class AdvertisingManagerImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AdvertisingManagerImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AdvertisingManagerImpl@@QEAA@XZ
    AdvertisingManagerImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForUser@AdvertisingManagerImpl@@UEAAJPEAUIUser@System@Windows@@PEAPEAUIAdvertisingManagerForUser@UserProfile@34@@Z
    virtual long GetForUser(::Windows::System::IUser *, ::Windows::System::UserProfile::IAdvertisingManagerForUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AdvertisingManagerImpl@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AdvertisingManagerImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AdvertisingManagerImpl@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@AdvertisingManagerImpl@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@AdvertisingManagerImpl@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AdvertisingManagerImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AdvertisingManagerImpl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AdvertisingId@AdvertisingManagerImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AdvertisingId(HSTRING__* *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdvertisingIdForUser@AdvertisingManagerImpl@@CAJPEAUHSTRING__@@PEAPEAU2@@Z
    static long GetAdvertisingIdForUser(HSTRING__*, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserSid@AdvertisingManagerImpl@@CAJPEAUIUser@System@Windows@@AEAVHString@Wrappers@WRL@Microsoft@@@Z
    static long GetUserSid(::Windows::System::IUser *, ::Microsoft::WRL::Wrappers::HString &);
};
