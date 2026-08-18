#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 7 member(s).
namespace BamoImpl::ShareWindowCommandBamos_AutoBamos {
class BamoConnectionImpl {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocatePeerThunk@BamoConnectionImpl@ShareWindowCommandBamos_AutoBamos@BamoImpl@@MEAAJPEAPEAVBaseBamoPeer@Bamo@Microsoft@@@Z
    virtual long AllocatePeerThunk(::Microsoft::Bamo::BaseBamoPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDefaultPlaceholderPeer@BamoConnectionImpl@ShareWindowCommandBamos_AutoBamos@BamoImpl@@MEAAJPEAPEAVBaseBamoPeer@Bamo@Microsoft@@@Z
    virtual long InitializeDefaultPlaceholderPeer(::Microsoft::Bamo::BaseBamoPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerConnectedThunk@BamoConnectionImpl@ShareWindowCommandBamos_AutoBamos@BamoImpl@@MEAAJPEAVBaseBamoPeerImpl@3Microsoft@@PEA_NPEAPEAVBamoPrincipal@Bamo@5@@Z
    virtual long OnPeerConnectedThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, bool *, ::Microsoft::Bamo::BamoPrincipal * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerDisconnectedThunk@BamoConnectionImpl@ShareWindowCommandBamos_AutoBamos@BamoImpl@@MEAAJPEAVBaseBamoPeerImpl@3Microsoft@@_N@Z
    virtual long OnPeerDisconnectedThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerRequestsConnectThunk@BamoConnectionImpl@ShareWindowCommandBamos_AutoBamos@BamoImpl@@MEAAJIPEAIPEAPEAUMsgString@@@Z
    virtual long OnPeerRequestsConnectThunk(unsigned int, unsigned int *, MsgString * *);
};
} // namespace BamoImpl::ShareWindowCommandBamos_AutoBamos
