#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 87 member(s).
class CProtocolActivatedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CProtocolActivatedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CProtocolActivatedEventArgs@@QEAA@XZ
    CProtocolActivatedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CProtocolActivatedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CProtocolActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CProtocolActivatedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CProtocolActivatedEventArgs@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@CProtocolActivatedEventArgs@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalObjectToPropertySet@CProtocolActivatedEventArgs@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    virtual long MarshalObjectToPropertySet(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CProtocolActivatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CProtocolActivatedEventArgs@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CProtocolActivatedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CProtocolActivatedEventArgs@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CallerPackageFamilyName@CProtocolActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_CallerPackageFamilyName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Data@CProtocolActivatedEventArgs@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    virtual long get_Data(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Uri@CProtocolActivatedEventArgs@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long get_Uri(WindissectOpaque * *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CProtocolActivatedEventArgs@@EEAA@XZ
    virtual ~CProtocolActivatedEventArgs();
};
