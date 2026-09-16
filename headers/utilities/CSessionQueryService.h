#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
class CSessionQueryService {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryServiceForUser@CSessionQueryService@@UEAAJPEBGAEBU_GUID@@1PEAPEAX@Z
    virtual long QueryServiceForUser(unsigned short const *, _GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryServiceInSession@CSessionQueryService@@UEAAJKAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryServiceInSession(unsigned long, _GUID const &, _GUID const &, void * *);
};
