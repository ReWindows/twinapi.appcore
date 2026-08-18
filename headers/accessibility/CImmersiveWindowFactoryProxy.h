#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 7 member(s).
class CImmersiveWindowFactoryProxy {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImmersiveWindowFactoryProxy@@QEAA@XZ
    CImmersiveWindowFactoryProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCoreWindow@CImmersiveWindowFactoryProxy@@UEAAJPEAUHSTRING__@@PEAPEAUICoreWindow@Core@UI@Windows@@@Z
    virtual long CreateCoreWindow(HSTRING__*, ::Windows::UI::Core::ICoreWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowReuseAllowed@CImmersiveWindowFactoryProxy@@UEAAJPEAE@Z
    virtual long get_WindowReuseAllowed(unsigned char *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_AlwaysUnmarshalAdditionalData@CImmersiveWindowFactoryProxy@@EEBA_NXZ
    virtual bool v_AlwaysUnmarshalAdditionalData() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_UnmarshalAdditionalData@CImmersiveWindowFactoryProxy@@EEAAJPEAUIStream@@@Z
    virtual long v_UnmarshalAdditionalData(IStream *);
};
