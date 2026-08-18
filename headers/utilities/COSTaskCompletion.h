#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 11 member(s).
class COSTaskCompletion {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginTask@COSTaskCompletion@@UEAAJKW4PLM_TASKCOMPLETION_CATEGORY_FLAGS@@@Z
    virtual long BeginTask(unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginTaskByHandle@COSTaskCompletion@@UEAAJPEAXW4PLM_TASKCOMPLETION_CATEGORY_FLAGS@@@Z
    virtual long BeginTaskByHandle(void *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginTaskByHandleEx@COSTaskCompletion@@UEAAJPEAXW4PLM_TASKCOMPLETION_CATEGORY_FLAGS@@W4PLM_TASKCOMPLETION_BEGIN_TASK_FLAGS@@@Z
    virtual long BeginTaskByHandleEx(void *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndAllTasksAndWait@COSTaskCompletion@@UEAAJXZ
    virtual long EndAllTasksAndWait();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndTask@COSTaskCompletion@@UEAAJXZ
    virtual long EndTask();
    // Category: Method | Source: PE Export
    // Symbol: ?RegisterRevokedNotification@COSTaskCompletion@@UEAAJPEAUIOSTaskCompletionRevokedHandler@@@Z
    virtual long RegisterRevokedNotification(IOSTaskCompletionRevokedHandler *);
    // Category: Method | Source: PE Export
    // Symbol: ?UnRegisterRevokedNotification@COSTaskCompletion@@UEAAJPEAUIOSTaskCompletionRevokedHandler@@@Z
    virtual long UnRegisterRevokedNotification(IOSTaskCompletionRevokedHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateStreamedFileTaskCompletionUsage@COSTaskCompletion@@UEAAJPEAXK@Z
    virtual long ValidateStreamedFileTaskCompletionUsage(void *, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1COSTaskCompletion@@UEAA@XZ
    virtual ~COSTaskCompletion();
};
