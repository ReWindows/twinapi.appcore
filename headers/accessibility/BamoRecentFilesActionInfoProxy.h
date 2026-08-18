#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 38 member(s).
namespace BamoRecentFilesListener {
class BamoRecentFilesActionInfoProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoRecentFilesActionInfoProxy@BamoRecentFilesListener@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAction@BamoRecentFilesActionInfoProxy@BamoRecentFilesListener@@UEAA?AW4RecentFilesAction@StartScreen@UI@Internal@Windows@winrt@@XZ
    virtual int GetAction();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActionInvokingProcessId@BamoRecentFilesActionInfoProxy@BamoRecentFilesListener@@UEAAIXZ
    virtual unsigned int GetActionInvokingProcessId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentUri@BamoRecentFilesActionInfoProxy@BamoRecentFilesListener@@UEAAPEBGXZ
    virtual unsigned short const * GetContentUri();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFilePath@BamoRecentFilesActionInfoProxy@BamoRecentFilesListener@@UEAAPEBGXZ
    virtual unsigned short const * GetFilePath();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectIdentifier@BamoRecentFilesActionInfoProxy@BamoRecentFilesListener@@UEAAAEBU_GUID@@XZ
    virtual _GUID const & GetObjectIdentifier();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessFilePath@BamoRecentFilesActionInfoProxy@BamoRecentFilesListener@@UEAAPEBGXZ
    virtual unsigned short const * GetProcessFilePath();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRevision@BamoRecentFilesActionInfoProxy@BamoRecentFilesListener@@UEAA_KXZ
    virtual uint64_t GetRevision();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellIdList@BamoRecentFilesActionInfoProxy@BamoRecentFilesListener@@UEAAXPEAPEBEPEAI@Z
    virtual void GetShellIdList(unsigned char const * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVolumeIdentifier@BamoRecentFilesActionInfoProxy@BamoRecentFilesListener@@UEAAAEBU_GUID@@XZ
    virtual _GUID const & GetVolumeIdentifier();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoRecentFilesActionInfoProxy@BamoRecentFilesListener@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshFileIdentifiers@BamoRecentFilesActionInfoProxy@BamoRecentFilesListener@@UEAAJXZ
    virtual long RefreshFileIdentifiers();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoRecentFilesActionInfoProxy@BamoRecentFilesListener@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnActionChanged@BamoRecentFilesActionInfoProxy@BamoRecentFilesListener@@MEAAJXZ
    virtual long OnActionChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnActionChanging@BamoRecentFilesActionInfoProxy@BamoRecentFilesListener@@MEAAJW4RecentFilesAction@StartScreen@UI@Internal@Windows@winrt@@@Z
    virtual long OnActionChanging(int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnActionInvokingProcessIdChanged@BamoRecentFilesActionInfoProxy@BamoRecentFilesListener@@MEAAJXZ
    virtual long OnActionInvokingProcessIdChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnActionInvokingProcessIdChanging@BamoRecentFilesActionInfoProxy@BamoRecentFilesListener@@MEAAJI@Z
    virtual long OnActionInvokingProcessIdChanging(unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnContentUriChanged@BamoRecentFilesActionInfoProxy@BamoRecentFilesListener@@MEAAJXZ
    virtual long OnContentUriChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnContentUriChanging@BamoRecentFilesActionInfoProxy@BamoRecentFilesListener@@MEAAJPEBG@Z
    virtual long OnContentUriChanging(unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnFilePathChanged@BamoRecentFilesActionInfoProxy@BamoRecentFilesListener@@MEAAJXZ
    virtual long OnFilePathChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnFilePathChanging@BamoRecentFilesActionInfoProxy@BamoRecentFilesListener@@MEAAJPEBG@Z
    virtual long OnFilePathChanging(unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnObjectIdentifierChanged@BamoRecentFilesActionInfoProxy@BamoRecentFilesListener@@MEAAJXZ
    virtual long OnObjectIdentifierChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnObjectIdentifierChanging@BamoRecentFilesActionInfoProxy@BamoRecentFilesListener@@MEAAJAEBU_GUID@@@Z
    virtual long OnObjectIdentifierChanging(_GUID const &);
    // Category: Method | Source: PE Export
    // Symbol: ?OnProcessFilePathChanged@BamoRecentFilesActionInfoProxy@BamoRecentFilesListener@@MEAAJXZ
    virtual long OnProcessFilePathChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnProcessFilePathChanging@BamoRecentFilesActionInfoProxy@BamoRecentFilesListener@@MEAAJPEBG@Z
    virtual long OnProcessFilePathChanging(unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnRevisionChanged@BamoRecentFilesActionInfoProxy@BamoRecentFilesListener@@MEAAJXZ
    virtual long OnRevisionChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnRevisionChanging@BamoRecentFilesActionInfoProxy@BamoRecentFilesListener@@MEAAJ_K@Z
    virtual long OnRevisionChanging(uint64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?OnShellIdListChanged@BamoRecentFilesActionInfoProxy@BamoRecentFilesListener@@MEAAJXZ
    virtual long OnShellIdListChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnShellIdListChanging@BamoRecentFilesActionInfoProxy@BamoRecentFilesListener@@MEAAJPEBEI@Z
    virtual long OnShellIdListChanging(unsigned char const *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnVolumeIdentifierChanged@BamoRecentFilesActionInfoProxy@BamoRecentFilesListener@@MEAAJXZ
    virtual long OnVolumeIdentifierChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnVolumeIdentifierChanging@BamoRecentFilesActionInfoProxy@BamoRecentFilesListener@@MEAAJAEBU_GUID@@@Z
    virtual long OnVolumeIdentifierChanging(_GUID const &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoRecentFilesActionInfoProxy@BamoRecentFilesListener@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoRecentFilesActionInfoProxy@BamoRecentFilesListener@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoRecentFilesActionInfoProxy@BamoRecentFilesListener@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoRecentFilesActionInfoProxy@BamoRecentFilesListener@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
} // namespace BamoRecentFilesListener
