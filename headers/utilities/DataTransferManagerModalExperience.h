#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
class DataTransferManagerModalExperience {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeAsync@DataTransferManagerModalExperience@@UEAAJPEBXIPEAXP6AJ10IH@Z@Z
    virtual long InvokeAsync(void const *, unsigned int, void *, long ( *)(void *, void const *, unsigned int, int));
    // Category: Method | Source: PE Export
    // Symbol: ?RequestCancel@DataTransferManagerModalExperience@@UEAAJXZ
    virtual long RequestCancel();
};
