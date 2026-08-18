#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 22 member(s).
class CApplicationViewStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CApplicationViewStatics@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CApplicationViewStatics@@QEAA@XZ
    CApplicationViewStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAllPersistedState@CApplicationViewStatics@@UEAAJXZ
    virtual long ClearAllPersistedState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPersistedState@CApplicationViewStatics@@UEAAJPEAUHSTRING__@@@Z
    virtual long ClearPersistedState(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationViewIdForWindow@CApplicationViewStatics@@UEAAJPEAUICoreWindow@Core@UI@Windows@@PEAH@Z
    virtual long GetApplicationViewIdForWindow(::Windows::UI::Core::ICoreWindow *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentView@CApplicationViewStatics@@UEAAJPEAPEAUIApplicationView@ViewManagement@UI@Windows@@@Z
    virtual long GetForCurrentView(::Windows::UI::ViewManagement::IApplicationView * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionerClientAdapter@CApplicationViewStatics@@SAJPEAPEAUIPositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@@Z
    static long GetPositionerClientAdapter(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitleBarClientAdapter@CApplicationViewStatics@@SAJPEAPEAUITitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@@Z
    static long GetTitleBarClientAdapter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUnsnap@CApplicationViewStatics@@UEAAJPEAE@Z
    virtual long TryUnsnap(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUnsnapToFullscreen@CApplicationViewStatics@@UEAAJPEAE@Z
    virtual long TryUnsnapToFullscreen(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredLaunchViewSize@CApplicationViewStatics@@UEAAJPEAUSize@Foundation@Windows@@@Z
    virtual long get_PreferredLaunchViewSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredLaunchWindowingMode@CApplicationViewStatics@@UEAAJPEAW4ApplicationViewWindowingMode@ViewManagement@UI@Windows@@@Z
    virtual long get_PreferredLaunchWindowingMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TerminateAppOnFinalViewClose@CApplicationViewStatics@@UEAAJPEAE@Z
    virtual long get_TerminateAppOnFinalViewClose(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Value@CApplicationViewStatics@@UEAAJPEAW4ApplicationViewState@ViewManagement@UI@Windows@@@Z
    virtual long get_Value(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PreferredLaunchViewSize@CApplicationViewStatics@@UEAAJUSize@Foundation@Windows@@@Z
    virtual long put_PreferredLaunchViewSize(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PreferredLaunchWindowingMode@CApplicationViewStatics@@UEAAJW4ApplicationViewWindowingMode@ViewManagement@UI@Windows@@@Z
    virtual long put_PreferredLaunchWindowingMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TerminateAppOnFinalViewClose@CApplicationViewStatics@@UEAAJE@Z
    virtual long put_TerminateAppOnFinalViewClose(unsigned char);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearPersistedState@CApplicationViewStatics@@AEAAJPEAUHSTRING__@@@Z
    long _ClearPersistedState(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetViewStateFromCoreWindow@CApplicationViewStatics@@AEAAJPEAUICoreWindow@Core@UI@Windows@@PEAW4APPLICATION_VIEW_STATE@@@Z
    long _GetViewStateFromCoreWindow(::Windows::UI::Core::ICoreWindow *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_GetCoreWindowForCurrentThread@CApplicationViewStatics@@CAJPEAPEAUHWND__@@@Z
    static long _s_GetCoreWindowForCurrentThread(HWND__* *);
};
