#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 9 member(s).
class DisplayPickerHelper {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DisplayPickerHelper@@QEAA@XZ
    DisplayPickerHelper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@DisplayPickerHelper@@UEAAJPEAUIProjectionDevicePicker@Internal@Picker@Devices@Windows@@PEAUIInspectable@@@Z
    virtual long Invoke(::Windows::Devices::Picker::Internal::IProjectionDevicePicker *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@DisplayPickerHelper@@UEAAJPEAUIProjectionDevicePicker@Internal@Picker@Devices@Windows@@PEAUIProjectionDeviceSelectedEventArgs@3456@@Z
    virtual long Invoke(::Windows::Devices::Picker::Internal::IProjectionDevicePicker *, ::Windows::Devices::Picker::Internal::IProjectionDeviceSelectedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@DisplayPickerHelper@@QEAAJPEAUHWND__@@@Z
    long RuntimeClassInitialize(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@DisplayPickerHelper@@UEAAJAEBURect@Foundation@Windows@@W4Placement@Popups@UI@4@KPEA_N2PEAPEAG3@Z
    virtual long Show(WindissectOpaque const &, int, unsigned long, bool *, bool *, unsigned short * *, unsigned short * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DisplayPickerHelper@@UEAA@XZ
    virtual ~DisplayPickerHelper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetProcessNotification@DisplayPickerHelper@@AEAAXXZ
    void _ResetProcessNotification();
};
