#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 6 member(s).
namespace Windows::ApplicationModel::Core {
class UnhandledError {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Propagate@UnhandledError@Core@ApplicationModel@Windows@@UEAAJXZ
    virtual long Propagate();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UnhandledError@Core@ApplicationModel@Windows@@QEAA@PEAUIRestrictedErrorInfo@@@Z
    UnhandledError(IRestrictedErrorInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@UnhandledError@Core@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UnhandledError@Core@ApplicationModel@Windows@@UEAA@XZ
    virtual ~UnhandledError();
};
} // namespace Windows::ApplicationModel::Core
