#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 7 member(s).
namespace Windows::Internal::Shell::ShareWindow::Bamo {
class ShareWindowCommandSourceProxyOwner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommandInvoked@ShareWindowCommandSourceProxyOwner@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAJPEAVBamoShareWindowCommandSourceProxy@23456@AEBUWindowId@UI@6winrt@@W4ShareWindowCommand@496winrt@@AEBU_GUID@@@Z
    virtual long OnCommandInvoked(::Windows::Internal::Shell::ShareWindow::Bamo::BamoShareWindowCommandSourceProxy *, WindissectOpaque const &, int, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommandRequested@ShareWindowCommandSourceProxyOwner@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAJPEAVBamoShareWindowCommandSourceProxy@23456@AEBUWindowId@UI@6winrt@@PEAW4ShareWindowCommand@496winrt@@@Z
    virtual long OnCommandRequested(::Windows::Internal::Shell::ShareWindow::Bamo::BamoShareWindowCommandSourceProxy *, WindissectOpaque const &, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@ShareWindowCommandSourceProxyOwner@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAJPEAVBamoShareWindowCommandSourceProxy@23456@@Z
    virtual long OnConnected(::Windows::Internal::Shell::ShareWindow::Bamo::BamoShareWindowCommandSourceProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@ShareWindowCommandSourceProxyOwner@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAJPEAVBamoShareWindowCommandSourceProxy@23456@@Z
    virtual long OnDisconnected(::Windows::Internal::Shell::ShareWindow::Bamo::BamoShareWindowCommandSourceProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFindSharedWindows@ShareWindowCommandSourceProxyOwner@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAJPEAVBamoShareWindowCommandSourceProxy@23456@PEBUWindowId@UI@6winrt@@IAEBU_GUID@@AEAV?$VariablySizedResult@UWindowId@UI@Windows@winrt@@@2Microsoft@@@Z
    virtual long OnFindSharedWindows(::Windows::Internal::Shell::ShareWindow::Bamo::BamoShareWindowCommandSourceProxy *, WindissectOpaque const *, unsigned int, _GUID const &, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrimary@ShareWindowCommandSourceProxyOwner@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAJPEAVBamoShareWindowCommandSourceProxy@23456@_N@Z
    virtual long SetPrimary(::Windows::Internal::Shell::ShareWindow::Bamo::BamoShareWindowCommandSourceProxy *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShareWindowCommandSourceProxyOwner@Bamo@ShareWindow@Shell@Internal@Windows@@QEAA@XZ
    ~ShareWindowCommandSourceProxyOwner();
};
} // namespace Windows::Internal::Shell::ShareWindow::Bamo
