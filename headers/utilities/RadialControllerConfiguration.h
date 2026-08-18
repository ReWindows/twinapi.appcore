#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 40 member(s).
namespace Windows::UI::Input {
class RadialControllerConfiguration {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@RadialControllerConfiguration@Input@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@RadialControllerConfiguration@Input@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@RadialControllerConfiguration@Input@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@RadialControllerConfiguration@Input@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@RadialControllerConfiguration@Input@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@RadialControllerConfiguration@Input@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@RadialControllerConfiguration@Input@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RadialControllerConfiguration@Input@UI@Windows@@QEAA@XZ
    RadialControllerConfiguration();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshConnectionToShell@RadialControllerConfiguration@Input@UI@Windows@@UEAAJXZ
    virtual long RefreshConnectionToShell();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@RadialControllerConfiguration@Input@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetToDefaultMenuItems@RadialControllerConfiguration@Input@UI@Windows@@UEAAJXZ
    virtual long ResetToDefaultMenuItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@RadialControllerConfiguration@Input@UI@Windows@@UEAAJPEAUHWND__@@@Z
    virtual long RuntimeClassInitialize(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultMenuItems@RadialControllerConfiguration@Input@UI@Windows@@UEAAJPEAU?$IIterable@W4RadialControllerSystemMenuItemKind@Input@UI@Windows@@@Collections@Foundation@4@@Z
    virtual long SetDefaultMenuItems(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySelectDefaultMenuItem@RadialControllerConfiguration@Input@UI@Windows@@UEAAJW4RadialControllerSystemMenuItemKind@234@PEAE@Z
    virtual long TrySelectDefaultMenuItem(int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActiveControllerWhenMenuIsSuppressed@RadialControllerConfiguration@Input@UI@Windows@@UEAAJPEAPEAUIRadialController@234@@Z
    virtual long get_ActiveControllerWhenMenuIsSuppressed(::Windows::UI::Input::IRadialController * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMenuSuppressed@RadialControllerConfiguration@Input@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsMenuSuppressed(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ActiveControllerWhenMenuIsSuppressed@RadialControllerConfiguration@Input@UI@Windows@@UEAAJPEAUIRadialController@234@@Z
    virtual long put_ActiveControllerWhenMenuIsSuppressed(::Windows::UI::Input::IRadialController *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsMenuSuppressed@RadialControllerConfiguration@Input@UI@Windows@@UEAAJE@Z
    virtual long put_IsMenuSuppressed(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RadialControllerConfiguration@Input@UI@Windows@@UEAA@XZ
    virtual ~RadialControllerConfiguration();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnMenuSuppressStateChanged@RadialControllerConfiguration@Input@UI@Windows@@AEAAJXZ
    long _OnMenuSuppressStateChanged();
};
} // namespace Windows::UI::Input
