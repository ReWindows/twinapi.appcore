#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace CortanaPermissionsTelemetry {
class CortanaPermissionsAppServiceManager_GetPermissionsAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CortanaPermissionsAppServiceManager_GetPermissionsAsync@CortanaPermissionsTelemetry@@QEAAXH@Z
    void StartActivity(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CortanaPermissionsAppServiceManager_GetPermissionsAsync@CortanaPermissionsTelemetry@@QEAA@XZ
    ~CortanaPermissionsAppServiceManager_GetPermissionsAsync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CortanaPermissionsAppServiceManager_GetPermissionsAsync@CortanaPermissionsTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CortanaPermissionsAppServiceManager_GetPermissionsAsync@CortanaPermissionsTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CortanaPermissionsTelemetry
