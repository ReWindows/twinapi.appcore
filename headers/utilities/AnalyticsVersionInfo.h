#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 24 member(s).
namespace Windows::System::Profile {
class AnalyticsVersionInfo {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AnalyticsVersionInfo@Profile@System@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AnalyticsVersionInfo@Profile@System@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AnalyticsVersionInfo@Profile@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AnalyticsVersionInfo@Profile@System@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AnalyticsVersionInfo@Profile@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AnalyticsVersionInfo@Profile@System@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeviceFamily@AnalyticsVersionInfo@Profile@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DeviceFamily(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeviceFamilyVersion@AnalyticsVersionInfo@Profile@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DeviceFamilyVersion(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProductName@AnalyticsVersionInfo@Profile@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ProductName(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AnalyticsVersionInfo@Profile@System@Windows@@UEAA@XZ
    virtual ~AnalyticsVersionInfo();
};
} // namespace Windows::System::Profile
