#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 11 member(s).
namespace CUITelemetry {
class LaunchOrConnectAsync {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LaunchOrConnectAsync@CUITelemetry@@QEAA@$$QEAV01@@Z
    LaunchOrConnectAsync(WindissectOpaque &&);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LaunchOrConnectAsync@CUITelemetry@@QEAAXPEBG00U_GUID@@_N2II@Z
    void StartActivity(unsigned short const *, unsigned short const *, unsigned short const *, _GUID, bool, bool, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LaunchOrConnectAsync@CUITelemetry@@QEAAXI@Z
    void StartActivity(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAsyncOperation@LaunchOrConnectAsync@CUITelemetry@@QEAAXXZ
    void StartAsyncOperation();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LaunchOrConnectAsync@CUITelemetry@@QEAA@XZ
    ~LaunchOrConnectAsync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LaunchOrConnectAsync@CUITelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LaunchOrConnectAsync@CUITelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CUITelemetry
