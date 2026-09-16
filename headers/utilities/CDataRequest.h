#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 16 member(s).
class CDataRequest {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelTimer@CDataRequest@@QEAAXXZ
    void CancelTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FailWithDisplayText@CDataRequest@@QEAAJPEAUHSTRING__@@@Z
    long FailWithDisplayText(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CDataRequest@@QEAAJPEAUISharingRequestPriv@@@Z
    long RuntimeClassInitialize(ISharingRequestPriv *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetData@CDataRequest@@QEAAJPEAUIDataPackage@DataTransfer@ApplicationModel@Windows@@@Z
    long SetData(::Windows::ApplicationModel::DataTransfer::IDataPackage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupDeferral@CDataRequest@@QEAAJXZ
    long SetupDeferral();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartTimer@CDataRequest@@QEAAJXZ
    long StartTimer();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDataRequest@@UEAA@XZ
    virtual ~CDataRequest();
};
