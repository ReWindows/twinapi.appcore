#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 35 member(s).
namespace Windows::System::Profile {
class AnalyticsInfoStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AnalyticsInfoStatics@Profile@System@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AnalyticsInfoStatics@Profile@System@Windows@@QEAA@XZ
    AnalyticsInfoStatics();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AnalyticsInfoStatics@Profile@System@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AnalyticsInfoStatics@Profile@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemPropertiesAsync@AnalyticsInfoStatics@Profile@System@Windows@@UEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@PEAPEAU?$IAsyncOperation@PEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@74@@Z
    virtual long GetSystemPropertiesAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AnalyticsInfoStatics@Profile@System@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@AnalyticsInfoStatics@Profile@System@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@AnalyticsInfoStatics@Profile@System@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AnalyticsInfoStatics@Profile@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AnalyticsInfoStatics@Profile@System@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@AnalyticsInfoStatics@Profile@System@Windows@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeviceForm@AnalyticsInfoStatics@Profile@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DeviceForm(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VersionInfo@AnalyticsInfoStatics@Profile@System@Windows@@UEAAJPEAPEAUIAnalyticsVersionInfo@234@@Z
    virtual long get_VersionInfo(::Windows::System::Profile::IAnalyticsVersionInfo * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AnalyticsInfoStatics@Profile@System@Windows@@UEAA@XZ
    virtual ~AnalyticsInfoStatics();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryDeviceFamilyAndDeviceForm@AnalyticsInfoStatics@Profile@System@Windows@@CAJPEAPEAUHSTRING__@@0@Z
    static long QueryDeviceFamilyAndDeviceForm(HSTRING__* *, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryDeviceFamilyVersion@AnalyticsInfoStatics@Profile@System@Windows@@CAJPEAPEAUHSTRING__@@@Z
    static long QueryDeviceFamilyVersion(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryProductName@AnalyticsInfoStatics@Profile@System@Windows@@CAJPEAPEAUHSTRING__@@@Z
    static long QueryProductName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSystemProperties@AnalyticsInfoStatics@Profile@System@Windows@@CAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@PEAPEAU?$IMapView@PEAUHSTRING__@@PEAU1@@674@@Z
    static long _GetSystemProperties(WindissectOpaque *, WindissectOpaque * *);
};
} // namespace Windows::System::Profile
