#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace Windows::Internal::Shell::ShareWindow::Bamo {
class BamoShareWindowCommandSourcePrincipalOwner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoShareWindowCommandSourcePrincipalOwner@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAJPEAVBamoShareWindowCommandSourcePrincipal@23456@PEAVBamoPeer@ShareWindowCommandBamos_AutoBamos@@PEAPEAVBamoShareWindowCommandSourceStub@23456@@Z
    virtual long AllocateStubUnderLock(::Windows::Internal::Shell::ShareWindow::Bamo::BamoShareWindowCommandSourcePrincipal *, ::ShareWindowCommandBamos_AutoBamos::BamoPeer *, ::Windows::Internal::Shell::ShareWindow::Bamo::BamoShareWindowCommandSourceStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoShareWindowCommandSourcePrincipalOwner@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAJPEAVBamoShareWindowCommandSourcePrincipal@23456@PEAVBamoShareWindowCommandSourceStub@23456@@Z
    virtual long InitializeProxyUnderLock(::Windows::Internal::Shell::ShareWindow::Bamo::BamoShareWindowCommandSourcePrincipal *, ::Windows::Internal::Shell::ShareWindow::Bamo::BamoShareWindowCommandSourceStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoShareWindowCommandSourcePrincipalOwner@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAJPEAVBamoShareWindowCommandSourcePrincipal@23456@PEAVBamoShareWindowCommandSourceStub@23456@@Z
    virtual long OnPropertiesRefreshed(::Windows::Internal::Shell::ShareWindow::Bamo::BamoShareWindowCommandSourcePrincipal *, ::Windows::Internal::Shell::ShareWindow::Bamo::BamoShareWindowCommandSourceStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnWeakReferenceReleased@BamoShareWindowCommandSourcePrincipalOwner@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAJPEAVBamoShareWindowCommandSourcePrincipal@23456@@Z
    virtual long OnWeakReferenceReleased(::Windows::Internal::Shell::ShareWindow::Bamo::BamoShareWindowCommandSourcePrincipal *);
};
} // namespace Windows::Internal::Shell::ShareWindow::Bamo
