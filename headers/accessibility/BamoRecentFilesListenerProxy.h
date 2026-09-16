#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 16 member(s).
namespace BamoRecentFilesListener {
class BamoRecentFilesListenerProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoRecentFilesListenerProxy@BamoRecentFilesListener@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRecentFilesHistory@BamoRecentFilesListenerProxy@BamoRecentFilesListener@@UEAAPEAVBamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Proxy@RecentFilesListener_AutoBamos@Lib@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::Lib::RecentFilesListener_AutoBamos::BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Proxy * GetRecentFilesHistory();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoRecentFilesListenerProxy@BamoRecentFilesListener@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoRecentFilesListenerProxy@BamoRecentFilesListener@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@BamoRecentFilesListenerProxy@BamoRecentFilesListener@@MEAAJXZ
    virtual long OnConnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@BamoRecentFilesListenerProxy@BamoRecentFilesListener@@MEAAJXZ
    virtual long OnDisconnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshed@BamoRecentFilesListenerProxy@BamoRecentFilesListener@@MEAAJXZ
    virtual long OnPropertiesRefreshed();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoRecentFilesListenerProxy@BamoRecentFilesListener@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoRecentFilesListenerProxy@BamoRecentFilesListener@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoRecentFilesListenerProxy@BamoRecentFilesListener@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoRecentFilesListenerProxy@BamoRecentFilesListener@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
} // namespace BamoRecentFilesListener
