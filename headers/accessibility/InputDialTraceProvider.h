#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace InputDial {
class InputDialTraceProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Info@InputDialTraceProvider@InputDial@@SAXPEBD0I0ZZ
    static void Info(char const *, char const *, unsigned int, char const *, ...);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InfoV_@InputDialTraceProvider@InputDial@@QEAAXPEBD0I0PEAD@Z
    void InfoV_(char const *, char const *, unsigned int, char const *, char *);
};
} // namespace InputDial
