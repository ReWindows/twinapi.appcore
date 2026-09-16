#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 20 member(s).
namespace Windows::Services::Cortana {
class CortanaPermissionsManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CortanaPermissionsManager@Cortana@Services@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArePermissionsGrantedAsync@CortanaPermissionsManager@Cortana@Services@Windows@@UEAAJPEAU?$IIterable@W4CortanaPermission@Cortana@Services@Windows@@@Collections@Foundation@4@PEAPEAU?$IAsyncOperation@_N@74@@Z
    virtual long ArePermissionsGrantedAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CortanaPermissionsManager@Cortana@Services@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CortanaPermissionsManager@Cortana@Services@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CortanaPermissionsManager@Cortana@Services@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GrantPermissionsAsync@CortanaPermissionsManager@Cortana@Services@Windows@@UEAAJPEAU?$IIterable@W4CortanaPermission@Cortana@Services@Windows@@@Collections@Foundation@4@PEAPEAU?$IAsyncOperation@W4CortanaPermissionsChangeResult@Cortana@Services@Windows@@@74@@Z
    virtual long GrantPermissionsAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CortanaPermissionsManager@Cortana@Services@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@CortanaPermissionsManager@Cortana@Services@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupported@CortanaPermissionsManager@Cortana@Services@Windows@@UEAAJPEAE@Z
    virtual long IsSupported(unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CortanaPermissionsManager@Cortana@Services@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CortanaPermissionsManager@Cortana@Services@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RevokePermissionsAsync@CortanaPermissionsManager@Cortana@Services@Windows@@UEAAJPEAU?$IIterable@W4CortanaPermission@Cortana@Services@Windows@@@Collections@Foundation@4@PEAPEAU?$IAsyncOperation@W4CortanaPermissionsChangeResult@Cortana@Services@Windows@@@74@@Z
    virtual long RevokePermissionsAsync(WindissectOpaque *, WindissectOpaque * *);
};
} // namespace Windows::Services::Cortana
