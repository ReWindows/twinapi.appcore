#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 37 member(s).
namespace Windows::UI::Input {
class RadialControllerMenu {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@RadialControllerMenu@Input@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@RadialControllerMenu@Input@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@RadialControllerMenu@Input@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@RadialControllerMenu@Input@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedMenuItem@RadialControllerMenu@Input@UI@Windows@@UEAAJPEAPEAUIRadialControllerMenuItem@234@@Z
    virtual long GetSelectedMenuItem(::Windows::UI::Input::IRadialControllerMenuItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@RadialControllerMenu@Input@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@RadialControllerMenu@Input@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@RadialControllerMenu@Input@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@RadialControllerMenu@Input@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RadialControllerMenu@Input@UI@Windows@@QEAA@XZ
    RadialControllerMenu();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@RadialControllerMenu@Input@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@RadialControllerMenu@Input@UI@Windows@@UEAAJ_K0@Z
    virtual long RuntimeClassInitialize(uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectMenuItem@RadialControllerMenu@Input@UI@Windows@@UEAAJPEAUIRadialControllerMenuItem@234@@Z
    virtual long SelectMenuItem(::Windows::UI::Input::IRadialControllerMenuItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySelectPreviouslySelectedMenuItem@RadialControllerMenu@Input@UI@Windows@@UEAAJPEAE@Z
    virtual long TrySelectPreviouslySelectedMenuItem(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CoreWindow@RadialControllerMenu@Input@UI@Windows@@UEAAJPEA_K@Z
    virtual long get_CoreWindow(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEnabled@RadialControllerMenu@Input@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Items@RadialControllerMenu@Input@UI@Windows@@UEAAJPEAPEAU?$IVector@PEAVRadialControllerMenuItem@Input@UI@Windows@@@Collections@Foundation@4@@Z
    virtual long get_Items(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsEnabled@RadialControllerMenu@Input@UI@Windows@@UEAAJE@Z
    virtual long put_IsEnabled(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RadialControllerMenu@Input@UI@Windows@@UEAA@XZ
    virtual ~RadialControllerMenu();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnMenuItemInvoked@RadialControllerMenu@Input@UI@Windows@@AEAAJPEAUIInspectable@@0@Z
    long _OnMenuItemInvoked(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnMenuItemsChanged@RadialControllerMenu@Input@UI@Windows@@AEAAJPEAU?$IObservableVector@PEAVRadialControllerMenuItem@Input@UI@Windows@@@Collections@Foundation@4@PEAUIVectorChangedEventArgs@674@@Z
    long _OnMenuItemsChanged(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RepopulateMenuItems@RadialControllerMenu@Input@UI@Windows@@AEAAJXZ
    long _RepopulateMenuItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SendAddedMenuItem@RadialControllerMenu@Input@UI@Windows@@AEAAJPEAUIRadialControllerMenuItem@234@I@Z
    long _SendAddedMenuItem(::Windows::UI::Input::IRadialControllerMenuItem *, unsigned int);
};
} // namespace Windows::UI::Input
