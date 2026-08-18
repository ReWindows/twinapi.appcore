#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 20 member(s).
class CShellExperienceStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CShellExperienceStatics@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CShellExperienceStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CShellExperienceStatics@@QEAA@XZ
    CShellExperienceStatics();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentView@CShellExperienceStatics@@UEAAJPEAPEAUIShellExperience@Experience@Shell@Internal@Windows@@@Z
    virtual long GetForCurrentView(::Windows::Internal::Shell::Experience::IShellExperience * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CShellExperienceStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CShellExperienceStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CShellExperienceStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CShellExperienceStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CShellExperienceStatics@@UEAAKXZ
    virtual unsigned long Release();
};
