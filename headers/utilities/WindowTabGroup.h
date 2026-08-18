#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace winrt::Windows::UI::Shell::implementation {
class WindowTabGroup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Icon@WindowTabGroup@implementation@Shell@UI@Windows@winrt@@QEAA?AUWindowTabIcon@3456@XZ
    WindissectOpaque Icon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Icon@WindowTabGroup@implementation@Shell@UI@Windows@winrt@@QEAAXAEBUWindowTabIcon@3456@@Z
    void Icon(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Title@WindowTabGroup@implementation@Shell@UI@Windows@winrt@@QEAA?AUhstring@6@XZ
    WindissectOpaque Title();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Title@WindowTabGroup@implementation@Shell@UI@Windows@winrt@@QEAAXAEBUhstring@6@@Z
    void Title(WindissectOpaque const &);
};
} // namespace winrt::Windows::UI::Shell::implementation
