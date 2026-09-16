#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 2 member(s).
namespace winrt::Windows::UI::Shell::implementation {
class WindowTabManager {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForWindow@WindowTabManager@implementation@Shell@UI@Windows@winrt@@SA?AU13456@AEBUWindowId@456@@Z
    static WindissectOpaque GetForWindow(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupported@WindowTabManager@implementation@Shell@UI@Windows@winrt@@SA_NXZ
    static bool IsSupported();
};
} // namespace winrt::Windows::UI::Shell::implementation
