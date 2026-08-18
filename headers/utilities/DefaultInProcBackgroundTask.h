#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 15 member(s).
namespace Windows::ApplicationModel::Core {
class DefaultInProcBackgroundTask {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DefaultInProcBackgroundTask@Core@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DefaultInProcBackgroundTask@Core@ApplicationModel@Windows@@QEAA@XZ
    DefaultInProcBackgroundTask();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DefaultInProcBackgroundTask@Core@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DefaultInProcBackgroundTask@Core@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DefaultInProcBackgroundTask@Core@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@DefaultInProcBackgroundTask@Core@ApplicationModel@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@DefaultInProcBackgroundTask@Core@ApplicationModel@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DefaultInProcBackgroundTask@Core@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DefaultInProcBackgroundTask@Core@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Run@DefaultInProcBackgroundTask@Core@ApplicationModel@Windows@@UEAAJPEAUIBackgroundTaskInstance@Background@34@@Z
    virtual long Run(::Windows::ApplicationModel::Background::IBackgroundTaskInstance *);
};
} // namespace Windows::ApplicationModel::Core
