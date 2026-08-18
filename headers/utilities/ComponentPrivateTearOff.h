#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 15 member(s).
namespace Windows::ApplicationModel::Core {
class ComponentPrivateTearOff {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateSpecific@ComponentPrivateTearOff@Core@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@U_GUID@@PEAPEAUIInspectable@@@Z
    virtual long ActivateSpecific(HSTRING__*, _GUID, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateSpecificWithViewId@ComponentPrivateTearOff@Core@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@IPEAPEAUIInspectable@@@Z
    virtual long ActivateSpecificWithViewId(HSTRING__*, unsigned int, IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ComponentPrivateTearOff@Core@ApplicationModel@Windows@@QEAA@XZ
    ComponentPrivateTearOff();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureComponent@ComponentPrivateTearOff@Core@ApplicationModel@Windows@@UEAAJU_GUID@@II_KPEAPEAXPEAPEAUIInspectable@@@Z
    virtual long ConfigureComponent(_GUID, unsigned int, unsigned int, uint64_t, void * *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureComponentInput@ComponentPrivateTearOff@Core@ApplicationModel@Windows@@UEAAJU_GUID@@I_KPEA_KPEAPEAUIInspectable@@@Z
    virtual long ConfigureComponentInput(_GUID, unsigned int, uint64_t, uint64_t *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disconnect@ComponentPrivateTearOff@Core@ApplicationModel@Windows@@UEAAJU_GUID@@PEAI@Z
    virtual long Disconnect(_GUID, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComponentViewInstanceId@ComponentPrivateTearOff@Core@ApplicationModel@Windows@@UEAAJU_GUID@@PEAI@Z
    virtual long GetComponentViewInstanceId(_GUID, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComponentViewInstanceIdAndDisconnectSiteId@ComponentPrivateTearOff@Core@ApplicationModel@Windows@@UEAAJU_GUID@@PEAI@Z
    virtual long GetComponentViewInstanceIdAndDisconnectSiteId(_GUID, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessHandle@ComponentPrivateTearOff@Core@ApplicationModel@Windows@@UEAAJPEAPEAX@Z
    virtual long GetProcessHandle(void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReceiveSharedVisual@ComponentPrivateTearOff@Core@ApplicationModel@Windows@@UEAAJU_GUID@@_K@Z
    virtual long ReceiveSharedVisual(_GUID, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetComponentSiteIdForComponentViewInstanceId@ComponentPrivateTearOff@Core@ApplicationModel@Windows@@UEAAJU_GUID@@I@Z
    virtual long SetComponentSiteIdForComponentViewInstanceId(_GUID, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSharedVisualHandle@ComponentPrivateTearOff@Core@ApplicationModel@Windows@@UEAAJPEAXU_GUID@@I@Z
    virtual long SetSharedVisualHandle(void *, _GUID, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ComponentPrivateTearOff@Core@ApplicationModel@Windows@@UEAA@XZ
    virtual ~ComponentPrivateTearOff();
};
} // namespace Windows::ApplicationModel::Core
