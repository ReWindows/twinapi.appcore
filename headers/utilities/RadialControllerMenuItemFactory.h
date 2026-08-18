#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 26 member(s).
namespace Windows::UI::Input {
class RadialControllerMenuItemFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@RadialControllerMenuItemFactory@Input@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@RadialControllerMenuItemFactory@Input@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromFontGlyph@RadialControllerMenuItemFactory@Input@UI@Windows@@UEAAJPEAUHSTRING__@@00PEAPEAUIRadialControllerMenuItem@234@@Z
    virtual long CreateFromFontGlyph(HSTRING__*, HSTRING__*, HSTRING__*, ::Windows::UI::Input::IRadialControllerMenuItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromFontGlyphWithUri@RadialControllerMenuItemFactory@Input@UI@Windows@@UEAAJPEAUHSTRING__@@00PEAUIUriRuntimeClass@Foundation@4@PEAPEAUIRadialControllerMenuItem@234@@Z
    virtual long CreateFromFontGlyphWithUri(HSTRING__*, HSTRING__*, HSTRING__*, WindissectOpaque *, ::Windows::UI::Input::IRadialControllerMenuItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromIcon@RadialControllerMenuItemFactory@Input@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUIRandomAccessStreamReference@Streams@Storage@4@PEAPEAUIRadialControllerMenuItem@234@@Z
    virtual long CreateFromIcon(HSTRING__*, WindissectOpaque *, ::Windows::UI::Input::IRadialControllerMenuItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromKnownIcon@RadialControllerMenuItemFactory@Input@UI@Windows@@UEAAJPEAUHSTRING__@@W4RadialControllerMenuKnownIcon@234@PEAPEAUIRadialControllerMenuItem@234@@Z
    virtual long CreateFromKnownIcon(HSTRING__*, int, ::Windows::UI::Input::IRadialControllerMenuItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@RadialControllerMenuItemFactory@Input@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@RadialControllerMenuItemFactory@Input@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@RadialControllerMenuItemFactory@Input@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@RadialControllerMenuItemFactory@Input@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@RadialControllerMenuItemFactory@Input@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsValidFontFamilyAndGlyph@RadialControllerMenuItemFactory@Input@UI@Windows@@AEAA_NPEAUHSTRING__@@0@Z
    bool _IsValidFontFamilyAndGlyph(HSTRING__*, HSTRING__*);
};
} // namespace Windows::UI::Input
