#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 7 member(s).
class CWrlLightweightHandlerClientImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmarshalInterface@CWrlLightweightHandlerClientImpl@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z
    virtual long UnmarshalInterface(IStream *, _GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWrlLightweightHandlerClientImpl@@QEAA@XZ
    ~CWrlLightweightHandlerClientImpl();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?v_AlwaysUnmarshalAdditionalData@CWrlLightweightHandlerClientImpl@@MEBA_NXZ
    virtual bool v_AlwaysUnmarshalAdditionalData() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetAdditionalDataSizeMax@CWrlLightweightHandlerClientImpl@@MEAAJAEBU_GUID@@PEAXK1KPEAK@Z
    virtual long v_GetAdditionalDataSizeMax(_GUID const &, void *, unsigned long, void *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_MarshalAdditionalData@CWrlLightweightHandlerClientImpl@@MEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z
    virtual long v_MarshalAdditionalData(IStream *, _GUID const &, void *, unsigned long, void *, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?v_UnmarshalAdditionalData@CWrlLightweightHandlerClientImpl@@MEAAJPEAUIStream@@@Z
    virtual long v_UnmarshalAdditionalData(IStream *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetHandlerType@CWrlLightweightHandlerClientImpl@@EEAAKXZ
    virtual unsigned long v_GetHandlerType();
};
