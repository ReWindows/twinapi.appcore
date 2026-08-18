#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 5 member(s).
namespace winrt::Windows::System::RemoteDesktop::Provider::implementation {
class RemoteDesktopInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayName@RemoteDesktopInfo@implementation@Provider@RemoteDesktop@System@Windows@winrt@@QEBA?AUhstring@7@XZ
    WindissectOpaque DisplayName() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Id@RemoteDesktopInfo@implementation@Provider@RemoteDesktop@System@Windows@winrt@@QEBA?AUhstring@7@XZ
    WindissectOpaque Id() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RemoteDesktopInfo@implementation@Provider@RemoteDesktop@System@Windows@winrt@@UEAA@XZ
    virtual ~RemoteDesktopInfo();
};
} // namespace winrt::Windows::System::RemoteDesktop::Provider::implementation
