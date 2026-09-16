#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 23 member(s).
namespace Windows::ApplicationModel {
class SuspendingOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SuspendingOperation@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureRecord@SuspendingOperation@ApplicationModel@Windows@@QEAAX_NGU_GUID@@@Z
    void CaptureRecord(bool, unsigned short, _GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecrementDeferralCount@SuspendingOperation@ApplicationModel@Windows@@UEAAJU_GUID@@@Z
    virtual long DecrementDeferralCount(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineRecordCapturePolicy@SuspendingOperation@ApplicationModel@Windows@@SAHXZ
    static int DetermineRecordCapturePolicy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeferral@SuspendingOperation@ApplicationModel@Windows@@UEAAJPEAPEAUISuspendingDeferral@23@@Z
    virtual long GetDeferral(::Windows::ApplicationModel::ISuspendingDeferral * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SuspendingOperation@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SuspendingOperation@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SuspendingOperation@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncrementDeferralCount@SuspendingOperation@ApplicationModel@Windows@@UEAAJU_GUID@@@Z
    virtual long IncrementDeferralCount(_GUID);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SuspendingOperation@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SuspendingOperation@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SuspendingOperation@ApplicationModel@Windows@@QEAA@XZ
    SuspendingOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForAnyOutstandingDeferrals@SuspendingOperation@ApplicationModel@Windows@@UEAAJPEAUICoreDispatcher@Core@UI@3@@Z
    virtual long WaitForAnyOutstandingDeferrals(::Windows::UI::Core::ICoreDispatcher *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Deadline@SuspendingOperation@ApplicationModel@Windows@@UEAAJPEAUDateTime@Foundation@3@@Z
    virtual long get_Deadline(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SuspendingOperation@ApplicationModel@Windows@@UEAA@XZ
    virtual ~SuspendingOperation();
};
} // namespace Windows::ApplicationModel
