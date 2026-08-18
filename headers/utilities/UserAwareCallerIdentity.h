#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
class UserAwareCallerIdentity {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppIdFromProcessId@UserAwareCallerIdentity@@YAJKPEAPEAG@Z
    long GetAppIdFromProcessId(unsigned long, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessAppId@UserAwareCallerIdentity@@YAJPEAPEAG@Z
    long GetCallingProcessAppId(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessHandle@UserAwareCallerIdentity@@YAJKPEAPEAX@Z
    long GetCallingProcessHandle(unsigned long, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessId@UserAwareCallerIdentity@@YAJPEAK@Z
    long GetCallingProcessId(unsigned long *);
};
