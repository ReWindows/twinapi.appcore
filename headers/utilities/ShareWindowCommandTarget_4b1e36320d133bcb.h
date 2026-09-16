#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 9 member(s).
namespace winrt::Windows::Internal::Shell::ShareWindow::implementation {
class ShareWindowCommandTarget {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindSharedWindowsAsync@ShareWindowCommandTarget@implementation@ShareWindow@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@U?$IVectorView@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@67@U?$IVectorView@UWindowId@UI@Windows@winrt@@@Collections@967@@Z
    WindissectOpaque FindSharedWindowsAsync(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestCommandAsync@ShareWindowCommandTarget@implementation@ShareWindow@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@W4ShareWindowCommand@Shell@UI@Windows@winrt@@@Foundation@67@UWindowId@UI@67@@Z
    WindissectOpaque RequestCommandAsync(WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ShareWindowCommandTarget@implementation@ShareWindow@Shell@Internal@Windows@winrt@@QEAA@XZ
    ShareWindowCommandTarget();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShareWindowCommandTarget@implementation@ShareWindow@Shell@Internal@Windows@winrt@@UEAA@XZ
    virtual ~ShareWindowCommandTarget();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartServer@ShareWindowCommandTarget@implementation@ShareWindow@Shell@Internal@Windows@winrt@@AEAAXXZ
    void StartServer();
};
} // namespace winrt::Windows::Internal::Shell::ShareWindow::implementation
