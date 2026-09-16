#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 11 member(s).
namespace Windows::Internal::Shell::ShareWindow::Bamo::BamoImpl {
class BamoShareWindowCommandSourceStubImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoShareWindowCommandSourceStubImpl@BamoImpl@Bamo@ShareWindow@Shell@Internal@Windows@@UEBAPEAVBamoStub@3Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoStub * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProxyUnderLockThunk@BamoShareWindowCommandSourceStubImpl@BamoImpl@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAJXZ
    virtual long InitializeProxyUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommandInvoked@BamoShareWindowCommandSourceStubImpl@BamoImpl@Bamo@ShareWindow@Shell@Internal@Windows@@QEAAJAEBUWindowId@UI@7winrt@@W4ShareWindowCommand@597winrt@@AEBU_GUID@@@Z
    long OnCommandInvoked(WindissectOpaque const &, int, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommandRequested@BamoShareWindowCommandSourceStubImpl@BamoImpl@Bamo@ShareWindow@Shell@Internal@Windows@@QEAAJIAEBUWindowId@UI@7winrt@@@Z
    long OnCommandRequested(unsigned int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedUnderLockThunk@BamoShareWindowCommandSourceStubImpl@BamoImpl@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAJXZ
    virtual long OnConnectedUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedThunk@BamoShareWindowCommandSourceStubImpl@BamoImpl@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAJXZ
    virtual long OnDisconnectedThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFindSharedWindows@BamoShareWindowCommandSourceStubImpl@BamoImpl@Bamo@ShareWindow@Shell@Internal@Windows@@QEAAJIPEBUWindowId@UI@7winrt@@IAEBU_GUID@@@Z
    long OnFindSharedWindows(unsigned int, WindissectOpaque const *, unsigned int, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedThunk@BamoShareWindowCommandSourceStubImpl@BamoImpl@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAJXZ
    virtual long OnPropertiesRefreshedThunk();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrimary@BamoShareWindowCommandSourceStubImpl@BamoImpl@Bamo@ShareWindow@Shell@Internal@Windows@@QEAAJ_N@Z
    long SetPrimary(bool);
};
} // namespace Windows::Internal::Shell::ShareWindow::Bamo::BamoImpl
