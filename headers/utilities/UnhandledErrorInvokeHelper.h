#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace Windows::ApplicationModel::Core {
class UnhandledErrorInvokeHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@UnhandledErrorInvokeHelper@Core@ApplicationModel@Windows@@UEAAJPEAUIInspectable@@PEAUIUnhandledErrorDetectedEventArgs@234@@Z
    virtual long Invoke(IInspectable *, ::Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UnhandledErrorInvokeHelper@Core@ApplicationModel@Windows@@UEAA@XZ
    virtual ~UnhandledErrorInvokeHelper();
};
} // namespace Windows::ApplicationModel::Core
