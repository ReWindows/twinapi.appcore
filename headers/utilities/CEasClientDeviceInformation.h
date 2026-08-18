#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 34 member(s).
namespace Windows::Security::ExchangeActiveSyncProvisioning {
class CEasClientDeviceInformation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CEasClientDeviceInformation@ExchangeActiveSyncProvisioning@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEasClientDeviceInformation@ExchangeActiveSyncProvisioning@Security@Windows@@QEAA@XZ
    CEasClientDeviceInformation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CEasClientDeviceInformation@ExchangeActiveSyncProvisioning@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CEasClientDeviceInformation@ExchangeActiveSyncProvisioning@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CEasClientDeviceInformation@ExchangeActiveSyncProvisioning@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CEasClientDeviceInformation@ExchangeActiveSyncProvisioning@Security@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@CEasClientDeviceInformation@ExchangeActiveSyncProvisioning@Security@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CEasClientDeviceInformation@ExchangeActiveSyncProvisioning@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CEasClientDeviceInformation@ExchangeActiveSyncProvisioning@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FriendlyName@CEasClientDeviceInformation@ExchangeActiveSyncProvisioning@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_FriendlyName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@CEasClientDeviceInformation@ExchangeActiveSyncProvisioning@Security@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_Id(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OperatingSystem@CEasClientDeviceInformation@ExchangeActiveSyncProvisioning@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_OperatingSystem(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SystemFirmwareVersion@CEasClientDeviceInformation@ExchangeActiveSyncProvisioning@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SystemFirmwareVersion(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SystemHardwareVersion@CEasClientDeviceInformation@ExchangeActiveSyncProvisioning@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SystemHardwareVersion(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SystemManufacturer@CEasClientDeviceInformation@ExchangeActiveSyncProvisioning@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SystemManufacturer(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SystemProductName@CEasClientDeviceInformation@ExchangeActiveSyncProvisioning@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SystemProductName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SystemSku@CEasClientDeviceInformation@ExchangeActiveSyncProvisioning@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SystemSku(HSTRING__* *);
};
} // namespace Windows::Security::ExchangeActiveSyncProvisioning
