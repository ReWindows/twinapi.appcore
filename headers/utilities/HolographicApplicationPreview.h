#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 25 member(s).
namespace Windows::ApplicationModel::Preview::Holographic {
class HolographicApplicationPreview {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@HolographicApplicationPreview@Holographic@Preview@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@HolographicApplicationPreview@Holographic@Preview@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@HolographicApplicationPreview@Holographic@Preview@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@HolographicApplicationPreview@Holographic@Preview@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HolographicApplicationPreview@Holographic@Preview@ApplicationModel@Windows@@QEAA@XZ
    HolographicApplicationPreview();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@HolographicApplicationPreview@Holographic@Preview@ApplicationModel@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@HolographicApplicationPreview@Holographic@Preview@ApplicationModel@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCurrentViewPresentedOnHolographicDisplay@HolographicApplicationPreview@Holographic@Preview@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long IsCurrentViewPresentedOnHolographicDisplay(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHolographicActivation@HolographicApplicationPreview@Holographic@Preview@ApplicationModel@Windows@@UEAAJPEAUIActivatedEventArgs@Activation@45@PEAE@Z
    virtual long IsHolographicActivation(::Windows::ApplicationModel::Activation::IActivatedEventArgs *, unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@HolographicApplicationPreview@Holographic@Preview@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@HolographicApplicationPreview@Holographic@Preview@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::ApplicationModel::Preview::Holographic
