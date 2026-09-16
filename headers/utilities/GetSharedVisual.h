#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace CUITelemetry {
class GetSharedVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetSharedVisual@CUITelemetry@@QEAAXAEBU_GUID@@K@Z
    void StartActivity(_GUID const &, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetSharedVisual@CUITelemetry@@QEAA@XZ
    ~GetSharedVisual();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetSharedVisual@CUITelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetSharedVisual@CUITelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CUITelemetry
