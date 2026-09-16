#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace UserActivityRequestManagerProvider {
class GetForWindow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetForWindow@UserActivityRequestManagerProvider@@QEAAXPEAUHWND__@@@Z
    void StartActivity(HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetForWindow@UserActivityRequestManagerProvider@@QEAA@XZ
    ~GetForWindow();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetForWindow@UserActivityRequestManagerProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetForWindow@UserActivityRequestManagerProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace UserActivityRequestManagerProvider
