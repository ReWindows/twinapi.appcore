#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace InputDial::InputDialTelemetry {
class SetDefaultMenuItemsActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SetDefaultMenuItemsActivity@InputDialTelemetry@InputDial@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SetDefaultMenuItemsActivity@InputDialTelemetry@InputDial@@QEAA@XZ
    ~SetDefaultMenuItemsActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SetDefaultMenuItemsActivity@InputDialTelemetry@InputDial@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SetDefaultMenuItemsActivity@InputDialTelemetry@InputDial@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputDial::InputDialTelemetry
