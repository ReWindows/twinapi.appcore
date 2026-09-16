#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 6 member(s).
namespace winrt::Windows::Internal::UI::StartScreen::implementation {
class RecentFilesListenerServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeRecentFilesAction@RecentFilesListenerServer@implementation@StartScreen@UI@Internal@Windows@winrt@@QEAAXW4RecentFilesAction@34567@IUhstring@7@11@Z
    void InvokeRecentFilesAction(int, unsigned int, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeRecentFilesAction@RecentFilesListenerServer@implementation@StartScreen@UI@Internal@Windows@winrt@@QEAAXW4RecentFilesAction@34567@IUhstring@7@11U?$array_view@$$CBE@7@@Z
    void InvokeRecentFilesAction(int, unsigned int, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RecentFilesListenerServer@implementation@StartScreen@UI@Internal@Windows@winrt@@QEAA@_N@Z
    RecentFilesListenerServer(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RecentFilesListenerServer@implementation@StartScreen@UI@Internal@Windows@winrt@@UEAA@XZ
    virtual ~RecentFilesListenerServer();
};
} // namespace winrt::Windows::Internal::UI::StartScreen::implementation
