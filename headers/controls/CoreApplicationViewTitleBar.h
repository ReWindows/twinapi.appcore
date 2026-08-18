#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 54 member(s).
namespace Windows::ApplicationModel::Core {
class CoreApplicationViewTitleBar {
public:
    class TitleBarInputSink;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@QEAA@XZ
    CoreApplicationViewTitleBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWindowService@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@QEAAJXZ
    long EnsureWindowService();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasTitleBarVisual@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@UEAAJPEAH@Z
    virtual long HasTitleBarVisual(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyPersistedValues@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@UEAAJH@Z
    virtual long NotifyPersistedValues(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLayoutMetricsChanged@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@UEAAJNNN@Z
    virtual long OnLayoutMetricsChanged(double, double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibilityChanged@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@UEAAJH@Z
    virtual long OnVisibilityChanged(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputSinkWindow@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@UEAAJPEAUHWND__@@@Z
    virtual long SetInputSinkWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTitleBarVisual@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@UEAAJPEAUIUnknown@@@Z
    virtual long SetTitleBarVisual(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDefaultTitleBarDragVisual@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@QEAAJXZ
    long UpdateDefaultTitleBarDragVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_IsVisibleChanged@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_IsVisibleChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_LayoutMetricsChanged@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_LayoutMetricsChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DesiredTitlebarOverlayState@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@UEAAJPEAW4DesiredTitlebarOverlayState@@@Z
    virtual long get_DesiredTitlebarOverlayState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtendViewIntoTitleBar@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_ExtendViewIntoTitleBar(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Height@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@UEAAJPEAN@Z
    virtual long get_Height(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsVisible@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_IsVisible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SystemOverlayLeftInset@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@UEAAJPEAN@Z
    virtual long get_SystemOverlayLeftInset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SystemOverlayRightInset@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@UEAAJPEAN@Z
    virtual long get_SystemOverlayRightInset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DesiredTitlebarOverlayState@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@UEAAJW4DesiredTitlebarOverlayState@@@Z
    virtual long put_DesiredTitlebarOverlayState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ExtendViewIntoTitleBar@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@UEAAJE@Z
    virtual long put_ExtendViewIntoTitleBar(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_IsVisibleChanged@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_IsVisibleChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_LayoutMetricsChanged@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_LayoutMetricsChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@UEAA@XZ
    virtual ~CoreApplicationViewTitleBar();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AreMsgRoutingInfoEqual@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@AEAA_NAEBUtagMsgRoutingInfo@@0@Z
    bool _AreMsgRoutingInfoEqual(tagMsgRoutingInfo const &, tagMsgRoutingInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateInputSink@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@AEAAJPEAPEAX@Z
    long _CreateInputSink(void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetWindowHWND@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@AEAAJPEAPEAUHWND__@@@Z
    long _GetWindowHWND(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyLayoutMetricsChanged@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@AEAAJH@Z
    long _NotifyLayoutMetricsChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyTitleBarVisualUpdate@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@AEAAXXZ
    void _NotifyTitleBarVisualUpdate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyVisibilityChanged@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@AEAAJH@Z
    long _NotifyVisibilityChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnTitleBarClientAdapterInputRoutingInfoChanged@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@AEAAJPEAUIInspectable@@0@Z
    long _OnTitleBarClientAdapterInputRoutingInfoChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnTitleBarClientAdapterLayoutMetricsChanged@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@AEAAJPEAUIInspectable@@0@Z
    long _OnTitleBarClientAdapterLayoutMetricsChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnTitleBarClientAdapterVisibilityChanged@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@AEAAJPEAUIInspectable@@0@Z
    long _OnTitleBarClientAdapterVisibilityChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetExtendView@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@AEAAJ_N@Z
    long _SetExtendView(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetVisual@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@AEAAJPEAUIDCompositionVisualPartner@@@Z
    long _SetVisual(IDCompositionVisualPartner *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryGetInputRoutingInfoFromTitleBarClientAdapter@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@AEAA_NPEAUITitleBarClientAdapter@WindowManagement@3Internal@4@PEAUtagMsgRoutingInfo@@PEAPEAUHWND__@@@Z
    bool _TryGetInputRoutingInfoFromTitleBarClientAdapter(WindissectOpaque *, tagMsgRoutingInfo *, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryGetTitleBarClientAdapter@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@AEAA_NPEAPEAUITitleBarClientAdapter@WindowManagement@3Internal@4@@Z
    bool _TryGetTitleBarClientAdapter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateInputSinkForVisual@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@AEAAJXZ
    long _UpdateInputSinkForVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_EnsureWindowService@CoreApplicationViewTitleBar@Core@ApplicationModel@Windows@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z
    static int s_EnsureWindowService(_RTL_RUN_ONCE *, void *, void * *);
};
} // namespace Windows::ApplicationModel::Core
