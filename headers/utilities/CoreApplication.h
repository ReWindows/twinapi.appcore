#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 246 member(s).
namespace Windows::ApplicationModel::Core {
class CoreApplication {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireSuspendLockExclusive@CoreApplication@Core@ApplicationModel@Windows@@QEAAXXZ
    void AcquireSuspendLockExclusive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateApplication@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAUIActivatedEventArgs@Activation@34@AEBVString@Internal@4@111_KW4ACTIVATEOPTIONSINTERNAL@@@Z
    virtual long ActivateApplication(::Windows::ApplicationModel::Activation::IActivatedEventArgs *, ::Windows::Internal::String const &, ::Windows::Internal::String const &, ::Windows::Internal::String const &, ::Windows::Internal::String const &, uint64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateBackground@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAUIActivatedEventArgs@Activation@34@AEBVString@Internal@4@11AEAVAppRunOrActivateView@CoreApplicationProvider@@@Z
    virtual long ActivateBackground(::Windows::ApplicationModel::Activation::IActivatedEventArgs *, ::Windows::Internal::String const &, ::Windows::Internal::String const &, ::Windows::Internal::String const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateForeground@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAUIActivatedEventArgs@Activation@34@AEBVString@Internal@4@1111AEAVAppRunOrActivateView@CoreApplicationProvider@@_KW4ACTIVATEOPTIONSINTERNAL@@@Z
    virtual long ActivateForeground(::Windows::ApplicationModel::Activation::IActivatedEventArgs *, ::Windows::Internal::String const &, ::Windows::Internal::String const &, ::Windows::Internal::String const &, ::Windows::Internal::String const &, ::Windows::Internal::String const &, WindissectOpaque &, uint64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateSpecific@CoreApplication@Core@ApplicationModel@Windows@@QEAAJPEAUHSTRING__@@U_GUID@@PEAPEAUIInspectable@@@Z
    long ActivateSpecific(HSTRING__*, _GUID, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateSpecificWithViewId@CoreApplication@Core@ApplicationModel@Windows@@QEAAJPEAUHSTRING__@@IPEAPEAUIInspectable@@@Z
    long ActivateSpecificWithViewId(HSTRING__*, unsigned int, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddComponentSite@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAUIInspectable@@@Z
    virtual long AddComponentSite(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDispatcherMapping@CoreApplication@Core@ApplicationModel@Windows@@UEAAJKPEAUICoreDispatcher@2UI@4@@Z
    virtual long AddDispatcherMapping(unsigned long, ::Windows::UI::Core::ICoreDispatcher *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CoreApplication@Core@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddViewForComponentSite@CoreApplication@Core@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAVCoreApplicationViewAgileContainer@234@@Z
    virtual long AddViewForComponentSite(_GUID const &, ::Windows::ApplicationModel::Core::CoreApplicationViewAgileContainer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddViewForCurrentThread@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAVCoreApplicationViewAgileContainer@234@@Z
    virtual long AddViewForCurrentThread(::Windows::ApplicationModel::Core::CoreApplicationViewAgileContainer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddWindowThreadMapping@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAVCoreApplicationViewAgileContainer@234@@Z
    virtual long AddWindowThreadMapping(::Windows::ApplicationModel::Core::CoreApplicationViewAgileContainer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyViewActivationResults@CoreApplication@Core@ApplicationModel@Windows@@UEAAJAEBUViewActivationResult@@PEAUIActivatedEventArgs@Activation@34@W4ACTIVATEOPTIONSINTERNAL@@PEAUICoreWindowFactory@2UI@4@_KAEAW4ApplicationExecutionState@734@@Z
    virtual long ApplyViewActivationResults(ViewActivationResult const &, ::Windows::ApplicationModel::Activation::IActivatedEventArgs *, int, ::Windows::UI::Core::ICoreWindowFactory *, uint64_t, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheExecutionMode@CoreApplication@Core@ApplicationModel@Windows@@QEAAJXZ
    long CacheExecutionMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanUpClosedViews@CoreApplication@Core@ApplicationModel@Windows@@QEAAXXZ
    void CleanUpClosedViews();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureComponent@CoreApplication@Core@ApplicationModel@Windows@@UEAAJU_GUID@@II_KPEAPEAXPEAPEAUIInspectable@@@Z
    virtual long ConfigureComponent(_GUID, unsigned int, unsigned int, uint64_t, void * *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureComponentInput@CoreApplication@Core@ApplicationModel@Windows@@QEAAJU_GUID@@I_KPEA_KPEAPEAUIInspectable@@@Z
    long ConfigureComponentInput(_GUID, unsigned int, uint64_t, uint64_t *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureHostInput@CoreApplication@Core@ApplicationModel@Windows@@UEAAJU_GUID@@_K@Z
    virtual long ConfigureHostInput(_GUID, uint64_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CoreApplication@Core@ApplicationModel@Windows@@QEAA@XZ
    CoreApplication();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CoreApplication@Core@ApplicationModel@Windows@@SAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z
    static int Create(_RTL_RUN_ONCE *, void *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndSendSharedVisual@CoreApplication@Core@ApplicationModel@Windows@@UEAAJU_GUID@@IPEAUIInspectable@@@Z
    virtual long CreateAndSendSharedVisual(_GUID, unsigned int, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateComponentSite@CoreApplication@Core@ApplicationModel@Windows@@UEAAJ_KPEAPEAUIInspectable@@@Z
    virtual long CreateComponentSite(uint64_t, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHelper@CoreApplication@Core@ApplicationModel@Windows@@SAKPEAX@Z
    static unsigned long CreateHelper(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInternal@CoreApplication@Core@ApplicationModel@Windows@@SAJXZ
    static long CreateInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMainView@CoreApplication@Core@ApplicationModel@Windows@@QEAAJAEAVAppRunOrActivateView@CoreApplicationProvider@@@Z
    long CreateMainView(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewView@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@0PEAPEAUICoreApplicationView@234@@Z
    virtual long CreateNewView(HSTRING__*, HSTRING__*, ::Windows::ApplicationModel::Core::ICoreApplicationView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewViewFromMainView@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAPEAUICoreApplicationView@234@@Z
    virtual long CreateNewViewFromMainView(::Windows::ApplicationModel::Core::ICoreApplicationView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewViewWithExperienceId@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUICoreApplicationView@234@@Z
    virtual long CreateNewViewWithExperienceId(HSTRING__*, ::Windows::ApplicationModel::Core::ICoreApplicationView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewViewWithViewSource@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAUIFrameworkViewSource@234@PEAPEAUICoreApplicationView@234@@Z
    virtual long CreateNewViewWithViewSource(::Windows::ApplicationModel::Core::IFrameworkViewSource *, ::Windows::ApplicationModel::Core::ICoreApplicationView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNonImmersiveView@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAPEAUICoreApplicationView@234@@Z
    virtual long CreateNonImmersiveView(::Windows::ApplicationModel::Core::ICoreApplicationView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateShutdownMonitor@CoreApplication@Core@ApplicationModel@Windows@@QEAAJXZ
    long CreateShutdownMonitor();
    // Category: Method | Source: PE Export
    // Symbol: ?DecrementApplicationUseCount@CoreApplication@Core@ApplicationModel@Windows@@UEAAJXZ
    virtual long DecrementApplicationUseCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecrementOutstandingSuspendCount@CoreApplication@Core@ApplicationModel@Windows@@QEAAXXZ
    void DecrementOutstandingSuspendCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecrementVisibilityCount@CoreApplication@Core@ApplicationModel@Windows@@QEAAJPEAUIDeferral@Foundation@4@PEAUICoreDispatcher@2UI@4@@Z
    long DecrementVisibilityCount(WindissectOpaque *, ::Windows::UI::Core::ICoreDispatcher *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disconnect@CoreApplication@Core@ApplicationModel@Windows@@QEAAJU_GUID@@PEAI@Z
    long Disconnect(_GUID, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnablePrelaunch@CoreApplication@Core@ApplicationModel@Windows@@UEAAJE@Z
    virtual long EnablePrelaunch(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exit@CoreApplication@Core@ApplicationModel@Windows@@UEAAJXZ
    virtual long Exit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardLocalError@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAUIRestrictedErrorInfo@@@Z
    virtual long ForwardLocalError(IRestrictedErrorInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardRemoteError@CoreApplication@Core@ApplicationModel@Windows@@UEAAJKPEAUIRestrictedErrorInfo@@@Z
    virtual long ForwardRemoteError(unsigned long, IRestrictedErrorInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppDisplayName@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetAppDisplayName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationWindowWithId@CoreApplication@Core@ApplicationModel@Windows@@UEAAJHPEAPEAUIInspectable@@@Z
    virtual long GetApplicationWindowWithId(int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComponentSiteByViewInstanceId@CoreApplication@Core@ApplicationModel@Windows@@UEAAJIPEAPEAUIInspectable@@@Z
    virtual long GetComponentSiteByViewInstanceId(unsigned int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComponentSiteFromSiteId@CoreApplication@Core@ApplicationModel@Windows@@UEAAJU_GUID@@PEAPEAUIInspectable@@@Z
    virtual long GetComponentSiteFromSiteId(_GUID, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComponentSiteIdFromViewInstanceId@CoreApplication@Core@ApplicationModel@Windows@@UEAAJIPEAU_GUID@@@Z
    virtual long GetComponentSiteIdFromViewInstanceId(unsigned int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComponentViewInstanceId@CoreApplication@Core@ApplicationModel@Windows@@QEAAJU_GUID@@PEAI@Z
    long GetComponentViewInstanceId(_GUID, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComponentViewInstanceIdAndDisconnectSiteId@CoreApplication@Core@ApplicationModel@Windows@@QEAAJU_GUID@@PEAI@Z
    long GetComponentViewInstanceIdAndDisconnectSiteId(_GUID, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentView@CoreApplication@Core@ApplicationModel@Windows@@UEAAJW4GetViewFromTidOptions@234@PEAPEAUICoreApplicationView@234@@Z
    virtual long GetCurrentView(int, ::Windows::ApplicationModel::Core::ICoreApplicationView * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentView@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAPEAUICoreApplicationView@234@@Z
    virtual long GetCurrentView(::Windows::ApplicationModel::Core::ICoreApplicationView * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCustomActivationFactory@CoreApplication@Core@ApplicationModel@Windows@@QEAAJPEAUHSTRING__@@PEAPEAUIActivationFactory@@@Z
    long GetCustomActivationFactory(HSTRING__*, IActivationFactory * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirectCompositionDevice@CoreApplication@Core@ApplicationModel@Windows@@SAJPEAPEAUIDCompositionDesktopDevicePartner@@@Z
    static long GetDirectCompositionDevice(IDCompositionDesktopDevicePartner * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDispatcherFromHwnd@CoreApplication@Core@ApplicationModel@Windows@@UEAAJIPEAPEAUICoreDispatcher@2UI@4@@Z
    virtual long GetDispatcherFromHwnd(unsigned int, ::Windows::UI::Core::ICoreDispatcher * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHwndFromViewOnASTA@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAUICoreApplicationView@234@PEAI@Z
    virtual long GetHwndFromViewOnASTA(::Windows::ApplicationModel::Core::ICoreApplicationView *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIslandTransformsEnabled@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long GetIslandTransformsEnabled(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessHandle@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAPEAX@Z
    virtual long GetProcessHandle(void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSuspendControl@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAPEAUIPlmSuspendControl@@@Z
    virtual long GetSuspendControl(IPlmSuspendControl * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewFromThreadId@CoreApplication@Core@ApplicationModel@Windows@@UEAAJIPEAPEAUICoreApplicationViewInternal@234@@Z
    virtual long GetViewFromThreadId(unsigned int, ::Windows::ApplicationModel::Core::ICoreApplicationViewInternal * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewInstanceIdFromComponentSiteId@CoreApplication@Core@ApplicationModel@Windows@@UEAAJU_GUID@@PEAI@Z
    virtual long GetViewInstanceIdFromComponentSiteId(_GUID, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowFactory@CoreApplication@Core@ApplicationModel@Windows@@UEAAJ_KW4ACTIVATEOPTIONSINTERNAL@@PEAUIActivatedEventArgs@Activation@34@PEAPEAUICoreWindowFactory@2UI@4@AEAW4ApplicationExecutionState@734@@Z
    virtual long GetWindowFactory(uint64_t, int, ::Windows::ApplicationModel::Activation::IActivatedEventArgs *, ::Windows::UI::Core::ICoreWindowFactory * *, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowFromThreadId@CoreApplication@Core@ApplicationModel@Windows@@UEAAJIPEAPEAUICoreWindow@2UI@4@@Z
    virtual long GetWindowFromThreadId(unsigned int, ::Windows::UI::Core::ICoreWindow * *);
    // Category: Method | Source: PE Export
    // Symbol: ?IncrementApplicationUseCount@CoreApplication@Core@ApplicationModel@Windows@@UEAAJXZ
    virtual long IncrementApplicationUseCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncrementVisibilityCount@CoreApplication@Core@ApplicationModel@Windows@@QEAAJPEAUIDeferral@Foundation@4@PEAUICoreDispatcher@2UI@4@@Z
    long IncrementVisibilityCount(WindissectOpaque *, ::Windows::UI::Core::ICoreDispatcher *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitDComp@CoreApplication@Core@ApplicationModel@Windows@@SAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z
    static int InitDComp(_RTL_RUN_ONCE *, void *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeApplicationServer@CoreApplication@Core@ApplicationModel@Windows@@QEAAJPEAUIFrameworkViewSource@234@PEAUIBackgroundTaskFactory@Background@34@EPEAUIGetActivationFactory@Foundation@4@AEAVAppRunOrActivateView@CoreApplicationProvider@@E@Z
    long InitializeApplicationServer(::Windows::ApplicationModel::Core::IFrameworkViewSource *, ::Windows::ApplicationModel::Background::IBackgroundTaskFactory *, unsigned char, WindissectOpaque *, WindissectOpaque &, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForAttach@CoreApplication@Core@ApplicationModel@Windows@@UEAAJXZ
    virtual long InitializeForAttach();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeInternal@CoreApplication@Core@ApplicationModel@Windows@@QEAAJPEAUIFrameworkViewSource@234@PEAUIBackgroundTaskFactory@Background@34@EPEAUIGetActivationFactory@Foundation@4@AEAVAppRunOrActivateView@CoreApplicationProvider@@E@Z
    long InitializeInternal(::Windows::ApplicationModel::Core::IFrameworkViewSource *, ::Windows::ApplicationModel::Background::IBackgroundTaskFactory *, unsigned char, WindissectOpaque *, WindissectOpaque &, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeSuspendCallbacksIfNecessary@CoreApplication@Core@ApplicationModel@Windows@@QEAAJXZ
    long InitializeSuspendCallbacksIfNecessary();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CoreApplication@Core@ApplicationModel@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@CoreApplication@Core@ApplicationModel@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeBackgroundActivatedHandlers@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAUIBackgroundTaskInstance@Background@34@@Z
    virtual long InvokeBackgroundActivatedHandlers(::Windows::ApplicationModel::Background::IBackgroundTaskInstance *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeEnteredBackgroundEvent@CoreApplication@Core@ApplicationModel@Windows@@QEAAJPEAVEnteredBackgroundEventArgs@34@@Z
    long InvokeEnteredBackgroundEvent(::Windows::ApplicationModel::EnteredBackgroundEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeLeavingBackgroundEvent@CoreApplication@Core@ApplicationModel@Windows@@QEAAJPEAVLeavingBackgroundEventArgs@34@@Z
    long InvokeLeavingBackgroundEvent(::Windows::ApplicationModel::LeavingBackgroundEventArgs *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMainWindowCreated@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long IsMainWindowCreated(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkVisibilityEventInProgress@CoreApplication@Core@ApplicationModel@Windows@@QEAAXXZ
    void MarkVisibilityEventInProgress();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CoreApplication@Core@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CoreApplication@Core@ApplicationModel@Windows@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReceiveSharedVisual@CoreApplication@Core@ApplicationModel@Windows@@QEAAJU_GUID@@_K@Z
    long ReceiveSharedVisual(_GUID, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWithPSM@CoreApplication@Core@ApplicationModel@Windows@@QEAAJ_N@Z
    long RegisterWithPSM(bool);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CoreApplication@Core@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseSuspendLockExclusive@CoreApplication@Core@ApplicationModel@Windows@@QEAAXXZ
    void ReleaseSuspendLockExclusive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseViewForThread@CoreApplication@Core@ApplicationModel@Windows@@UEAAJK@Z
    virtual long ReleaseViewForThread(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveComponentSite@CoreApplication@Core@ApplicationModel@Windows@@UEAAJU_GUID@@@Z
    virtual long RemoveComponentSite(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDispatcherMapping@CoreApplication@Core@ApplicationModel@Windows@@UEAAJK@Z
    virtual long RemoveDispatcherMapping(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveViewForComponentSite@CoreApplication@Core@ApplicationModel@Windows@@UEAAJAEBU_GUID@@@Z
    virtual long RemoveViewForComponentSite(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveWindowThreadMapping@CoreApplication@Core@ApplicationModel@Windows@@UEAAJK@Z
    virtual long RemoveWindowThreadMapping(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestRestartAsync@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@W4AppRestartFailureReason@Core@ApplicationModel@Windows@@@Foundation@4@@Z
    virtual long RequestRestartAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestRestartForUserAsync@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAUIUser@System@4@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@W4AppRestartFailureReason@Core@ApplicationModel@Windows@@@Foundation@4@@Z
    virtual long RequestRestartForUserAsync(::Windows::System::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSharedVisual@CoreApplication@Core@ApplicationModel@Windows@@UEAAJU_GUID@@PEA_K@Z
    virtual long RequestSharedVisual(_GUID, uint64_t *);
    // Category: Method | Source: PE Export
    // Symbol: ?Run@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAUIFrameworkViewSource@234@@Z
    virtual long Run(::Windows::ApplicationModel::Core::IFrameworkViewSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunInternal@CoreApplication@Core@ApplicationModel@Windows@@QEAAJPEAUIFrameworkViewSource@234@PEAUIBackgroundTaskFactory@Background@34@EPEAUIGetActivationFactory@Foundation@4@@Z
    long RunInternal(::Windows::ApplicationModel::Core::IFrameworkViewSource *, ::Windows::ApplicationModel::Background::IBackgroundTaskFactory *, unsigned char, WindissectOpaque *);
    // Category: Method | Source: PE Export
    // Symbol: ?RunWithActivationFactories@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAUIGetActivationFactory@Foundation@4@@Z
    virtual long RunWithActivationFactories(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CoreApplication@Core@ApplicationModel@Windows@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetComponentSiteIdForComponentViewInstanceId@CoreApplication@Core@ApplicationModel@Windows@@QEAAJU_GUID@@I@Z
    long SetComponentSiteIdForComponentViewInstanceId(_GUID, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetComponentViewInstanceId@CoreApplication@Core@ApplicationModel@Windows@@UEAAJU_GUID@@I@Z
    virtual long SetComponentViewInstanceId(_GUID, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDesignerSharedVisualHandle@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAXI@Z
    virtual long SetDesignerSharedVisualHandle(void *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSharedVisualHandle@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAXU_GUID@@I@Z
    virtual long SetSharedVisualHandle(void *, _GUID, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TearDown@CoreApplication@Core@ApplicationModel@Windows@@QEAAJXZ
    long TearDown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Uninitialize@CoreApplication@Core@ApplicationModel@Windows@@SAXXZ
    static void Uninitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyInitialized@CoreApplication@Core@ApplicationModel@Windows@@UEAAJXZ
    virtual long VerifyInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForActivate@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAPEAUICoreWindow@2UI@4@@Z
    virtual long WaitForActivate(::Windows::UI::Core::ICoreWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForExit@CoreApplication@Core@ApplicationModel@Windows@@QEAAJXZ
    long WaitForExit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForPsmRegistration@CoreApplication@Core@ApplicationModel@Windows@@QEAAXXZ
    void WaitForPsmRegistration();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForResume@CoreApplication@Core@ApplicationModel@Windows@@QEAAXXZ
    void WaitForResume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_BackgroundActivated@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAU?$IEventHandler@PEAVBackgroundActivatedEventArgs@Activation@ApplicationModel@Windows@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_BackgroundActivated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_EnteredBackground@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAU?$IEventHandler@PEAVEnteredBackgroundEventArgs@ApplicationModel@Windows@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_EnteredBackground(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Exiting@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_Exiting(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_FinalUnhandledErrorDetected@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAU?$IEventHandler@PEAVUnhandledErrorDetectedEventArgs@Core@ApplicationModel@Windows@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_FinalUnhandledErrorDetected(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_LeavingBackground@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAU?$IEventHandler@PEAVLeavingBackgroundEventArgs@ApplicationModel@Windows@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_LeavingBackground(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Resuming@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_Resuming(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Suspending@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAU?$IEventHandler@PEAVSuspendingEventArgs@ApplicationModel@Windows@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_Suspending(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_UnhandledErrorDetected@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAU?$IEventHandler@PEAVUnhandledErrorDetectedEventArgs@Core@ApplicationModel@Windows@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_UnhandledErrorDetected(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Context@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@4@@Z
    virtual long get_Context(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Id(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MainView@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAPEAUICoreApplicationView@234@@Z
    virtual long get_MainView(::Windows::ApplicationModel::Core::ICoreApplicationView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PrivateProperties@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@4@@Z
    virtual long get_PrivateProperties(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Properties@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@4@@Z
    virtual long get_Properties(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Views@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVCoreApplicationView@Core@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long get_Views(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_BackgroundActivated@CoreApplication@Core@ApplicationModel@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_BackgroundActivated(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_EnteredBackground@CoreApplication@Core@ApplicationModel@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_EnteredBackground(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Exiting@CoreApplication@Core@ApplicationModel@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Exiting(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_FinalUnhandledErrorDetected@CoreApplication@Core@ApplicationModel@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_FinalUnhandledErrorDetected(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_LeavingBackground@CoreApplication@Core@ApplicationModel@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_LeavingBackground(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Resuming@CoreApplication@Core@ApplicationModel@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Resuming(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Suspending@CoreApplication@Core@ApplicationModel@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Suspending(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_UnhandledErrorDetected@CoreApplication@Core@ApplicationModel@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_UnhandledErrorDetected(EventRegistrationToken);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppStateChangeNotificationRoutine@CoreApplication@Core@ApplicationModel@Windows@@CAXEPEAX0@Z
    static void AppStateChangeNotificationRoutine(unsigned char, void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewViewInternal@CoreApplication@Core@ApplicationModel@Windows@@AEAAJPEAUHSTRING__@@0PEAUIFrameworkViewSource@234@0PEAPEAUICoreApplicationView@234@@Z
    long CreateNewViewInternal(HSTRING__*, HSTRING__*, ::Windows::ApplicationModel::Core::IFrameworkViewSource *, HSTRING__*, ::Windows::ApplicationModel::Core::ICoreApplicationView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedVisual@CoreApplication@Core@ApplicationModel@Windows@@AEAAJPEAPEAUIDCompositionVisual2@@@Z
    long CreateSharedVisual(IDCompositionVisual2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindViewForViewInstanceId@CoreApplication@Core@ApplicationModel@Windows@@AEAAJIPEAPEAVCoreApplicationViewAgileContainer@234@@Z
    long FindViewForViewInstanceId(unsigned int, ::Windows::ApplicationModel::Core::CoreApplicationViewAgileContainer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRestartFailureReasonFromActivationResult@CoreApplication@Core@ApplicationModel@Windows@@AEAAJPEAUIApplicationActivationResult@Private@Activation@34@PEAW4AppRestartFailureReason@234@@Z
    long GetRestartFailureReasonFromActivationResult(::Windows::ApplicationModel::Activation::Private::IApplicationActivationResult *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitDComp@CoreApplication@Core@ApplicationModel@Windows@@AEAAJXZ
    long InitDComp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeSuspendCallbacks@CoreApplication@Core@ApplicationModel@Windows@@AEAAJXZ
    long InitializeSuspendCallbacks();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRestartAllowed@CoreApplication@Core@ApplicationModel@Windows@@AEAAJPEAW4AppRestartFailureReason@234@@Z
    long IsRestartAllowed(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PsmDoStateChange@CoreApplication@Core@ApplicationModel@Windows@@AEAAJEPEAX@Z
    long PsmDoStateChange(unsigned char, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterActivatableApplication@CoreApplication@Core@ApplicationModel@Windows@@AEAAJXZ
    long RegisterActivatableApplication();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterApplicationServers@CoreApplication@Core@ApplicationModel@Windows@@AEAAJXZ
    long RegisterApplicationServers();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppDisplayName@CoreApplication@Core@ApplicationModel@Windows@@AEAAJXZ
    long SetAppDisplayName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentInternal@CoreApplication@Core@ApplicationModel@Windows@@CAJPEAPEAV1234@_N@Z
    static long get_CurrentInternal(::Windows::ApplicationModel::Core::CoreApplication * *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreApplication@Core@ApplicationModel@Windows@@EEAA@XZ
    virtual ~CoreApplication();
};
} // namespace Windows::ApplicationModel::Core
