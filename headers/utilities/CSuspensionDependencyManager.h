#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 5 member(s).
class CSuspensionDependencyManager {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?GroupChildWithParent@CSuspensionDependencyManager@@UEAAJPEAX@Z
    virtual long GroupChildWithParent(void *);
    // Category: Method | Source: PE Export
    // Symbol: ?RegisterAsChild@CSuspensionDependencyManager@@UEAAJPEAX@Z
    virtual long RegisterAsChild(void *);
    // Category: Method | Source: PE Export
    // Symbol: ?UngroupChildFromParent@CSuspensionDependencyManager@@UEAAJPEAX@Z
    virtual long UngroupChildFromParent(void *);
};
