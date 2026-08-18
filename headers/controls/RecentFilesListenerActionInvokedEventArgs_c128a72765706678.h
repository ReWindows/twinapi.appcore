#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace winrt::Windows::Internal::UI::StartScreen::implementation {
class RecentFilesListenerActionInvokedEventArgs {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RecentFilesListenerActionInvokedEventArgs@implementation@StartScreen@UI@Internal@Windows@winrt@@QEAA@_KW4RecentFilesAction@23456@IUhstring@6@22U_GUID@@3@Z
    RecentFilesListenerActionInvokedEventArgs(uint64_t, int, unsigned int, WindissectOpaque, WindissectOpaque, WindissectOpaque, _GUID, _GUID);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RecentFilesListenerActionInvokedEventArgs@implementation@StartScreen@UI@Internal@Windows@winrt@@UEAA@XZ
    virtual ~RecentFilesListenerActionInvokedEventArgs();
};
} // namespace winrt::Windows::Internal::UI::StartScreen::implementation
