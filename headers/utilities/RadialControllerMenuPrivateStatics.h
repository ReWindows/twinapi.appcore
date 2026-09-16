#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 23 member(s).
namespace Windows::UI::Input {
class RadialControllerMenuPrivateStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@RadialControllerMenuPrivateStatics@Input@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@RadialControllerMenuPrivateStatics@Input@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForWindow@RadialControllerMenuPrivateStatics@Input@UI@Windows@@UEAAJ_K0PEAPEAUIRadialControllerMenu@234@@Z
    virtual long CreateForWindow(uint64_t, uint64_t, ::Windows::UI::Input::IRadialControllerMenu * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@RadialControllerMenuPrivateStatics@Input@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@RadialControllerMenuPrivateStatics@Input@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@RadialControllerMenuPrivateStatics@Input@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@RadialControllerMenuPrivateStatics@Input@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RadialControllerMenuPrivateStatics@Input@UI@Windows@@QEAA@XZ
    RadialControllerMenuPrivateStatics();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@RadialControllerMenuPrivateStatics@Input@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::UI::Input
