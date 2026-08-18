#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 6 member(s).
class CEdgeGestureFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CEdgeGestureFactory@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentView@CEdgeGestureFactory@@UEAAJPEAPEAUIEdgeGesture@Input@UI@Windows@@@Z
    virtual long GetForCurrentView(::Windows::UI::Input::IEdgeGesture * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForWindow@CEdgeGestureFactory@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetForWindow(HWND__*, _GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndRegister@CEdgeGestureFactory@@AEAAJPEAUHWND__@@PEAPEAUIEdgeGesture@Input@UI@Windows@@@Z
    long CreateAndRegister(HWND__*, ::Windows::UI::Input::IEdgeGesture * *);
};
