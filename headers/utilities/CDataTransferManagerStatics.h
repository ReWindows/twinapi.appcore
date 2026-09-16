#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 48 member(s).
class CDataTransferManagerStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CDataTransferManagerStatics@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDataTransferManagerStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDataTransferManagerStatics@@QEAA@XZ
    CDataTransferManagerStatics();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentView@CDataTransferManagerStatics@@UEAAJPEAPEAUIDataTransferManager@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long GetForCurrentView(::Windows::ApplicationModel::DataTransfer::IDataTransferManager * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForWindow@CDataTransferManagerStatics@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetForWindow(HWND__*, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CDataTransferManagerStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CDataTransferManagerStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CDataTransferManagerStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CDataTransferManagerStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@CDataTransferManagerStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupported@CDataTransferManagerStatics@@UEAAJPEAE@Z
    virtual long IsSupported(unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDataTransferManagerStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDataTransferManagerStatics@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShareToAppExperience@CDataTransferManagerStatics@@UEAAJ_KPEAUHSTRING__@@@Z
    virtual long ShareToAppExperience(uint64_t, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowShareUI@CDataTransferManagerStatics@@UEAAJXZ
    virtual long ShowShareUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowShareUIForWindow@CDataTransferManagerStatics@@UEAAJPEAUHWND__@@@Z
    virtual long ShowShareUIForWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowShareUIWithOptions@CDataTransferManagerStatics@@UEAAJPEAUIShareUIOptions@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long ShowShareUIWithOptions(::Windows::ApplicationModel::DataTransfer::IShareUIOptions *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDataTransferManagerStatics@@UEAA@XZ
    virtual ~CDataTransferManagerStatics();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateDataTransferManagerForHwnd@CDataTransferManagerStatics@@CAJPEAUHWND__@@_NPEAPEAUIDataTransferManager@DataTransfer@ApplicationModel@Windows@@@Z
    static long s_CreateDataTransferManagerForHwnd(HWND__*, bool, ::Windows::ApplicationModel::DataTransfer::IDataTransferManager * *);
};
