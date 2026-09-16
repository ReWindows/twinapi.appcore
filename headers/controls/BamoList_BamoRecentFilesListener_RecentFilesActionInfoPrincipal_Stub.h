#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 13 member(s).
namespace Microsoft::Bamo::Lib::RecentFilesListener_AutoBamos {
class BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Stub {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Stub@RecentFilesListener_AutoBamos@Lib@Bamo@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Stub@RecentFilesListener_AutoBamos@Lib@Bamo@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Stub@RecentFilesListener_AutoBamos@Lib@Bamo@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoteClear@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Stub@RecentFilesListener_AutoBamos@Lib@Bamo@Microsoft@@UEAAJXZ
    virtual long RemoteClear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoteInsert@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Stub@RecentFilesListener_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIPEAVBamoRecentFilesActionInfoPrincipal@BamoRecentFilesListener@@@Z
    virtual long RemoteInsert(unsigned int, ::BamoRecentFilesListener::BamoRecentFilesActionInfoPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoteRemove@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Stub@RecentFilesListener_AutoBamos@Lib@Bamo@Microsoft@@UEAAJI@Z
    virtual long RemoteRemove(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoteReplace@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Stub@RecentFilesListener_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIPEAVBamoRecentFilesActionInfoPrincipal@BamoRecentFilesListener@@@Z
    virtual long RemoteReplace(unsigned int, ::BamoRecentFilesListener::BamoRecentFilesActionInfoPrincipal *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Stub@RecentFilesListener_AutoBamos@Lib@Bamo@Microsoft@@EEBAPEAVBamoStubImpl@BamoImpl@5@XZ
    virtual ::Microsoft::BamoImpl::BamoStubImpl * GetImpl() const;
};
} // namespace Microsoft::Bamo::Lib::RecentFilesListener_AutoBamos
