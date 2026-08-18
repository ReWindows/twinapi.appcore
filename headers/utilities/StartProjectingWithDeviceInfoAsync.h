#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace ProjectionManagerTelemetry {
class StartProjectingWithDeviceInfoAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@StartProjectingWithDeviceInfoAsync@ProjectionManagerTelemetry@@QEAAXHH@Z
    void StartActivity(int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartProjectingWithDeviceInfoAsync@ProjectionManagerTelemetry@@QEAA@XZ
    ~StartProjectingWithDeviceInfoAsync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@StartProjectingWithDeviceInfoAsync@ProjectionManagerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@StartProjectingWithDeviceInfoAsync@ProjectionManagerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ProjectionManagerTelemetry
