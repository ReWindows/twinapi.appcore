#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 15 member(s).
namespace CApplicationViewTitleBar {
class WinRTReferenceColor {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@WinRTReferenceColor@CApplicationViewTitleBar@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@WinRTReferenceColor@CApplicationViewTitleBar@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@WinRTReferenceColor@CApplicationViewTitleBar@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@WinRTReferenceColor@CApplicationViewTitleBar@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@WinRTReferenceColor@CApplicationViewTitleBar@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@WinRTReferenceColor@CApplicationViewTitleBar@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Value@WinRTReferenceColor@CApplicationViewTitleBar@@UEAAJPEAUColor@UI@Windows@@@Z
    virtual long get_Value(::Windows::UI::Color *);
};
} // namespace CApplicationViewTitleBar
