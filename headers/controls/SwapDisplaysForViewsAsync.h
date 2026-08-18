#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace ProjectionManagerTelemetry {
class SwapDisplaysForViewsAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SwapDisplaysForViewsAsync@ProjectionManagerTelemetry@@QEAAXHH@Z
    void StartActivity(int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SwapDisplaysForViewsAsync@ProjectionManagerTelemetry@@QEAA@XZ
    ~SwapDisplaysForViewsAsync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SwapDisplaysForViewsAsync@ProjectionManagerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SwapDisplaysForViewsAsync@ProjectionManagerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ProjectionManagerTelemetry
