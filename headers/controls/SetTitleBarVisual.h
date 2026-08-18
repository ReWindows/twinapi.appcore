#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace CoreApplicationViewTelemetry {
class SetTitleBarVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SetTitleBarVisual@CoreApplicationViewTelemetry@@QEAAX_N@Z
    void StartActivity(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SetTitleBarVisual@CoreApplicationViewTelemetry@@QEAA@XZ
    ~SetTitleBarVisual();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SetTitleBarVisual@CoreApplicationViewTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SetTitleBarVisual@CoreApplicationViewTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CoreApplicationViewTelemetry
