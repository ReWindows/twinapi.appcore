#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace CortanaPermissionsTelemetry {
class CortanaPermissionsAppServiceManager_IsSupportedAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CortanaPermissionsAppServiceManager_IsSupportedAsync@CortanaPermissionsTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CortanaPermissionsAppServiceManager_IsSupportedAsync@CortanaPermissionsTelemetry@@QEAA@XZ
    ~CortanaPermissionsAppServiceManager_IsSupportedAsync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CortanaPermissionsAppServiceManager_IsSupportedAsync@CortanaPermissionsTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CortanaPermissionsAppServiceManager_IsSupportedAsync@CortanaPermissionsTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CortanaPermissionsTelemetry
