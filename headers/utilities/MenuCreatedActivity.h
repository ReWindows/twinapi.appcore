#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace InputDial::InputDialTelemetry {
class MenuCreatedActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@MenuCreatedActivity@InputDialTelemetry@InputDial@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MenuCreatedActivity@InputDialTelemetry@InputDial@@QEAA@XZ
    ~MenuCreatedActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@MenuCreatedActivity@InputDialTelemetry@InputDial@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@MenuCreatedActivity@InputDialTelemetry@InputDial@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputDial::InputDialTelemetry
