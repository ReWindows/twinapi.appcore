#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 14 member(s).
namespace winrt::Windows::System::RemoteDesktop::Provider::factory_implementation {
class RemoteDesktopRegistrar {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectionCenterRequested@RemoteDesktopRegistrar@factory_implementation@Provider@RemoteDesktop@System@Windows@winrt@@QEAA?AUevent_token@7@AEBU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@67@@Z
    WindissectOpaque ConnectionCenterRequested(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DesktopInfos@RemoteDesktopRegistrar@factory_implementation@Provider@RemoteDesktop@System@Windows@winrt@@QEAA?AU?$IVector@URemoteDesktopInfo@Provider@RemoteDesktop@System@Windows@winrt@@@Collections@Foundation@67@XZ
    WindissectOpaque DesktopInfos();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSwitchToLocalSessionEnabled@RemoteDesktopRegistrar@factory_implementation@Provider@RemoteDesktop@System@Windows@winrt@@QEAA_NXZ
    bool IsSwitchToLocalSessionEnabled();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RemoteDesktopRegistrar@factory_implementation@Provider@RemoteDesktop@System@Windows@winrt@@QEAA@XZ
    RemoteDesktopRegistrar();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RemoteDesktopRegistrar@factory_implementation@Provider@RemoteDesktop@System@Windows@winrt@@UEAA@XZ
    virtual ~RemoteDesktopRegistrar();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableCloudPC@RemoteDesktopRegistrar@factory_implementation@Provider@RemoteDesktop@System@Windows@winrt@@AEAAXAEBUhstring@7@0@Z
    void DisableCloudPC(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableCloudPC@RemoteDesktopRegistrar@factory_implementation@Provider@RemoteDesktop@System@Windows@winrt@@AEAAXAEBUhstring@7@0@Z
    void EnableCloudPC(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetListOfAllCloudPCIdFromReg@RemoteDesktopRegistrar@factory_implementation@Provider@RemoteDesktop@System@Windows@winrt@@AEAA?AU?$IVectorView@Uhstring@winrt@@@Collections@Foundation@67@AEBUhstring@7@@Z
    WindissectOpaque GetListOfAllCloudPCIdFromReg(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemovedCloudPCIdFromReg@RemoteDesktopRegistrar@factory_implementation@Provider@RemoteDesktop@System@Windows@winrt@@AEAA?AUhstring@7@AEBU87@@Z
    WindissectOpaque GetRemovedCloudPCIdFromReg(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRemoved@RemoteDesktopRegistrar@factory_implementation@Provider@RemoteDesktop@System@Windows@winrt@@AEAA_NUhstring@7@@Z
    bool IsRemoved(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecoverDesktopInfos@RemoteDesktopRegistrar@factory_implementation@Provider@RemoteDesktop@System@Windows@winrt@@AEAAXXZ
    void RecoverDesktopInfos();
};
} // namespace winrt::Windows::System::RemoteDesktop::Provider::factory_implementation
