#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 7 member(s).
namespace winrt::Windows::Internal::Shell::MeetAndChat::implementation {
class MeetAndChatInstallManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InstallForAllUsersAsync@MeetAndChatInstallManager@implementation@MeetAndChat@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@67@XZ
    WindissectOpaque InstallForAllUsersAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InstallForCurrentUserAsync@MeetAndChatInstallManager@implementation@MeetAndChat@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@67@XZ
    WindissectOpaque InstallForCurrentUserAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInstalledForCurrentUser@MeetAndChatInstallManager@implementation@MeetAndChat@Shell@Internal@Windows@winrt@@QEBA_NXZ
    bool IsInstalledForCurrentUser() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MeetAndChatInstallManager@implementation@MeetAndChat@Shell@Internal@Windows@winrt@@UEAA@XZ
    virtual ~MeetAndChatInstallManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeStrings@MeetAndChatInstallManager@implementation@MeetAndChat@Shell@Internal@Windows@winrt@@AEAAXXZ
    void InitializeStrings();
};
} // namespace winrt::Windows::Internal::Shell::MeetAndChat::implementation
