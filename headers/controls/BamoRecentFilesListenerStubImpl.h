#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 8 member(s).
namespace BamoRecentFilesListener::BamoImpl {
class BamoRecentFilesListenerStubImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoRecentFilesListenerStubImpl@BamoImpl@BamoRecentFilesListener@@UEBAPEAVBamoStub@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoStub * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProxyUnderLockThunk@BamoRecentFilesListenerStubImpl@BamoImpl@BamoRecentFilesListener@@UEAAJXZ
    virtual long InitializeProxyUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedUnderLockThunk@BamoRecentFilesListenerStubImpl@BamoImpl@BamoRecentFilesListener@@UEAAJXZ
    virtual long OnConnectedUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedThunk@BamoRecentFilesListenerStubImpl@BamoImpl@BamoRecentFilesListener@@UEAAJXZ
    virtual long OnDisconnectedThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedThunk@BamoRecentFilesListenerStubImpl@BamoImpl@BamoRecentFilesListener@@UEAAJXZ
    virtual long OnPropertiesRefreshedThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecentFilesActionInvoked@BamoRecentFilesListenerStubImpl@BamoImpl@BamoRecentFilesListener@@QEAAJPEAVBamoRecentFilesActionInfoPrincipal@3@@Z
    long RecentFilesActionInvoked(::BamoRecentFilesListener::BamoRecentFilesActionInfoPrincipal *);
};
} // namespace BamoRecentFilesListener::BamoImpl
