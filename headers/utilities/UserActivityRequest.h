#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 6 member(s).
namespace UserActivityRequestManagerProvider {
class UserActivityRequest {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteRequest@UserActivityRequest@UserActivityRequestManagerProvider@@QEAAXXZ
    void CompleteRequest();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUserActivity@UserActivityRequest@UserActivityRequestManagerProvider@@QEAAXXZ
    void SetUserActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@UserActivityRequest@UserActivityRequestManagerProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UserActivityRequest@UserActivityRequestManagerProvider@@QEAA@XZ
    ~UserActivityRequest();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@UserActivityRequest@UserActivityRequestManagerProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@UserActivityRequest@UserActivityRequestManagerProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace UserActivityRequestManagerProvider
