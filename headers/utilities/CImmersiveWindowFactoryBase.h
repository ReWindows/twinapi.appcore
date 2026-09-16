#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 21 member(s).
class CImmersiveWindowFactoryBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImmersiveWindowFactoryBase@@QEAA@XZ
    CImmersiveWindowFactoryBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCoreWindow@CImmersiveWindowFactoryBase@@UEAAJPEAUHSTRING__@@PEAPEAUICoreWindow@Core@UI@Windows@@@Z
    virtual long CreateCoreWindow(HSTRING__*, ::Windows::UI::Core::ICoreWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSplashScreen@CImmersiveWindowFactoryBase@@UEAAJW4SPLASHSCREEN_FLAGS@@PEAPEAUISplashScreen@@@Z
    virtual long CreateSplashScreen(int, ISplashScreen * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppWindow@CImmersiveWindowFactoryBase@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetAppWindow(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasExistingSplashScreen@CImmersiveWindowFactoryBase@@UEAAJPEAH@Z
    virtual long HasExistingSplashScreen(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBG@Z
    virtual long Initialize(IImmersiveMonitor *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeWithPosition@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBGPEBUtagRECT@@@Z
    virtual long InitializeWithPosition(IImmersiveMonitor *, unsigned short const *, tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppWindow@CImmersiveWindowFactoryBase@@UEAAJJ@Z
    virtual long SetAppWindow(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppWindowAndGetHostProcess@CImmersiveWindowFactoryBase@@UEAAJJPEA_K@Z
    virtual long SetAppWindowAndGetHostProcess(long, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetViewId@CImmersiveWindowFactoryBase@@UEAAJK@Z
    virtual long SetViewId(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowReuseAllowed@CImmersiveWindowFactoryBase@@UEAAJPEAE@Z
    virtual long get_WindowReuseAllowed(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateDuplicatingImmersiveWindowFactory@CImmersiveWindowFactoryBase@@SAJPEAUICoreWindow@Core@UI@Windows@@PEAPEAUICoreWindowFactory@345@@Z
    static long s_CreateDuplicatingImmersiveWindowFactory(::Windows::UI::Core::ICoreWindow *, ::Windows::UI::Core::ICoreWindowFactory * *);
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?v_CreateSplashScreen@CImmersiveWindowFactoryBase@@MEAAJW4SPLASHSCREEN_FLAGS@@PEAPEAUISplashScreen@@@Z
    virtual long v_CreateSplashScreen(int, ISplashScreen * *);
    // Category: Method | Source: PE Export
    // Symbol: ?v_Initialize@CImmersiveWindowFactoryBase@@MEAAJPEAUIImmersiveMonitor@@PEBUtagRECT@@@Z
    virtual long v_Initialize(IImmersiveMonitor *, tagRECT const *);
    // Category: Method | Source: PE Export
    // Symbol: ?v_OnAfterSetAppWindow@CImmersiveWindowFactoryBase@@MEAAXXZ
    virtual void v_OnAfterSetAppWindow();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImmersiveWindowFactoryBase@@MEAA@XZ
    virtual ~CImmersiveWindowFactoryBase();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetAdditionalDataSizeMax@CImmersiveWindowFactoryBase@@EEAAJAEBU_GUID@@PEAXK1KPEAK@Z
    virtual long v_GetAdditionalDataSizeMax(_GUID const &, void *, unsigned long, void *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetHandlerCLSID@CImmersiveWindowFactoryBase@@EEAAAEBU_GUID@@XZ
    virtual _GUID const & v_GetHandlerCLSID();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_MarshalAdditionalData@CImmersiveWindowFactoryBase@@EEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z
    virtual long v_MarshalAdditionalData(IStream *, _GUID const &, void *, unsigned long, void *, unsigned long);
};
