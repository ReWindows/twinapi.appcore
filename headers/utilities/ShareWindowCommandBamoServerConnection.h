#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 8 member(s).
namespace Windows::Internal::Shell::ShareWindow::Bamo {
class ShareWindowCommandBamoServerConnection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@ShareWindowCommandBamoServerConnection@Bamo@ShareWindow@Shell@Internal@Windows@@QEAAXXZ
    void Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@ShareWindowCommandBamoServerConnection@Bamo@ShareWindow@Shell@Internal@Windows@@SA?AU?$com_ptr@VShareWindowCommandBamoServerConnection@Bamo@ShareWindow@Shell@Internal@Windows@@@winrt@@PEAUIMessageSession@@PEAVBamoShareWindowCommandSourcePrincipalOwner@23456@_N@Z
    static WindissectOpaque Create(IMessageSession *, ::Windows::Internal::Shell::ShareWindow::Bamo::BamoShareWindowCommandSourcePrincipalOwner *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShareWindowCommandBamoServerConnection@Bamo@ShareWindow@Shell@Internal@Windows@@UEAA@XZ
    virtual ~ShareWindowCommandBamoServerConnection();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerConnected@ShareWindowCommandBamoServerConnection@Bamo@ShareWindow@Shell@Internal@Windows@@MEAAJPEAVBamoPeer@ShareWindowCommandBamos_AutoBamos@@PEA_NPEAPEAVBamoPrincipal@2Microsoft@@@Z
    virtual long OnPeerConnected(::ShareWindowCommandBamos_AutoBamos::BamoPeer *, bool *, ::Microsoft::Bamo::BamoPrincipal * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerDisconnected@ShareWindowCommandBamoServerConnection@Bamo@ShareWindow@Shell@Internal@Windows@@MEAAJPEAVBamoPeer@ShareWindowCommandBamos_AutoBamos@@_N@Z
    virtual long OnPeerDisconnected(::ShareWindowCommandBamos_AutoBamos::BamoPeer *, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ShareWindowCommandBamoServerConnection@Bamo@ShareWindow@Shell@Internal@Windows@@AEAAXPEAVBamoShareWindowCommandSourcePrincipalOwner@23456@@Z
    void Initialize(::Windows::Internal::Shell::ShareWindow::Bamo::BamoShareWindowCommandSourcePrincipalOwner *);
};
} // namespace Windows::Internal::Shell::ShareWindow::Bamo
