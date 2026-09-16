#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 9 member(s).
class CBackgroundTaskCapability {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckBackgroundCapabilityForApplication@CBackgroundTaskCapability@@UEAAJPEAXPEBGW4_BACKGROUND_TASK_CAPABILITY@@PEAH@Z
    virtual long CheckBackgroundCapabilityForApplication(void *, unsigned short const *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckBackgroundCapabilityForPackage@CBackgroundTaskCapability@@UEAAJPEBG0W4_BACKGROUND_TASK_CAPABILITY@@PEAH@Z
    virtual long CheckBackgroundCapabilityForPackage(unsigned short const *, unsigned short const *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckBackgroundCapabilityForProcess@CBackgroundTaskCapability@@UEAAJPEAXPEBGW4_BACKGROUND_TASK_CAPABILITY@@PEAH@Z
    virtual long CheckBackgroundCapabilityForProcess(void *, unsigned short const *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckBackgroundCapabilityForProcessToken@CBackgroundTaskCapability@@UEAAJPEAXW4_BACKGROUND_TASK_CAPABILITY@@PEAH@Z
    virtual long CheckBackgroundCapabilityForProcessToken(void *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckBackgroundCapabilityForUser@CBackgroundTaskCapability@@UEAAJPEBGPEAXW4_BACKGROUND_TASK_CAPABILITY@@PEAH@Z
    virtual long CheckBackgroundCapabilityForUser(unsigned short const *, void *, int, int *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetBackgroundTaskCapabilityInternal@CBackgroundTaskCapability@@AEAAJPEAXPEAPEAUIBackgroundTaskCapabilityInternal@@@Z
    long _GetBackgroundTaskCapabilityInternal(void *, IBackgroundTaskCapabilityInternal * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetServiceForSession@CBackgroundTaskCapability@@CAJKAEBU_GUID@@PEAPEAX@Z
    static long _GetServiceForSession(unsigned long, _GUID const &, void * *);
};
