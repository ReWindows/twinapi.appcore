#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 21 member(s).
class CDataRequestShim {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDataRequestShim@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDataRequestShim@@QEAA@XZ
    CDataRequestShim();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FailWithDisplayText@CDataRequestShim@@UEAAJPEAUHSTRING__@@@Z
    virtual long FailWithDisplayText(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeferral@CDataRequestShim@@UEAAJPEAPEAUIDataRequestDeferral@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long GetDeferral(::Windows::ApplicationModel::DataTransfer::IDataRequestDeferral * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CDataRequestShim@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CDataRequestShim@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CDataRequestShim@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDataRequestShim@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDataRequestShim@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Data@CDataRequestShim@@UEAAJPEAPEAUIDataPackage@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long get_Data(::Windows::ApplicationModel::DataTransfer::IDataPackage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Deadline@CDataRequestShim@@UEAAJPEAUDateTime@Foundation@Windows@@@Z
    virtual long get_Deadline(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Data@CDataRequestShim@@UEAAJPEAUIDataPackage@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long put_Data(::Windows::ApplicationModel::DataTransfer::IDataPackage *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDataRequestShim@@UEAA@XZ
    virtual ~CDataRequestShim();
};
