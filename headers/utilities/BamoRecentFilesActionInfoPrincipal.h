#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 32 member(s).
namespace BamoRecentFilesListener {
class BamoRecentFilesActionInfoPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoRecentFilesActionInfoPrincipal@BamoRecentFilesListener@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAction@BamoRecentFilesActionInfoPrincipal@BamoRecentFilesListener@@UEAA?AW4RecentFilesAction@StartScreen@UI@Internal@Windows@winrt@@XZ
    virtual int GetAction();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActionInvokingProcessId@BamoRecentFilesActionInfoPrincipal@BamoRecentFilesListener@@UEAAIXZ
    virtual unsigned int GetActionInvokingProcessId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentUri@BamoRecentFilesActionInfoPrincipal@BamoRecentFilesListener@@UEAAPEBGXZ
    virtual unsigned short const * GetContentUri();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFilePath@BamoRecentFilesActionInfoPrincipal@BamoRecentFilesListener@@UEAAPEBGXZ
    virtual unsigned short const * GetFilePath();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectIdentifier@BamoRecentFilesActionInfoPrincipal@BamoRecentFilesListener@@UEAAAEBU_GUID@@XZ
    virtual _GUID const & GetObjectIdentifier();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessFilePath@BamoRecentFilesActionInfoPrincipal@BamoRecentFilesListener@@UEAAPEBGXZ
    virtual unsigned short const * GetProcessFilePath();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRevision@BamoRecentFilesActionInfoPrincipal@BamoRecentFilesListener@@UEAA_KXZ
    virtual uint64_t GetRevision();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellIdList@BamoRecentFilesActionInfoPrincipal@BamoRecentFilesListener@@UEAAXPEAPEBEPEAI@Z
    virtual void GetShellIdList(unsigned char const * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVolumeIdentifier@BamoRecentFilesActionInfoPrincipal@BamoRecentFilesListener@@UEAAAEBU_GUID@@XZ
    virtual _GUID const & GetVolumeIdentifier();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoRecentFilesActionInfoPrincipal@BamoRecentFilesListener@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoRecentFilesActionInfoPrincipal@BamoRecentFilesListener@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAction@BamoRecentFilesActionInfoPrincipal@BamoRecentFilesListener@@UEAAXW4RecentFilesAction@StartScreen@UI@Internal@Windows@winrt@@@Z
    virtual void SetAction(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActionInvokingProcessId@BamoRecentFilesActionInfoPrincipal@BamoRecentFilesListener@@UEAAXI@Z
    virtual void SetActionInvokingProcessId(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentUri@BamoRecentFilesActionInfoPrincipal@BamoRecentFilesListener@@UEAAJPEBG@Z
    virtual long SetContentUri(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFilePath@BamoRecentFilesActionInfoPrincipal@BamoRecentFilesListener@@UEAAJPEBG@Z
    virtual long SetFilePath(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetObjectIdentifier@BamoRecentFilesActionInfoPrincipal@BamoRecentFilesListener@@UEAAXAEBU_GUID@@@Z
    virtual void SetObjectIdentifier(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProcessFilePath@BamoRecentFilesActionInfoPrincipal@BamoRecentFilesListener@@UEAAJPEBG@Z
    virtual long SetProcessFilePath(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRevision@BamoRecentFilesActionInfoPrincipal@BamoRecentFilesListener@@UEAAX_K@Z
    virtual void SetRevision(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShellIdList@BamoRecentFilesActionInfoPrincipal@BamoRecentFilesListener@@UEAAJPEBEI@Z
    virtual long SetShellIdList(unsigned char const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVolumeIdentifier@BamoRecentFilesActionInfoPrincipal@BamoRecentFilesListener@@UEAAXAEBU_GUID@@@Z
    virtual void SetVolumeIdentifier(_GUID const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoRecentFilesActionInfoPrincipal@BamoRecentFilesListener@@MEAAJPEAVBamoPeer@RecentFilesListener_AutoBamos@@PEAPEAVBamoRecentFilesActionInfoStub@2@@Z
    virtual long AllocateStubUnderLock(::RecentFilesListener_AutoBamos::BamoPeer *, ::BamoRecentFilesListener::BamoRecentFilesActionInfoStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoRecentFilesActionInfoPrincipal@BamoRecentFilesListener@@MEAAJPEAVBamoRecentFilesActionInfoStub@2@@Z
    virtual long InitializeProxyUnderLock(::BamoRecentFilesListener::BamoRecentFilesActionInfoStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoRecentFilesActionInfoPrincipal@BamoRecentFilesListener@@MEAAJPEAVBamoRecentFilesActionInfoStub@2@@Z
    virtual long OnPropertiesRefreshed(::BamoRecentFilesListener::BamoRecentFilesActionInfoStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoRecentFilesActionInfoPrincipal@BamoRecentFilesListener@@MEAAJPEAVBamoRecentFilesActionInfoStub@2@@Z
    virtual long OnStubConnectedUnderLock(::BamoRecentFilesListener::BamoRecentFilesActionInfoStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoRecentFilesActionInfoPrincipal@BamoRecentFilesListener@@MEAAJPEAVBamoRecentFilesActionInfoStub@2@@Z
    virtual long OnStubDisconnected(::BamoRecentFilesListener::BamoRecentFilesActionInfoStub *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoRecentFilesActionInfoPrincipal@BamoRecentFilesListener@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};
} // namespace BamoRecentFilesListener
