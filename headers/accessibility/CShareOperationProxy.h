#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 18 member(s).
class CShareOperationProxy {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CShareOperationProxy@@QEAA@XZ
    CShareOperationProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissUI@CShareOperationProxy@@UEAAJXZ
    virtual long DismissUI();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIdentifier@CShareOperationProxy@@UEAAJPEAPEAEPEAI@Z
    virtual long GetIdentifier(unsigned char * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBrokeredTaskCreated@CShareOperationProxy@@UEAAJPEAUIBrokeredTask@@@Z
    virtual long OnBrokeredTaskCreated(IBrokeredTask *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveThisQuickLink@CShareOperationProxy@@UEAAJXZ
    virtual long RemoveThisQuickLink();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportCompleted@CShareOperationProxy@@UEAAJXZ
    virtual long ReportCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportCompletedWithQuickLink@CShareOperationProxy@@UEAAJPEAUIQuickLink@ShareTarget@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long ReportCompletedWithQuickLink(::Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportDataRetrieved@CShareOperationProxy@@UEAAJXZ
    virtual long ReportDataRetrieved();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportError@CShareOperationProxy@@UEAAJPEAUHSTRING__@@@Z
    virtual long ReportError(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportStarted@CShareOperationProxy@@UEAAJXZ
    virtual long ReportStarted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportSubmittedBackgroundTask@CShareOperationProxy@@UEAAJXZ
    virtual long ReportSubmittedBackgroundTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Contacts@CShareOperationProxy@@UEAAJPEAPEAU?$IVectorView@PEAVContact@Contacts@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_Contacts(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Data@CShareOperationProxy@@UEAAJPEAPEAUIDataPackageView@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long get_Data(::Windows::ApplicationModel::DataTransfer::IDataPackageView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QuickLinkId@CShareOperationProxy@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_QuickLinkId(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShareOperationProxy@@UEAA@XZ
    virtual ~CShareOperationProxy();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalContacts@CShareOperationProxy@@AEAAJXZ
    long MarshalContacts();
};
