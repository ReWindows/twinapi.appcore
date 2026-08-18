#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace CUITelemetry {
class ActivateSpecificWithViewId {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ActivateSpecificWithViewId@CUITelemetry@@QEAAXIPEBG@Z
    void StartActivity(unsigned int, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ActivateSpecificWithViewId@CUITelemetry@@QEAA@XZ
    ~ActivateSpecificWithViewId();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ActivateSpecificWithViewId@CUITelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ActivateSpecificWithViewId@CUITelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CUITelemetry
