#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 55 member(s).
namespace Windows::ApplicationModel::Core {
class ApplicationActivationFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activate@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@000PEAUIActivatedEventArgs@Activation@34@_K2@Z
    virtual long Activate(HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, ::Windows::ApplicationModel::Activation::IActivatedEventArgs *, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateSpecific@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@U_GUID@@PEAPEAUIInspectable@@@Z
    virtual long ActivateSpecific(HSTRING__*, _GUID, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateSpecificWithViewId@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@IPEAPEAUIInspectable@@@Z
    virtual long ActivateSpecificWithViewId(HSTRING__*, unsigned int, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddComponentSite@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJPEAUIInspectable@@@Z
    virtual long AddComponentSite(IInspectable *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ApplicationActivationFactory@Core@ApplicationModel@Windows@@QEAA@XZ
    ApplicationActivationFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureComponent@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJU_GUID@@II_KPEAPEAXPEAPEAUIInspectable@@@Z
    virtual long ConfigureComponent(_GUID, unsigned int, unsigned int, uint64_t, void * *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureComponentInput@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJU_GUID@@I_KPEA_KPEAPEAUIInspectable@@@Z
    virtual long ConfigureComponentInput(_GUID, unsigned int, uint64_t, uint64_t *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureHostInput@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJU_GUID@@_K@Z
    virtual long ConfigureHostInput(_GUID, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndSendSharedVisual@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJU_GUID@@IPEAUIInspectable@@@Z
    virtual long CreateAndSendSharedVisual(_GUID, unsigned int, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateComponentSite@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJ_KPEAPEAUIInspectable@@@Z
    virtual long CreateComponentSite(uint64_t, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNonImmersiveView@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJPEAPEAUICoreApplicationView@234@@Z
    virtual long CreateNonImmersiveView(::Windows::ApplicationModel::Core::ICoreApplicationView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disconnect@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJU_GUID@@PEAI@Z
    virtual long Disconnect(_GUID, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActivationFactory@ApplicationActivationFactory@Core@ApplicationModel@Windows@@SAJPEAUHSTRING__@@PEAPEAUIActivationFactory@@@Z
    static long GetActivationFactory(HSTRING__*, IActivationFactory * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppDisplayName@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetAppDisplayName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComponentSiteByViewInstanceId@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJIPEAPEAUIInspectable@@@Z
    virtual long GetComponentSiteByViewInstanceId(unsigned int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComponentSiteFromSiteId@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJU_GUID@@PEAPEAUIInspectable@@@Z
    virtual long GetComponentSiteFromSiteId(_GUID, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComponentSiteIdFromViewInstanceId@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJIPEAU_GUID@@@Z
    virtual long GetComponentSiteIdFromViewInstanceId(unsigned int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComponentViewInstanceId@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJU_GUID@@PEAI@Z
    virtual long GetComponentViewInstanceId(_GUID, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComponentViewInstanceIdAndDisconnectSiteId@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJU_GUID@@PEAI@Z
    virtual long GetComponentViewInstanceIdAndDisconnectSiteId(_GUID, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentView@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJW4GetViewFromTidOptions@234@PEAPEAUICoreApplicationView@234@@Z
    virtual long GetCurrentView(int, ::Windows::ApplicationModel::Core::ICoreApplicationView * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCustomActivationFactory@ApplicationActivationFactory@Core@ApplicationModel@Windows@@SAJPEAUHSTRING__@@PEAPEAUIActivationFactory@@@Z
    static long GetCustomActivationFactory(HSTRING__*, IActivationFactory * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDispatcherFromHwnd@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJIPEAPEAUICoreDispatcher@2UI@4@@Z
    virtual long GetDispatcherFromHwnd(unsigned int, ::Windows::UI::Core::ICoreDispatcher * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHwndFromViewOnASTA@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJPEAUICoreApplicationView@234@PEAI@Z
    virtual long GetHwndFromViewOnASTA(::Windows::ApplicationModel::Core::ICoreApplicationView *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessHandle@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJPEAPEAX@Z
    virtual long GetProcessHandle(void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSite@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSite(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewFromThreadId@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJIPEAPEAUICoreApplicationViewInternal@234@@Z
    virtual long GetViewFromThreadId(unsigned int, ::Windows::ApplicationModel::Core::ICoreApplicationViewInternal * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewInstanceIdFromComponentSiteId@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJU_GUID@@PEAI@Z
    virtual long GetViewInstanceIdFromComponentSiteId(_GUID, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowFromThreadId@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJIPEAPEAUICoreWindow@2UI@4@@Z
    virtual long GetWindowFromThreadId(unsigned int, ::Windows::UI::Core::ICoreWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForAttach@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJXZ
    virtual long InitializeForAttach();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMainWindowCreated@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long IsMainWindowCreated(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReceiveSharedVisual@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJU_GUID@@_K@Z
    virtual long ReceiveSharedVisual(_GUID, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveComponentSite@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJU_GUID@@@Z
    virtual long RemoveComponentSite(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSharedVisual@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJU_GUID@@PEA_K@Z
    virtual long RequestSharedVisual(_GUID, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetComponentSiteIdForComponentViewInstanceId@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJU_GUID@@I@Z
    virtual long SetComponentSiteIdForComponentViewInstanceId(_GUID, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetComponentViewInstanceId@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJU_GUID@@I@Z
    virtual long SetComponentViewInstanceId(_GUID, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDesignerSharedVisualHandle@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJPEAXI@Z
    virtual long SetDesignerSharedVisualHandle(void *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSharedVisualHandle@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJPEAXU_GUID@@I@Z
    virtual long SetSharedVisualHandle(void *, _GUID, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForActivate@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJPEAPEAUICoreWindow@2UI@4@@Z
    virtual long WaitForActivate(::Windows::UI::Core::ICoreWindow * *);
    // Category: Method | Source: PE Export
    // Symbol: ?add_FinalUnhandledErrorDetected@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJPEAU?$IEventHandler@PEAVUnhandledErrorDetectedEventArgs@Core@ApplicationModel@Windows@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_FinalUnhandledErrorDetected(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Context@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@4@@Z
    virtual long get_Context(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PrivateProperties@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@4@@Z
    virtual long get_PrivateProperties(WindissectOpaque * *);
    // Category: Method | Source: PE Export
    // Symbol: ?remove_FinalUnhandledErrorDetected@ApplicationActivationFactory@Core@ApplicationModel@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_FinalUnhandledErrorDetected(EventRegistrationToken);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ApplicationActivationFactory@Core@ApplicationModel@Windows@@EEAA@XZ
    virtual ~ApplicationActivationFactory();
};
} // namespace Windows::ApplicationModel::Core
