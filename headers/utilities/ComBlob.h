#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 3 member(s).
class ComBlob {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBlob@ComBlob@@YAJKPEAEPEAPEAUtagBLOB@@@Z
    long CreateBlob(unsigned long, unsigned char *, tagBLOB * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteBlob@ComBlob@@YAXPEAUtagBLOB@@@Z
    void DeleteBlob(tagBLOB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DuplicateBlob@ComBlob@@YAJPEAUtagBLOB@@PEAPEAU2@@Z
    long DuplicateBlob(tagBLOB *, tagBLOB * *);
};
