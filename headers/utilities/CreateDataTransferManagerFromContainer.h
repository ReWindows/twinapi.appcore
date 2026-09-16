#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 5 member(s).
namespace SharePlatformProvider {
class CreateDataTransferManagerFromContainer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivityWithCorrelationVector@CreateDataTransferManagerFromContainer@SharePlatformProvider@@QEAAXPEBD@Z
    void StartActivityWithCorrelationVector(char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CreateDataTransferManagerFromContainer@SharePlatformProvider@@QEAAXPEBD@Z
    void Stop(char const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CreateDataTransferManagerFromContainer@SharePlatformProvider@@QEAA@XZ
    ~CreateDataTransferManagerFromContainer();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CreateDataTransferManagerFromContainer@SharePlatformProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CreateDataTransferManagerFromContainer@SharePlatformProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace SharePlatformProvider
