#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace ProjectionManagerTelemetry {
class RequestStartProjectingAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@RequestStartProjectingAsync@ProjectionManagerTelemetry@@QEAAXHHURect@Foundation@Windows@@@Z
    void StartActivity(int, int, WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RequestStartProjectingAsync@ProjectionManagerTelemetry@@QEAA@XZ
    ~RequestStartProjectingAsync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@RequestStartProjectingAsync@ProjectionManagerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@RequestStartProjectingAsync@ProjectionManagerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ProjectionManagerTelemetry
