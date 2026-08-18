#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 6 member(s).
class RecentFilesListenerServerConnection {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RecentFilesListenerServerConnection@@QEAA@XZ
    RecentFilesListenerServerConnection();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RecentFilesListenerServerConnection@@UEAA@XZ
    virtual ~RecentFilesListenerServerConnection();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@RecentFilesListenerServerConnection@@MEAAJXZ
    virtual long OnDisconnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerConnected@RecentFilesListenerServerConnection@@MEAAJPEAVBamoPeer@RecentFilesListener_AutoBamos@@PEA_NPEAPEAVBamoPrincipal@Bamo@Microsoft@@@Z
    virtual long OnPeerConnected(::RecentFilesListener_AutoBamos::BamoPeer *, bool *, ::Microsoft::Bamo::BamoPrincipal * *);
};
