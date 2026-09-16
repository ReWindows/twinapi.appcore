#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 31 member(s).
class ComponentStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@ComponentStatics@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ComponentStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectAsync@ComponentStatics@@UEAAJPEAUIComponentSite@Private@Foundation@Windows@@IPEAUIInspectable@@1PEAPEAUIAsyncAction@45@@Z
    virtual long ConnectAsync(WindissectOpaque *, unsigned int, IInspectable *, IInspectable *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectAsync2@ComponentStatics@@UEAAJPEAUIComponentSite@Private@Foundation@Windows@@UWindowId@WindowManagement@ApplicationModel@Internal@5@PEAUIInspectable@@2PEAPEAUIAsyncAction@45@@Z
    virtual long ConnectAsync2(WindissectOpaque *, WindissectOpaque, IInspectable *, IInspectable *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ComponentStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ComponentStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ComponentStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@ComponentStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@ComponentStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchAsync@ComponentStatics@@UEAAJPEAUHSTRING__@@0PEAUIInspectable@@PEAUIComponentSite@Private@Foundation@Windows@@PEAUIPropertySet@Collections@67@PEAPEAU?$IAsyncOperation@PEAVComponentActivationResultPrivate@Activation@ApplicationModel@Windows@@@67@@Z
    virtual long LaunchAsync(HSTRING__*, HSTRING__*, IInspectable *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchAsyncByContractWithArgsAsUser@ComponentStatics@@UEAAJPEAUHSTRING__@@00PEAUIInspectable@@1PEAUIComponentSite@Private@Foundation@Windows@@PEAUIPropertySet@Collections@67@_KPEAPEAU?$IAsyncOperation@PEAVComponentActivationResultPrivate@Activation@ApplicationModel@Windows@@@67@@Z
    virtual long LaunchAsyncByContractWithArgsAsUser(HSTRING__*, HSTRING__*, HSTRING__*, IInspectable *, IInspectable *, WindissectOpaque *, WindissectOpaque *, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchAsyncWithActivationType@ComponentStatics@@UEAAJPEAUHSTRING__@@PEAUIInspectable@@PEAUIComponentSite@Private@Foundation@Windows@@PEAUIPropertySet@Collections@67@W4ComponentUIActivationType@Activation@ApplicationModel@7@PEAPEAU?$IAsyncOperation@PEAVComponentActivationResultPrivate@Activation@ApplicationModel@Windows@@@67@@Z
    virtual long LaunchAsyncWithActivationType(HSTRING__*, IInspectable *, WindissectOpaque *, WindissectOpaque *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchComponentUI@ComponentStatics@@UEAAJPEAUIInspectable@@00PEAUHSTRING__@@0@Z
    virtual long LaunchComponentUI(IInspectable *, IInspectable *, IInspectable *, HSTRING__*, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchDisconnectedAsync@ComponentStatics@@UEAAJPEAUHSTRING__@@0PEAUIInspectable@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAVComponentActivationResultPrivate@Activation@ApplicationModel@Windows@@@67@@Z
    virtual long LaunchDisconnectedAsync(HSTRING__*, HSTRING__*, IInspectable *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchDisconnectedAsyncWithActivationType@ComponentStatics@@UEAAJPEAUHSTRING__@@PEAUIInspectable@@PEAUIPropertySet@Collections@Foundation@Windows@@W4ComponentUIActivationType@Activation@ApplicationModel@7@PEAPEAU?$IAsyncOperation@PEAVComponentActivationResultPrivate@Activation@ApplicationModel@Windows@@@67@@Z
    virtual long LaunchDisconnectedAsyncWithActivationType(HSTRING__*, IInspectable *, WindissectOpaque *, int, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ComponentStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ComponentStatics@@UEAAKXZ
    virtual unsigned long Release();
};
