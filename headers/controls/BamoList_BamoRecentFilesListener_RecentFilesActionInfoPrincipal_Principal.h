#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 18 member(s).
namespace Microsoft::Bamo::Lib::RecentFilesListener_AutoBamos {
class BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Principal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Principal@RecentFilesListener_AutoBamos@Lib@Bamo@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRemoteClear@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Principal@RecentFilesListener_AutoBamos@Lib@Bamo@Microsoft@@UEAAJXZ
    virtual long BroadcastRemoteClear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRemoteInsert@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Principal@RecentFilesListener_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIPEAVBamoRecentFilesActionInfoPrincipal@BamoRecentFilesListener@@@Z
    virtual long BroadcastRemoteInsert(unsigned int, ::BamoRecentFilesListener::BamoRecentFilesActionInfoPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRemoteRemove@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Principal@RecentFilesListener_AutoBamos@Lib@Bamo@Microsoft@@UEAAJI@Z
    virtual long BroadcastRemoteRemove(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRemoteReplace@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Principal@RecentFilesListener_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIPEAVBamoRecentFilesActionInfoPrincipal@BamoRecentFilesListener@@@Z
    virtual long BroadcastRemoteReplace(unsigned int, ::BamoRecentFilesListener::BamoRecentFilesActionInfoPrincipal *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Principal@RecentFilesListener_AutoBamos@Lib@Bamo@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Principal@RecentFilesListener_AutoBamos@Lib@Bamo@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Principal@RecentFilesListener_AutoBamos@Lib@Bamo@Microsoft@@MEAAJPEAVBamoPeer@2@PEAPEAVBamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Stub@2345@@Z
    virtual long AllocateStubUnderLock(::RecentFilesListener_AutoBamos::BamoPeer *, ::Microsoft::Bamo::Lib::RecentFilesListener_AutoBamos::BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Stub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Principal@RecentFilesListener_AutoBamos@Lib@Bamo@Microsoft@@MEAAJPEAVBamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Stub@2345@@Z
    virtual long InitializeProxyUnderLock(::Microsoft::Bamo::Lib::RecentFilesListener_AutoBamos::BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Stub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Principal@RecentFilesListener_AutoBamos@Lib@Bamo@Microsoft@@MEAAJPEAVBamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Stub@2345@@Z
    virtual long OnPropertiesRefreshed(::Microsoft::Bamo::Lib::RecentFilesListener_AutoBamos::BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Stub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Principal@RecentFilesListener_AutoBamos@Lib@Bamo@Microsoft@@MEAAJPEAVBamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Stub@2345@@Z
    virtual long OnStubConnectedUnderLock(::Microsoft::Bamo::Lib::RecentFilesListener_AutoBamos::BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Stub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Principal@RecentFilesListener_AutoBamos@Lib@Bamo@Microsoft@@MEAAJPEAVBamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Stub@2345@@Z
    virtual long OnStubDisconnected(::Microsoft::Bamo::Lib::RecentFilesListener_AutoBamos::BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Stub *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Principal@RecentFilesListener_AutoBamos@Lib@Bamo@Microsoft@@EEBAPEAVBamoPrincipalImpl@BamoImpl@5@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};
} // namespace Microsoft::Bamo::Lib::RecentFilesListener_AutoBamos
