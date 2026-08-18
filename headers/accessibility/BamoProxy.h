#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace Microsoft::Bamo {
class BamoProxy {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsReady@BamoProxy@Bamo@Microsoft@@QEBA_NXZ
    bool GetIsReady() const;
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnConnected@BamoProxy@Bamo@Microsoft@@MEAAJXZ
    virtual long OnConnected();
    // Category: Method | Source: PE Export
    // Symbol: ?OnDisconnected@BamoProxy@Bamo@Microsoft@@MEAAJXZ
    virtual long OnDisconnected();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoProxy@Bamo@Microsoft@@MEAAJXZ
    virtual long OnPropertiesRefreshed();
};
} // namespace Microsoft::Bamo
