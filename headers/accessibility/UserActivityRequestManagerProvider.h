#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 6 member(s).
class UserActivityRequestManagerProvider {
public:
    class GetForCurrentView;
    class GetForWindow;
    class OnRequestUserActivity;
    class UserActivityRequest;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add_UserActivityRequested_@UserActivityRequestManagerProvider@@QEAAXPEAUHWND__@@@Z
    void Add_UserActivityRequested_(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalRequestUserActivity_@UserActivityRequestManagerProvider@@QEAAXPEAUHWND__@@_K@Z
    void InternalRequestUserActivity_(HWND__*, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@UserActivityRequestManagerProvider@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove_UserActivityRequested_@UserActivityRequestManagerProvider@@QEAAXPEAUHWND__@@@Z
    void Remove_UserActivityRequested_(HWND__*);
};
