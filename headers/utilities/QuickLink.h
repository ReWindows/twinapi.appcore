#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 22 member(s).
namespace Windows::ApplicationModel::DataTransfer::ShareTarget {
class QuickLink {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@QuickLink@ShareTarget@DataTransfer@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@QuickLink@ShareTarget@DataTransfer@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@QuickLink@ShareTarget@DataTransfer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@QuickLink@ShareTarget@DataTransfer@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@QuickLink@ShareTarget@DataTransfer@ApplicationModel@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@QuickLink@ShareTarget@DataTransfer@ApplicationModel@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@QuickLink@ShareTarget@DataTransfer@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@QuickLink@ShareTarget@DataTransfer@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@QuickLink@ShareTarget@DataTransfer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Id(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportedDataFormats@QuickLink@ShareTarget@DataTransfer@ApplicationModel@Windows@@UEAAJPEAPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@5@@Z
    virtual long get_SupportedDataFormats(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportedFileTypes@QuickLink@ShareTarget@DataTransfer@ApplicationModel@Windows@@UEAAJPEAPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@5@@Z
    virtual long get_SupportedFileTypes(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Thumbnail@QuickLink@ShareTarget@DataTransfer@ApplicationModel@Windows@@UEAAJPEAPEAUIRandomAccessStreamReference@Streams@Storage@5@@Z
    virtual long get_Thumbnail(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Title@QuickLink@ShareTarget@DataTransfer@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Title(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Id@QuickLink@ShareTarget@DataTransfer@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Id(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Thumbnail@QuickLink@ShareTarget@DataTransfer@ApplicationModel@Windows@@UEAAJPEAUIRandomAccessStreamReference@Streams@Storage@5@@Z
    virtual long put_Thumbnail(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Title@QuickLink@ShareTarget@DataTransfer@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Title(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1QuickLink@ShareTarget@DataTransfer@ApplicationModel@Windows@@UEAA@XZ
    virtual ~QuickLink();
};
} // namespace Windows::ApplicationModel::DataTransfer::ShareTarget
