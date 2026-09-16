#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 31 member(s).
class ShareProviderImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ShareProviderImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandler@ShareProviderImpl@@UEAAJPEAPEAUIShareProviderHandler@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long GetHandler(::Windows::ApplicationModel::DataTransfer::IShareProviderHandler * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ShareProviderImpl@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ShareProviderImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ShareProviderImpl@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@ShareProviderImpl@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@ShareProviderImpl@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ShareProviderImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ShareProviderImpl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ShareProviderImpl@@QEAAJPEAUHSTRING__@@PEAUIRandomAccessStreamReference@Streams@Storage@Windows@@UColor@UI@6@PEAUIShareProviderHandler@DataTransfer@ApplicationModel@6@@Z
    long RuntimeClassInitialize(HSTRING__*, WindissectOpaque *, ::Windows::UI::Color, ::Windows::ApplicationModel::DataTransfer::IShareProviderHandler *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ShareProviderImpl@@QEAA@XZ
    ShareProviderImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BackgroundColor@ShareProviderImpl@@UEAAJPEAUColor@UI@Windows@@@Z
    virtual long get_BackgroundColor(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayIcon@ShareProviderImpl@@UEAAJPEAPEAUIRandomAccessStreamReference@Streams@Storage@Windows@@@Z
    virtual long get_DisplayIcon(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Tag@ShareProviderImpl@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Tag(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Title@ShareProviderImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Title(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Tag@ShareProviderImpl@@UEAAJPEAUIInspectable@@@Z
    virtual long put_Tag(IInspectable *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShareProviderImpl@@UEAA@XZ
    virtual ~ShareProviderImpl();
};
