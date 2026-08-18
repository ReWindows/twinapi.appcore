#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 39 member(s).
class CPackageDebugSettings {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateBackgroundTask@CPackageDebugSettings@@UEAAJPEBU_GUID@@@Z
    virtual long ActivateBackgroundTask(_GUID const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPackageDebugSettings@@QEAA@XZ
    CPackageDebugSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableDebugging@CPackageDebugSettings@@UEAAJPEBG@Z
    virtual long DisableDebugging(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableDebugging@CPackageDebugSettings@@UEAAJPEBG0PEAG@Z
    virtual long EnableDebugging(unsigned short const *, unsigned short const *, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumerateApps@CPackageDebugSettings@@UEAAJPEBGPEAKPEAPEAPEAG2@Z
    virtual long EnumerateApps(unsigned short const *, unsigned long *, unsigned short * * *, unsigned short * * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumerateBackgroundTasks@CPackageDebugSettings@@UEAAJPEBGPEAKPEAPEBU_GUID@@PEAPEAPEBG@Z
    virtual long EnumerateBackgroundTasks(unsigned short const *, unsigned long *, _GUID const * *, unsigned short const * * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageExecutionState@CPackageDebugSettings@@UEAAJPEBGPEAW4PACKAGE_EXECUTION_STATE@@@Z
    virtual long GetPackageExecutionState(unsigned short const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForPackageStateChanges@CPackageDebugSettings@@UEAAJPEBGPEAUIPackageExecutionStateChangeNotification@@PEAK@Z
    virtual long RegisterForPackageStateChanges(unsigned short const *, IPackageExecutionStateChangeNotification *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resume@CPackageDebugSettings@@UEAAJPEBG@Z
    virtual long Resume(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTargetSessionId@CPackageDebugSettings@@UEAAJK@Z
    virtual long SetTargetSessionId(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartServicing@CPackageDebugSettings@@UEAAJPEBG@Z
    virtual long StartServicing(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartSessionRedirection@CPackageDebugSettings@@UEAAJPEBGK@Z
    virtual long StartSessionRedirection(unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopServicing@CPackageDebugSettings@@UEAAJPEBG@Z
    virtual long StopServicing(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopSessionRedirection@CPackageDebugSettings@@UEAAJPEBG@Z
    virtual long StopSessionRedirection(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Suspend@CPackageDebugSettings@@UEAAJPEBG@Z
    virtual long Suspend(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TerminateAllProcesses@CPackageDebugSettings@@UEAAJPEBG@Z
    virtual long TerminateAllProcesses(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForPackageStateChanges@CPackageDebugSettings@@UEAAJK@Z
    virtual long UnregisterForPackageStateChanges(unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureDebugControlCreatedAndRegisteredInGIT@CPackageDebugSettings@@AEAAJXZ
    long _EnsureDebugControlCreatedAndRegisteredInGIT();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetBrokerFromShellServiceHost@CPackageDebugSettings@@CAJKAEBU_GUID@@PEAPEAX@Z
    static long _GetBrokerFromShellServiceHost(unsigned long, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetInternalDebugControl@CPackageDebugSettings@@AEAAJPEAPEAUIImmersiveApplicationDebugControlInternal@@@Z
    long _GetInternalDebugControl(IImmersiveApplicationDebugControlInternal * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveObjectsFromGIT@CPackageDebugSettings@@AEAAXXZ
    void _RemoveObjectsFromGIT();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPackageDebugSettings@@EEAA@XZ
    virtual ~CPackageDebugSettings();
};
