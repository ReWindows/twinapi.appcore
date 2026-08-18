#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 27 member(s).
namespace Windows::UI::StartScreen {
class JumpListStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@JumpListStatics@StartScreen@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@JumpListStatics@StartScreen@UI@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIJumpList@234@@Z
    virtual long Deserialize(HSTRING__*, ::Windows::UI::StartScreen::IJumpList * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@JumpListStatics@StartScreen@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@JumpListStatics@StartScreen@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@JumpListStatics@StartScreen@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupported@JumpListStatics@StartScreen@UI@Windows@@UEAAJPEAE@Z
    virtual long IsSupported(unsigned char *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0JumpListStatics@StartScreen@UI@Windows@@QEAA@XZ
    JumpListStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadCurrentAsync@JumpListStatics@StartScreen@UI@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAVJumpList@StartScreen@UI@Windows@@@Foundation@4@@Z
    virtual long LoadCurrentAsync(WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@JumpListStatics@StartScreen@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@JumpListStatics@StartScreen@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::UI::StartScreen
