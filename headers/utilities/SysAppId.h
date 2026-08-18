#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 2 member(s).
namespace ARI::ProcessToken {
class SysAppId {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@PEA_N@Z
    long Open(void *, _TOKEN_SECURITY_ATTRIBUTES_INFORMATION * *, _TOKEN_SECURITY_ATTRIBUTE_V1const * *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenTokenForProcess@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAX@Z
    long OpenTokenForProcess(void *, void * *);
};
} // namespace ARI::ProcessToken
