#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 14 member(s).
namespace InputDial {
class InputDialTelemetry {
public:
    class ApplicationControllerActivity;
    class CreateMenuItemFromFontGlyphActivity;
    class GetSelectedMenuItemActivity;
    class MenuCreatedActivity;
    class SelectMenuItemActivity;
    class SetDefaultMenuItemsActivity;
    class SuppressMenuActivity;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMenuItemFromIconStream@InputDialTelemetry@InputDial@@SAXXZ
    static void CreateMenuItemFromIconStream();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsMenuEnabled@InputDialTelemetry@InputDial@@SAXXZ
    static void OnIsMenuEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMenuDestroyed@InputDialTelemetry@InputDial@@SAXXZ
    static void OnMenuDestroyed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMenuEnabled@InputDialTelemetry@InputDial@@SAXXZ
    static void OnMenuEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnResetDefaultMenuItems@InputDialTelemetry@InputDial@@SAXXZ
    static void OnResetDefaultMenuItems();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultMenuItemsTimedOut@InputDialTelemetry@InputDial@@SAXXZ
    static void SetDefaultMenuItemsTimedOut();
};
} // namespace InputDial
