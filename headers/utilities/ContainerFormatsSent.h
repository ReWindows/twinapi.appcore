#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 5 member(s).
namespace SharePlatformProvider {
class ContainerFormatsSent {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivityWithCorrelationVector@ContainerFormatsSent@SharePlatformProvider@@QEAAXPEBD@Z
    void StartActivityWithCorrelationVector(char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@ContainerFormatsSent@SharePlatformProvider@@QEAAXPEBGPEBD@Z
    void Stop(unsigned short const *, char const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContainerFormatsSent@SharePlatformProvider@@QEAA@XZ
    ~ContainerFormatsSent();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ContainerFormatsSent@SharePlatformProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ContainerFormatsSent@SharePlatformProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace SharePlatformProvider
