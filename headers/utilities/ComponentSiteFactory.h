#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace Windows::Foundation::Private {
class ComponentSiteFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@ComponentSiteFactory@Private@Foundation@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateComponentSite@ComponentSiteFactory@Private@Foundation@Windows@@UEAAJPEAUICoreApplicationView@Core@ApplicationModel@4@PEAPEAUIComponentSite@234@@Z
    virtual long CreateComponentSite(::Windows::ApplicationModel::Core::ICoreApplicationView *, WindissectOpaque * *);
};
} // namespace Windows::Foundation::Private
