#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 10 member(s).
class CPlmSuspendControl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPendingResumeEvent@CPlmSuspendControl@@UEAAJPEAPEAX@Z
    virtual long GetPendingResumeEvent(void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSuspendTimeoutTime@CPlmSuspendControl@@UEAAJPEAHPEAU_FILETIME@@@Z
    virtual long GetSuspendTimeoutTime(int *, _FILETIME *);
    // Category: Method | Source: PE Export
    // Symbol: ?RequestNetwork@CPlmSuspendControl@@UEAAJH@Z
    virtual long RequestNetwork(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSuspendTimeout@CPlmSuspendControl@@UEAAJKPEAK@Z
    virtual long RequestSuspendTimeout(unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNextApplicationExecutionState@CPlmSuspendControl@@UEAAJK@Z
    virtual long SetNextApplicationExecutionState(unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DummyCallback@CPlmSuspendControl@@CAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z
    static void DummyCallback(_HAM_ACTIVITY_CALLBACK_PAYLOAD *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeHamConnection@CPlmSuspendControl@@AEAAJXZ
    long _InitializeHamConnection();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPlmSuspendControl@@EEAA@XZ
    virtual ~CPlmSuspendControl();
};
