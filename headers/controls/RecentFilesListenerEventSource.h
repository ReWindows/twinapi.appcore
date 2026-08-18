#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 6 member(s).
namespace winrt::Windows::Internal::UI::StartScreen::implementation {
class RecentFilesListenerEventSource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActionInvoked@RecentFilesListenerEventSource@implementation@StartScreen@UI@Internal@Windows@winrt@@QEAA?AUevent_token@7@AEBU?$TypedEventHandler@URecentFilesListenerEventSource@StartScreen@UI@Internal@Windows@winrt@@URecentFilesListenerActionInvokedEventArgs@23456@@Foundation@67@@Z
    WindissectOpaque ActionInvoked(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferredActionsInvoked@RecentFilesListenerEventSource@implementation@StartScreen@UI@Internal@Windows@winrt@@SAJPEAX@Z
    static long DeferredActionsInvoked(void *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RecentFilesListenerEventSource@implementation@StartScreen@UI@Internal@Windows@winrt@@QEAA@_KPEAVBamoRecentFilesListenerProxy@BamoRecentFilesListener@@PEAUIMessageSession@@@Z
    RecentFilesListenerEventSource(uint64_t, ::BamoRecentFilesListener::BamoRecentFilesListenerProxy *, IMessageSession *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RecentFilesListenerEventSource@implementation@StartScreen@UI@Internal@Windows@winrt@@UEAA@XZ
    virtual ~RecentFilesListenerEventSource();
};
} // namespace winrt::Windows::Internal::UI::StartScreen::implementation
