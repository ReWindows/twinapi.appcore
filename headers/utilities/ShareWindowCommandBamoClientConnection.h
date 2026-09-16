#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 10 member(s).
namespace Windows::Internal::Shell::ShareWindow::Bamo {
class ShareWindowCommandBamoClientConnection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@ShareWindowCommandBamoClientConnection@Bamo@ShareWindow@Shell@Internal@Windows@@QEAAXXZ
    void Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@ShareWindowCommandBamoClientConnection@Bamo@ShareWindow@Shell@Internal@Windows@@SA?AU?$com_ptr@VShareWindowCommandBamoClientConnection@Bamo@ShareWindow@Shell@Internal@Windows@@@winrt@@PEAUIMessageSession@@_N@Z
    static WindissectOpaque Create(IMessageSession *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ShareWindowCommandBamoClientConnection@Bamo@ShareWindow@Shell@Internal@Windows@@QEAAXUWindowId@UI@6winrt@@@Z
    void Initialize(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShareWindowCommandBamoClientConnection@Bamo@ShareWindow@Shell@Internal@Windows@@UEAA@XZ
    virtual ~ShareWindowCommandBamoClientConnection();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerConnected@ShareWindowCommandBamoClientConnection@Bamo@ShareWindow@Shell@Internal@Windows@@MEAAJPEAVBamoPeer@ShareWindowCommandBamos_AutoBamos@@PEA_NPEAPEAVBamoPrincipal@2Microsoft@@@Z
    virtual long OnPeerConnected(::ShareWindowCommandBamos_AutoBamos::BamoPeer *, bool *, ::Microsoft::Bamo::BamoPrincipal * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerDisconnected@ShareWindowCommandBamoClientConnection@Bamo@ShareWindow@Shell@Internal@Windows@@MEAAJPEAVBamoPeer@ShareWindowCommandBamos_AutoBamos@@_N@Z
    virtual long OnPeerDisconnected(::ShareWindowCommandBamos_AutoBamos::BamoPeer *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBootstrapProxy@ShareWindowCommandBamoClientConnection@Bamo@ShareWindow@Shell@Internal@Windows@@MEAAJPEAVBamoProxy@2Microsoft@@@Z
    virtual long SetBootstrapProxy(::Microsoft::Bamo::BamoProxy *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ShareWindowCommandBamoClientConnection@Bamo@ShareWindow@Shell@Internal@Windows@@IEAA@XZ
    ShareWindowCommandBamoClientConnection();
};
} // namespace Windows::Internal::Shell::ShareWindow::Bamo
