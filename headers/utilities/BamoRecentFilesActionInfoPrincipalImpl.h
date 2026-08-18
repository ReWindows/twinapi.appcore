#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 32 member(s).
namespace BamoRecentFilesListener::BamoImpl {
class BamoRecentFilesActionInfoPrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoRecentFilesActionInfoPrincipalImpl@BamoImpl@BamoRecentFilesListener@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@5@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoRecentFilesActionInfoPrincipalImpl@BamoImpl@BamoRecentFilesListener@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoRecentFilesActionInfoPrincipalImpl@BamoImpl@BamoRecentFilesListener@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxy@BamoRecentFilesActionInfoPrincipalImpl@BamoImpl@BamoRecentFilesListener@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void PushStateToProxy(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoRecentFilesActionInfoPrincipalImpl@BamoImpl@BamoRecentFilesListener@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshFileIdentifiers@BamoRecentFilesActionInfoPrincipalImpl@BamoImpl@BamoRecentFilesListener@@QEAAJXZ
    long RefreshFileIdentifiers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoRecentFilesActionInfoPrincipalImpl@BamoImpl@BamoRecentFilesListener@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentUri@BamoRecentFilesActionInfoPrincipalImpl@BamoImpl@BamoRecentFilesListener@@QEAAJPEBG@Z
    long SetContentUri(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFilePath@BamoRecentFilesActionInfoPrincipalImpl@BamoImpl@BamoRecentFilesListener@@QEAAJPEBG@Z
    long SetFilePath(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProcessFilePath@BamoRecentFilesActionInfoPrincipalImpl@BamoImpl@BamoRecentFilesListener@@QEAAJPEBG@Z
    long SetProcessFilePath(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShellIdList@BamoRecentFilesActionInfoPrincipalImpl@BamoImpl@BamoRecentFilesListener@@QEAAJPEBEI@Z
    long SetShellIdList(unsigned char const *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoRecentFilesActionInfoPrincipalImpl@BamoImpl@BamoRecentFilesListener@@UEAA@XZ
    virtual ~BamoRecentFilesActionInfoPrincipalImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateActionInvokingProcessIdRemoteCache@BamoRecentFilesActionInfoPrincipalImpl@BamoImpl@BamoRecentFilesListener@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateActionInvokingProcessIdRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateActionInvokingProcessIdRemoteCacheStatic@BamoRecentFilesActionInfoPrincipalImpl@BamoImpl@BamoRecentFilesListener@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123@@Z
    static long UpdateActionInvokingProcessIdRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, ::BamoRecentFilesListener::BamoImpl::BamoRecentFilesActionInfoPrincipalImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateActionRemoteCache@BamoRecentFilesActionInfoPrincipalImpl@BamoImpl@BamoRecentFilesListener@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateActionRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateActionRemoteCacheStatic@BamoRecentFilesActionInfoPrincipalImpl@BamoImpl@BamoRecentFilesListener@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123@@Z
    static long UpdateActionRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, ::BamoRecentFilesListener::BamoImpl::BamoRecentFilesActionInfoPrincipalImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateContentUriRemoteCache@BamoRecentFilesActionInfoPrincipalImpl@BamoImpl@BamoRecentFilesListener@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateContentUriRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateContentUriRemoteCacheStatic@BamoRecentFilesActionInfoPrincipalImpl@BamoImpl@BamoRecentFilesListener@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123@@Z
    static long UpdateContentUriRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, ::BamoRecentFilesListener::BamoImpl::BamoRecentFilesActionInfoPrincipalImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFilePathRemoteCache@BamoRecentFilesActionInfoPrincipalImpl@BamoImpl@BamoRecentFilesListener@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateFilePathRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFilePathRemoteCacheStatic@BamoRecentFilesActionInfoPrincipalImpl@BamoImpl@BamoRecentFilesListener@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123@@Z
    static long UpdateFilePathRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, ::BamoRecentFilesListener::BamoImpl::BamoRecentFilesActionInfoPrincipalImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateObjectIdentifierRemoteCache@BamoRecentFilesActionInfoPrincipalImpl@BamoImpl@BamoRecentFilesListener@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateObjectIdentifierRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateObjectIdentifierRemoteCacheStatic@BamoRecentFilesActionInfoPrincipalImpl@BamoImpl@BamoRecentFilesListener@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123@@Z
    static long UpdateObjectIdentifierRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, ::BamoRecentFilesListener::BamoImpl::BamoRecentFilesActionInfoPrincipalImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateProcessFilePathRemoteCache@BamoRecentFilesActionInfoPrincipalImpl@BamoImpl@BamoRecentFilesListener@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateProcessFilePathRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateProcessFilePathRemoteCacheStatic@BamoRecentFilesActionInfoPrincipalImpl@BamoImpl@BamoRecentFilesListener@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123@@Z
    static long UpdateProcessFilePathRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, ::BamoRecentFilesListener::BamoImpl::BamoRecentFilesActionInfoPrincipalImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRevisionRemoteCache@BamoRecentFilesActionInfoPrincipalImpl@BamoImpl@BamoRecentFilesListener@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateRevisionRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRevisionRemoteCacheStatic@BamoRecentFilesActionInfoPrincipalImpl@BamoImpl@BamoRecentFilesListener@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123@@Z
    static long UpdateRevisionRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, ::BamoRecentFilesListener::BamoImpl::BamoRecentFilesActionInfoPrincipalImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateShellIdListRemoteCache@BamoRecentFilesActionInfoPrincipalImpl@BamoImpl@BamoRecentFilesListener@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateShellIdListRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateShellIdListRemoteCacheStatic@BamoRecentFilesActionInfoPrincipalImpl@BamoImpl@BamoRecentFilesListener@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123@@Z
    static long UpdateShellIdListRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, ::BamoRecentFilesListener::BamoImpl::BamoRecentFilesActionInfoPrincipalImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVolumeIdentifierRemoteCache@BamoRecentFilesActionInfoPrincipalImpl@BamoImpl@BamoRecentFilesListener@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateVolumeIdentifierRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVolumeIdentifierRemoteCacheStatic@BamoRecentFilesActionInfoPrincipalImpl@BamoImpl@BamoRecentFilesListener@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123@@Z
    static long UpdateVolumeIdentifierRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, ::BamoRecentFilesListener::BamoImpl::BamoRecentFilesActionInfoPrincipalImpl *);
};
} // namespace BamoRecentFilesListener::BamoImpl
