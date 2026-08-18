#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 20 member(s).
class ShareProviderOperationImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ShareProviderOperationImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ShareProviderOperationImpl@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ShareProviderOperationImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ShareProviderOperationImpl@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ShareProviderOperationImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ShareProviderOperationImpl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportCompleted@ShareProviderOperationImpl@@UEAAJXZ
    virtual long ReportCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ShareProviderOperationImpl@@QEAAJPEBDPEAUIDataPackage@DataTransfer@ApplicationModel@Windows@@PEAUIShareProvider@345@@Z
    long RuntimeClassInitialize(char const *, ::Windows::ApplicationModel::DataTransfer::IDataPackage *, ::Windows::ApplicationModel::DataTransfer::IShareProvider *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ShareProviderOperationImpl@@QEAA@XZ
    ShareProviderOperationImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Data@ShareProviderOperationImpl@@UEAAJPEAPEAUIDataPackageView@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long get_Data(::Windows::ApplicationModel::DataTransfer::IDataPackageView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Provider@ShareProviderOperationImpl@@UEAAJPEAPEAUIShareProvider@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long get_Provider(::Windows::ApplicationModel::DataTransfer::IShareProvider * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShareProviderOperationImpl@@UEAA@XZ
    virtual ~ShareProviderOperationImpl();
};
