#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 22 member(s).
class ComponentActivationPrivate {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@ComponentActivationPrivate@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ComponentActivationPrivate@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ComponentActivationPrivate@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ComponentActivationPrivate@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ComponentActivationPrivate@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@ComponentActivationPrivate@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@ComponentActivationPrivate@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?LaunchAsyncByContractWithArgsAsUser@ComponentActivationPrivate@@UEAAJPEAUHSTRING__@@00PEAUIInspectable@@11PEAUIPropertySet@Collections@Foundation@Windows@@_K1PEAPEAU?$IAsyncOperation@PEAUIInspectable@@@67@@Z
    virtual long LaunchAsyncByContractWithArgsAsUser(HSTRING__*, HSTRING__*, HSTRING__*, IInspectable *, IInspectable *, IInspectable *, WindissectOpaque *, uint64_t, IInspectable *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchComponent@ComponentActivationPrivate@@UEAAJ_KPEAUHSTRING__@@01PEAUIPropertySet@Collections@Foundation@Windows@@IPEAUPackageVersion@ApplicationModel@6@@Z
    virtual long LaunchComponent(uint64_t, HSTRING__*, uint64_t, HSTRING__*, WindissectOpaque *, unsigned int, ::Windows::ApplicationModel::PackageVersion *);
    // Category: Method | Source: PE Export
    // Symbol: ?LaunchHelper@ComponentActivationPrivate@@UEAAJPEAUHSTRING__@@0PEAUIInspectable@@I_KU_GUID@@PEAUIRestrictedAppContainer@Core@ApplicationModel@Windows@@KPEAEW4ComponentUIActivationType@Activation@78@W4ComponentUIComponentType@Activation@78@PEAPEAU3@@Z
    virtual long LaunchHelper(HSTRING__*, HSTRING__*, IInspectable *, unsigned int, uint64_t, _GUID, ::Windows::ApplicationModel::Core::IRestrictedAppContainer *, unsigned long, unsigned char *, int, int, IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ComponentActivationPrivate@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ComponentActivationPrivate@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetrieveComponentCoreApplication@ComponentActivationPrivate@@UEAAJIPEAPEAUIInspectable@@@Z
    virtual long RetrieveComponentCoreApplication(unsigned int, IInspectable * *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComponentVersion@ComponentActivationPrivate@@AEAAJKPEAUPackageVersion@ApplicationModel@Windows@@@Z
    long GetComponentVersion(unsigned long, ::Windows::ApplicationModel::PackageVersion *);
};
