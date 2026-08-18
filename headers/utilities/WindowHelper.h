#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 7 member(s).
class WindowHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyProxyWindow@WindowHelper@@SAXXZ
    static void DestroyProxyWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProxyWindow@WindowHelper@@SAPEAUHWND__@@XZ
    static HWND__* GetProxyWindow();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BringProxyWindowToForeground@WindowHelper@@CAXPEBD@Z
    static void BringProxyWindowToForeground(char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDedicatedThread@WindowHelper@@CAXXZ
    static void EnsureDedicatedThread();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentMonitorBounds@WindowHelper@@CA?AUtagRECT@@XZ
    static tagRECT GetCurrentMonitorBounds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProxyWindowWndProc@WindowHelper@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t ProxyWindowWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterProxyWindowClass@WindowHelper@@CAXPEAUHINSTANCE__@@@Z
    static void RegisterProxyWindowClass(HINSTANCE__*);
};
