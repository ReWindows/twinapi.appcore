#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 6 member(s).
class ShareMessagingHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendCreateDataTransferManagerMessage@ShareMessagingHelper@@QEAAXXZ
    void SendCreateDataTransferManagerMessage();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ShareMessagingHelper@@QEAA@PEAUHWND__@@@Z
    ShareMessagingHelper(HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShareMessagingHelper@@QEAA@XZ
    ~ShareMessagingHelper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendDataForFormat@ShareMessagingHelper@@AEAAXAEAVHString@Wrappers@WRL@Microsoft@@PEAUIDataPackage@DataTransfer@ApplicationModel@Windows@@@Z
    void SendDataForFormat(::Microsoft::WRL::Wrappers::HString &, ::Windows::ApplicationModel::DataTransfer::IDataPackage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendDataPackageMetadata@ShareMessagingHelper@@AEAAXPEAUIDataPackage@DataTransfer@ApplicationModel@Windows@@@Z
    void SendDataPackageMetadata(::Windows::ApplicationModel::DataTransfer::IDataPackage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SharePlatformMessageReceivedHandler@ShareMessagingHelper@@AEAAJPEAUIDynamicVirtualChannelReceiver@DynamicVirtualChannel@Internal@Windows@@PEAUIDynamicVirtualChannelReceiverEventArgs@345@@Z
    long SharePlatformMessageReceivedHandler(::Windows::Internal::DynamicVirtualChannel::IDynamicVirtualChannelReceiver *, ::Windows::Internal::DynamicVirtualChannel::IDynamicVirtualChannelReceiverEventArgs *);
};
