#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 22 member(s).
class ComponentStatics2 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@ComponentStatics2@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ComponentStatics2@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectAsync@ComponentStatics2@@UEAAJPEAUIComponentSite@Private@Foundation@Windows@@IPEAUIInspectable@@1PEAPEAUIAsyncAction@45@@Z
    virtual long ConnectAsync(WindissectOpaque *, unsigned int, IInspectable *, IInspectable *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ComponentStatics2@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ComponentStatics2@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ComponentStatics2@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@ComponentStatics2@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@ComponentStatics2@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchAsync@ComponentStatics2@@UEAAJPEAUHSTRING__@@0PEAUIInspectable@@PEAUIComponentSite@Private@Foundation@Windows@@PEAUIPropertySet@Collections@67@_KW4ComponentUIComponentType@Activation@ApplicationModel@7@PEAPEAU?$IAsyncOperation@PEAVComponentActivationResultPrivate@Activation@ApplicationModel@Windows@@@67@@Z
    virtual long LaunchAsync(HSTRING__*, HSTRING__*, IInspectable *, WindissectOpaque *, WindissectOpaque *, uint64_t, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchAsyncRestricted@ComponentStatics2@@UEAAJPEAUIRestrictedAppContainer@Core@ApplicationModel@Windows@@KPEAEPEAUHSTRING__@@2PEAUIInspectable@@PEAUIComponentSite@Private@Foundation@5@U_GUID@@PEAUIPropertySet@Collections@Foundation@5@W4ComponentUIComponentType@Activation@45@PEAPEAU?$IAsyncOperation@PEAVComponentActivationResultPrivate@Activation@ApplicationModel@Windows@@@Foundation@5@@Z
    virtual long LaunchAsyncRestricted(::Windows::ApplicationModel::Core::IRestrictedAppContainer *, unsigned long, unsigned char *, HSTRING__*, HSTRING__*, IInspectable *, WindissectOpaque *, _GUID, WindissectOpaque *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchAsyncRestrictedWithActivationType@ComponentStatics2@@UEAAJPEAUIRestrictedAppContainer@Core@ApplicationModel@Windows@@KPEAEPEAUHSTRING__@@PEAUIInspectable@@PEAUIComponentSite@Private@Foundation@5@U_GUID@@PEAUIPropertySet@Collections@Foundation@5@W4ComponentUIActivationType@Activation@45@W4ComponentUIComponentType@Activation@45@PEAPEAU?$IAsyncOperation@PEAVComponentActivationResultPrivate@Activation@ApplicationModel@Windows@@@Foundation@5@@Z
    virtual long LaunchAsyncRestrictedWithActivationType(::Windows::ApplicationModel::Core::IRestrictedAppContainer *, unsigned long, unsigned char *, HSTRING__*, IInspectable *, WindissectOpaque *, _GUID, WindissectOpaque *, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchAsyncWithActivationType@ComponentStatics2@@UEAAJPEAUHSTRING__@@PEAUIInspectable@@PEAUIComponentSite@Private@Foundation@Windows@@PEAUIPropertySet@Collections@67@W4ComponentUIActivationType@Activation@ApplicationModel@7@W4ComponentUIComponentType@Activation@ApplicationModel@7@PEAPEAU?$IAsyncOperation@PEAVComponentActivationResultPrivate@Activation@ApplicationModel@Windows@@@67@@Z
    virtual long LaunchAsyncWithActivationType(HSTRING__*, IInspectable *, WindissectOpaque *, WindissectOpaque *, int, int, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ComponentStatics2@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ComponentStatics2@@UEAAKXZ
    virtual unsigned long Release();
};
