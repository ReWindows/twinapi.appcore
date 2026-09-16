#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 30 member(s).
class AdvertisingManagerHelperImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AdvertisingManagerHelperImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AdvertisingManagerHelperImpl@@QEAA@XZ
    AdvertisingManagerHelperImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewAdvertisingId@AdvertisingManagerHelperImpl@@UEAAJXZ
    virtual long CreateNewAdvertisingId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewAdvertisingIdForUser@AdvertisingManagerHelperImpl@@UEAAJPEAUHSTRING__@@@Z
    virtual long CreateNewAdvertisingIdForUser(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdvertisingIdTurnedOnForUser@AdvertisingManagerHelperImpl@@UEAAJPEAUHSTRING__@@PEAEPEAK@Z
    virtual long GetAdvertisingIdTurnedOnForUser(HSTRING__*, unsigned char *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AdvertisingManagerHelperImpl@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AdvertisingManagerHelperImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AdvertisingManagerHelperImpl@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@AdvertisingManagerHelperImpl@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@AdvertisingManagerHelperImpl@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AdvertisingManagerHelperImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AdvertisingManagerHelperImpl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AdvertisingIdTurnedOn@AdvertisingManagerHelperImpl@@UEAAJPEAE@Z
    virtual long get_AdvertisingIdTurnedOn(unsigned char *);
};
