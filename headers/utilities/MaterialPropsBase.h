#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 7 member(s).
class MaterialPropsBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MaterialPropsBase@@QEAA@XZ
    MaterialPropsBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@MaterialPropsBase@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TransparencyPolicyChanged@MaterialPropsBase@@UEAAJPEAU?$ITypedEventHandler@PEAUIMaterialProperties@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_TransparencyPolicyChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HostBackdropTransparencyPolicy@MaterialPropsBase@@UEAAJPEAW4TransparencyPolicy@UI@Windows@@@Z
    virtual long get_HostBackdropTransparencyPolicy(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InAppTransparencyPolicy@MaterialPropsBase@@UEAAJPEAW4TransparencyPolicy@UI@Windows@@@Z
    virtual long get_InAppTransparencyPolicy(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TransparencyPolicyChanged@MaterialPropsBase@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_TransparencyPolicyChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MaterialPropsBase@@QEAA@XZ
    ~MaterialPropsBase();
};
