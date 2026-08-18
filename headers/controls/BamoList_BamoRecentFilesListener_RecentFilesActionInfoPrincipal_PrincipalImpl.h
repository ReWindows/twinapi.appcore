#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 15 member(s).
namespace Microsoft::Bamo::Lib::BamoImpl::RecentFilesListener_AutoBamos {
class BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_PrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_PrincipalImpl@RecentFilesListener_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAJPEAVBaseBamoPeerImpl@36@PEAPEAVBamoStub@56@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRemoteClear@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_PrincipalImpl@RecentFilesListener_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJXZ
    long BroadcastRemoteClear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRemoteInsert@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_PrincipalImpl@RecentFilesListener_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIPEAVBamoRecentFilesActionInfoPrincipal@BamoRecentFilesListener@@@Z
    long BroadcastRemoteInsert(unsigned int, ::BamoRecentFilesListener::BamoRecentFilesActionInfoPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRemoteRemove@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_PrincipalImpl@RecentFilesListener_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJI@Z
    long BroadcastRemoteRemove(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRemoteReplace@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_PrincipalImpl@RecentFilesListener_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIPEAVBamoRecentFilesActionInfoPrincipal@BamoRecentFilesListener@@@Z
    long BroadcastRemoteReplace(unsigned int, ::BamoRecentFilesListener::BamoRecentFilesActionInfoPrincipal *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_PrincipalImpl@RecentFilesListener_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEBAPEAVBamoPrincipal@56@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_PrincipalImpl@RecentFilesListener_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_PrincipalImpl@RecentFilesListener_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@36@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_PrincipalImpl@RecentFilesListener_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@36@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallRemoteClearOnStub@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_PrincipalImpl@RecentFilesListener_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@@Z
    static long CallRemoteClearOnStub(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallRemoteInsertOnStub@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_PrincipalImpl@RecentFilesListener_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@IPEAVBamoRecentFilesActionInfoPrincipal@BamoRecentFilesListener@@@Z
    static long CallRemoteInsertOnStub(::Microsoft::BamoImpl::BamoStubImpl *, unsigned int, ::BamoRecentFilesListener::BamoRecentFilesActionInfoPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallRemoteRemoveOnStub@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_PrincipalImpl@RecentFilesListener_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@I@Z
    static long CallRemoteRemoveOnStub(::Microsoft::BamoImpl::BamoStubImpl *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallRemoteReplaceOnStub@BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_PrincipalImpl@RecentFilesListener_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@IPEAVBamoRecentFilesActionInfoPrincipal@BamoRecentFilesListener@@@Z
    static long CallRemoteReplaceOnStub(::Microsoft::BamoImpl::BamoStubImpl *, unsigned int, ::BamoRecentFilesListener::BamoRecentFilesActionInfoPrincipal *);
};
} // namespace Microsoft::Bamo::Lib::BamoImpl::RecentFilesListener_AutoBamos
