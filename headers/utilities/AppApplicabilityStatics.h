#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 24 member(s).
namespace Windows::System::Profile {
class AppApplicabilityStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppApplicabilityStatics@Profile@System@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppApplicabilityStatics@Profile@System@Windows@@QEAA@XZ
    AppApplicabilityStatics();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppApplicabilityStatics@Profile@System@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppApplicabilityStatics@Profile@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppApplicabilityStatics@Profile@System@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnsupportedAppRequirements@AppApplicabilityStatics@Profile@System@Windows@@UEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@PEAPEAU?$IVectorView@PEAVUnsupportedAppRequirement@Profile@System@Windows@@@674@@Z
    virtual long GetUnsupportedAppRequirements(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@AppApplicabilityStatics@Profile@System@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@AppApplicabilityStatics@Profile@System@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppApplicabilityStatics@Profile@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppApplicabilityStatics@Profile@System@Windows@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddReasonToRequirements@AppApplicabilityStatics@Profile@System@Windows@@AEAAJW4UnsupportedAppRequirementReasons@234@PEAUHSTRING__@@AEAV?$ComPtr@V?$AgileVector@PEAVUnsupportedAppRequirement@Profile@System@Windows@@U?$DefaultEqualityPredicate@PEAVUnsupportedAppRequirement@Profile@System@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVUnsupportedAppRequirement@Profile@System@Windows@@@6784@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z
    long AddReasonToRequirements(int, HSTRING__*, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBuildNumberFromSupportedCapability@AppApplicabilityStatics@Profile@System@Windows@@AEAAJPEAUHSTRING__@@IAEA_K@Z
    long GetBuildNumberFromSupportedCapability(HSTRING__*, unsigned int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IfUnsupportedOnWindows10XAddToRequirements@AppApplicabilityStatics@Profile@System@Windows@@AEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@AEAV?$ComPtr@V?$AgileVector@PEAVUnsupportedAppRequirement@Profile@System@Windows@@U?$DefaultEqualityPredicate@PEAVUnsupportedAppRequirement@Profile@System@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVUnsupportedAppRequirement@Profile@System@Windows@@@6784@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z
    long IfUnsupportedOnWindows10XAddToRequirements(WindissectOpaque *, WindissectOpaque &);
};
} // namespace Windows::System::Profile
