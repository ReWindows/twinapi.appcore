#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 1 member(s).
class ShellSession {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoCreateInstanceInSessionWithBindOpts@ShellSession@@YAJAEBU_GUID@@KPEAUtagBIND_OPTS@@0PEAPEAX@Z
    long CoCreateInstanceInSessionWithBindOpts(_GUID const &, unsigned long, tagBIND_OPTS *, _GUID const &, void * *);
};
