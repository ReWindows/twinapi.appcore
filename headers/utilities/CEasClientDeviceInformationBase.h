#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 6 member(s).
namespace Windows::Security::ExchangeActiveSyncProvisioning {
class CEasClientDeviceInformationBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FriendlyName@CEasClientDeviceInformationBase@ExchangeActiveSyncProvisioning@Security@Windows@@UEAAJQEAG@Z
    virtual long get_FriendlyName(unsigned short * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@CEasClientDeviceInformationBase@ExchangeActiveSyncProvisioning@Security@Windows@@UEAAJPEAGPEAU_GUID@@@Z
    virtual long get_Id(unsigned short *, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OperatingSystem@CEasClientDeviceInformationBase@ExchangeActiveSyncProvisioning@Security@Windows@@UEAAJQEAG@Z
    virtual long get_OperatingSystem(unsigned short * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SystemManufacturer@CEasClientDeviceInformationBase@ExchangeActiveSyncProvisioning@Security@Windows@@UEAAJQEAG@Z
    virtual long get_SystemManufacturer(unsigned short * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SystemProductName@CEasClientDeviceInformationBase@ExchangeActiveSyncProvisioning@Security@Windows@@UEAAJQEAG@Z
    virtual long get_SystemProductName(unsigned short * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SystemSku@CEasClientDeviceInformationBase@ExchangeActiveSyncProvisioning@Security@Windows@@UEAAJQEAG@Z
    virtual long get_SystemSku(unsigned short * const);
};
} // namespace Windows::Security::ExchangeActiveSyncProvisioning
