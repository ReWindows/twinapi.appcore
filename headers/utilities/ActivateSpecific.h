#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace CUITelemetry {
class ActivateSpecific {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ActivateSpecific@CUITelemetry@@QEAAXAEBU_GUID@@PEBG@Z
    void StartActivity(_GUID const &, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ActivateSpecific@CUITelemetry@@QEAA@XZ
    ~ActivateSpecific();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ActivateSpecific@CUITelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ActivateSpecific@CUITelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CUITelemetry
