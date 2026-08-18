#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 21 member(s).
namespace Windows::ApplicationModel::Preview::Holographic {
class HolographicKeyboardPlacementOverridePreviewStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@HolographicKeyboardPlacementOverridePreviewStatics@Holographic@Preview@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentView@HolographicKeyboardPlacementOverridePreviewStatics@Holographic@Preview@ApplicationModel@Windows@@UEAAJPEAPEAUIHolographicKeyboardPlacementOverridePreview@2345@@Z
    virtual long GetForCurrentView(::Windows::ApplicationModel::Preview::Holographic::IHolographicKeyboardPlacementOverridePreview * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@HolographicKeyboardPlacementOverridePreviewStatics@Holographic@Preview@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@HolographicKeyboardPlacementOverridePreviewStatics@Holographic@Preview@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@HolographicKeyboardPlacementOverridePreviewStatics@Holographic@Preview@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HolographicKeyboardPlacementOverridePreviewStatics@Holographic@Preview@ApplicationModel@Windows@@QEAA@XZ
    HolographicKeyboardPlacementOverridePreviewStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@HolographicKeyboardPlacementOverridePreviewStatics@Holographic@Preview@ApplicationModel@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@HolographicKeyboardPlacementOverridePreviewStatics@Holographic@Preview@ApplicationModel@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@HolographicKeyboardPlacementOverridePreviewStatics@Holographic@Preview@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@HolographicKeyboardPlacementOverridePreviewStatics@Holographic@Preview@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::ApplicationModel::Preview::Holographic
