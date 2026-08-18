#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 9 member(s).
namespace BamoRecentFilesListener {
class BamoRecentFilesActionInfoStub {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoRecentFilesActionInfoStub@BamoRecentFilesListener@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoRecentFilesActionInfoStub@BamoRecentFilesListener@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoRecentFilesActionInfoStub@BamoRecentFilesListener@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoRecentFilesActionInfoStub@BamoRecentFilesListener@@EEBAPEAVBamoStubImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoStubImpl * GetImpl() const;
};
} // namespace BamoRecentFilesListener
