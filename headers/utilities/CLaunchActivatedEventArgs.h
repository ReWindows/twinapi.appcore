#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 84 member(s).
class CLaunchActivatedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLaunchActivatedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLaunchActivatedEventArgs@@QEAA@XZ
    CLaunchActivatedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CLaunchActivatedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CLaunchActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CLaunchActivatedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CLaunchActivatedEventArgs@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@CLaunchActivatedEventArgs@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalObjectToPropertySet@CLaunchActivatedEventArgs@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    virtual long MarshalObjectToPropertySet(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLaunchActivatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLaunchActivatedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CLaunchActivatedEventArgs@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Arguments@CLaunchActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Arguments(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileActivatedInfo@CLaunchActivatedEventArgs@@UEAAJPEAPEAUITileActivatedInfo@Activation@ApplicationModel@Windows@@@Z
    virtual long get_TileActivatedInfo(::Windows::ApplicationModel::Activation::ITileActivatedInfo * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileId@CLaunchActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TileId(HSTRING__* *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLaunchActivatedEventArgs@@EEAA@XZ
    virtual ~CLaunchActivatedEventArgs();
};
