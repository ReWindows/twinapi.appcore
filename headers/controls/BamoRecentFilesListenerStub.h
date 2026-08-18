#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 10 member(s).
namespace BamoRecentFilesListener {
class BamoRecentFilesListenerStub {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoRecentFilesListenerStub@BamoRecentFilesListener@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoRecentFilesListenerStub@BamoRecentFilesListener@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecentFilesActionInvoked@BamoRecentFilesListenerStub@BamoRecentFilesListener@@UEAAJPEAVBamoRecentFilesActionInfoPrincipal@2@@Z
    virtual long RecentFilesActionInvoked(::BamoRecentFilesListener::BamoRecentFilesActionInfoPrincipal *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoRecentFilesListenerStub@BamoRecentFilesListener@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoRecentFilesListenerStub@BamoRecentFilesListener@@EEBAPEAVBamoStubImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoStubImpl * GetImpl() const;
};
} // namespace BamoRecentFilesListener
