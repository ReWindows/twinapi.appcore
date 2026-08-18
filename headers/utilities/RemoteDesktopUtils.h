#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 5 member(s).
class RemoteDesktopUtils {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureFeatureUnlocked@RemoteDesktopUtils@@SAXXZ
    static void EnsureFeatureUnlocked();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppPFN@RemoteDesktopUtils@@SA?AUhstring@winrt@@XZ
    static WindissectOpaque GetAppPFN();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemoteSystemProviderExtension@RemoteDesktopUtils@@SA?AUIRemoteSystemProviderExtension@RemoteSystems@Shell@Internal@Windows@winrt@@XZ
    static WindissectOpaque GetRemoteSystemProviderExtension();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemoteSystemProviderExtensionInternal@RemoteDesktopUtils@@SA?AUIRemoteSystemProviderExtension@RemoteSystems@Shell@Internal@Windows@winrt@@XZ
    static WindissectOpaque GetRemoteSystemProviderExtensionInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitOnShellStartupEvent@RemoteDesktopUtils@@SAXXZ
    static void WaitOnShellStartupEvent();
};
