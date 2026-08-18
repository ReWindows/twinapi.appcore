#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 8 member(s).
class TraceLoggingCorrelationVector {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Extend@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z
    static TraceLoggingCorrelationVector * Extend(char const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Increment@TraceLoggingCorrelationVector@@QEAA_NPEAD@Z
    bool Increment(char *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z
    TraceLoggingCorrelationVector(TraceLoggingCorrelationVectorV2_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TraceLoggingCorrelationVector@@QEAA@XZ
    TraceLoggingCorrelationVector();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncrementImpl@TraceLoggingCorrelationVector@@AEAA_KXZ
    uint64_t IncrementImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z
    bool ToStringImpl(uint64_t, char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateImpl@TraceLoggingCorrelationVector@@CA?AW4CvVersion@1@PEBD_N@Z
    static int ValidateImpl(char const *, bool);
};
