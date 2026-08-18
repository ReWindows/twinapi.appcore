#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace ApplicationViewTelemetry {
class SetPreferredLaunchWindowingMode {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SetPreferredLaunchWindowingMode@ApplicationViewTelemetry@@QEAAXW4ApplicationViewWindowingMode@ViewManagement@UI@Windows@@@Z
    void StartActivity(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SetPreferredLaunchWindowingMode@ApplicationViewTelemetry@@QEAA@XZ
    ~SetPreferredLaunchWindowingMode();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SetPreferredLaunchWindowingMode@ApplicationViewTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SetPreferredLaunchWindowingMode@ApplicationViewTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ApplicationViewTelemetry
