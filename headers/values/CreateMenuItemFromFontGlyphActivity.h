#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 5 member(s).
namespace InputDial::InputDialTelemetry {
class CreateMenuItemFromFontGlyphActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CreateMenuItemFromFontGlyphActivity@InputDialTelemetry@InputDial@@QEAAXPEBG0@Z
    void StartActivity(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CreateMenuItemFromFontGlyphActivity@InputDialTelemetry@InputDial@@QEAAX_N@Z
    void Stop(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CreateMenuItemFromFontGlyphActivity@InputDialTelemetry@InputDial@@QEAA@XZ
    ~CreateMenuItemFromFontGlyphActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CreateMenuItemFromFontGlyphActivity@InputDialTelemetry@InputDial@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CreateMenuItemFromFontGlyphActivity@InputDialTelemetry@InputDial@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputDial::InputDialTelemetry
