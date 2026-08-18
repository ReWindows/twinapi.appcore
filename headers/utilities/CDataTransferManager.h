#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 45 member(s).
class CDataTransferManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDataTransferManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDataTransferManager@@QEAA@XZ
    CDataTransferManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireSharingContentRequested@CDataTransferManager@@UEAAJPEBDPEAUISharingRequestPriv@@@Z
    virtual long FireSharingContentRequested(char const *, ISharingRequestPriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireSharingProvidersRequested@CDataTransferManager@@UEAAJPEBDPEAUIShareProvidersRequestedCallback@@PEAUIUnknown@@@Z
    virtual long FireSharingProvidersRequested(char const *, IShareProvidersRequestedCallback *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireTargetApplicationActivated@CDataTransferManager@@UEAAJPEBDPEBG@Z
    virtual long FireTargetApplicationActivated(char const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CDataTransferManager@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CDataTransferManager@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CDataTransferManager@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDataTransferManager@@UEAAJPEAUHWND__@@@Z
    virtual long Initialize(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeFlow@CDataTransferManager@@UEAAJXZ
    virtual long InvokeFlow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeFlowForAppId@CDataTransferManager@@UEAAJPEBG@Z
    virtual long InvokeFlowForAppId(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeFlowWithOptions@CDataTransferManager@@UEAAJPEAUIUnknown@@@Z
    virtual long InvokeFlowWithOptions(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeShareProviderHandler@CDataTransferManager@@UEAAJPEBDPEAUIUnknown@@1@Z
    virtual long InvokeShareProviderHandler(char const *, IUnknown *, IUnknown *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDataTransferManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDataTransferManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSharingInProgress@CDataTransferManager@@UEAAJE@Z
    virtual long SetSharingInProgress(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DataRequested@CDataTransferManager@@UEAAJPEAU?$ITypedEventHandler@PEAVDataTransferManager@DataTransfer@ApplicationModel@Windows@@PEAVDataRequestedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_DataRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ShareProvidersRequested@CDataTransferManager@@UEAAJPEAU?$ITypedEventHandler@PEAVDataTransferManager@DataTransfer@ApplicationModel@Windows@@PEAVShareProvidersRequestedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ShareProvidersRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TargetApplicationChosen@CDataTransferManager@@UEAAJPEAU?$ITypedEventHandler@PEAVDataTransferManager@DataTransfer@ApplicationModel@Windows@@PEAVTargetApplicationChosenEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_TargetApplicationChosen(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DataRequested@CDataTransferManager@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DataRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ShareProvidersRequested@CDataTransferManager@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ShareProvidersRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TargetApplicationChosen@CDataTransferManager@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_TargetApplicationChosen(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDataTransferManager@@UEAA@XZ
    virtual ~CDataTransferManager();
private:
    // Category: Method | Source: PE Export
    // Symbol: ?OnExperienceCallback@CDataTransferManager@@CAJPEAXPEBXIH@Z
    static long OnExperienceCallback(void *, void const *, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterProxyWindowCleanupHandlers@CDataTransferManager@@CAXPEAVCDataRequestedEventArgs@@@Z
    static void RegisterProxyWindowCleanupHandlers(CDataRequestedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowShareUIFromRemoteDataTransferManager@CDataTransferManager@@AEAAJXZ
    long ShowShareUIFromRemoteDataTransferManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckPendingShareFlow@CDataTransferManager@@AEAAJXZ
    long _CheckPendingShareFlow();
};
