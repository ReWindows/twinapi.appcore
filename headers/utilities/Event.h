#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
class Event {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@Event@@QEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitAndProcessEvents@Event@@QEAAJPEAUICoreDispatcher@Core@UI@Windows@@@Z
    long WaitAndProcessEvents(::Windows::UI::Core::ICoreDispatcher *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitWithFreeUnusedLibraries@Event@@QEAAKXZ
    unsigned long WaitWithFreeUnusedLibraries();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Event@@QEAA@XZ
    ~Event();
};
