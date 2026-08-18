#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace Windows::ApplicationModel::Core {
class DesignModeWindowFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCoreWindow@DesignModeWindowFactory@Core@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUICoreWindow@2UI@4@@Z
    virtual long CreateCoreWindow(HSTRING__*, ::Windows::UI::Core::ICoreWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowReuseAllowed@DesignModeWindowFactory@Core@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_WindowReuseAllowed(unsigned char *);
};
} // namespace Windows::ApplicationModel::Core
