#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 2 member(s).
class CMarshaledInterface {
public:
    class CMarshalStream;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z
    long Marshal(_GUID const &, IUnknown *, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z
    long _Unmarshal(_GUID const &, void * *, bool);
};
