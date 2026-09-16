#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 9 member(s).
namespace winrt::Windows::UI::Shell::implementation {
class ShareWindowCommandSource {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentView@ShareWindowCommandSource@implementation@Shell@UI@Windows@winrt@@SA?AU13456@XZ
    static WindissectOpaque GetForCurrentView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForWindowImpl@ShareWindowCommandSource@implementation@Shell@UI@Windows@winrt@@SA?AU13456@PEAUHWND__@@@Z
    static WindissectOpaque GetForWindowImpl(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportCommandChanged@ShareWindowCommandSource@implementation@Shell@UI@Windows@winrt@@QEAAXXZ
    void ReportCommandChanged();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShareWindowCommandSource@implementation@Shell@UI@Windows@winrt@@UEAA@XZ
    virtual ~ShareWindowCommandSource();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupConnection@ShareWindowCommandSource@implementation@Shell@UI@Windows@winrt@@AEAAXXZ
    void CleanupConnection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectToServer@ShareWindowCommandSource@implementation@Shell@UI@Windows@winrt@@AEAAXXZ
    void ConnectToServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterCommandEventHandler@ShareWindowCommandSource@implementation@Shell@UI@Windows@winrt@@AEAA?AUevent_token@6@AEBU?$TypedEventHandler@UShareWindowCommandSource@Shell@UI@Windows@winrt@@UShareWindowCommandEventArgs@2345@@Foundation@56@AEAU?$event@U?$TypedEventHandler@UShareWindowCommandSource@Shell@UI@Windows@winrt@@UShareWindowCommandEventArgs@2345@@Foundation@Windows@winrt@@@6@@Z
    WindissectOpaque RegisterCommandEventHandler(WindissectOpaque const &, WindissectOpaque &);
};
} // namespace winrt::Windows::UI::Shell::implementation
