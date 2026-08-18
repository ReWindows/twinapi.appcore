#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 5 member(s).
class CAsyncCallback {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CAsyncCallback@@UEAAJJ@Z
    virtual long Invoke(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForCompletion@CAsyncCallback@@QEAAJ$$QEA_K@Z
    long WaitForCompletion(uint64_t &&);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAsyncCallback@@UEAA@XZ
    virtual ~CAsyncCallback();
};
