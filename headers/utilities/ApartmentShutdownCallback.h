#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 5 member(s).
namespace Windows::ApplicationModel::Core {
class ApartmentShutdownCallback {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ApartmentShutdownCallback@Core@ApplicationModel@Windows@@QEAA@XZ
    ApartmentShutdownCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUninitialize@ApartmentShutdownCallback@Core@ApplicationModel@Windows@@UEAAX_K@Z
    virtual void OnUninitialize(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ApartmentShutdownCallback@Core@ApplicationModel@Windows@@QEAAJPEAVCoreApplication@234@@Z
    long RuntimeClassInitialize(::Windows::ApplicationModel::Core::CoreApplication *);
};
} // namespace Windows::ApplicationModel::Core
