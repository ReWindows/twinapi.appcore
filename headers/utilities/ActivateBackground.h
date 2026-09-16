#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace CoreApplicationProvider {
class ActivateBackground {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ActivateBackground@CoreApplicationProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ActivateBackground@CoreApplicationProvider@@QEAA@XZ
    ~ActivateBackground();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ActivateBackground@CoreApplicationProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ActivateBackground@CoreApplicationProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CoreApplicationProvider
