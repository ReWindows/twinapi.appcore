#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 5 member(s).
namespace BamoRecentFilesListener {
class BamoRecentFilesListenerProxyOwner {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?OnConnected@BamoRecentFilesListenerProxyOwner@BamoRecentFilesListener@@UEAAJPEAVBamoRecentFilesListenerProxy@2@@Z
    virtual long OnConnected(::BamoRecentFilesListener::BamoRecentFilesListenerProxy *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnDisconnected@BamoRecentFilesListenerProxyOwner@BamoRecentFilesListener@@UEAAJPEAVBamoRecentFilesListenerProxy@2@@Z
    virtual long OnDisconnected(::BamoRecentFilesListener::BamoRecentFilesListenerProxy *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoRecentFilesListenerProxyOwner@BamoRecentFilesListener@@UEAAJPEAVBamoRecentFilesListenerProxy@2@@Z
    virtual long OnPropertiesRefreshed(::BamoRecentFilesListener::BamoRecentFilesListenerProxy *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnRecentFilesHistoryChanged@BamoRecentFilesListenerProxyOwner@BamoRecentFilesListener@@UEAAJPEAVBamoRecentFilesListenerProxy@2@@Z
    virtual long OnRecentFilesHistoryChanged(::BamoRecentFilesListener::BamoRecentFilesListenerProxy *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnRecentFilesHistoryChanging@BamoRecentFilesListenerProxyOwner@BamoRecentFilesListener@@UEAAJPEAVBamoRecentFilesListenerProxy@2@PEAVBamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Proxy@RecentFilesListener_AutoBamos@Lib@Bamo@Microsoft@@@Z
    virtual long OnRecentFilesHistoryChanging(::BamoRecentFilesListener::BamoRecentFilesListenerProxy *, ::Microsoft::Bamo::Lib::RecentFilesListener_AutoBamos::BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Proxy *);
};
} // namespace BamoRecentFilesListener
