#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 17 member(s).
class CallerIdentity {
public:
    class ApiPolicyChecker;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppIdFromProcessId@CallerIdentity@@YAJKPEAPEAG@Z
    long GetAppIdFromProcessId(unsigned long, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z
    long GetCallingProcessAppId(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z
    long GetCallingProcessHandle(unsigned long, int, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessHandle@CallerIdentity@@YAJKPEAPEAX@Z
    long GetCallingProcessHandle(unsigned long, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessPackageFamilyName@CallerIdentity@@YAJPEAPEAG@Z
    long GetCallingProcessPackageFamilyName(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindowForCurrentThread@CallerIdentity@@YAJAEBU_GUID@@PEAPEAX@Z
    long GetCoreWindowForCurrentThread(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindowHandleForCurrentThread@CallerIdentity@@YAJPEAPEAUHWND__@@@Z
    long GetCoreWindowHandleForCurrentThread(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFamilyNameFromProcess@CallerIdentity@@YAJPEAXPEAPEAG@Z
    long GetPackageFamilyNameFromProcess(void *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageSidFromProcessToken@CallerIdentity@@YAJPEAXPEAPEAX@Z
    long GetPackageSidFromProcessToken(void *, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z
    long GetProcessAppId(void *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPsmKeyFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAG@Z
    long GetPsmKeyFromProcessHandle(void *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPsmKeyFromProcessId@CallerIdentity@@YAJKPEAPEAG@Z
    long GetPsmKeyFromProcessId(unsigned long, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPsmKeyFromProcessToken@CallerIdentity@@YAJPEAXPEAPEAG@Z
    long GetPsmKeyFromProcessToken(void *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHostedWindow@CallerIdentity@@YAJPEAUHWND__@@PEAH@Z
    long IsHostedWindow(HWND__*, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInLegacyDesignMode@CallerIdentity@@YA_NXZ
    bool IsInLegacyDesignMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInV2DesignMode@CallerIdentity@@YA_NXZ
    bool IsInV2DesignMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureRuntimeBrokerPID@CallerIdentity@@YAXXZ
    void _EnsureRuntimeBrokerPID();
};
