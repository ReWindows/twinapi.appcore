#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
class RecentFilesActionInfoPrincipal {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RecentFilesActionInfoPrincipal@@QEAA@PEAVRecentFilesListenerServerConnection@@@Z
    RecentFilesActionInfoPrincipal(RecentFilesListenerServerConnection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshFileIdentifiers@RecentFilesActionInfoPrincipal@@UEAAJPEAVBamoRecentFilesActionInfoStub@BamoRecentFilesListener@@@Z
    virtual long RefreshFileIdentifiers(::BamoRecentFilesListener::BamoRecentFilesActionInfoStub *);
};
