#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 14 member(s).
namespace Windows::Internal::Shell::ShareWindow::Bamo::BamoImpl {
class BamoShareWindowCommandSourceProxyImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoShareWindowCommandSourceProxyImpl@BamoImpl@Bamo@ShareWindow@Shell@Internal@Windows@@UEBAPEAVBamoProxy@3Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeCommandSource@BamoShareWindowCommandSourceProxyImpl@BamoImpl@Bamo@ShareWindow@Shell@Internal@Windows@@QEAAJAEBUWindowId@UI@7winrt@@_N@Z
    long InitializeCommandSource(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommandRequested@BamoShareWindowCommandSourceProxyImpl@BamoImpl@Bamo@ShareWindow@Shell@Internal@Windows@@QEAAJIPEBUWindowId@UI@7winrt@@@Z
    long OnCommandRequested(unsigned int, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFindSharedWindows@BamoShareWindowCommandSourceProxyImpl@BamoImpl@Bamo@ShareWindow@Shell@Internal@Windows@@QEAAJIPEBUWindowId@UI@7winrt@@IPEBU_GUID@@@Z
    long OnFindSharedWindows(unsigned int, WindissectOpaque const *, unsigned int, _GUID const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoShareWindowCommandSourceProxyImpl@BamoImpl@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOnCommandRequestedCompleted@BamoShareWindowCommandSourceProxyImpl@BamoImpl@Bamo@ShareWindow@Shell@Internal@Windows@@QEAAJIW4ShareWindowCommand@5UI@7winrt@@@Z
    long OnOnCommandRequestedCompleted(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOnFindSharedWindowsCompleted@BamoShareWindowCommandSourceProxyImpl@BamoImpl@Bamo@ShareWindow@Shell@Internal@Windows@@QEAAJIPEBUWindowId@UI@7winrt@@I@Z
    long OnOnFindSharedWindowsCompleted(unsigned int, WindissectOpaque const *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?PushStateToPrincipal@BamoShareWindowCommandSourceProxyImpl@BamoImpl@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoShareWindowCommandSourceProxyImpl@BamoImpl@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PE Export
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoShareWindowCommandSourceProxyImpl@BamoImpl@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportCommandChanged@BamoShareWindowCommandSourceProxyImpl@BamoImpl@Bamo@ShareWindow@Shell@Internal@Windows@@QEAAJXZ
    long ReportCommandChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoShareWindowCommandSourceProxyImpl@BamoImpl@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
};
} // namespace Windows::Internal::Shell::ShareWindow::Bamo::BamoImpl
