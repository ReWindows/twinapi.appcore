#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 22 member(s).
namespace Windows::ApplicationModel::DataTransfer {
class ShareUIOptions {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ShareUIOptions@DataTransfer@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ShareUIOptions@DataTransfer@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ShareUIOptions@DataTransfer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ShareUIOptions@DataTransfer@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@ShareUIOptions@DataTransfer@ApplicationModel@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@ShareUIOptions@DataTransfer@ApplicationModel@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ShareUIOptions@DataTransfer@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ShareUIOptions@DataTransfer@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ShareUIOptions@DataTransfer@ApplicationModel@Windows@@QEAA@XZ
    ShareUIOptions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectionRect@ShareUIOptions@DataTransfer@ApplicationModel@Windows@@UEAAJPEAPEAU?$IReference@URect@Foundation@Windows@@@Foundation@4@@Z
    virtual long get_SelectionRect(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Theme@ShareUIOptions@DataTransfer@ApplicationModel@Windows@@UEAAJPEAW4ShareUITheme@234@@Z
    virtual long get_Theme(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SelectionRect@ShareUIOptions@DataTransfer@ApplicationModel@Windows@@UEAAJPEAU?$IReference@URect@Foundation@Windows@@@Foundation@4@@Z
    virtual long put_SelectionRect(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Theme@ShareUIOptions@DataTransfer@ApplicationModel@Windows@@UEAAJW4ShareUITheme@234@@Z
    virtual long put_Theme(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShareUIOptions@DataTransfer@ApplicationModel@Windows@@UEAA@XZ
    virtual ~ShareUIOptions();
};
} // namespace Windows::ApplicationModel::DataTransfer
