#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
class CShareBrokeredTask {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompletionData@CShareBrokeredTask@@UEAAJPEAU_GUID@@PEAPEAEPEAI@Z
    virtual long GetCompletionData(_GUID *, unsigned char * *, unsigned int *);
    // Category: Method | Source: PE Export
    // Symbol: ?WakeUp@CShareBrokeredTask@@UEAAJXZ
    virtual long WakeUp();
};
