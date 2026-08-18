#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 11 member(s).
class CWrlLightweightHandlerBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWrlLightweightHandlerBase@@QEAA@XZ
    CWrlLightweightHandlerBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectObject@CWrlLightweightHandlerBase@@UEAAJK@Z
    virtual long DisconnectObject(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMarshalSizeMax@CWrlLightweightHandlerBase@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z
    virtual long GetMarshalSizeMax(_GUID const &, void *, unsigned long, void *, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnmarshalClass@CWrlLightweightHandlerBase@@UEAAJAEBU_GUID@@PEAXK1KPEAU2@@Z
    virtual long GetUnmarshalClass(_GUID const &, void *, unsigned long, void *, unsigned long, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z
    virtual long MarshalInterface(IStream *, _GUID const &, void *, unsigned long, void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseMarshalData@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@@Z
    virtual long ReleaseMarshalData(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z
    virtual long UnmarshalInterface(IStream *, _GUID const &, void * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z
    long _GetStdMarshaler(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetAdditionalDataSizeMax@CWrlLightweightHandlerBase@@MEAAJAEBU_GUID@@PEAXK1KPEAK@Z
    virtual long v_GetAdditionalDataSizeMax(_GUID const &, void *, unsigned long, void *, unsigned long, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?v_MarshalAdditionalData@CWrlLightweightHandlerBase@@MEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z
    virtual long v_MarshalAdditionalData(IStream *, _GUID const &, void *, unsigned long, void *, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?v_OnAggregatedUnknownCreated@CWrlLightweightHandlerBase@@MEAAXXZ
    virtual void v_OnAggregatedUnknownCreated();
};
