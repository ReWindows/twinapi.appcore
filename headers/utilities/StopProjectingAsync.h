#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace ProjectionManagerTelemetry {
class StopProjectingAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@StopProjectingAsync@ProjectionManagerTelemetry@@QEAAXHH@Z
    void StartActivity(int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StopProjectingAsync@ProjectionManagerTelemetry@@QEAA@XZ
    ~StopProjectingAsync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@StopProjectingAsync@ProjectionManagerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@StopProjectingAsync@ProjectionManagerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ProjectionManagerTelemetry
