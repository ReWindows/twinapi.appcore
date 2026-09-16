#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 16 member(s).
namespace CoreApplicationProvider {
class AppRunOrActivateView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AppRunOrActivateView@CoreApplicationProvider@@QEAAXPEAUHSTRING__@@0@Z
    void StartActivity(HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AppRunOrActivateView@CoreApplicationProvider@@QEAAXAEBVString@Internal@Windows@@000_K@Z
    void StartActivity(::Windows::Internal::String const &, ::Windows::Internal::String const &, ::Windows::Internal::String const &, ::Windows::Internal::String const &, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AppRunOrActivateView@CoreApplicationProvider@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TearDown@AppRunOrActivateView@CoreApplicationProvider@@SAXXZ
    static void TearDown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForExit@AppRunOrActivateView@CoreApplicationProvider@@SAXXZ
    static void WaitForExit();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppRunOrActivateView@CoreApplicationProvider@@QEAA@XZ
    ~AppRunOrActivateView();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AppRunOrActivateView@CoreApplicationProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AppRunOrActivateView@CoreApplicationProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CoreApplicationProvider
