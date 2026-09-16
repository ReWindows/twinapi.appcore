#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 22 member(s).
namespace Windows::Internal::FeedbackHub {
class FeedbackHubInternalImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@FeedbackHubInternalImpl@FeedbackHub@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FeedbackHubInternalImpl@FeedbackHub@Internal@Windows@@QEAA@XZ
    FeedbackHubInternalImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@FeedbackHubInternalImpl@FeedbackHub@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@FeedbackHubInternalImpl@FeedbackHub@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@FeedbackHubInternalImpl@FeedbackHub@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@FeedbackHubInternalImpl@FeedbackHub@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@FeedbackHubInternalImpl@FeedbackHub@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRecordingRunning@FeedbackHubInternalImpl@FeedbackHub@Internal@Windows@@UEAAJPEAE@Z
    virtual long IsRecordingRunning(unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@FeedbackHubInternalImpl@FeedbackHub@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@FeedbackHubInternalImpl@FeedbackHub@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@FeedbackHubInternalImpl@FeedbackHub@Internal@Windows@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartRecording@FeedbackHubInternalImpl@FeedbackHub@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long StartRecording(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopRecording@FeedbackHubInternalImpl@FeedbackHub@Internal@Windows@@UEAAJXZ
    virtual long StopRecording();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FeedbackHubInternalImpl@FeedbackHub@Internal@Windows@@UEAA@XZ
    virtual ~FeedbackHubInternalImpl();
};
} // namespace Windows::Internal::FeedbackHub
