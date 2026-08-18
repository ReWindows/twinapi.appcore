#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 3 member(s).
namespace winrt::Windows::UI::Shell::implementation {
class WindowTabIcon {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromFontGlyph@WindowTabIcon@implementation@Shell@UI@Windows@winrt@@SA?AU13456@AEBUhstring@6@0@Z
    static WindissectOpaque CreateFromFontGlyph(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromFontGlyph@WindowTabIcon@implementation@Shell@UI@Windows@winrt@@SA?AU13456@AEBUhstring@6@0AEBUUri@Foundation@56@@Z
    static WindissectOpaque CreateFromFontGlyph(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromImage@WindowTabIcon@implementation@Shell@UI@Windows@winrt@@SA?AU13456@AEBUIRandomAccessStreamReference@Streams@Storage@56@@Z
    static WindissectOpaque CreateFromImage(WindissectOpaque const &);
};
} // namespace winrt::Windows::UI::Shell::implementation
