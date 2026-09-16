#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 6 member(s).
namespace CoreApplicationProvider {
class AppCreation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Split@AppCreation@CoreApplicationProvider@@QEAA?AV12@XZ
    WindissectOpaque Split();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AppCreation@CoreApplicationProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppCreation@CoreApplicationProvider@@QEAA@XZ
    ~AppCreation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AppCreation@CoreApplicationProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AppCreation@CoreApplicationProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CoreApplicationProvider
