#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 27 member(s).
namespace Windows::UI::StartScreen {
class JumpListItemStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@JumpListItemStatics@StartScreen@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSeparator@JumpListItemStatics@StartScreen@UI@Windows@@UEAAJPEAPEAUIJumpListItem@234@@Z
    virtual long CreateSeparator(::Windows::UI::StartScreen::IJumpListItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithArguments@JumpListItemStatics@StartScreen@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAPEAUIJumpListItem@234@@Z
    virtual long CreateWithArguments(HSTRING__*, HSTRING__*, ::Windows::UI::StartScreen::IJumpListItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@JumpListItemStatics@StartScreen@UI@Windows@@UEAAJPEAUIJsonObject@Json@Data@4@PEAPEAUIJumpListItem@234@@Z
    virtual long Deserialize(::Windows::Data::Json::IJsonObject *, ::Windows::UI::StartScreen::IJumpListItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@JumpListItemStatics@StartScreen@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@JumpListItemStatics@StartScreen@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@JumpListItemStatics@StartScreen@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0JumpListItemStatics@StartScreen@UI@Windows@@QEAA@XZ
    JumpListItemStatics();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@JumpListItemStatics@StartScreen@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@JumpListItemStatics@StartScreen@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::UI::StartScreen
