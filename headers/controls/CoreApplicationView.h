#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 164 member(s).
namespace Windows::ApplicationModel::Core {
class CoreApplicationView {
public:
    class SuspendResumeHandler;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activate@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJPEAUIActivationEventCallback@234@PEAUIActivatedEventArgs@Activation@34@@Z
    virtual long Activate(::Windows::ApplicationModel::Core::IActivationEventCallback *, ::Windows::ApplicationModel::Activation::IActivatedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddApplicationWindow@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJPEAUIInspectable@@@Z
    virtual long AddApplicationWindow(IInspectable *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelMode@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJXZ
    virtual long CancelMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseNonImmersiveView@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJXZ
    virtual long CloseNonImmersiveView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseWindow@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJXZ
    virtual long CloseWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureComponentInput@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJI_KPEA_KPEAPEAUIInspectable@@@Z
    virtual long ConfigureComponentInput(unsigned int, uint64_t, uint64_t *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureComponentWindow@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJPEAUIInspectable@@@Z
    virtual long ConfigureComponentWindow(IInspectable *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CoreApplicationView@Core@ApplicationModel@Windows@@QEAA@XZ
    CoreApplicationView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndInitializeFrameworkView@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJAEAV?$ComPtr@UIFrameworkViewSource@Core@ApplicationModel@Windows@@@WRL@Microsoft@@@Z
    virtual long CreateAndInitializeFrameworkView(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCoreWindow@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJPEAUICoreWindowFactory@2UI@4@@Z
    virtual long CreateCoreWindow(::Windows::UI::Core::ICoreWindowFactory *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedVisualTarget@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJXZ
    virtual long CreateSharedVisualTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disconnect@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJPEAI@Z
    virtual long Disconnect(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveWindow@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJPEAI@Z
    virtual long GetActiveWindow(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComponentViewInstanceId@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJPEAI@Z
    virtual long GetComponentViewInstanceId(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComponentViewInstanceIdAndDisconnectSiteId@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJPEAI@Z
    virtual long GetComponentViewInstanceIdAndDisconnectSiteId(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDispatcher@CoreApplicationView@Core@ApplicationModel@Windows@@QEAAJPEAPEAUICoreDispatcher@2UI@4@@Z
    long InitializeDispatcher(::Windows::UI::Core::ICoreDispatcher * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long Load(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPresentationLoading@CoreApplicationView@Core@ApplicationModel@Windows@@QEAAJPEAUIInspectable@@0@Z
    long OnPresentationLoading(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPresentationUnloaded@CoreApplicationView@Core@ApplicationModel@Windows@@QEAAJPEAUIInspectable@@0@Z
    long OnPresentationUnloaded(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreProvideActivatedEventArgs@CoreApplicationView@Core@ApplicationModel@Windows@@QEAAJPEAUIActivatedEventArgs@Activation@34@@Z
    long PreProvideActivatedEventArgs(::Windows::ApplicationModel::Activation::IActivatedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareToActivateAsync@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJ_KPEAPEAUIAsyncAction@Foundation@4@@Z
    virtual long PrepareToActivateAsync(uint64_t, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReceiveDesignerSharedVisual@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJ_K@Z
    virtual long ReceiveDesignerSharedVisual(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReceiveSharedVisual@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJ_K@Z
    virtual long ReceiveSharedVisual(uint64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveApplicationWindow@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJPEAUIInspectable@@@Z
    virtual long RemoveApplicationWindow(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Run@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJXZ
    virtual long Run();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CoreApplicationView@Core@ApplicationModel@Windows@@QEAAJPEAVCoreApplicationViewAgileContainer@234@E@Z
    long RuntimeClassInitialize(::Windows::ApplicationModel::Core::CoreApplicationViewAgileContainer *, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultTitleBarDragVisual@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJPEAUIVisual@Composition@UI@4@@Z
    virtual long SetDefaultTitleBarDragVisual(::Windows::UI::Composition::IVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDesignerRootVisual@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJPEAUICompositionVisual@Private@Foundation@4@@Z
    virtual long SetDesignerRootVisual(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowAndGetDispatcher@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJPEAUICoreWindowFactory@2UI@4@PEAPEAUICoreWindow@264@PEAPEAUICoreDispatcher@264@@Z
    virtual long SetWindowAndGetDispatcher(::Windows::UI::Core::ICoreWindowFactory *, ::Windows::UI::Core::ICoreWindow * *, ::Windows::UI::Core::ICoreDispatcher * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendResume@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJPEAXPEAU_PSM_APPSTATE_REGISTRATION@@AEAV0CoreApplicationProvider@@@Z
    virtual long SuspendResume(void *, _PSM_APPSTATE_REGISTRATION *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Uninitialize@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJXZ
    virtual long Uninitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Activated@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreApplicationView@Core@ApplicationModel@Windows@@PEAUIActivatedEventArgs@Activation@34@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_Activated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_HostedViewClosing@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreApplicationView@Core@ApplicationModel@Windows@@PEAVHostedViewClosingEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_HostedViewClosing(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ModeCancelRequested@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_ModeCancelRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CoreWindow@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJPEAPEAUICoreWindow@2UI@4@@Z
    virtual long get_CoreWindow(::Windows::UI::Core::ICoreWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Dispatcher@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJPEAPEAUICoreDispatcher@2UI@4@@Z
    virtual long get_Dispatcher(::Windows::UI::Core::ICoreDispatcher * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DispatcherQueue@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJPEAPEAUIDispatcherQueue@System@4@@Z
    virtual long get_DispatcherQueue(::Windows::System::IDispatcherQueue * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GlobalCompositionDevice@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJPEAPEAUICompositionDevice@Private@Foundation@4@@Z
    virtual long get_GlobalCompositionDevice(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsComponent@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_IsComponent(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsHosted@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_IsHosted(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMain@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_IsMain(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PrivateProperties@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@4@@Z
    virtual long get_PrivateProperties(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Properties@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@4@@Z
    virtual long get_Properties(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RootLegacyVisual@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJPEAPEAUICompositionVisual@Private@Foundation@4@@Z
    virtual long get_RootLegacyVisual(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RootVisual@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJPEAPEAUIVisual@Composition@UI@4@@Z
    virtual long get_RootVisual(::Windows::UI::Composition::IVisual * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBar@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJPEAPEAUICoreApplicationViewTitleBar@234@@Z
    virtual long get_TitleBar(::Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ViewInstanceId@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJPEAI@Z
    virtual long get_ViewInstanceId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RootLegacyVisual@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJPEAUICompositionVisual@Private@Foundation@4@@Z
    virtual long put_RootLegacyVisual(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RootVisual@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJPEAUIVisual@Composition@UI@4@@Z
    virtual long put_RootVisual(::Windows::UI::Composition::IVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Activated@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Activated(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_HostedViewClosing@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_HostedViewClosing(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ModeCancelRequested@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ModeCancelRequested(EventRegistrationToken);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureBridgeVisualForWindow@CoreApplicationView@Core@ApplicationModel@Windows@@AEAAJXZ
    long ConfigureBridgeVisualForWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppActivationClientAdapter@CoreApplicationView@Core@ApplicationModel@Windows@@AEAAJPEAPEAUIAppActivationClientAdapter@WindowManagement@3Internal@4@@Z
    long GetAppActivationClientAdapter(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationViewClientAdapter@CoreApplicationView@Core@ApplicationModel@Windows@@AEAAJPEAPEAUIApplicationViewClientAdapter@WindowManagement@3Internal@4@@Z
    long GetApplicationViewClientAdapter(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreApplicationViewClientAdapter@CoreApplicationView@Core@ApplicationModel@Windows@@AEAAJPEAPEAUICoreApplicationViewClientAdapter@WindowManagement@3Internal@4@@Z
    long GetCoreApplicationViewClientAdapter(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindowNavigationClient@CoreApplicationView@Core@ApplicationModel@Windows@@AEAAJPEAPEAUINavigationClient@2UI@Phone@4@@Z
    long GetCoreWindowNavigationClient(::Windows::Phone::UI::Core::INavigationClient * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCrossDeviceCompositionVisualTarget@CoreApplicationView@Core@ApplicationModel@Windows@@AEAAJPEAUIDCompositionDesktopDevicePartner@@PEAUICompositorPartner@Composition@UI@4@PEAPEAUIVisualTargetPartner@784@@Z
    long GetCrossDeviceCompositionVisualTarget(IDCompositionDesktopDevicePartner *, ::Windows::UI::Composition::ICompositorPartner *, ::Windows::UI::Composition::IVisualTargetPartner * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCrossDeviceVisual@CoreApplicationView@Core@ApplicationModel@Windows@@AEAAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUIDCompositionVisual2@@@Z
    long GetCrossDeviceVisual(IDCompositionDesktopDevicePartner *, IDCompositionVisual2* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCrossDeviceVisualTarget@CoreApplicationView@Core@ApplicationModel@Windows@@AEAAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUIDCompositionTarget@@@Z
    long GetCrossDeviceVisualTarget(IDCompositionDesktopDevicePartner *, IDCompositionTarget * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSharedVisualTargetBridge@CoreApplicationView@Core@ApplicationModel@Windows@@AEAAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUIDCompositionVisual2@@@Z
    long GetSharedVisualTargetBridge(IDCompositionDesktopDevicePartner *, IDCompositionVisual2* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUint64WindowIdFromCoreWindowOrAppWindow@CoreApplicationView@Core@ApplicationModel@Windows@@AEAA_KPEAUIUnknown@@@Z
    uint64_t GetUint64WindowIdFromCoreWindowOrAppWindow(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppWindowActivated@CoreApplicationView@Core@ApplicationModel@Windows@@AEAAJPEAUIAppWindow@WindowManagement@UI@4@_N@Z
    long OnAppWindowActivated(::Windows::UI::WindowManagement::IAppWindow *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWindowActivated@CoreApplicationView@Core@ApplicationModel@Windows@@AEAAJPEAUICoreWindow@2UI@4@PEAUIWindowActivatedEventArgs@264@@Z
    long OnCoreWindowActivated(::Windows::UI::Core::ICoreWindow *, ::Windows::UI::Core::IWindowActivatedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareViewSwitcherForActivation@CoreApplicationView@Core@ApplicationModel@Windows@@AEAAJPEAUIActivatedEventArgs@Activation@34@@Z
    long PrepareViewSwitcherForActivation(::Windows::ApplicationModel::Activation::IActivatedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterAppWindowActivationEvent@CoreApplicationView@Core@ApplicationModel@Windows@@AEAAJPEAUIInspectable@@@Z
    long RegisterAppWindowActivationEvent(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForCoreWindowActivatedEvent@CoreApplicationView@Core@ApplicationModel@Windows@@AEAAJXZ
    long RegisterForCoreWindowActivatedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPresentationEvents@CoreApplicationView@Core@ApplicationModel@Windows@@AEAAJIPEAUICoreApplicationViewClientAdapter@WindowManagement@3Internal@4@@Z
    long RegisterPresentationEvents(unsigned int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterAppWindowActivationEvent@CoreApplicationView@Core@ApplicationModel@Windows@@AEAAJPEAUIInspectable@@@Z
    long UnregisterAppWindowActivationEvent(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterPresentationEvents@CoreApplicationView@Core@ApplicationModel@Windows@@AEAAJIPEAUICoreApplicationViewClientAdapter@WindowManagement@3Internal@4@@Z
    long UnregisterPresentationEvents(unsigned int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewExiting@CoreApplicationView@Core@ApplicationModel@Windows@@AEAA_NXZ
    bool ViewExiting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetAdditionalDataSizeMax@CoreApplicationView@Core@ApplicationModel@Windows@@EEAAJAEBU_GUID@@PEAXK1KPEAK@Z
    virtual long v_GetAdditionalDataSizeMax(_GUID const &, void *, unsigned long, void *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetHandlerCLSID@CoreApplicationView@Core@ApplicationModel@Windows@@EEAAAEBU_GUID@@XZ
    virtual _GUID const & v_GetHandlerCLSID();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_MarshalAdditionalData@CoreApplicationView@Core@ApplicationModel@Windows@@EEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z
    virtual long v_MarshalAdditionalData(IStream *, _GUID const &, void *, unsigned long, void *, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreApplicationView@Core@ApplicationModel@Windows@@EEAA@XZ
    virtual ~CoreApplicationView();
};
} // namespace Windows::ApplicationModel::Core
