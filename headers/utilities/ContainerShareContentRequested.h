#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 5 member(s).
namespace SharePlatformProvider {
class ContainerShareContentRequested {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivityWithCorrelationVector@ContainerShareContentRequested@SharePlatformProvider@@QEAAXPEBD@Z
    void StartActivityWithCorrelationVector(char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@ContainerShareContentRequested@SharePlatformProvider@@QEAAXPEBD@Z
    void Stop(char const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContainerShareContentRequested@SharePlatformProvider@@QEAA@XZ
    ~ContainerShareContentRequested();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ContainerShareContentRequested@SharePlatformProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ContainerShareContentRequested@SharePlatformProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace SharePlatformProvider
