#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 10 member(s).
namespace Microsoft::Bamo::Lib::BamoImpl::RecentFilesListener_AutoBamos {
class BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_ProxyImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_ProxyImpl@RecentFilesListener_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEBAPEAVBamoProxy@56@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_ProxyImpl@RecentFilesListener_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?PushStateToPrincipal@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_ProxyImpl@RecentFilesListener_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_ProxyImpl@RecentFilesListener_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PE Export
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_ProxyImpl@RecentFilesListener_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@36@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoteInsert@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_ProxyImpl@RecentFilesListener_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJII@Z
    long RemoteInsert(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoteReplace@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_ProxyImpl@RecentFilesListener_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJII@Z
    long RemoteReplace(unsigned int, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_ProxyImpl@RecentFilesListener_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAXPEAVBamoProxyImpl@36@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
};
} // namespace Microsoft::Bamo::Lib::BamoImpl::RecentFilesListener_AutoBamos
