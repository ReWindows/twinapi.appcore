#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 28 member(s).
class CustomMaterialProps {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CustomMaterialProps@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CustomMaterialProps@@QEAA@XZ
    CustomMaterialProps();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CustomMaterialProps@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CustomMaterialProps@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CustomMaterialProps@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CustomMaterialProps@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@CustomMaterialProps@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CustomMaterialProps@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CustomMaterialProps@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CustomMaterialProps@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DesiredHostBackdropTransparencyPolicy@CustomMaterialProps@@UEAAJPEAW4TransparencyPolicy@UI@Windows@@@Z
    virtual long get_DesiredHostBackdropTransparencyPolicy(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DesiredInAppTransparencyPolicy@CustomMaterialProps@@UEAAJPEAW4TransparencyPolicy@UI@Windows@@@Z
    virtual long get_DesiredInAppTransparencyPolicy(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DesiredHostBackdropTransparencyPolicy@CustomMaterialProps@@UEAAJW4TransparencyPolicy@UI@Windows@@@Z
    virtual long put_DesiredHostBackdropTransparencyPolicy(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DesiredInAppTransparencyPolicy@CustomMaterialProps@@UEAAJW4TransparencyPolicy@UI@Windows@@@Z
    virtual long put_DesiredInAppTransparencyPolicy(int);
};
