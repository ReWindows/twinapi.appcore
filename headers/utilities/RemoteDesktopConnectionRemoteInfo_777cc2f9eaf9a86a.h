#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 13 member(s).
namespace winrt::Windows::System::RemoteDesktop::Provider::implementation {
class RemoteDesktopConnectionRemoteInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@RemoteDesktopConnectionRemoteInfo@implementation@Provider@RemoteDesktop@System@Windows@winrt@@QEAAXXZ
    void Close();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForLaunchUri@RemoteDesktopConnectionRemoteInfo@implementation@Provider@RemoteDesktop@System@Windows@winrt@@SA?AU134567@AEBUUri@Foundation@67@@Z
    static WindissectOpaque GetForLaunchUri(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformLocalActionRequested@RemoteDesktopConnectionRemoteInfo@implementation@Provider@RemoteDesktop@System@Windows@winrt@@QEAA?AUevent_token@7@AEBU?$TypedEventHandler@URemoteDesktopConnectionRemoteInfo@Provider@RemoteDesktop@System@Windows@winrt@@UPerformLocalActionRequestedEventArgs@23456@@Foundation@67@@Z
    WindissectOpaque PerformLocalActionRequested(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RemoteDesktopConnectionRemoteInfo@implementation@Provider@RemoteDesktop@System@Windows@winrt@@QEAA@AEBIAEBUUri@Foundation@56@@Z
    RemoteDesktopConnectionRemoteInfo(unsigned int const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportSwitched@RemoteDesktopConnectionRemoteInfo@implementation@Provider@RemoteDesktop@System@Windows@winrt@@QEAAXXZ
    void ReportSwitched();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchToLocalSessionRequested@RemoteDesktopConnectionRemoteInfo@implementation@Provider@RemoteDesktop@System@Windows@winrt@@QEAA?AUevent_token@7@AEBU?$TypedEventHandler@URemoteDesktopConnectionRemoteInfo@Provider@RemoteDesktop@System@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@67@@Z
    WindissectOpaque SwitchToLocalSessionRequested(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RemoteDesktopConnectionRemoteInfo@implementation@Provider@RemoteDesktop@System@Windows@winrt@@UEAA@XZ
    virtual ~RemoteDesktopConnectionRemoteInfo();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForLaunchUriImpl@RemoteDesktopConnectionRemoteInfo@implementation@Provider@RemoteDesktop@System@Windows@winrt@@CA?AU134567@AEBUUri@Foundation@67@@Z
    static WindissectOpaque GetForLaunchUriImpl(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterProcess@RemoteDesktopConnectionRemoteInfo@implementation@Provider@RemoteDesktop@System@Windows@winrt@@AEAAXXZ
    void UnregisterProcess();
};
} // namespace winrt::Windows::System::RemoteDesktop::Provider::implementation
