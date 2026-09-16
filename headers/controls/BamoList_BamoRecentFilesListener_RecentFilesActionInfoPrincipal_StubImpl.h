#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 11 member(s).
namespace Microsoft::Bamo::Lib::BamoImpl::RecentFilesListener_AutoBamos {
class BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_StubImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_StubImpl@RecentFilesListener_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEBAPEAVBamoStub@56@XZ
    virtual ::Microsoft::Bamo::BamoStub * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProxyUnderLockThunk@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_StubImpl@RecentFilesListener_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAJXZ
    virtual long InitializeProxyUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedUnderLockThunk@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_StubImpl@RecentFilesListener_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAJXZ
    virtual long OnConnectedUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedThunk@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_StubImpl@RecentFilesListener_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAJXZ
    virtual long OnDisconnectedThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedThunk@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_StubImpl@RecentFilesListener_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAJXZ
    virtual long OnPropertiesRefreshedThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoteClear@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_StubImpl@RecentFilesListener_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJXZ
    long RemoteClear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoteInsert@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_StubImpl@RecentFilesListener_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIPEAVBamoRecentFilesActionInfoPrincipal@BamoRecentFilesListener@@@Z
    long RemoteInsert(unsigned int, ::BamoRecentFilesListener::BamoRecentFilesActionInfoPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoteRemove@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_StubImpl@RecentFilesListener_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJI@Z
    long RemoteRemove(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoteReplace@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_StubImpl@RecentFilesListener_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIPEAVBamoRecentFilesActionInfoPrincipal@BamoRecentFilesListener@@@Z
    long RemoteReplace(unsigned int, ::BamoRecentFilesListener::BamoRecentFilesActionInfoPrincipal *);
};
} // namespace Microsoft::Bamo::Lib::BamoImpl::RecentFilesListener_AutoBamos
