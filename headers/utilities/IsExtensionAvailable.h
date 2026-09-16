#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 5 member(s).
namespace Windows::Internal::PlatformExtensions::Details::PlatformExtensionsTelemetry {
class IsExtensionAvailable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@IsExtensionAvailable@PlatformExtensionsTelemetry@Details@PlatformExtensions@Internal@Windows@@QEAAXPEAUHSTRING__@@UWindowId@WindowManagement@ApplicationModel@56@@Z
    void StartActivity(HSTRING__*, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@IsExtensionAvailable@PlatformExtensionsTelemetry@Details@PlatformExtensions@Internal@Windows@@QEAAX_N0PEBG@Z
    void Stop(bool, bool, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1IsExtensionAvailable@PlatformExtensionsTelemetry@Details@PlatformExtensions@Internal@Windows@@QEAA@XZ
    ~IsExtensionAvailable();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@IsExtensionAvailable@PlatformExtensionsTelemetry@Details@PlatformExtensions@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@IsExtensionAvailable@PlatformExtensionsTelemetry@Details@PlatformExtensions@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::PlatformExtensions::Details::PlatformExtensionsTelemetry
