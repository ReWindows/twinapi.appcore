#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 53 member(s).
namespace Windows::ApplicationModel::Core {
class CoreApplicationViewAgileContainer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddApplicationWindow@CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@QEAAJPEAUIInspectable@@@Z
    long AddApplicationWindow(IInspectable *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseApplicationWindows@CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@QEAAJXZ
    long CloseApplicationWindows();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseNonImmersiveView@CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@QEAAJXZ
    long CloseNonImmersiveView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseWindow@CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@QEAAJXZ
    long CloseWindow();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@QEAA@XZ
    CoreApplicationViewAgileContainer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMainView@CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@SAJPEAUIFrameworkViewSource@234@PEAPEAV1234@AEAVAppRunOrActivateView@CoreApplicationProvider@@E@Z
    static long CreateMainView(::Windows::ApplicationModel::Core::IFrameworkViewSource *, ::Windows::ApplicationModel::Core::CoreApplicationViewAgileContainer * *, WindissectOpaque &, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewView@CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@SAJPEAUIFrameworkViewSource@234@PEAUHSTRING__@@11PEAV1234@PEAPEAV1234@E@Z
    static long CreateNewView(::Windows::ApplicationModel::Core::IFrameworkViewSource *, HSTRING__*, HSTRING__*, HSTRING__*, ::Windows::ApplicationModel::Core::CoreApplicationViewAgileContainer *, ::Windows::ApplicationModel::Core::CoreApplicationViewAgileContainer * *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNonImmersiveView@CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@SAJPEAPEAV1234@@Z
    static long CreateNonImmersiveView(::Windows::ApplicationModel::Core::CoreApplicationViewAgileContainer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveWindow@CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@QEAAJIPEAI@Z
    long GetActiveWindow(unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationWindowWithId@CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@QEAAJHPEAPEAUIAppWindow@WindowManagement@UI@4@@Z
    long GetApplicationWindowWithId(int, ::Windows::UI::WindowManagement::IAppWindow * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationWindowWithViewId@CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@QEAAJIPEAPEAUIAppWindow@WindowManagement@UI@4@@Z
    long GetApplicationWindowWithViewId(unsigned int, ::Windows::UI::WindowManagement::IAppWindow * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThreadInformation@CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@QEAAJXZ
    long GetThreadInformation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeView@CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@QEAAJXZ
    long InitializeView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeClosingEvent@CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@UEAAJPEAUHWND__@@U_GUID@@@Z
    virtual long InvokeClosingEvent(HWND__*, _GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeEnteredBackgroundEvent@CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@QEAAJPEAVEnteredBackgroundEventArgs@34@@Z
    long InvokeEnteredBackgroundEvent(::Windows::ApplicationModel::EnteredBackgroundEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeLeavingBackgroundEvent@CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@QEAAJPEAVLeavingBackgroundEventArgs@34@@Z
    long InvokeLeavingBackgroundEvent(::Windows::ApplicationModel::LeavingBackgroundEventArgs *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecordViewInitialization@CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@QEAAJXZ
    long RecordViewInitialization();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveApplicationWindow@CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@QEAAJPEAUIInspectable@@@Z
    long RemoveApplicationWindow(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@QEAAJW4WindowType@1234@PEAUIFrameworkViewSource@234@PEAUHSTRING__@@AEAVAppRunOrActivateView@CoreApplicationProvider@@E@Z
    long RuntimeClassInitialize(int, ::Windows::ApplicationModel::Core::IFrameworkViewSource *, HSTRING__*, WindissectOpaque &, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalViewReady@CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@QEAAXXZ
    void SignalViewReady();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Suspend@CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@QEAAJPEAXPEAU_PSM_APPSTATE_REGISTRATION@@AEAVSuspendResume@CoreApplicationProvider@@@Z
    long Suspend(void *, _PSM_APPSTATE_REGISTRATION *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitializeLocal@CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@QEAAJXZ
    long UninitializeLocal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitializeView@CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@QEAAJXZ
    long UninitializeView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLastLifecycleAction@CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@QEAAXW4ViewLifecycleAction@234@@Z
    void UpdateLastLifecycleAction(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForViewReady@CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@QEAAXXZ
    void WaitForViewReady();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInternal@CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@AEAAJPEAUHSTRING__@@0PEAUIActivatedEventArgs@Activation@34@PEAUICoreWindowFactory@2UI@4@0AEAVAppRunOrActivateView@CoreApplicationProvider@@_K@Z
    long ActivateInternal(HSTRING__*, HSTRING__*, ::Windows::ApplicationModel::Activation::IActivatedEventArgs *, ::Windows::UI::Core::ICoreWindowFactory *, HSTRING__*, WindissectOpaque &, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeWithCurrentCoreWindow@CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@AEAAJXZ
    long InitializeWithCurrentCoreWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostConfigureComponent@CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@AEAAJPEAUIActivatedEventArgs@Activation@34@@Z
    long PostConfigureComponent(::Windows::ApplicationModel::Activation::IActivatedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreConfigureComponent@CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@AEAAJPEAUIInspectable@@@Z
    long PreConfigureComponent(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareToActivateInternal@CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@AEAAJ_K@Z
    long PrepareToActivateInternal(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnblockPsmStateChangeIfSuspendPending@CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@AEAAXPEAU_PSM_APPSTATE_REGISTRATION@@@Z
    void UnblockPsmStateChangeIfSuspendPending(_PSM_APPSTATE_REGISTRATION *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateViewState@CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@AEAAXW4FrameworkViewState@1234@@Z
    void UpdateViewState(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreApplicationViewAgileContainer@Core@ApplicationModel@Windows@@EEAA@XZ
    virtual ~CoreApplicationViewAgileContainer();
};
} // namespace Windows::ApplicationModel::Core
