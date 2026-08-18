#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 48 member(s).
namespace Windows::UI::StartScreen {
class JumpListItem {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@JumpListItem@StartScreen@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@JumpListItem@StartScreen@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@JumpListItem@StartScreen@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@JumpListItem@StartScreen@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@JumpListItem@StartScreen@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@JumpListItem@StartScreen@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0JumpListItem@StartScreen@UI@Windows@@QEAA@XZ
    JumpListItem();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@JumpListItem@StartScreen@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@JumpListItem@StartScreen@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@JumpListItem@StartScreen@UI@Windows@@UEAAJPEAPEAUIJsonObject@Json@Data@4@@Z
    virtual long Serialize(::Windows::Data::Json::IJsonObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRemovedByUser@JumpListItem@StartScreen@UI@Windows@@UEAAJE@Z
    virtual long SetRemovedByUser(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Arguments@JumpListItem@StartScreen@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Arguments(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Description@JumpListItem@StartScreen@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Description(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayName@JumpListItem@StartScreen@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GroupName@JumpListItem@StartScreen@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_GroupName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Kind@JumpListItem@StartScreen@UI@Windows@@UEAAJPEAW4JumpListItemKind@234@@Z
    virtual long get_Kind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Logo@JumpListItem@StartScreen@UI@Windows@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@4@@Z
    virtual long get_Logo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RemovedByUser@JumpListItem@StartScreen@UI@Windows@@UEAAJPEAE@Z
    virtual long get_RemovedByUser(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Description@JumpListItem@StartScreen@UI@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Description(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DisplayName@JumpListItem@StartScreen@UI@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_DisplayName(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_GroupName@JumpListItem@StartScreen@UI@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_GroupName(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Logo@JumpListItem@StartScreen@UI@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@4@@Z
    virtual long put_Logo(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1JumpListItem@StartScreen@UI@Windows@@UEAA@XZ
    virtual ~JumpListItem();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetArgumentsInternal@JumpListItem@StartScreen@UI@Windows@@AEAAJPEAUHSTRING__@@@Z
    long SetArgumentsInternal(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLogoInternal@JumpListItem@StartScreen@UI@Windows@@AEAAJPEAUHSTRING__@@@Z
    long SetLogoInternal(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateKind@JumpListItem@StartScreen@UI@Windows@@CAJW4JumpListItemKind@234@@Z
    static long ValidateKind(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateLogoPrefix@JumpListItem@StartScreen@UI@Windows@@CAJPEBG@Z
    static long ValidateLogoPrefix(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateTextFieldLength@JumpListItem@StartScreen@UI@Windows@@CAJPEAUHSTRING__@@@Z
    static long ValidateTextFieldLength(HSTRING__*);
};
} // namespace Windows::UI::StartScreen
