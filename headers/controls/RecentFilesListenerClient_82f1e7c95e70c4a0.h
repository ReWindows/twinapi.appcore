#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 7 member(s).
namespace winrt::Windows::Internal::UI::StartScreen::implementation {
class RecentFilesListenerClient {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActionInvoked@RecentFilesListenerClient@implementation@StartScreen@UI@Internal@Windows@winrt@@QEAA?AUevent_token@7@AEBU?$TypedEventHandler@URecentFilesListenerClient@StartScreen@UI@Internal@Windows@winrt@@URecentFilesListenerActionInvokedEventArgs@23456@@Foundation@67@@Z
    WindissectOpaque ActionInvoked(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRecentFilesListenerEventSource@RecentFilesListenerClient@implementation@StartScreen@UI@Internal@Windows@winrt@@QEAA?AURecentFilesListenerEventSource@34567@_K@Z
    WindissectOpaque GetRecentFilesListenerEventSource(uint64_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RecentFilesListenerClient@implementation@StartScreen@UI@Internal@Windows@winrt@@QEAA@_N@Z
    RecentFilesListenerClient(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RecentFilesListenerClient@implementation@StartScreen@UI@Internal@Windows@winrt@@UEAA@XZ
    virtual ~RecentFilesListenerClient();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecentFilesActionInvoked@RecentFilesListenerClient@implementation@StartScreen@UI@Internal@Windows@winrt@@MEAAJPEAVBamoRecentFilesListenerProxy@BamoRecentFilesListener@@PEAVBamoRecentFilesActionInfoProxy@9@@Z
    virtual long RecentFilesActionInvoked(::BamoRecentFilesListener::BamoRecentFilesListenerProxy *, ::BamoRecentFilesListener::BamoRecentFilesActionInfoProxy *);
};
} // namespace winrt::Windows::Internal::UI::StartScreen::implementation
