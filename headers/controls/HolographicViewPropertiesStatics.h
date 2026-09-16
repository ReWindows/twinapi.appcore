#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 22 member(s).
namespace Windows::Internal::Holographic::UI {
class HolographicViewPropertiesStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@HolographicViewPropertiesStatics@UI@Holographic@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@HolographicViewPropertiesStatics@UI@Holographic@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentationModeForCoreWindow@HolographicViewPropertiesStatics@UI@Holographic@Internal@Windows@@UEAAJPEAUICoreWindow@Core@25@PEAW4PresentationMode@2345@@Z
    virtual long GetPresentationModeForCoreWindow(::Windows::UI::Core::ICoreWindow *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentationModeForCurrentWindow@HolographicViewPropertiesStatics@UI@Holographic@Internal@Windows@@UEAAJPEAW4PresentationMode@2345@@Z
    virtual long GetPresentationModeForCurrentWindow(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@HolographicViewPropertiesStatics@UI@Holographic@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@HolographicViewPropertiesStatics@UI@Holographic@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HolographicViewPropertiesStatics@UI@Holographic@Internal@Windows@@QEAA@XZ
    HolographicViewPropertiesStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@HolographicViewPropertiesStatics@UI@Holographic@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@HolographicViewPropertiesStatics@UI@Holographic@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@HolographicViewPropertiesStatics@UI@Holographic@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@HolographicViewPropertiesStatics@UI@Holographic@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::Internal::Holographic::UI
