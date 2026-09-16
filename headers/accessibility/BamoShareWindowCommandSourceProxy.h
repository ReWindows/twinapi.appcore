#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 17 member(s).
namespace Windows::Internal::Shell::ShareWindow::Bamo {
class BamoShareWindowCommandSourceProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoShareWindowCommandSourceProxy@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeCommandSource@BamoShareWindowCommandSourceProxy@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAJAEBUWindowId@UI@6winrt@@_N@Z
    virtual long InitializeCommandSource(WindissectOpaque const &, bool);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoShareWindowCommandSourceProxy@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoShareWindowCommandSourceProxy@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportCommandChanged@BamoShareWindowCommandSourceProxy@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAJXZ
    virtual long ReportCommandChanged();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@BamoShareWindowCommandSourceProxy@Bamo@ShareWindow@Shell@Internal@Windows@@MEAAJXZ
    virtual long OnConnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@BamoShareWindowCommandSourceProxy@Bamo@ShareWindow@Shell@Internal@Windows@@MEAAJXZ
    virtual long OnDisconnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshed@BamoShareWindowCommandSourceProxy@Bamo@ShareWindow@Shell@Internal@Windows@@MEAAJXZ
    virtual long OnPropertiesRefreshed();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoShareWindowCommandSourceProxy@Bamo@ShareWindow@Shell@Internal@Windows@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoShareWindowCommandSourceProxy@Bamo@ShareWindow@Shell@Internal@Windows@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoShareWindowCommandSourceProxy@Bamo@ShareWindow@Shell@Internal@Windows@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoShareWindowCommandSourceProxy@Bamo@ShareWindow@Shell@Internal@Windows@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
} // namespace Windows::Internal::Shell::ShareWindow::Bamo
