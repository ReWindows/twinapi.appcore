#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 20 member(s).
class ShareProvidersRequestedEventArgsImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ShareProvidersRequestedEventArgsImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ShareProvidersRequestedEventArgsImpl@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ShareProvidersRequestedEventArgsImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ShareProvidersRequestedEventArgsImpl@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCompleteHandler@ShareProvidersRequestedEventArgsImpl@@QEAAXXZ
    void InvokeCompleteHandler();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ShareProvidersRequestedEventArgsImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ShareProvidersRequestedEventArgsImpl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ShareProvidersRequestedEventArgsImpl@@QEAAJPEAV?$AgileVector@PEAVShareProvider@DataTransfer@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVShareProvider@DataTransfer@ApplicationModel@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVShareProvider@DataTransfer@ApplicationModel@Windows@@@6784@$0A@@Internal@Collections@Foundation@Windows@@PEAUIShareProvidersRequestedCallback@@PEAUIDataPackageView@DataTransfer@ApplicationModel@6@@Z
    long RuntimeClassInitialize(WindissectOpaque *, IShareProvidersRequestedCallback *, ::Windows::ApplicationModel::DataTransfer::IDataPackageView *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ShareProvidersRequestedEventArgsImpl@@QEAA@XZ
    ShareProvidersRequestedEventArgsImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Data@ShareProvidersRequestedEventArgsImpl@@UEAAJPEAPEAUIDataPackageView@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long get_Data(::Windows::ApplicationModel::DataTransfer::IDataPackageView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Providers@ShareProvidersRequestedEventArgsImpl@@UEAAJPEAPEAU?$IVector@PEAVShareProvider@DataTransfer@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_Providers(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShareProvidersRequestedEventArgsImpl@@UEAA@XZ
    virtual ~ShareProvidersRequestedEventArgsImpl();
};
