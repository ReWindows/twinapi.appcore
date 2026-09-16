#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 9 member(s).
namespace Windows::Internal::ShellHelpers {
class PropertySetHelper {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@XZ
    ~PropertySetHelper();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropSetMap@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@4@@Z
    long GetPropSetMap(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z
    long GetPropVal(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValueFactory@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAUIPropertyValueStatics@Foundation@4@@Z
    long GetPropertyValueFactory(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyValue@Foundation@4@@Z
    long SetPropVal(HSTRING__*, WindissectOpaque *);
};
} // namespace Windows::Internal::ShellHelpers
