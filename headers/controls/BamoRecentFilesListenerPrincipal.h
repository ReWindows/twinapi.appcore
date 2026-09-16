#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 17 member(s).
namespace BamoRecentFilesListener {
class BamoRecentFilesListenerPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoRecentFilesListenerPrincipal@BamoRecentFilesListener@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRecentFilesActionInvoked@BamoRecentFilesListenerPrincipal@BamoRecentFilesListener@@UEAAJPEAVBamoRecentFilesActionInfoPrincipal@2@@Z
    virtual long BroadcastRecentFilesActionInvoked(::BamoRecentFilesListener::BamoRecentFilesActionInfoPrincipal *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRecentFilesHistory@BamoRecentFilesListenerPrincipal@BamoRecentFilesListener@@UEAAPEAVBamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Principal@RecentFilesListener_AutoBamos@Lib@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::Lib::RecentFilesListener_AutoBamos::BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Principal * GetRecentFilesHistory();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoRecentFilesListenerPrincipal@BamoRecentFilesListener@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoRecentFilesListenerPrincipal@BamoRecentFilesListener@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRecentFilesHistory@BamoRecentFilesListenerPrincipal@BamoRecentFilesListener@@UEAAXPEAVBamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Principal@RecentFilesListener_AutoBamos@Lib@Bamo@Microsoft@@@Z
    virtual void SetRecentFilesHistory(::Microsoft::Bamo::Lib::RecentFilesListener_AutoBamos::BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Principal *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoRecentFilesListenerPrincipal@BamoRecentFilesListener@@MEAAJPEAVBamoPeer@RecentFilesListener_AutoBamos@@PEAPEAVBamoRecentFilesListenerStub@2@@Z
    virtual long AllocateStubUnderLock(::RecentFilesListener_AutoBamos::BamoPeer *, ::BamoRecentFilesListener::BamoRecentFilesListenerStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoRecentFilesListenerPrincipal@BamoRecentFilesListener@@MEAAJPEAVBamoRecentFilesListenerStub@2@@Z
    virtual long InitializeProxyUnderLock(::BamoRecentFilesListener::BamoRecentFilesListenerStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoRecentFilesListenerPrincipal@BamoRecentFilesListener@@MEAAJPEAVBamoRecentFilesListenerStub@2@@Z
    virtual long OnPropertiesRefreshed(::BamoRecentFilesListener::BamoRecentFilesListenerStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoRecentFilesListenerPrincipal@BamoRecentFilesListener@@MEAAJPEAVBamoRecentFilesListenerStub@2@@Z
    virtual long OnStubConnectedUnderLock(::BamoRecentFilesListener::BamoRecentFilesListenerStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoRecentFilesListenerPrincipal@BamoRecentFilesListener@@MEAAJPEAVBamoRecentFilesListenerStub@2@@Z
    virtual long OnStubDisconnected(::BamoRecentFilesListener::BamoRecentFilesListenerStub *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoRecentFilesListenerPrincipal@BamoRecentFilesListener@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};
} // namespace BamoRecentFilesListener
