#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace CUITelemetry {
class DisconnectAsyncOperation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@DisconnectAsyncOperation@CUITelemetry@@QEAAXAEBU_GUID@@@Z
    void StartActivity(_GUID const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DisconnectAsyncOperation@CUITelemetry@@QEAA@XZ
    ~DisconnectAsyncOperation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@DisconnectAsyncOperation@CUITelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@DisconnectAsyncOperation@CUITelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CUITelemetry
