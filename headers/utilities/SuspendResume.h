#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 13 member(s).
namespace CoreApplicationProvider {
class SuspendResume {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ASTADispatched@SuspendResume@CoreApplicationProvider@@QEAAXXZ
    void ASTADispatched();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ASTAExecutingSuspendHandlers@SuspendResume@CoreApplicationProvider@@QEAAXXZ
    void ASTAExecutingSuspendHandlers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ASTAResumed@SuspendResume@CoreApplicationProvider@@QEAAXXZ
    void ASTAResumed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ASTAResuming@SuspendResume@CoreApplicationProvider@@QEAAXXZ
    void ASTAResuming();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ASTASuspended@SuspendResume@CoreApplicationProvider@@QEAAXXZ
    void ASTASuspended();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ASTASynchronizingSuspend@SuspendResume@CoreApplicationProvider@@QEAAXXZ
    void ASTASynchronizingSuspend();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecutingSuspendHandlers@SuspendResume@CoreApplicationProvider@@QEAAXXZ
    void ExecutingSuspendHandlers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SuspendResume@CoreApplicationProvider@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransferToCurrentThread@SuspendResume@CoreApplicationProvider@@QEAA?AV12@XZ
    WindissectOpaque TransferToCurrentThread();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SuspendResume@CoreApplicationProvider@@QEAA@XZ
    ~SuspendResume();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SuspendResume@CoreApplicationProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SuspendResume@CoreApplicationProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CoreApplicationProvider
