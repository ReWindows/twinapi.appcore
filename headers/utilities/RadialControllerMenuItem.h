#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 42 member(s).
namespace Windows::UI::Input {
class RadialControllerMenuItem {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@RadialControllerMenuItem@Input@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@RadialControllerMenuItem@Input@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@RadialControllerMenuItem@Input@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@RadialControllerMenuItem@Input@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@RadialControllerMenuItem@Input@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@RadialControllerMenuItem@Input@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@RadialControllerMenuItem@Input@UI@Windows@@UEAAJXZ
    virtual long Invoke();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@RadialControllerMenuItem@Input@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RadialControllerMenuItem@Input@UI@Windows@@QEAA@XZ
    RadialControllerMenuItem();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@RadialControllerMenuItem@Input@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@RadialControllerMenuItem@Input@UI@Windows@@UEAAJPEAUHSTRING__@@00@Z
    virtual long RuntimeClassInitialize(HSTRING__*, HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@RadialControllerMenuItem@Input@UI@Windows@@UEAAJPEAUHSTRING__@@00PEAUIUriRuntimeClass@Foundation@4@@Z
    virtual long RuntimeClassInitialize(HSTRING__*, HSTRING__*, HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@RadialControllerMenuItem@Input@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUIRandomAccessStreamReference@Streams@Storage@4@@Z
    virtual long RuntimeClassInitialize(HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@RadialControllerMenuItem@Input@UI@Windows@@UEAAJPEAUHSTRING__@@W4RadialControllerMenuKnownIcon@234@@Z
    virtual long RuntimeClassInitialize(HSTRING__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Invoked@RadialControllerMenuItem@Input@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVRadialControllerMenuItem@Input@UI@Windows@@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_Invoked(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayText@RadialControllerMenuItem@Input@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayText(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FontFamily@RadialControllerMenuItem@Input@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_FontFamily(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FontFileUri@RadialControllerMenuItem@Input@UI@Windows@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@4@@Z
    virtual long get_FontFileUri(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Glyph@RadialControllerMenuItem@Input@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Glyph(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Icon@RadialControllerMenuItem@Input@UI@Windows@@UEAAJPEAPEAUIRandomAccessStreamReference@Streams@Storage@4@@Z
    virtual long get_Icon(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InternalId@RadialControllerMenuItem@Input@UI@Windows@@UEAAJPEAI@Z
    virtual long get_InternalId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KnownIcon@RadialControllerMenuItem@Input@UI@Windows@@UEAAJPEAW4RadialControllerMenuKnownIcon@234@@Z
    virtual long get_KnownIcon(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Tag@RadialControllerMenuItem@Input@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Tag(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InternalId@RadialControllerMenuItem@Input@UI@Windows@@UEAAJI@Z
    virtual long put_InternalId(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Tag@RadialControllerMenuItem@Input@UI@Windows@@UEAAJPEAUIInspectable@@@Z
    virtual long put_Tag(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Invoked@RadialControllerMenuItem@Input@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Invoked(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RadialControllerMenuItem@Input@UI@Windows@@UEAA@XZ
    virtual ~RadialControllerMenuItem();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitRadialControllerMenuItemFromFontGlyph@RadialControllerMenuItem@Input@UI@Windows@@AEAAJPEAUHSTRING__@@00@Z
    long _InitRadialControllerMenuItemFromFontGlyph(HSTRING__*, HSTRING__*, HSTRING__*);
};
} // namespace Windows::UI::Input
