#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 22 member(s).
class CoreApplicationProvider {
public:
    class ActivateBackground;
    class AppCreation;
    class AppRunOrActivateView;
    class SuspendResume;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AparmentUninitialized@CoreApplicationProvider@@SAXXZ
    static void AparmentUninitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatedNewView@CoreApplicationProvider@@SAXXZ
    static void CreatedNewView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecrementedOutstandingSuspendDueToUninitializeView@CoreApplicationProvider@@SAXXZ
    static void DecrementedOutstandingSuspendDueToUninitializeView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MainViewClosedAppExiting@CoreApplicationProvider@@SAXXZ
    static void MainViewClosedAppExiting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalViewReady@CoreApplicationProvider@@SAXXZ
    static void SignalViewReady();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Instance@CoreApplicationProvider@@KAPEAV1@XZ
    static CoreApplicationProvider * Instance();
};
