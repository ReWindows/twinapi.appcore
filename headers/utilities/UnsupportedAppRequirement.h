#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 17 member(s).
namespace Windows::System::Profile {
class UnsupportedAppRequirement {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UnsupportedAppRequirement@Profile@System@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UnsupportedAppRequirement@Profile@System@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UnsupportedAppRequirement@Profile@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UnsupportedAppRequirement@Profile@System@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UnsupportedAppRequirement@Profile@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UnsupportedAppRequirement@Profile@System@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Reasons@UnsupportedAppRequirement@Profile@System@Windows@@UEAAJPEAW4UnsupportedAppRequirementReasons@234@@Z
    virtual long get_Reasons(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Requirement@UnsupportedAppRequirement@Profile@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Requirement(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UnsupportedAppRequirement@Profile@System@Windows@@UEAA@XZ
    virtual ~UnsupportedAppRequirement();
};
} // namespace Windows::System::Profile
