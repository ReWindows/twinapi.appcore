#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 18 member(s).
namespace Windows::Internal::Shell::ShareWindow::Bamo {
class ShareWindowCommandSourcePrincipalOwner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeCommandSource@ShareWindowCommandSourcePrincipalOwner@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAJPEAVBamoShareWindowCommandSourcePrincipal@23456@PEAVBamoShareWindowCommandSourceStub@23456@AEBUWindowId@UI@6winrt@@_N@Z
    virtual long InitializeCommandSource(::Windows::Internal::Shell::ShareWindow::Bamo::BamoShareWindowCommandSourcePrincipal *, ::Windows::Internal::Shell::ShareWindow::Bamo::BamoShareWindowCommandSourceStub *, WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCommandOnPrimaryStub@ShareWindowCommandSourcePrincipalOwner@Bamo@ShareWindow@Shell@Internal@Windows@@QEAAXAEBUWindowId@UI@6winrt@@AEBW4ShareWindowCommand@4869@AEBU_GUID@@@Z
    void InvokeCommandOnPrimaryStub(WindissectOpaque const &, int const &, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCommandOnPrimaryStub@ShareWindowCommandSourcePrincipalOwner@Bamo@ShareWindow@Shell@Internal@Windows@@QEAAXAEBUWindowId@UI@6winrt@@AEBW4ShareWindowCommand@4869@AEBU_GUID@@W4ShareWindowCommandProviderKind@34569@@Z
    void InvokeCommandOnPrimaryStub(WindissectOpaque const &, int const &, _GUID const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubConnectedUnderLock@ShareWindowCommandSourcePrincipalOwner@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAJPEAVBamoShareWindowCommandSourcePrincipal@23456@PEAVBamoShareWindowCommandSourceStub@23456@@Z
    virtual long OnStubConnectedUnderLock(::Windows::Internal::Shell::ShareWindow::Bamo::BamoShareWindowCommandSourcePrincipal *, ::Windows::Internal::Shell::ShareWindow::Bamo::BamoShareWindowCommandSourceStub *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubDisconnected@ShareWindowCommandSourcePrincipalOwner@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAJPEAVBamoShareWindowCommandSourcePrincipal@23456@PEAVBamoShareWindowCommandSourceStub@23456@@Z
    virtual long OnStubDisconnected(::Windows::Internal::Shell::ShareWindow::Bamo::BamoShareWindowCommandSourcePrincipal *, ::Windows::Internal::Shell::ShareWindow::Bamo::BamoShareWindowCommandSourceStub *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportCommandChanged@ShareWindowCommandSourcePrincipalOwner@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAJPEAVBamoShareWindowCommandSourcePrincipal@23456@PEAVBamoShareWindowCommandSourceStub@23456@@Z
    virtual long ReportCommandChanged(::Windows::Internal::Shell::ShareWindow::Bamo::BamoShareWindowCommandSourcePrincipal *, ::Windows::Internal::Shell::ShareWindow::Bamo::BamoShareWindowCommandSourceStub *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportPrimarySharingStatus@ShareWindowCommandSourcePrincipalOwner@Bamo@ShareWindow@Shell@Internal@Windows@@QEAAX_NW4ShareWindowCommandProviderKind@3456winrt@@@Z
    void ReportPrimarySharingStatus(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestCommandOnPrimaryStubAsync@ShareWindowCommandSourcePrincipalOwner@Bamo@ShareWindow@Shell@Internal@Windows@@QEAA?AU?$IAsyncOperation@W4ShareWindowCommand@Shell@UI@Windows@winrt@@@Foundation@6winrt@@UWindowId@UI@69@UDispatcherQueue@System@69@@Z
    WindissectOpaque RequestCommandOnPrimaryStubAsync(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestCommandOnPrimaryStubAsync@ShareWindowCommandSourcePrincipalOwner@Bamo@ShareWindow@Shell@Internal@Windows@@QEAA?AU?$IAsyncOperation@W4ShareWindowCommand@Shell@UI@Windows@winrt@@@Foundation@6winrt@@UWindowId@UI@69@UDispatcherQueue@System@69@W4ShareWindowCommandProviderKind@34569@@Z
    WindissectOpaque RequestCommandOnPrimaryStubAsync(WindissectOpaque, WindissectOpaque, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ShareWindowCommandSourcePrincipalOwner@Bamo@ShareWindow@Shell@Internal@Windows@@QEAA@XZ
    ShareWindowCommandSourcePrincipalOwner();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShareWindowCommandSourcePrincipalOwner@Bamo@ShareWindow@Shell@Internal@Windows@@QEAA@XZ
    ~ShareWindowCommandSourcePrincipalOwner();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppWindowIdForProvider@ShareWindowCommandSourcePrincipalOwner@Bamo@ShareWindow@Shell@Internal@Windows@@AEAAAEAUWindowId@UI@6winrt@@W4ShareWindowCommandProviderKind@34569@@Z
    WindissectOpaque & GetAppWindowIdForProvider(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommandSessionTestForProvider@ShareWindowCommandSourcePrincipalOwner@Bamo@ShareWindow@Shell@Internal@Windows@@AEAAAEAV?$tip_test@V?$merged_data@U_tip_ShareWindowCommandSessionTest@ShareWindowCommandServerTip@@U12@@details@tip2@@@tip2@@W4ShareWindowCommandProviderKind@3456winrt@@@Z
    WindissectOpaque & GetCommandSessionTestForProvider(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsPrimarySharingForProvider@ShareWindowCommandSourcePrincipalOwner@Bamo@ShareWindow@Shell@Internal@Windows@@AEAAAEA_NW4ShareWindowCommandProviderKind@3456winrt@@@Z
    bool & GetIsPrimarySharingForProvider(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryStubForProvider@ShareWindowCommandSourcePrincipalOwner@Bamo@ShareWindow@Shell@Internal@Windows@@AEAAAEAU?$com_ptr@VBamoShareWindowCommandSourceStub@Bamo@ShareWindow@Shell@Internal@Windows@@@winrt@@W4ShareWindowCommandProviderKind@34568@@Z
    WindissectOpaque & GetPrimaryStubForProvider(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProviderKindFromStub@ShareWindowCommandSourcePrincipalOwner@Bamo@ShareWindow@Shell@Internal@Windows@@AEBA?AW4ShareWindowCommandProviderKind@3456winrt@@PEAVBamoShareWindowCommandSourceStub@23456@@Z
    int GetProviderKindFromStub(::Windows::Internal::Shell::ShareWindow::Bamo::BamoShareWindowCommandSourceStub *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReceivedConnectionWhileSharingForProvider@ShareWindowCommandSourcePrincipalOwner@Bamo@ShareWindow@Shell@Internal@Windows@@AEAAAEA_NW4ShareWindowCommandProviderKind@3456winrt@@@Z
    bool & GetReceivedConnectionWhileSharingForProvider(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimeOfPreviousInvokeForProvider@ShareWindowCommandSourcePrincipalOwner@Bamo@ShareWindow@Shell@Internal@Windows@@AEAAAEAKW4ShareWindowCommandProviderKind@3456winrt@@@Z
    unsigned long & GetTimeOfPreviousInvokeForProvider(int);
};
} // namespace Windows::Internal::Shell::ShareWindow::Bamo
