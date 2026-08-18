#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 12 member(s).
namespace RecentFilesListener_AutoBamos {
class BamoConnection {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BamoConnection@RecentFilesListener_AutoBamos@@QEAA@XZ
    BamoConnection();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocatePeer@BamoConnection@RecentFilesListener_AutoBamos@@MEAAJPEAPEAVBamoPeer@2@@Z
    virtual long AllocatePeer(::RecentFilesListener_AutoBamos::BamoPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerConnected@BamoConnection@RecentFilesListener_AutoBamos@@MEAAJPEAVBamoPeer@2@PEA_NPEAPEAVBamoPrincipal@Bamo@Microsoft@@@Z
    virtual long OnPeerConnected(::RecentFilesListener_AutoBamos::BamoPeer *, bool *, ::Microsoft::Bamo::BamoPrincipal * *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPeerDisconnected@BamoConnection@RecentFilesListener_AutoBamos@@MEAAJPEAVBamoPeer@2@_N@Z
    virtual long OnPeerDisconnected(::RecentFilesListener_AutoBamos::BamoPeer *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerRequestsConnect@BamoConnection@RecentFilesListener_AutoBamos@@MEAAJIPEAIPEAPEAUMsgString@@@Z
    virtual long OnPeerRequestsConnect(unsigned int, unsigned int *, MsgString * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoConnection@RecentFilesListener_AutoBamos@@MEAA@XZ
    virtual ~BamoConnection();
private:
    // Category: Method | Source: PE Export
    // Symbol: ?Do_not_derive_from_BaseBamoConnection_directly@BamoConnection@RecentFilesListener_AutoBamos@@EEBAXXZ
    virtual void Do_not_derive_from_BaseBamoConnection_directly() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoConnection@RecentFilesListener_AutoBamos@@EEBAPEAVBaseBamoConnectionImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BaseBamoConnectionImpl * GetImpl() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProtocolId@BamoConnection@RecentFilesListener_AutoBamos@@EEBAAEBU_GUID@@XZ
    virtual _GUID const & GetProtocolId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBootstrapProxyCallout@BamoConnection@RecentFilesListener_AutoBamos@@EEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z
    virtual long SetBootstrapProxyCallout(::Microsoft::Bamo::BamoProxy *);
};
} // namespace RecentFilesListener_AutoBamos
