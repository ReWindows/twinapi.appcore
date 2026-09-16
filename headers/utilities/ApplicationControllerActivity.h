#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace InputDial::InputDialTelemetry {
class ApplicationControllerActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ApplicationControllerActivity@InputDialTelemetry@InputDial@@QEAAX_N@Z
    void StartActivity(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ApplicationControllerActivity@InputDialTelemetry@InputDial@@QEAA@XZ
    ~ApplicationControllerActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ApplicationControllerActivity@InputDialTelemetry@InputDial@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ApplicationControllerActivity@InputDialTelemetry@InputDial@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputDial::InputDialTelemetry
