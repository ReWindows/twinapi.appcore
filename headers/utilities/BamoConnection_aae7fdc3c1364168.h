#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 12 member(s).
namespace ShareWindowCommandBamos_AutoBamos {
class BamoConnection {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BamoConnection@ShareWindowCommandBamos_AutoBamos@@QEAA@XZ
    BamoConnection();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocatePeer@BamoConnection@ShareWindowCommandBamos_AutoBamos@@MEAAJPEAPEAVBamoPeer@2@@Z
    virtual long AllocatePeer(::ShareWindowCommandBamos_AutoBamos::BamoPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerConnected@BamoConnection@ShareWindowCommandBamos_AutoBamos@@MEAAJPEAVBamoPeer@2@PEA_NPEAPEAVBamoPrincipal@Bamo@Microsoft@@@Z
    virtual long OnPeerConnected(::ShareWindowCommandBamos_AutoBamos::BamoPeer *, bool *, ::Microsoft::Bamo::BamoPrincipal * *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPeerDisconnected@BamoConnection@ShareWindowCommandBamos_AutoBamos@@MEAAJPEAVBamoPeer@2@_N@Z
    virtual long OnPeerDisconnected(::ShareWindowCommandBamos_AutoBamos::BamoPeer *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerRequestsConnect@BamoConnection@ShareWindowCommandBamos_AutoBamos@@MEAAJIPEAIPEAPEAUMsgString@@@Z
    virtual long OnPeerRequestsConnect(unsigned int, unsigned int *, MsgString * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoConnection@ShareWindowCommandBamos_AutoBamos@@MEAA@XZ
    virtual ~BamoConnection();
private:
    // Category: Method | Source: PE Export
    // Symbol: ?Do_not_derive_from_BaseBamoConnection_directly@BamoConnection@ShareWindowCommandBamos_AutoBamos@@EEBAXXZ
    virtual void Do_not_derive_from_BaseBamoConnection_directly() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoConnection@ShareWindowCommandBamos_AutoBamos@@EEBAPEAVBaseBamoConnectionImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BaseBamoConnectionImpl * GetImpl() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProtocolId@BamoConnection@ShareWindowCommandBamos_AutoBamos@@EEBAAEBU_GUID@@XZ
    virtual _GUID const & GetProtocolId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBootstrapProxyCallout@BamoConnection@ShareWindowCommandBamos_AutoBamos@@EEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z
    virtual long SetBootstrapProxyCallout(::Microsoft::Bamo::BamoProxy *);
};
} // namespace ShareWindowCommandBamos_AutoBamos
