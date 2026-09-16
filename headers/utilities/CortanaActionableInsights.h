#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 12 member(s).
namespace winrt::Windows::Services::Cortana::implementation {
class CortanaActionableInsights {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefault@CortanaActionableInsights@implementation@Cortana@Services@Windows@winrt@@SA?AU13456@XZ
    static WindissectOpaque GetDefault();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForUser@CortanaActionableInsights@implementation@Cortana@Services@Windows@winrt@@SA?AU13456@AEBUUser@System@56@@Z
    static WindissectOpaque GetForUser(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAvailableAsync@CortanaActionableInsights@implementation@Cortana@Services@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@XZ
    WindissectOpaque IsAvailableAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowInsightsAsync@CortanaActionableInsights@implementation@Cortana@Services@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@56@UDataPackage@DataTransfer@ApplicationModel@56@@Z
    WindissectOpaque ShowInsightsAsync(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowInsightsAsync@CortanaActionableInsights@implementation@Cortana@Services@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@56@UDataPackage@DataTransfer@ApplicationModel@56@UCortanaActionableInsightsOptions@3456@@Z
    WindissectOpaque ShowInsightsAsync(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowInsightsForImageAsync@CortanaActionableInsights@implementation@Cortana@Services@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@56@UIRandomAccessStreamReference@Streams@Storage@56@@Z
    WindissectOpaque ShowInsightsForImageAsync(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowInsightsForImageAsync@CortanaActionableInsights@implementation@Cortana@Services@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@56@UIRandomAccessStreamReference@Streams@Storage@56@UCortanaActionableInsightsOptions@3456@@Z
    WindissectOpaque ShowInsightsForImageAsync(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowInsightsForTextAsync@CortanaActionableInsights@implementation@Cortana@Services@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@56@Uhstring@6@@Z
    WindissectOpaque ShowInsightsForTextAsync(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowInsightsForTextAsync@CortanaActionableInsights@implementation@Cortana@Services@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@56@Uhstring@6@UCortanaActionableInsightsOptions@3456@@Z
    WindissectOpaque ShowInsightsForTextAsync(WindissectOpaque, WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CortanaActionableInsights@implementation@Cortana@Services@Windows@winrt@@UEAA@XZ
    virtual ~CortanaActionableInsights();
};
} // namespace winrt::Windows::Services::Cortana::implementation
