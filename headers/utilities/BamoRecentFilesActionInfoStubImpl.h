#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 7 member(s).
namespace BamoRecentFilesListener::BamoImpl {
class BamoRecentFilesActionInfoStubImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoRecentFilesActionInfoStubImpl@BamoImpl@BamoRecentFilesListener@@UEBAPEAVBamoStub@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoStub * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProxyUnderLockThunk@BamoRecentFilesActionInfoStubImpl@BamoImpl@BamoRecentFilesListener@@UEAAJXZ
    virtual long InitializeProxyUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedUnderLockThunk@BamoRecentFilesActionInfoStubImpl@BamoImpl@BamoRecentFilesListener@@UEAAJXZ
    virtual long OnConnectedUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedThunk@BamoRecentFilesActionInfoStubImpl@BamoImpl@BamoRecentFilesListener@@UEAAJXZ
    virtual long OnDisconnectedThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedThunk@BamoRecentFilesActionInfoStubImpl@BamoImpl@BamoRecentFilesListener@@UEAAJXZ
    virtual long OnPropertiesRefreshedThunk();
};
} // namespace BamoRecentFilesListener::BamoImpl
