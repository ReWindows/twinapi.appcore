#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace MaterialPropertiesTelemetry {
class MaterialProperties_Initialize {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@MaterialProperties_Initialize@MaterialPropertiesTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MaterialProperties_Initialize@MaterialPropertiesTelemetry@@QEAA@XZ
    ~MaterialProperties_Initialize();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@MaterialProperties_Initialize@MaterialPropertiesTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@MaterialProperties_Initialize@MaterialPropertiesTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace MaterialPropertiesTelemetry
