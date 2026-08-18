#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 12 member(s).
namespace Windows::Internal::Shell::ShareWindow::Bamo {
class BamoShareWindowCommandSourcePrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoShareWindowCommandSourcePrincipal@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BamoShareWindowCommandSourcePrincipal@Bamo@ShareWindow@Shell@Internal@Windows@@QEAA@PEAVBamoShareWindowCommandSourcePrincipalOwner@12345@PEAVBamoConnection@ShareWindowCommandBamos_AutoBamos@@@Z
    BamoShareWindowCommandSourcePrincipal(::Windows::Internal::Shell::ShareWindow::Bamo::BamoShareWindowCommandSourcePrincipalOwner *, ::ShareWindowCommandBamos_AutoBamos::BamoConnection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastOnCommandInvoked@BamoShareWindowCommandSourcePrincipal@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAJAEBUWindowId@UI@6winrt@@W4ShareWindowCommand@4869@AEBU_GUID@@@Z
    virtual long BroadcastOnCommandInvoked(WindissectOpaque const &, int, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastSetPrimary@BamoShareWindowCommandSourcePrincipal@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAJ_N@Z
    virtual long BroadcastSetPrimary(bool);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoShareWindowCommandSourcePrincipal@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoShareWindowCommandSourcePrincipal@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoShareWindowCommandSourcePrincipal@Bamo@ShareWindow@Shell@Internal@Windows@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};
} // namespace Windows::Internal::Shell::ShareWindow::Bamo
