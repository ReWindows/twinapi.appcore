#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 2 member(s).
class CBaseRPCTimeout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disarm@CBaseRPCTimeout@@QEAAXXZ
    void Disarm();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_Callback@CBaseRPCTimeout@@CAXPEAXE@Z
    static void s_Callback(void *, unsigned char);
};
