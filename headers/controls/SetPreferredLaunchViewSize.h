#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace ApplicationViewTelemetry {
class SetPreferredLaunchViewSize {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SetPreferredLaunchViewSize@ApplicationViewTelemetry@@QEAAXUSize@Foundation@Windows@@@Z
    void StartActivity(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SetPreferredLaunchViewSize@ApplicationViewTelemetry@@QEAA@XZ
    ~SetPreferredLaunchViewSize();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SetPreferredLaunchViewSize@ApplicationViewTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SetPreferredLaunchViewSize@ApplicationViewTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ApplicationViewTelemetry
