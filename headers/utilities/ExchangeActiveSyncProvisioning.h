#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 2 member(s).
namespace Windows::Security {
class ExchangeActiveSyncProvisioning {
public:
    class CEasClientDeviceInformation;
    class CEasClientDeviceInformationBase;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetToken@ExchangeActiveSyncProvisioning@Security@Windows@@YAJKPEAPEAX@Z
    long GetToken(unsigned long, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTokenUser@ExchangeActiveSyncProvisioning@Security@Windows@@YAJPEAPEAU_TOKEN_USER@@@Z
    long GetTokenUser(_TOKEN_USER * *);
};
} // namespace Windows::Security
