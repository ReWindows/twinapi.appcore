#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 3 member(s).
namespace RoVariant {
class Accessor {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z
    long GetString(HSTRING__* *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUInt32@Accessor@RoVariant@@QEBAJPEAI@Z
    long GetUInt32(unsigned int *) const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyPV@Accessor@RoVariant@@AEBAJXZ
    long VerifyPV() const;
};
} // namespace RoVariant
