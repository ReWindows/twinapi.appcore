#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace ProjectionManagerTelemetry {
class StartProjectingAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@StartProjectingAsync@ProjectionManagerTelemetry@@QEAAXHH@Z
    void StartActivity(int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartProjectingAsync@ProjectionManagerTelemetry@@QEAA@XZ
    ~StartProjectingAsync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@StartProjectingAsync@ProjectionManagerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@StartProjectingAsync@ProjectionManagerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ProjectionManagerTelemetry
