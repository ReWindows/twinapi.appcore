#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 5 member(s).
namespace Windows::ApplicationModel::Core::CoreApplicationView {
class SuspendResumeHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@SuspendResumeHandler@CoreApplicationView@Core@ApplicationModel@Windows@@UEAAJXZ
    virtual long Invoke();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SuspendResumeHandler@CoreApplicationView@Core@ApplicationModel@Windows@@QEAA@PEAVCoreApplicationViewAgileContainer@234@PEAU_PSM_APPSTATE_REGISTRATION@@PEAXAEAVSuspendResume@CoreApplicationProvider@@@Z
    SuspendResumeHandler(::Windows::ApplicationModel::Core::CoreApplicationViewAgileContainer *, _PSM_APPSTATE_REGISTRATION *, void *, WindissectOpaque &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SuspendResumeHandler@CoreApplicationView@Core@ApplicationModel@Windows@@UEAA@XZ
    virtual ~SuspendResumeHandler();
};
} // namespace Windows::ApplicationModel::Core::CoreApplicationView
