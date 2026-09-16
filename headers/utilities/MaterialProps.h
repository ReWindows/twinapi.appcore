#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 23 member(s).
class MaterialProps {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MaterialProps@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@MaterialProps@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MaterialProps@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@MaterialProps@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@MaterialProps@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@MaterialProps@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MaterialProps@@QEAA@XZ
    MaterialProps();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MaterialProps@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MaterialProps@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@MaterialProps@@QEAAJPEAUICoreWindow@Core@UI@Windows@@@Z
    long RuntimeClassInitialize(::Windows::UI::Core::ICoreWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowTransparencyModeChanged@MaterialProps@@UEAAJXZ
    virtual long WindowTransparencyModeChanged();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MaterialProps@@UEAA@XZ
    virtual ~MaterialProps();
};
