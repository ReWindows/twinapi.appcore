#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 5 member(s).
namespace SharePlatformProvider {
class ContainerDataRequestedForFormat {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivityWithCorrelationVector@ContainerDataRequestedForFormat@SharePlatformProvider@@QEAAXPEBD@Z
    void StartActivityWithCorrelationVector(char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@ContainerDataRequestedForFormat@SharePlatformProvider@@QEAAXPEBGPEBD@Z
    void Stop(unsigned short const *, char const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContainerDataRequestedForFormat@SharePlatformProvider@@QEAA@XZ
    ~ContainerDataRequestedForFormat();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ContainerDataRequestedForFormat@SharePlatformProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ContainerDataRequestedForFormat@SharePlatformProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace SharePlatformProvider
