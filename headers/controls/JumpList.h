#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 31 member(s).
namespace Windows::UI::StartScreen {
class JumpList {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@JumpList@StartScreen@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@JumpList@StartScreen@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@JumpList@StartScreen@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@JumpList@StartScreen@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@JumpList@StartScreen@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@JumpList@StartScreen@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0JumpList@StartScreen@UI@Windows@@QEAA@XZ
    JumpList();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@JumpList@StartScreen@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@JumpList@StartScreen@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@JumpList@StartScreen@UI@Windows@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveAsync@JumpList@StartScreen@UI@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@4@@Z
    virtual long SaveAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@JumpList@StartScreen@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long Serialize(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Items@JumpList@StartScreen@UI@Windows@@UEAAJPEAPEAU?$IVector@PEAVJumpListItem@StartScreen@UI@Windows@@@Collections@Foundation@4@@Z
    virtual long get_Items(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SystemGroupKind@JumpList@StartScreen@UI@Windows@@UEAAJPEAW4JumpListSystemGroupKind@234@@Z
    virtual long get_SystemGroupKind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SystemGroupKind@JumpList@StartScreen@UI@Windows@@UEAAJW4JumpListSystemGroupKind@234@@Z
    virtual long put_SystemGroupKind(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1JumpList@StartScreen@UI@Windows@@UEAA@XZ
    virtual ~JumpList();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@JumpList@StartScreen@UI@Windows@@AEAAJPEAUHSTRING__@@@Z
    long Deserialize(HSTRING__*);
};
} // namespace Windows::UI::StartScreen
