#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace InputDial::InputDialTelemetry {
class SelectMenuItemActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SelectMenuItemActivity@InputDialTelemetry@InputDial@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SelectMenuItemActivity@InputDialTelemetry@InputDial@@QEAA@XZ
    ~SelectMenuItemActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SelectMenuItemActivity@InputDialTelemetry@InputDial@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SelectMenuItemActivity@InputDialTelemetry@InputDial@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputDial::InputDialTelemetry
