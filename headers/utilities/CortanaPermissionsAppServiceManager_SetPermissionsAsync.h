#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace CortanaPermissionsTelemetry {
class CortanaPermissionsAppServiceManager_SetPermissionsAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CortanaPermissionsAppServiceManager_SetPermissionsAsync@CortanaPermissionsTelemetry@@QEAAXH_N@Z
    void StartActivity(int, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CortanaPermissionsAppServiceManager_SetPermissionsAsync@CortanaPermissionsTelemetry@@QEAA@XZ
    ~CortanaPermissionsAppServiceManager_SetPermissionsAsync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CortanaPermissionsAppServiceManager_SetPermissionsAsync@CortanaPermissionsTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CortanaPermissionsAppServiceManager_SetPermissionsAsync@CortanaPermissionsTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CortanaPermissionsTelemetry
