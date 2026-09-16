#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 30 member(s).
class TaskbarPinningFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TaskbarPinningFactory@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FallbackMigratePinnedWebsite@TaskbarPinningFactory@@UEAAJPEAUHSTRING__@@0@Z
    virtual long FallbackMigratePinnedWebsite(HSTRING__*, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@TaskbarPinningFactory@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPinnedWebsites@TaskbarPinningFactory@@UEAAJPEAPEAU?$IVectorView@PEAVPinnedWebsite@Taskbar@Internal@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long GetPinnedWebsites(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@TaskbarPinningFactory@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@TaskbarPinningFactory@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@TaskbarPinningFactory@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@TaskbarPinningFactory@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinWebsite@TaskbarPinningFactory@@UEAAJPEAUHSTRING__@@00@Z
    virtual long PinWebsite(HSTRING__*, HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinWebsiteAsync@TaskbarPinningFactory@@UEAAJPEAUHSTRING__@@00PEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long PinWebsiteAsync(HSTRING__*, HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareMigratePinnedWebsite@TaskbarPinningFactory@@UEAAJPEAUHSTRING__@@0@Z
    virtual long PrepareMigratePinnedWebsite(HSTRING__*, HSTRING__*);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TaskbarPinningFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TaskbarPinningFactory@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskbarPinningFactory@@QEAA@XZ
    TaskbarPinningFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnpinWebsiteAsync@TaskbarPinningFactory@@UEAAJPEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long UnpinWebsiteAsync(HSTRING__*, WindissectOpaque * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_PinWebsiteBackgroundThread@TaskbarPinningFactory@@CAJPEAUHSTRING__@@00@Z
    static long s_PinWebsiteBackgroundThread(HSTRING__*, HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_UnpinWebsiteBackgroundThread@TaskbarPinningFactory@@CAJPEAUHSTRING__@@@Z
    static long s_UnpinWebsiteBackgroundThread(HSTRING__*);
};
