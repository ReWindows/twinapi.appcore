#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace Windows::Services::Cortana {
class CortanaPermissionsManagerFactory {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CortanaPermissionsManagerFactory@Cortana@Services@Windows@@QEAA@XZ
    CortanaPermissionsManagerFactory();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefault@CortanaPermissionsManagerFactory@Cortana@Services@Windows@@UEAAJPEAPEAUICortanaPermissionsManager@234@@Z
    virtual long GetDefault(::Windows::Services::Cortana::ICortanaPermissionsManager * *);
};
} // namespace Windows::Services::Cortana
