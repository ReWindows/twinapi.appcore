#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 21 member(s).
namespace Windows::ApplicationModel::Holographic {
class HolographicKeyboardStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@HolographicKeyboardStatics@Holographic@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefault@HolographicKeyboardStatics@Holographic@ApplicationModel@Windows@@UEAAJPEAPEAUIHolographicKeyboard@234@@Z
    virtual long GetDefault(::Windows::ApplicationModel::Holographic::IHolographicKeyboard * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@HolographicKeyboardStatics@Holographic@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@HolographicKeyboardStatics@Holographic@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@HolographicKeyboardStatics@Holographic@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HolographicKeyboardStatics@Holographic@ApplicationModel@Windows@@QEAA@XZ
    HolographicKeyboardStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@HolographicKeyboardStatics@Holographic@ApplicationModel@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@HolographicKeyboardStatics@Holographic@ApplicationModel@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@HolographicKeyboardStatics@Holographic@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@HolographicKeyboardStatics@Holographic@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::ApplicationModel::Holographic
