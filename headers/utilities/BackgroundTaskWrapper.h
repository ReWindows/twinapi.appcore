#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 5 member(s).
namespace Windows::ApplicationModel::Core {
class BackgroundTaskWrapper {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BackgroundTaskWrapper@Core@ApplicationModel@Windows@@QEAA@XZ
    BackgroundTaskWrapper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThreadProc@BackgroundTaskWrapper@Core@ApplicationModel@Windows@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z
    static void ThreadProc(_TP_CALLBACK_INSTANCE *, void *, _TP_WORK *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BackgroundTaskWrapper@Core@ApplicationModel@Windows@@UEAA@XZ
    virtual ~BackgroundTaskWrapper();
};
} // namespace Windows::ApplicationModel::Core
