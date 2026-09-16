#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 13 member(s).
namespace BamoRecentFilesListener::BamoImpl {
class BamoRecentFilesListenerPrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoRecentFilesListenerPrincipalImpl@BamoImpl@BamoRecentFilesListener@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@5@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRecentFilesActionInvoked@BamoRecentFilesListenerPrincipalImpl@BamoImpl@BamoRecentFilesListener@@QEAAJPEAVBamoRecentFilesActionInfoPrincipal@3@@Z
    long BroadcastRecentFilesActionInvoked(::BamoRecentFilesListener::BamoRecentFilesActionInfoPrincipal *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoRecentFilesListenerPrincipalImpl@BamoImpl@BamoRecentFilesListener@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoRecentFilesListenerPrincipalImpl@BamoImpl@BamoRecentFilesListener@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoRecentFilesListenerPrincipalImpl@BamoImpl@BamoRecentFilesListener@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoRecentFilesListenerPrincipalImpl@BamoImpl@BamoRecentFilesListener@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRecentFilesHistory@BamoRecentFilesListenerPrincipalImpl@BamoImpl@BamoRecentFilesListener@@QEAAXPEAVBamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Principal@RecentFilesListener_AutoBamos@Lib@Bamo@Microsoft@@@Z
    void SetRecentFilesHistory(::Microsoft::Bamo::Lib::RecentFilesListener_AutoBamos::BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Principal *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoRecentFilesListenerPrincipalImpl@BamoImpl@BamoRecentFilesListener@@UEAA@XZ
    virtual ~BamoRecentFilesListenerPrincipalImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallRecentFilesActionInvokedOnStub@BamoRecentFilesListenerPrincipalImpl@BamoImpl@BamoRecentFilesListener@@CAJPEAVBamoStubImpl@2Microsoft@@PEAVBamoRecentFilesActionInfoPrincipal@3@@Z
    static long CallRecentFilesActionInvokedOnStub(::Microsoft::BamoImpl::BamoStubImpl *, ::BamoRecentFilesListener::BamoRecentFilesActionInfoPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRecentFilesHistoryRemoteCache@BamoRecentFilesListenerPrincipalImpl@BamoImpl@BamoRecentFilesListener@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateRecentFilesHistoryRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRecentFilesHistoryRemoteCacheStatic@BamoRecentFilesListenerPrincipalImpl@BamoImpl@BamoRecentFilesListener@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123@@Z
    static long UpdateRecentFilesHistoryRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, ::BamoRecentFilesListener::BamoImpl::BamoRecentFilesListenerPrincipalImpl *);
};
} // namespace BamoRecentFilesListener::BamoImpl
