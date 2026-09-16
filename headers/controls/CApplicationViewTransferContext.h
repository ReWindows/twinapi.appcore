#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 26 member(s).
class CApplicationViewTransferContext {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CApplicationViewTransferContext@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CApplicationViewTransferContext@@QEAA@XZ
    CApplicationViewTransferContext();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CApplicationViewTransferContext@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CApplicationViewTransferContext@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CApplicationViewTransferContext@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CApplicationViewTransferContext@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@CApplicationViewTransferContext@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenReadAsync@CApplicationViewTransferContext@@UEAAJPEAPEAU?$IAsyncOperation@PEAUIRandomAccessStreamWithContentType@Streams@Storage@Windows@@@Foundation@Windows@@@Z
    virtual long OpenReadAsync(WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CApplicationViewTransferContext@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CApplicationViewTransferContext@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ViewId@CApplicationViewTransferContext@@UEAAJPEAH@Z
    virtual long get_ViewId(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ViewId@CApplicationViewTransferContext@@UEAAJH@Z
    virtual long put_ViewId(int);
};
