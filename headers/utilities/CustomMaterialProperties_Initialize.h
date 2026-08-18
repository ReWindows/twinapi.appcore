#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace MaterialPropertiesTelemetry {
class CustomMaterialProperties_Initialize {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CustomMaterialProperties_Initialize@MaterialPropertiesTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CustomMaterialProperties_Initialize@MaterialPropertiesTelemetry@@QEAA@XZ
    ~CustomMaterialProperties_Initialize();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CustomMaterialProperties_Initialize@MaterialPropertiesTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CustomMaterialProperties_Initialize@MaterialPropertiesTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace MaterialPropertiesTelemetry
