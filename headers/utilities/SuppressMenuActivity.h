#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace InputDial::InputDialTelemetry {
class SuppressMenuActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SuppressMenuActivity@InputDialTelemetry@InputDial@@QEAAX_N@Z
    void StartActivity(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SuppressMenuActivity@InputDialTelemetry@InputDial@@QEAA@XZ
    ~SuppressMenuActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SuppressMenuActivity@InputDialTelemetry@InputDial@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SuppressMenuActivity@InputDialTelemetry@InputDial@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputDial::InputDialTelemetry
