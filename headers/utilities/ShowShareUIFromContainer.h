#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 5 member(s).
namespace SharePlatformProvider {
class ShowShareUIFromContainer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivityWithCorrelationVector@ShowShareUIFromContainer@SharePlatformProvider@@QEAAXPEBD@Z
    void StartActivityWithCorrelationVector(char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@ShowShareUIFromContainer@SharePlatformProvider@@QEAAXPEBD@Z
    void Stop(char const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShowShareUIFromContainer@SharePlatformProvider@@QEAA@XZ
    ~ShowShareUIFromContainer();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ShowShareUIFromContainer@SharePlatformProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ShowShareUIFromContainer@SharePlatformProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace SharePlatformProvider
