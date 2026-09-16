#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 18 member(s).
class ComponentActivationResultImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ComponentActivationResultImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ComponentActivationResultImpl@@QEAA@XZ
    ComponentActivationResultImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ComponentActivationResultImpl@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ComponentActivationResultImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ComponentActivationResultImpl@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ComponentActivationResultImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ComponentActivationResultImpl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ConnectCookie@ComponentActivationResultImpl@@UEAAJPEAI@Z
    virtual long get_ConnectCookie(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ObjectModel@ComponentActivationResultImpl@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_ObjectModel(IInspectable * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ComponentActivationResultImpl@@UEAA@XZ
    virtual ~ComponentActivationResultImpl();
};
