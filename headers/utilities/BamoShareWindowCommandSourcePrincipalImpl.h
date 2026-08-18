#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 16 member(s).
namespace Windows::Internal::Shell::ShareWindow::Bamo::BamoImpl {
class BamoShareWindowCommandSourcePrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoShareWindowCommandSourcePrincipalImpl@BamoImpl@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@39@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastOnCommandInvoked@BamoShareWindowCommandSourcePrincipalImpl@BamoImpl@Bamo@ShareWindow@Shell@Internal@Windows@@QEAAJAEBUWindowId@UI@7winrt@@W4ShareWindowCommand@597winrt@@AEBU_GUID@@@Z
    long BroadcastOnCommandInvoked(WindissectOpaque const &, int, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastSetPrimary@BamoShareWindowCommandSourcePrincipalImpl@BamoImpl@Bamo@ShareWindow@Shell@Internal@Windows@@QEAAJ_N@Z
    long BroadcastSetPrimary(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoShareWindowCommandSourcePrincipalImpl@BamoImpl@Bamo@ShareWindow@Shell@Internal@Windows@@UEBAPEAVBamoPrincipal@3Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeCommandSource@BamoShareWindowCommandSourcePrincipalImpl@BamoImpl@Bamo@ShareWindow@Shell@Internal@Windows@@QEAAJPEBUWindowId@UI@7winrt@@_N@Z
    long InitializeCommandSource(WindissectOpaque const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoShareWindowCommandSourcePrincipalImpl@BamoImpl@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOnCommandRequestedCompleted@BamoShareWindowCommandSourcePrincipalImpl@BamoImpl@Bamo@ShareWindow@Shell@Internal@Windows@@QEAAJIW4ShareWindowCommand@5UI@7winrt@@@Z
    long OnOnCommandRequestedCompleted(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOnFindSharedWindowsCompleted@BamoShareWindowCommandSourcePrincipalImpl@BamoImpl@Bamo@ShareWindow@Shell@Internal@Windows@@QEAAJIPEBUWindowId@UI@7winrt@@I@Z
    long OnOnFindSharedWindowsCompleted(unsigned int, WindissectOpaque const *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoShareWindowCommandSourcePrincipalImpl@BamoImpl@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportCommandChanged@BamoShareWindowCommandSourcePrincipalImpl@BamoImpl@Bamo@ShareWindow@Shell@Internal@Windows@@QEAAJXZ
    long ReportCommandChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoShareWindowCommandSourcePrincipalImpl@BamoImpl@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallOnCommandInvokedOnStub@BamoShareWindowCommandSourcePrincipalImpl@BamoImpl@Bamo@ShareWindow@Shell@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@AEBUWindowId@UI@7winrt@@W4ShareWindowCommand@5UI@7winrt@@AEBU_GUID@@@Z
    static long CallOnCommandInvokedOnStub(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque const &, int, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallSetPrimaryOnStub@BamoShareWindowCommandSourcePrincipalImpl@BamoImpl@Bamo@ShareWindow@Shell@Internal@Windows@@CAJPEAVBamoStubImpl@2Microsoft@@_N@Z
    static long CallSetPrimaryOnStub(::Microsoft::BamoImpl::BamoStubImpl *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnZeroReferenceCount@BamoShareWindowCommandSourcePrincipalImpl@BamoImpl@Bamo@ShareWindow@Shell@Internal@Windows@@EEAAXXZ
    virtual void OnZeroReferenceCount();
};
} // namespace Windows::Internal::Shell::ShareWindow::Bamo::BamoImpl
