#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 18 member(s).
class AdvertisingManagerForUserImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AdvertisingManagerForUserImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AdvertisingManagerForUserImpl@@QEAA@XZ
    AdvertisingManagerForUserImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AdvertisingManagerForUserImpl@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AdvertisingManagerForUserImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AdvertisingManagerForUserImpl@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AdvertisingManagerForUserImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AdvertisingManagerForUserImpl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AdvertisingId@AdvertisingManagerForUserImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AdvertisingId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_User@AdvertisingManagerForUserImpl@@UEAAJPEAPEAUIUser@System@Windows@@@Z
    virtual long get_User(::Windows::System::IUser * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AdvertisingManagerForUserImpl@@UEAA@XZ
    virtual ~AdvertisingManagerForUserImpl();
};
