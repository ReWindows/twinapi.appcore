#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 16 member(s).
class ShareProviderFactoryImpl {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?ActivateInstance@ShareProviderFactoryImpl@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ShareProviderFactoryImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@ShareProviderFactoryImpl@@UEAAJPEAUHSTRING__@@PEAUIRandomAccessStreamReference@Streams@Storage@Windows@@UColor@UI@6@PEAUIShareProviderHandler@DataTransfer@ApplicationModel@6@PEAPEAUIShareProvider@DataTransfer@ApplicationModel@6@@Z
    virtual long Create(HSTRING__*, WindissectOpaque *, ::Windows::UI::Color, ::Windows::ApplicationModel::DataTransfer::IShareProviderHandler *, ::Windows::ApplicationModel::DataTransfer::IShareProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ShareProviderFactoryImpl@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ShareProviderFactoryImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ShareProviderFactoryImpl@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ShareProviderFactoryImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ShareProviderFactoryImpl@@UEAAKXZ
    virtual unsigned long Release();
};
