#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 11 member(s).
namespace BamoRecentFilesListener::BamoImpl {
class BamoRecentFilesListenerProxyImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoRecentFilesListenerProxyImpl@BamoImpl@BamoRecentFilesListener@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoRecentFilesListenerProxyImpl@BamoImpl@BamoRecentFilesListener@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?PushStateToPrincipal@BamoRecentFilesListenerProxyImpl@BamoImpl@BamoRecentFilesListener@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoRecentFilesListenerProxyImpl@BamoImpl@BamoRecentFilesListener@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PE Export
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoRecentFilesListenerProxyImpl@BamoImpl@BamoRecentFilesListener@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecentFilesActionInvoked@BamoRecentFilesListenerProxyImpl@BamoImpl@BamoRecentFilesListener@@QEAAJI@Z
    long RecentFilesActionInvoked(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRecentFilesHistory@BamoRecentFilesListenerProxyImpl@BamoImpl@BamoRecentFilesListener@@QEAAJ_NI@Z
    long UpdateRecentFilesHistory(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoRecentFilesListenerProxyImpl@BamoImpl@BamoRecentFilesListener@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoRecentFilesListenerProxyImpl@BamoImpl@BamoRecentFilesListener@@UEAA@XZ
    virtual ~BamoRecentFilesListenerProxyImpl();
};
} // namespace BamoRecentFilesListener::BamoImpl
