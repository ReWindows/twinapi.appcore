#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 5 member(s).
namespace Windows::ApplicationModel::Core {
class UnhandledErrorDetectedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@UnhandledErrorDetectedEventArgs@Core@ApplicationModel@Windows@@QEAAJPEAUIRestrictedErrorInfo@@@Z
    long RuntimeClassInitialize(IRestrictedErrorInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UnhandledError@UnhandledErrorDetectedEventArgs@Core@ApplicationModel@Windows@@UEAAJPEAPEAUIUnhandledError@234@@Z
    virtual long get_UnhandledError(::Windows::ApplicationModel::Core::IUnhandledError * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UnhandledErrorDetectedEventArgs@Core@ApplicationModel@Windows@@UEAA@XZ
    virtual ~UnhandledErrorDetectedEventArgs();
};
} // namespace Windows::ApplicationModel::Core
