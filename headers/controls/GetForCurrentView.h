#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 5 member(s).
namespace UserActivityRequestManagerProvider {
class GetForCurrentView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetForCurrentView@UserActivityRequestManagerProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetForCurrentView@UserActivityRequestManagerProvider@@QEAA@XZ
    ~GetForCurrentView();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetForCurrentView@UserActivityRequestManagerProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetForCurrentView@UserActivityRequestManagerProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace UserActivityRequestManagerProvider
