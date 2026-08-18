#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 70 member(s).
namespace Windows::ApplicationModel::Core {
class CoreApplicationFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddComponentSite@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJPEAUIInspectable@@@Z
    virtual long AddComponentSite(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureHostInput@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJU_GUID@@_K@Z
    virtual long ConfigureHostInput(_GUID, uint64_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CoreApplicationFactory@Core@ApplicationModel@Windows@@QEAA@XZ
    CoreApplicationFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndSendSharedVisual@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJU_GUID@@IPEAUIInspectable@@@Z
    virtual long CreateAndSendSharedVisual(_GUID, unsigned int, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateComponentSite@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJ_KPEAPEAUIInspectable@@@Z
    virtual long CreateComponentSite(uint64_t, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewView@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@0PEAPEAUICoreApplicationView@234@@Z
    virtual long CreateNewView(HSTRING__*, HSTRING__*, ::Windows::ApplicationModel::Core::ICoreApplicationView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewViewFromMainView@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJPEAPEAUICoreApplicationView@234@@Z
    virtual long CreateNewViewFromMainView(::Windows::ApplicationModel::Core::ICoreApplicationView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewViewWithExperienceId@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUICoreApplicationView@234@@Z
    virtual long CreateNewViewWithExperienceId(HSTRING__*, ::Windows::ApplicationModel::Core::ICoreApplicationView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewViewWithViewSource@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJPEAUIFrameworkViewSource@234@PEAPEAUICoreApplicationView@234@@Z
    virtual long CreateNewViewWithViewSource(::Windows::ApplicationModel::Core::IFrameworkViewSource *, ::Windows::ApplicationModel::Core::ICoreApplicationView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNonImmersiveView@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJPEAPEAUICoreApplicationView@234@@Z
    virtual long CreateNonImmersiveView(::Windows::ApplicationModel::Core::ICoreApplicationView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecrementApplicationUseCount@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJXZ
    virtual long DecrementApplicationUseCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnablePrelaunch@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJE@Z
    virtual long EnablePrelaunch(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exit@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJXZ
    virtual long Exit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardLocalError@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJPEAUIRestrictedErrorInfo@@@Z
    virtual long ForwardLocalError(IRestrictedErrorInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardRemoteError@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJKPEAUIRestrictedErrorInfo@@@Z
    virtual long ForwardRemoteError(unsigned long, IRestrictedErrorInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppDisplayName@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetAppDisplayName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationWindowWithId@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJHPEAPEAUIInspectable@@@Z
    virtual long GetApplicationWindowWithId(int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComponentSiteByViewInstanceId@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJIPEAPEAUIInspectable@@@Z
    virtual long GetComponentSiteByViewInstanceId(unsigned int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComponentSiteFromSiteId@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJU_GUID@@PEAPEAUIInspectable@@@Z
    virtual long GetComponentSiteFromSiteId(_GUID, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComponentSiteIdFromViewInstanceId@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJIPEAU_GUID@@@Z
    virtual long GetComponentSiteIdFromViewInstanceId(unsigned int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentView@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJW4GetViewFromTidOptions@234@PEAPEAUICoreApplicationView@234@@Z
    virtual long GetCurrentView(int, ::Windows::ApplicationModel::Core::ICoreApplicationView * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentView@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJPEAPEAUICoreApplicationView@234@@Z
    virtual long GetCurrentView(::Windows::ApplicationModel::Core::ICoreApplicationView * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDispatcherFromHwnd@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJIPEAPEAUICoreDispatcher@2UI@4@@Z
    virtual long GetDispatcherFromHwnd(unsigned int, ::Windows::UI::Core::ICoreDispatcher * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHwndFromViewOnASTA@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJPEAUICoreApplicationView@234@PEAI@Z
    virtual long GetHwndFromViewOnASTA(::Windows::ApplicationModel::Core::ICoreApplicationView *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSite@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSite(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewFromThreadId@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJIPEAPEAUICoreApplicationViewInternal@234@@Z
    virtual long GetViewFromThreadId(unsigned int, ::Windows::ApplicationModel::Core::ICoreApplicationViewInternal * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewInstanceIdFromComponentSiteId@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJU_GUID@@PEAI@Z
    virtual long GetViewInstanceIdFromComponentSiteId(_GUID, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowFromThreadId@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJIPEAPEAUICoreWindow@2UI@4@@Z
    virtual long GetWindowFromThreadId(unsigned int, ::Windows::UI::Core::ICoreWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncrementApplicationUseCount@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJXZ
    virtual long IncrementApplicationUseCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForAttach@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJXZ
    virtual long InitializeForAttach();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMainWindowCreated@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long IsMainWindowCreated(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveComponentSite@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJU_GUID@@@Z
    virtual long RemoveComponentSite(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestRestartAsync@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@W4AppRestartFailureReason@Core@ApplicationModel@Windows@@@Foundation@4@@Z
    virtual long RequestRestartAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestRestartForUserAsync@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJPEAUIUser@System@4@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@W4AppRestartFailureReason@Core@ApplicationModel@Windows@@@Foundation@4@@Z
    virtual long RequestRestartForUserAsync(::Windows::System::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSharedVisual@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJU_GUID@@PEA_K@Z
    virtual long RequestSharedVisual(_GUID, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Run@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJPEAUIFrameworkViewSource@234@@Z
    virtual long Run(::Windows::ApplicationModel::Core::IFrameworkViewSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunBackgroundHostWithActivationFactoriesAndThreadingModel@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJPEAUIBackgroundTaskFactory@Background@34@EPEAUIGetActivationFactory@Foundation@4@@Z
    virtual long RunBackgroundHostWithActivationFactoriesAndThreadingModel(::Windows::ApplicationModel::Background::IBackgroundTaskFactory *, unsigned char, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunDedicatedBackgroundHostWithBackgroundFactoryAndThreadingModel@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJPEAUIBackgroundTaskFactory@Background@34@E@Z
    virtual long RunDedicatedBackgroundHostWithBackgroundFactoryAndThreadingModel(::Windows::ApplicationModel::Background::IBackgroundTaskFactory *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunFrameworkViewSourceWithBackgroundFactoryAndThreadingModel@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJPEAUIFrameworkViewSource@234@PEAUIBackgroundTaskFactory@Background@34@E@Z
    virtual long RunFrameworkViewSourceWithBackgroundFactoryAndThreadingModel(::Windows::ApplicationModel::Core::IFrameworkViewSource *, ::Windows::ApplicationModel::Background::IBackgroundTaskFactory *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunWithActivationFactories@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJPEAUIGetActivationFactory@Foundation@4@@Z
    virtual long RunWithActivationFactories(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetComponentViewInstanceId@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJU_GUID@@I@Z
    virtual long SetComponentViewInstanceId(_GUID, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForActivate@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJPEAPEAUICoreWindow@2UI@4@@Z
    virtual long WaitForActivate(::Windows::UI::Core::ICoreWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_BackgroundActivated@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJPEAU?$IEventHandler@PEAVBackgroundActivatedEventArgs@Activation@ApplicationModel@Windows@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_BackgroundActivated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_EnteredBackground@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJPEAU?$IEventHandler@PEAVEnteredBackgroundEventArgs@ApplicationModel@Windows@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_EnteredBackground(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Exiting@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_Exiting(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_FinalUnhandledErrorDetected@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJPEAU?$IEventHandler@PEAVUnhandledErrorDetectedEventArgs@Core@ApplicationModel@Windows@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_FinalUnhandledErrorDetected(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_LeavingBackground@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJPEAU?$IEventHandler@PEAVLeavingBackgroundEventArgs@ApplicationModel@Windows@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_LeavingBackground(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Resuming@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_Resuming(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Suspending@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJPEAU?$IEventHandler@PEAVSuspendingEventArgs@ApplicationModel@Windows@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_Suspending(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_UnhandledErrorDetected@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJPEAU?$IEventHandler@PEAVUnhandledErrorDetectedEventArgs@Core@ApplicationModel@Windows@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_UnhandledErrorDetected(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Context@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@4@@Z
    virtual long get_Context(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Id(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MainView@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJPEAPEAUICoreApplicationView@234@@Z
    virtual long get_MainView(::Windows::ApplicationModel::Core::ICoreApplicationView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PrivateProperties@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@4@@Z
    virtual long get_PrivateProperties(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Properties@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@4@@Z
    virtual long get_Properties(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Views@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVCoreApplicationView@Core@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long get_Views(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_BackgroundActivated@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_BackgroundActivated(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_EnteredBackground@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_EnteredBackground(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Exiting@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Exiting(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_FinalUnhandledErrorDetected@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_FinalUnhandledErrorDetected(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_LeavingBackground@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_LeavingBackground(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Resuming@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Resuming(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Suspending@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Suspending(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_UnhandledErrorDetected@CoreApplicationFactory@Core@ApplicationModel@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_UnhandledErrorDetected(EventRegistrationToken);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreApplicationFactory@Core@ApplicationModel@Windows@@EEAA@XZ
    virtual ~CoreApplicationFactory();
};
} // namespace Windows::ApplicationModel::Core
