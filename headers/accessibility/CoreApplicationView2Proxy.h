#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 8 member(s).
class CoreApplicationView2Proxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowASTACallToICoreApplicationViewInternal@CoreApplicationView2Proxy@@QEAAJXZ
    long AllowASTACallToICoreApplicationViewInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Dispatcher@CoreApplicationView2Proxy@@UEAAJPEAPEAUICoreDispatcher@Core@UI@Windows@@@Z
    virtual long get_Dispatcher(::Windows::UI::Core::ICoreDispatcher * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DispatcherQueue@CoreApplicationView2Proxy@@UEAAJPEAPEAUIDispatcherQueue@System@Windows@@@Z
    virtual long get_DispatcherQueue(::Windows::System::IDispatcherQueue * *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDispatcher@CoreApplicationView2Proxy@@AEAAJPEAPEAUICoreDispatcher@Core@UI@Windows@@@Z
    long GetDispatcher(::Windows::UI::Core::ICoreDispatcher * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_AlwaysUnmarshalAdditionalData@CoreApplicationView2Proxy@@EEBA_NXZ
    virtual bool v_AlwaysUnmarshalAdditionalData() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetAdditionalDataSizeMax@CoreApplicationView2Proxy@@EEAAJAEBU_GUID@@PEAXK1KPEAK@Z
    virtual long v_GetAdditionalDataSizeMax(_GUID const &, void *, unsigned long, void *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_MarshalAdditionalData@CoreApplicationView2Proxy@@EEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z
    virtual long v_MarshalAdditionalData(IStream *, _GUID const &, void *, unsigned long, void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_UnmarshalAdditionalData@CoreApplicationView2Proxy@@EEAAJPEAUIStream@@@Z
    virtual long v_UnmarshalAdditionalData(IStream *);
};
