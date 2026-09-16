#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 19 member(s).
namespace BamoRecentFilesListener::BamoImpl {
class BamoRecentFilesActionInfoProxyImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoRecentFilesActionInfoProxyImpl@BamoImpl@BamoRecentFilesListener@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoRecentFilesActionInfoProxyImpl@BamoImpl@BamoRecentFilesListener@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?PushStateToPrincipal@BamoRecentFilesActionInfoProxyImpl@BamoImpl@BamoRecentFilesListener@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoRecentFilesActionInfoProxyImpl@BamoImpl@BamoRecentFilesListener@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PE Export
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoRecentFilesActionInfoProxyImpl@BamoImpl@BamoRecentFilesListener@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshFileIdentifiers@BamoRecentFilesActionInfoProxyImpl@BamoImpl@BamoRecentFilesListener@@QEAAJXZ
    long RefreshFileIdentifiers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAction@BamoRecentFilesActionInfoProxyImpl@BamoImpl@BamoRecentFilesListener@@QEAAJ_NW4RecentFilesAction@StartScreen@UI@Internal@Windows@winrt@@@Z
    long UpdateAction(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateActionInvokingProcessId@BamoRecentFilesActionInfoProxyImpl@BamoImpl@BamoRecentFilesListener@@QEAAJ_NI@Z
    long UpdateActionInvokingProcessId(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateContentUri@BamoRecentFilesActionInfoProxyImpl@BamoImpl@BamoRecentFilesListener@@QEAAJ_NPEBG@Z
    long UpdateContentUri(bool, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFilePath@BamoRecentFilesActionInfoProxyImpl@BamoImpl@BamoRecentFilesListener@@QEAAJ_NPEBG@Z
    long UpdateFilePath(bool, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateObjectIdentifier@BamoRecentFilesActionInfoProxyImpl@BamoImpl@BamoRecentFilesListener@@QEAAJ_NPEBU_GUID@@@Z
    long UpdateObjectIdentifier(bool, _GUID const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateProcessFilePath@BamoRecentFilesActionInfoProxyImpl@BamoImpl@BamoRecentFilesListener@@QEAAJ_NPEBG@Z
    long UpdateProcessFilePath(bool, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRevision@BamoRecentFilesActionInfoProxyImpl@BamoImpl@BamoRecentFilesListener@@QEAAJ_N_K@Z
    long UpdateRevision(bool, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateShellIdList@BamoRecentFilesActionInfoProxyImpl@BamoImpl@BamoRecentFilesListener@@QEAAJ_NPEBEI@Z
    long UpdateShellIdList(bool, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoRecentFilesActionInfoProxyImpl@BamoImpl@BamoRecentFilesListener@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVolumeIdentifier@BamoRecentFilesActionInfoProxyImpl@BamoImpl@BamoRecentFilesListener@@QEAAJ_NPEBU_GUID@@@Z
    long UpdateVolumeIdentifier(bool, _GUID const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoRecentFilesActionInfoProxyImpl@BamoImpl@BamoRecentFilesListener@@UEAA@XZ
    virtual ~BamoRecentFilesActionInfoProxyImpl();
};
} // namespace BamoRecentFilesListener::BamoImpl
