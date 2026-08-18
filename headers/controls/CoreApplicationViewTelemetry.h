#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 17 member(s).
class CoreApplicationViewTelemetry {
public:
    class SetTitleBarVisual;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalledPsmUnblockAppStateChangeCompletion@CoreApplicationViewTelemetry@@SAXXZ
    static void CalledPsmUnblockAppStateChangeCompletion();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@CoreApplicationViewTelemetry@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnForwardLocalError_@CoreApplicationViewTelemetry@@QEAAXPEAUIRestrictedErrorInfo@@_N1@Z
    void OnForwardLocalError_(IRestrictedErrorInfo *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendCalledPsmBlockAppStateChangeCompletion@CoreApplicationViewTelemetry@@SAXXZ
    static void SuspendCalledPsmBlockAppStateChangeCompletion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendCallingUnblockPsmStateChangeIfSuspendPending@CoreApplicationViewTelemetry@@SAXXZ
    static void SuspendCallingUnblockPsmStateChangeIfSuspendPending();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendCompletionCallingUnblockPsmStateChangeIfSuspendPending@CoreApplicationViewTelemetry@@SAXXZ
    static void SuspendCompletionCallingUnblockPsmStateChangeIfSuspendPending();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendResumeCalledOnPostResuming@CoreApplicationViewTelemetry@@SAXXZ
    static void SuspendResumeCalledOnPostResuming();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendResumeCalledOnPreSuspendingCalled@CoreApplicationViewTelemetry@@SAXXZ
    static void SuspendResumeCalledOnPreSuspendingCalled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendResumeCalledPsmUnblockAppStateChangeCompletion@CoreApplicationViewTelemetry@@SAXXZ
    static void SuspendResumeCalledPsmUnblockAppStateChangeCompletion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendResumeCallingPsmWaitForAppResume@CoreApplicationViewTelemetry@@SAXXZ
    static void SuspendResumeCallingPsmWaitForAppResume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendResumeInvokedResumeHandles@CoreApplicationViewTelemetry@@SAXXZ
    static void SuspendResumeInvokedResumeHandles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendResumeInvokingResumeHandles@CoreApplicationViewTelemetry@@SAXXZ
    static void SuspendResumeInvokingResumeHandles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendResumePsmWaitForAppResumeReturned@CoreApplicationViewTelemetry@@SAXXZ
    static void SuspendResumePsmWaitForAppResumeReturned();
};
