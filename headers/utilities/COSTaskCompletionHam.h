#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 15 member(s).
class COSTaskCompletionHam {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginTask@COSTaskCompletionHam@@QEAAJKW4PLM_TASKCOMPLETION_CATEGORY_FLAGS@@@Z
    long BeginTask(unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginTaskByHandle@COSTaskCompletionHam@@QEAAJPEAXW4PLM_TASKCOMPLETION_CATEGORY_FLAGS@@@Z
    long BeginTaskByHandle(void *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginTaskByHandleEx@COSTaskCompletionHam@@QEAAJPEAXW4PLM_TASKCOMPLETION_CATEGORY_FLAGS@@W4PLM_TASKCOMPLETION_BEGIN_TASK_FLAGS@@@Z
    long BeginTaskByHandleEx(void *, int, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0COSTaskCompletionHam@@QEAA@XZ
    COSTaskCompletionHam();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndTask@COSTaskCompletionHam@@QEAAJXZ
    long EndTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivityClosed@COSTaskCompletionHam@@QEAAX_K@Z
    void OnActivityClosed(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivityStarted@COSTaskCompletionHam@@QEAAX_K@Z
    void OnActivityStarted(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivityStopRequestedOrInvalidated@COSTaskCompletionHam@@QEAAX_KW4_HAM_ACTIVITY_CALLBACK_SUBJECT@@@Z
    void OnActivityStopRequestedOrInvalidated(uint64_t, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1COSTaskCompletionHam@@QEAA@XZ
    ~COSTaskCompletionHam();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginTaskByHandleInternal@COSTaskCompletionHam@@AEAAJPEAXW4PLM_TASKCOMPLETION_CATEGORY_FLAGS@@W4PLM_TASKCOMPLETION_BEGIN_TASK_FLAGS@@@Z
    long BeginTaskByHandleInternal(void *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndTaskInternal@COSTaskCompletionHam@@AEAAXW4TC_END_TASK_REASON@1@@Z
    void EndTaskInternal(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndTelemetryContext@COSTaskCompletionHam@@AEAAXW4TC_END_TASK_REASON@1@@Z
    void EndTelemetryContext(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProcessRundown@COSTaskCompletionHam@@AEAAXXZ
    void OnProcessRundown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessRundownCallback@COSTaskCompletionHam@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z
    static void ProcessRundownCallback(_TP_CALLBACK_INSTANCE *, void *, _TP_WAIT *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForStopped@COSTaskCompletionHam@@AEAAXXZ
    void WaitForStopped();
};
