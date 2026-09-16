#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 2 member(s).
namespace Microsoft::WRL::Wrappers {
class SRWLock {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z
    static WindissectOpaque LockExclusive(_RTL_SRWLOCK *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z
    static WindissectOpaque LockShared(_RTL_SRWLOCK *);
};
} // namespace Microsoft::WRL::Wrappers
