#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 19 member(s).
class CDataRequestedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDataRequestedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDataRequestedEventArgs@@QEAA@XZ
    CDataRequestedEventArgs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventHandlerReturned@CDataRequestedEventArgs@@QEAAXXZ
    void EventHandlerReturned();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CDataRequestedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CDataRequestedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CDataRequestedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDataRequestedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDataRequestedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportError@CDataRequestedEventArgs@@QEAAXJ@Z
    void ReportError(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Request@CDataRequestedEventArgs@@UEAAJPEAPEAUIDataRequest@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long get_Request(::Windows::ApplicationModel::DataTransfer::IDataRequest * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDataRequestedEventArgs@@UEAA@XZ
    virtual ~CDataRequestedEventArgs();
};
