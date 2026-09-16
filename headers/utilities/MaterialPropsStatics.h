#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 20 member(s).
class MaterialPropsStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@MaterialPropsStatics@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MaterialPropsStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentView@MaterialPropsStatics@@UEAAJPEAPEAUIMaterialProperties@UI@Windows@@@Z
    virtual long GetForCurrentView(::Windows::UI::IMaterialProperties * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@MaterialPropsStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MaterialPropsStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@MaterialPropsStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MaterialPropsStatics@@QEAA@XZ
    MaterialPropsStatics();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MaterialPropsStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MaterialPropsStatics@@UEAAKXZ
    virtual unsigned long Release();
};
