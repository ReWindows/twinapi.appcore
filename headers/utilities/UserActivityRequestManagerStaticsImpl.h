#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 30 member(s).
class UserActivityRequestManagerStaticsImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@UserActivityRequestManagerStaticsImpl@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UserActivityRequestManagerStaticsImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentView@UserActivityRequestManagerStaticsImpl@@UEAAJPEAPEAUIUserActivityRequestManager@UserActivities@ApplicationModel@Windows@@@Z
    virtual long GetForCurrentView(::Windows::ApplicationModel::UserActivities::IUserActivityRequestManager * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForWindow@UserActivityRequestManagerStaticsImpl@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetForWindow(HWND__*, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UserActivityRequestManagerStaticsImpl@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UserActivityRequestManagerStaticsImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UserActivityRequestManagerStaticsImpl@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@UserActivityRequestManagerStaticsImpl@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@UserActivityRequestManagerStaticsImpl@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UserActivityRequestManagerStaticsImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UserActivityRequestManagerStaticsImpl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UserActivityRequestManagerStaticsImpl@@QEAA@XZ
    UserActivityRequestManagerStaticsImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForHwnd@UserActivityRequestManagerStaticsImpl@@CAJPEAUHWND__@@PEAPEAUIUserActivityRequestManager@UserActivities@ApplicationModel@Windows@@@Z
    static long CreateForHwnd(HWND__*, ::Windows::ApplicationModel::UserActivities::IUserActivityRequestManager * *);
};
