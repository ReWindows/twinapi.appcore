#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 5 member(s).
class CloudPCHelpers {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCloudPCMode@CloudPCHelpers@@YA?AW4Mode@1@XZ
    int GetCloudPCMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z
    void GetCorrelationId(unsigned short *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPhysicalDeviceAccessConfigured@CloudPCHelpers@@YA_NXZ
    bool IsPhysicalDeviceAccessConfigured();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPhysicalDeviceAccessPolicyEnabled@CloudPCHelpers@@YA_NXZ
    bool IsPhysicalDeviceAccessPolicyEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPhysicalDeviceAccessPolicyOnErrorScreensEnabled@CloudPCHelpers@@YA_NXZ
    bool IsPhysicalDeviceAccessPolicyOnErrorScreensEnabled();
};
