#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 6 member(s).
class CWindowViewServiceIdentity {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?ContextSensitiveHelp@CWindowViewServiceIdentity@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateIdentity@CWindowViewServiceIdentity@@UEAAJPEAPEAG@Z
    virtual long CreateIdentity(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CWindowViewServiceIdentity@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryPackageFamilyName@CWindowViewServiceIdentity@@UEAAJPEAPEAG@Z
    virtual long QueryPackageFamilyName(unsigned short * *);
};
