#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 6 member(s).
class DisplayPickerHelperTelemetry {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@DisplayPickerHelperTelemetry@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceDbgMsg_@DisplayPickerHelperTelemetry@@QEAAXPEBGZZ
    void TraceDbgMsg_(unsigned short const *, ...);
};
