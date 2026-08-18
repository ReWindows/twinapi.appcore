#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 5 member(s).
namespace UserActivitiesTraceProvider {
class ActivityChannelFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ActivityChannelFactory@UserActivitiesTraceProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ActivityChannelFactory@UserActivitiesTraceProvider@@QEAA@XZ
    ~ActivityChannelFactory();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ActivityChannelFactory@UserActivitiesTraceProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ActivityChannelFactory@UserActivitiesTraceProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace UserActivitiesTraceProvider
