#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace ProjectionManagerTelemetry {
class RequestStartProjectingWithPlacementAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@RequestStartProjectingWithPlacementAsync@ProjectionManagerTelemetry@@QEAAXHHURect@Foundation@Windows@@W4Placement@Popups@UI@5@@Z
    void StartActivity(int, int, WindissectOpaque, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RequestStartProjectingWithPlacementAsync@ProjectionManagerTelemetry@@QEAA@XZ
    ~RequestStartProjectingWithPlacementAsync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@RequestStartProjectingWithPlacementAsync@ProjectionManagerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@RequestStartProjectingWithPlacementAsync@ProjectionManagerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ProjectionManagerTelemetry
