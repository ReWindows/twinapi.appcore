#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 49 member(s).
class CProjectionManagerStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CProjectionManagerStatics@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CProjectionManagerStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CProjectionManagerStatics@@QEAA@XZ
    CProjectionManagerStatics();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceSelector@CProjectionManagerStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetDeviceSelector(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CProjectionManagerStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CProjectionManagerStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CProjectionManagerStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CProjectionManagerStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@CProjectionManagerStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CProjectionManagerStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CProjectionManagerStatics@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestStartProjectingAsync@CProjectionManagerStatics@@UEAAJHHURect@Foundation@Windows@@PEAPEAU?$IAsyncOperation@_N@34@@Z
    virtual long RequestStartProjectingAsync(int, int, WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestStartProjectingWithPlacementAsync@CProjectionManagerStatics@@UEAAJHHURect@Foundation@Windows@@W4Placement@Popups@UI@4@PEAPEAU?$IAsyncOperation@_N@34@@Z
    virtual long RequestStartProjectingWithPlacementAsync(int, int, WindissectOpaque, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CProjectionManagerStatics@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartProjectingAsync@CProjectionManagerStatics@@UEAAJHHPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long StartProjectingAsync(int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartProjectingWithDeviceInfoAsync@CProjectionManagerStatics@@UEAAJHHPEAUIDeviceInformation@Enumeration@Devices@Windows@@PEAPEAUIAsyncAction@Foundation@5@@Z
    virtual long StartProjectingWithDeviceInfoAsync(int, int, ::Windows::Devices::Enumeration::IDeviceInformation *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopProjectingAsync@CProjectionManagerStatics@@UEAAJHHPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long StopProjectingAsync(int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwapDisplaysForViewsAsync@CProjectionManagerStatics@@UEAAJHHPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long SwapDisplaysForViewsAsync(int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ProjectionDisplayAvailableChanged@CProjectionManagerStatics@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ProjectionDisplayAvailableChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProjectionDisplayAvailable@CProjectionManagerStatics@@UEAAJPEAE@Z
    virtual long get_ProjectionDisplayAvailable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ProjectionDisplayAvailableChanged@CProjectionManagerStatics@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ProjectionDisplayAvailableChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CProjectionManagerStatics@@UEAA@XZ
    virtual ~CProjectionManagerStatics();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProjectionDisplayAvailableChange@CProjectionManagerStatics@@AEAAX_N@Z
    void OnProjectionDisplayAvailableChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoAsyncProjectionTaskImpl@CProjectionManagerStatics@@AEAAJW4PROJECTION_TASK_TYPE@@PEAUHWND__@@1PEAUIDeviceInformation@Enumeration@Devices@Windows@@PEAPEAUIAsyncAction@Foundation@7@@Z
    long _DoAsyncProjectionTaskImpl(int, HWND__*, HWND__*, ::Windows::Devices::Enumeration::IDeviceInformation *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoAsyncProjectionTaskOneCoreImpl@CProjectionManagerStatics@@AEAAJW4PROJECTION_TASK_TYPE@@PEAUHWND__@@1PEAPEAUIAsyncAction@Foundation@Windows@@@Z
    long _DoAsyncProjectionTaskOneCoreImpl(int, HWND__*, HWND__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoAsyncStartProjectionUITaskImpl@CProjectionManagerStatics@@AEAAJPEAUHWND__@@0URect@Foundation@Windows@@W4Placement@Popups@UI@5@PEAPEAU?$IAsyncOperation@_N@45@@Z
    long _DoAsyncStartProjectionUITaskImpl(HWND__*, HWND__*, WindissectOpaque, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoProjectionTaskDesktopImpl@CProjectionManagerStatics@@AEAAJW4PROJECTION_TASK_TYPE@@PEAUHWND__@@1PEBG2@Z
    long _DoProjectionTaskDesktopImpl(int, HWND__*, HWND__*, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoProjectionTaskImpl@CProjectionManagerStatics@@AEAAJW4PROJECTION_TASK_TYPE@@PEAUHWND__@@1PEBG2@Z
    long _DoProjectionTaskImpl(int, HWND__*, HWND__*, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsComposableShellEnabled@CProjectionManagerStatics@@AEAA_NXZ
    bool _IsComposableShellEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsOneCore@CProjectionManagerStatics@@AEAA_NXZ
    bool _IsOneCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldUseAppGlomBroker@CProjectionManagerStatics@@AEAA_NXZ
    bool _ShouldUseAppGlomBroker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ProjectionDisplayAvailableWnfCallback@CProjectionManagerStatics@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z
    static long s_ProjectionDisplayAvailableWnfCallback(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long);
};
