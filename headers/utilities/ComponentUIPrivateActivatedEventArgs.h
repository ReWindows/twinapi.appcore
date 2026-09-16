#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 70 member(s).
class ComponentUIPrivateActivatedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ComponentUIPrivateActivatedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ComponentUIPrivateActivatedEventArgs@@QEAA@XZ
    ComponentUIPrivateActivatedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ComponentUIPrivateActivatedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ComponentUIPrivateActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ComponentUIPrivateActivatedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@ComponentUIPrivateActivatedEventArgs@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@ComponentUIPrivateActivatedEventArgs@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalObjectToPropertySet@ComponentUIPrivateActivatedEventArgs@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    virtual long MarshalObjectToPropertySet(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ComponentUIPrivateActivatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ComponentUIPrivateActivatedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ComponentUIPrivateActivatedEventArgs@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ComponentUIPrivateActivatedEventArgs@@QEAAJU_GUID@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUHSTRING__@@@Z
    long RuntimeClassInitialize(_GUID, WindissectOpaque *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActivationArgs@ComponentUIPrivateActivatedEventArgs@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    virtual long get_ActivationArgs(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ComponentSiteId@ComponentUIPrivateActivatedEventArgs@@UEAAJPEAU_GUID@@@Z
    virtual long get_ComponentSiteId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ObjectModelAcid@ComponentUIPrivateActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ObjectModelAcid(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ObjectModelAcidPrivate@ComponentUIPrivateActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ObjectModelAcidPrivate(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PrelaunchActivated@ComponentUIPrivateActivatedEventArgs@@UEAAJPEAE@Z
    virtual long get_PrelaunchActivated(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ComponentSiteId@ComponentUIPrivateActivatedEventArgs@@UEAAJU_GUID@@@Z
    virtual long put_ComponentSiteId(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ObjectModelAcidPrivate@ComponentUIPrivateActivatedEventArgs@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_ObjectModelAcidPrivate(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ComponentUIPrivateActivatedEventArgs@@UEAA@XZ
    virtual ~ComponentUIPrivateActivatedEventArgs();
};
