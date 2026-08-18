#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 5 member(s).
namespace InputDial::InputDialTelemetry {
class GetSelectedMenuItemActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetSelectedMenuItemActivity@InputDialTelemetry@InputDial@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@GetSelectedMenuItemActivity@InputDialTelemetry@InputDial@@QEAAX_N@Z
    void Stop(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetSelectedMenuItemActivity@InputDialTelemetry@InputDial@@QEAA@XZ
    ~GetSelectedMenuItemActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetSelectedMenuItemActivity@InputDialTelemetry@InputDial@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetSelectedMenuItemActivity@InputDialTelemetry@InputDial@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputDial::InputDialTelemetry
