#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 44 member(s).
namespace Windows::UI::Input {
class RadialControllerConfigurationStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@RadialControllerConfigurationStatics@Input@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@RadialControllerConfigurationStatics@Input@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentView@RadialControllerConfigurationStatics@Input@UI@Windows@@UEAAJPEAPEAUIRadialControllerConfiguration@234@@Z
    virtual long GetForCurrentView(::Windows::UI::Input::IRadialControllerConfiguration * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForWindow@RadialControllerConfigurationStatics@Input@UI@Windows@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetForWindow(HWND__*, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@RadialControllerConfigurationStatics@Input@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@RadialControllerConfigurationStatics@Input@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@RadialControllerConfigurationStatics@Input@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@RadialControllerConfigurationStatics@Input@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RadialControllerConfigurationStatics@Input@UI@Windows@@QEAA@XZ
    RadialControllerConfigurationStatics();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@RadialControllerConfigurationStatics@Input@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppController@RadialControllerConfigurationStatics@Input@UI@Windows@@UEAAJPEAPEAUIRadialController@234@@Z
    virtual long get_AppController(::Windows::UI::Input::IRadialController * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsAppControllerEnabled@RadialControllerConfigurationStatics@Input@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsAppControllerEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AppController@RadialControllerConfigurationStatics@Input@UI@Windows@@UEAAJPEAUIRadialController@234@@Z
    virtual long put_AppController(::Windows::UI::Input::IRadialController *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsAppControllerEnabled@RadialControllerConfigurationStatics@Input@UI@Windows@@UEAAJE@Z
    virtual long put_IsAppControllerEnabled(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RadialControllerConfigurationStatics@Input@UI@Windows@@UEAA@XZ
    virtual ~RadialControllerConfigurationStatics();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureForAppController@RadialControllerConfigurationStatics@Input@UI@Windows@@AEAAJXZ
    long _EnsureForAppController();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureForWindow@RadialControllerConfigurationStatics@Input@UI@Windows@@AEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    long _EnsureForWindow(HWND__*, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnApplicationControllerStateChanged@RadialControllerConfigurationStatics@Input@UI@Windows@@AEAAJXZ
    long _OnApplicationControllerStateChanged();
};
} // namespace Windows::UI::Input
