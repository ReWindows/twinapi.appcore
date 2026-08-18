#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 22 member(s).
class CApplicationViewTransferContextStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CApplicationViewTransferContextStatics@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CApplicationViewTransferContextStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CApplicationViewTransferContextStatics@@QEAA@XZ
    CApplicationViewTransferContextStatics();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CApplicationViewTransferContextStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CApplicationViewTransferContextStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CApplicationViewTransferContextStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CApplicationViewTransferContextStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@CApplicationViewTransferContextStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CApplicationViewTransferContextStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CApplicationViewTransferContextStatics@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DataPackageFormatId@CApplicationViewTransferContextStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DataPackageFormatId(HSTRING__* *);
};
