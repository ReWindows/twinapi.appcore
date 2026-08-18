#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 24 member(s).
namespace winrt::Windows::Internal::Shell::ShareWindow::implementation {
class ShareWindowServerManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActiveSourceWindowId@ShareWindowServerManager@implementation@ShareWindow@Shell@Internal@Windows@winrt@@QEBA?AUWindowId@UI@67@W4ShareWindowCommandProviderKind@34567@@Z
    WindissectOpaque ActiveSourceWindowId(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActiveSourceWindowId@ShareWindowServerManager@implementation@ShareWindow@Shell@Internal@Windows@winrt@@QEBA?AUWindowId@UI@67@W4ShareWindowCommandProviderKind@34567@AEBUhstring@7@@Z
    WindissectOpaque ActiveSourceWindowId(int, WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindSharedWindowsAsync@ShareWindowServerManager@implementation@ShareWindow@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@U?$IVectorView@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@67@U?$IVectorView@UWindowId@UI@Windows@winrt@@@Collections@967@W4ShareWindowCommandProviderKind@34567@@Z
    WindissectOpaque FindSharedWindowsAsync(WindissectOpaque, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindSharedWindowsAsync@ShareWindowServerManager@implementation@ShareWindow@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@U?$IVectorView@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@67@U?$IVectorView@UWindowId@UI@Windows@winrt@@@Collections@967@W4ShareWindowCommandProviderKind@34567@AEBUhstring@7@@Z
    WindissectOpaque FindSharedWindowsAsync(WindissectOpaque, int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCommand@ShareWindowServerManager@implementation@ShareWindow@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@67@AEBW4ShareWindowCommand@4967@W4ShareWindowCommandProviderKind@34567@@Z
    void InvokeCommand(WindissectOpaque const &, int const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCommand@ShareWindowServerManager@implementation@ShareWindow@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@67@AEBW4ShareWindowCommand@4967@W4ShareWindowCommandProviderKind@34567@AEBUhstring@7@@Z
    void InvokeCommand(WindissectOpaque const &, int const &, int, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAnySourceAvailable@ShareWindowServerManager@implementation@ShareWindow@Shell@Internal@Windows@winrt@@QEBA_NXZ
    bool IsAnySourceAvailable() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSharingWindow@ShareWindowServerManager@implementation@ShareWindow@Shell@Internal@Windows@winrt@@QEAAX_NW4ShareWindowCommandProviderKind@34567@AEBUhstring@7@@Z
    void IsSharingWindow(bool, int, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSourceAvailable@ShareWindowServerManager@implementation@ShareWindow@Shell@Internal@Windows@winrt@@QEBA_NW4ShareWindowCommandProviderKind@34567@@Z
    bool IsSourceAvailable(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSourceAvailable@ShareWindowServerManager@implementation@ShareWindow@Shell@Internal@Windows@winrt@@QEBA_NW4ShareWindowCommandProviderKind@34567@AEBUhstring@7@@Z
    bool IsSourceAvailable(int, WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterReportCommandChangedHandler@ShareWindowServerManager@implementation@ShareWindow@Shell@Internal@Windows@winrt@@QEAAIAEBU?$TypedEventHandler@UShareWindowServerManager@ShareWindow@Shell@Internal@Windows@winrt@@UReportCommandChangedEventArgs@23456@@Foundation@67@W4ShareWindowCommandProviderKind@34567@@Z
    unsigned int RegisterReportCommandChangedHandler(WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterReportCommandChangedHandlerV2@ShareWindowServerManager@implementation@ShareWindow@Shell@Internal@Windows@winrt@@QEAAIAEBU?$TypedEventHandler@UShareWindowServerManager@ShareWindow@Shell@Internal@Windows@winrt@@UReportCommandChangedEventArgsV2@23456@@Foundation@67@W4ShareWindowCommandProviderKind@34567@AEBUhstring@7@@Z
    unsigned int RegisterReportCommandChangedHandlerV2(WindissectOpaque const &, int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterSourceAvailabilityChangedHandler@ShareWindowServerManager@implementation@ShareWindow@Shell@Internal@Windows@winrt@@QEAAIAEBU?$TypedEventHandler@UShareWindowServerManager@ShareWindow@Shell@Internal@Windows@winrt@@USourceAvailabilityChangedEventArgsV2@23456@@Foundation@67@W4ShareWindowCommandProviderKind@34567@@Z
    unsigned int RegisterSourceAvailabilityChangedHandler(WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterSourceAvailabilityChangedHandlerV3@ShareWindowServerManager@implementation@ShareWindow@Shell@Internal@Windows@winrt@@QEAAIAEBU?$TypedEventHandler@UShareWindowServerManager@ShareWindow@Shell@Internal@Windows@winrt@@USourceAvailabilityChangedEventArgsV3@23456@@Foundation@67@W4ShareWindowCommandProviderKind@34567@AEBUhstring@7@@Z
    unsigned int RegisterSourceAvailabilityChangedHandlerV3(WindissectOpaque const &, int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestCommandAsync@ShareWindowServerManager@implementation@ShareWindow@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@W4ShareWindowCommand@Shell@UI@Windows@winrt@@@Foundation@67@UWindowId@UI@67@W4ShareWindowCommandProviderKind@34567@@Z
    WindissectOpaque RequestCommandAsync(WindissectOpaque, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestCommandAsync@ShareWindowServerManager@implementation@ShareWindow@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@W4ShareWindowCommand@Shell@UI@Windows@winrt@@@Foundation@67@UWindowId@UI@67@W4ShareWindowCommandProviderKind@34567@AEBUhstring@7@@Z
    WindissectOpaque RequestCommandAsync(WindissectOpaque, int, WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ShareWindowServerManager@implementation@ShareWindow@Shell@Internal@Windows@winrt@@QEAA@XZ
    ShareWindowServerManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopServer@ShareWindowServerManager@implementation@ShareWindow@Shell@Internal@Windows@winrt@@QEAAXXZ
    void StopServer();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShareWindowServerManager@implementation@ShareWindow@Shell@Internal@Windows@winrt@@UEAA@XZ
    virtual ~ShareWindowServerManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireReportCommandChanged@ShareWindowServerManager@implementation@ShareWindow@Shell@Internal@Windows@winrt@@AEAAXAEBUReportCommandChangedEventArgs@34567@@Z
    void FireReportCommandChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireSourceAvailabilityChanged@ShareWindowServerManager@implementation@ShareWindow@Shell@Internal@Windows@winrt@@AEAAXAEBUSourceAvailabilityChangedEventArgsV2@34567@@Z
    void FireSourceAvailabilityChanged(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartServerInternal@ShareWindowServerManager@implementation@ShareWindow@Shell@Internal@Windows@winrt@@AEAAXXZ
    void StartServerInternal();
};
} // namespace winrt::Windows::Internal::Shell::ShareWindow::implementation
