#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 21 member(s).
class RestrictedComponentStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@RestrictedComponentStatics@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@RestrictedComponentStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@RestrictedComponentStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@RestrictedComponentStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@RestrictedComponentStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@RestrictedComponentStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@RestrictedComponentStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchAsync@RestrictedComponentStatics@@UEAAJPEAUIRestrictedAppContainer@Core@ApplicationModel@Windows@@KPEAEPEAUHSTRING__@@2PEAUIInspectable@@PEAUIComponentSite@Private@Foundation@5@U_GUID@@PEAUIPropertySet@Collections@Foundation@5@PEAPEAU?$IAsyncOperation@PEAVComponentActivationResultPrivate@Activation@ApplicationModel@Windows@@@Foundation@5@@Z
    virtual long LaunchAsync(::Windows::ApplicationModel::Core::IRestrictedAppContainer *, unsigned long, unsigned char *, HSTRING__*, HSTRING__*, IInspectable *, WindissectOpaque *, _GUID, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchAsyncWithActivationType@RestrictedComponentStatics@@UEAAJPEAUIRestrictedAppContainer@Core@ApplicationModel@Windows@@KPEAEPEAUHSTRING__@@PEAUIInspectable@@PEAUIComponentSite@Private@Foundation@5@U_GUID@@PEAUIPropertySet@Collections@Foundation@5@W4ComponentUIActivationType@Activation@45@PEAPEAU?$IAsyncOperation@PEAVComponentActivationResultPrivate@Activation@ApplicationModel@Windows@@@Foundation@5@@Z
    virtual long LaunchAsyncWithActivationType(::Windows::ApplicationModel::Core::IRestrictedAppContainer *, unsigned long, unsigned char *, HSTRING__*, IInspectable *, WindissectOpaque *, _GUID, WindissectOpaque *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchDisconnectedAsync@RestrictedComponentStatics@@UEAAJPEAUIRestrictedAppContainer@Core@ApplicationModel@Windows@@KPEAEPEAUHSTRING__@@2PEAUIInspectable@@PEAUIComponentSite@Private@Foundation@5@U_GUID@@PEAUIPropertySet@Collections@Foundation@5@PEAPEAU?$IAsyncOperation@PEAVComponentActivationResultPrivate@Activation@ApplicationModel@Windows@@@Foundation@5@@Z
    virtual long LaunchDisconnectedAsync(::Windows::ApplicationModel::Core::IRestrictedAppContainer *, unsigned long, unsigned char *, HSTRING__*, HSTRING__*, IInspectable *, WindissectOpaque *, _GUID, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchDisconnectedAsyncWithActivationType@RestrictedComponentStatics@@UEAAJPEAUIRestrictedAppContainer@Core@ApplicationModel@Windows@@KPEAEPEAUHSTRING__@@PEAUIInspectable@@U_GUID@@PEAUIPropertySet@Collections@Foundation@5@W4ComponentUIActivationType@Activation@45@PEAPEAU?$IAsyncOperation@PEAVComponentActivationResultPrivate@Activation@ApplicationModel@Windows@@@Foundation@5@@Z
    virtual long LaunchDisconnectedAsyncWithActivationType(::Windows::ApplicationModel::Core::IRestrictedAppContainer *, unsigned long, unsigned char *, HSTRING__*, IInspectable *, _GUID, WindissectOpaque *, int, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@RestrictedComponentStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@RestrictedComponentStatics@@UEAAKXZ
    virtual unsigned long Release();
};
