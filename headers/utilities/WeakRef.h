#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 3 member(s).
namespace Microsoft::WRL {
class WeakRef {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WeakRef@WRL@Microsoft@@QEAA@XZ
    ~WeakRef();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z
    long InternalResolve(_GUID const &, IInspectable * *) const;
};
} // namespace Microsoft::WRL
