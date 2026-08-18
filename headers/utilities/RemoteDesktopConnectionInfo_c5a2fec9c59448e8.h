#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 15 member(s).
namespace winrt::Windows::System::RemoteDesktop::Provider::implementation {
class RemoteDesktopConnectionInfo {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForLaunchUri@RemoteDesktopConnectionInfo@implementation@Provider@RemoteDesktop@System@Windows@winrt@@SA?AU134567@UUri@Foundation@67@AEBUWindowId@UI@67@@Z
    static WindissectOpaque GetForLaunchUri(WindissectOpaque, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformLocalAction@RemoteDesktopConnectionInfo@implementation@Provider@RemoteDesktop@System@Windows@winrt@@QEAAXAEBW4RemoteDesktopLocalAction@34567@@Z
    void PerformLocalAction(int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformLocalActionFromRemote@RemoteDesktopConnectionInfo@implementation@Provider@RemoteDesktop@System@Windows@winrt@@QEAAXAEBW4RemoteDesktopLocalAction@34567@@Z
    void PerformLocalActionFromRemote(int const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RemoteDesktopConnectionInfo@implementation@Provider@RemoteDesktop@System@Windows@winrt@@QEAA@AEBUWindowId@UI@56@AEBUhstring@6@G@Z
    RemoteDesktopConnectionInfo(WindissectOpaque const &, WindissectOpaque const &, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeToFileMapping@RemoteDesktopConnectionInfo@implementation@Provider@RemoteDesktop@System@Windows@winrt@@QEAAXXZ
    void SerializeToFileMapping();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConnectionStatus@RemoteDesktopConnectionInfo@implementation@Provider@RemoteDesktop@System@Windows@winrt@@QEAAXAEBW4RemoteDesktopConnectionStatus@34567@@Z
    void SetConnectionStatus(int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchToLocalSession@RemoteDesktopConnectionInfo@implementation@Provider@RemoteDesktop@System@Windows@winrt@@QEAAXXZ
    void SwitchToLocalSession();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchToRemoteDesktop@RemoteDesktopConnectionInfo@implementation@Provider@RemoteDesktop@System@Windows@winrt@@QEAAXXZ
    void SwitchToRemoteDesktop();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RemoteDesktopConnectionInfo@implementation@Provider@RemoteDesktop@System@Windows@winrt@@UEAA@XZ
    virtual ~RemoteDesktopConnectionInfo();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSerializedBuffer@RemoteDesktopConnectionInfo@implementation@Provider@RemoteDesktop@System@Windows@winrt@@AEAA?AUIBuffer@Streams@Storage@67@XZ
    WindissectOpaque CreateSerializedBuffer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForWindowImpl@RemoteDesktopConnectionInfo@implementation@Provider@RemoteDesktop@System@Windows@winrt@@CA?AU134567@AEBUWindowId@UI@67@AEBUhstring@7@G@Z
    static WindissectOpaque GetForWindowImpl(WindissectOpaque const &, WindissectOpaque const &, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryNotifyRemoteSystemProviderExtension@RemoteDesktopConnectionInfo@implementation@Provider@RemoteDesktop@System@Windows@winrt@@AEAAXXZ
    void TryNotifyRemoteSystemProviderExtension();
};
} // namespace winrt::Windows::System::RemoteDesktop::Provider::implementation
