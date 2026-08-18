#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace UserActivityRequestManagerProvider {
class OnRequestUserActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@OnRequestUserActivity@UserActivityRequestManagerProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OnRequestUserActivity@UserActivityRequestManagerProvider@@QEAA@XZ
    ~OnRequestUserActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@OnRequestUserActivity@UserActivityRequestManagerProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@OnRequestUserActivity@UserActivityRequestManagerProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace UserActivityRequestManagerProvider
