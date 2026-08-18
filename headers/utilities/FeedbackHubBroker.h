#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 7 member(s).
class FeedbackHubBroker {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRecordingRunning@FeedbackHubBroker@@UEAAJPEAE@Z
    virtual long IsRecordingRunning(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@FeedbackHubBroker@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartRecording@FeedbackHubBroker@@UEAAJPEBG@Z
    virtual long StartRecording(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopRecording@FeedbackHubBroker@@UEAAJXZ
    virtual long StopRecording();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FeedbackHubBroker@@UEAA@XZ
    virtual ~FeedbackHubBroker();
};
