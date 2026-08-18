#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 23 member(s).
namespace Windows::Internal::Services::Cortana {
class CortanaPermissionsAppServiceManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CortanaPermissionsAppServiceManager@Cortana@Services@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CortanaPermissionsAppServiceManager@Cortana@Services@Internal@Windows@@QEAA@XZ
    CortanaPermissionsAppServiceManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CortanaPermissionsAppServiceManager@Cortana@Services@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPermissionsAsync@CortanaPermissionsAppServiceManager@Cortana@Services@Internal@Windows@@UEAAJPEAU?$IIterable@W4CortanaPermission@Cortana@Services@Windows@@@Collections@Foundation@5@PEAPEAU?$IAsyncOperation@_N@85@@Z
    virtual long GetPermissionsAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CortanaPermissionsAppServiceManager@Cortana@Services@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CortanaPermissionsAppServiceManager@Cortana@Services@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CortanaPermissionsAppServiceManager@Cortana@Services@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@CortanaPermissionsAppServiceManager@Cortana@Services@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupportedAsync@CortanaPermissionsAppServiceManager@Cortana@Services@Internal@Windows@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long IsSupportedAsync(WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CortanaPermissionsAppServiceManager@Cortana@Services@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CortanaPermissionsAppServiceManager@Cortana@Services@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPermissionsAsync@CortanaPermissionsAppServiceManager@Cortana@Services@Internal@Windows@@UEAAJPEAU?$IIterable@W4CortanaPermission@Cortana@Services@Windows@@@Collections@Foundation@5@EPEAPEAU?$IAsyncOperation@W4CortanaPermissionsChangeResult@Cortana@Services@Windows@@@85@@Z
    virtual long SetPermissionsAsync(WindissectOpaque *, unsigned char, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CortanaPermissionsAppServiceManager@Cortana@Services@Internal@Windows@@UEAA@XZ
    virtual ~CortanaPermissionsAppServiceManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertPermissionsToCapabilityFlags@CortanaPermissionsAppServiceManager@Cortana@Services@Internal@Windows@@AEAAJPEAU?$IIterable@W4CortanaPermission@Cortana@Services@Windows@@@Collections@Foundation@5@PEAW4CapabilityFlags@CortanaCapabilities@@@Z
    long ConvertPermissionsToCapabilityFlags(WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeAppService@CortanaPermissionsAppServiceManager@Cortana@Services@Internal@Windows@@AEAAJW4CapabilityFlags@CortanaCapabilities@@W4CortanaCapabilitiesAppServiceOperation@2345@PEAW4CortanaCapabilitiesAppServiceResponseStatus@2345@PEAJPEA_N@Z
    long InvokeAppService(int, int, int *, long *, bool *);
};
} // namespace Windows::Internal::Services::Cortana
