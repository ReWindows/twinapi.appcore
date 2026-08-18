#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace ShareWindowCommandBamos_AutoBamos {
class BamoPeer {
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoPeer@ShareWindowCommandBamos_AutoBamos@@EEBAPEAVBaseBamoPeerImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BaseBamoPeerImpl * GetImpl() const;
    // Category: Method | Source: PE Export
    // Symbol: ?LogSetBootstrapProxy@BamoPeer@ShareWindowCommandBamos_AutoBamos@@EEBAXI@Z
    virtual void LogSetBootstrapProxy(unsigned int) const;
};
} // namespace ShareWindowCommandBamos_AutoBamos
