#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 2 member(s).
class CWrlLightweightHandlerServer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassForHandler@CWrlLightweightHandlerServer@@UEAAJKPEAXPEAU_GUID@@@Z
    virtual long GetClassForHandler(unsigned long, void *, _GUID *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetHandlerType@CWrlLightweightHandlerServer@@EEAAKXZ
    virtual unsigned long v_GetHandlerType();
};
