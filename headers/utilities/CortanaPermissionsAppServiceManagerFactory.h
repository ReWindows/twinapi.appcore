#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 5 member(s).
namespace Windows::Internal::Services::Cortana {
class CortanaPermissionsAppServiceManagerFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CortanaPermissionsAppServiceManagerFactory@Cortana@Services@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CortanaPermissionsAppServiceManagerFactory@Cortana@Services@Internal@Windows@@QEAA@XZ
    CortanaPermissionsAppServiceManagerFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CortanaPermissionsAppServiceManagerFactory@Cortana@Services@Internal@Windows@@UEAAJPEAUIUser@System@5@PEAPEAUICortanaPermissionsAppServiceManager@2345@@Z
    virtual long Create(::Windows::System::IUser *, ::Windows::Internal::Services::Cortana::ICortanaPermissionsAppServiceManager * *);
};
} // namespace Windows::Internal::Services::Cortana
