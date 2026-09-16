#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 8 member(s).
class CActivateSink {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivateApp@CActivateSink@@UEAAJPEAG00KPEAEK_K2@Z
    virtual long OnActivateApp(unsigned short *, unsigned short *, unsigned short *, unsigned long, unsigned char *, unsigned long, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFindPackageForUser@CActivateSink@@UEAAJPEAG@Z
    virtual long OnFindPackageForUser(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetCurrentPackageFullName@CActivateSink@@UEAAJPEAGPEAPEAG@Z
    virtual long OnGetCurrentPackageFullName(unsigned short *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetTaskInfo@CActivateSink@@UEAAJPEAG00PEAK0PEAPEAGK1@Z
    virtual long OnGetTaskInfo(unsigned short *, unsigned short *, unsigned short *, unsigned long *, unsigned short *, unsigned short * *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CActivateSink@@UEAAJXZ
    virtual long RuntimeClassInitialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CActivateSink@@UEAA@XZ
    virtual ~CActivateSink();
};
