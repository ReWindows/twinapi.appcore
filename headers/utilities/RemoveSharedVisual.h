#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace CUITelemetry {
class RemoveSharedVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@RemoveSharedVisual@CUITelemetry@@QEAAXAEBU_GUID@@K@Z
    void StartActivity(_GUID const &, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RemoveSharedVisual@CUITelemetry@@QEAA@XZ
    ~RemoveSharedVisual();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@RemoveSharedVisual@CUITelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@RemoveSharedVisual@CUITelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CUITelemetry
