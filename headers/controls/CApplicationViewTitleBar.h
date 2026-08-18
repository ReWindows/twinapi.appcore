#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 39 member(s).
class CApplicationViewTitleBar {
public:
    class WinRTReferenceColor;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CApplicationViewTitleBar@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CApplicationViewTitleBar@@QEAA@XZ
    CApplicationViewTitleBar();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CApplicationViewTitleBar@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CApplicationViewTitleBar@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CApplicationViewTitleBar@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CApplicationViewTitleBar@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CApplicationViewTitleBar@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CApplicationViewTitleBar@@QEAAJPEAUITitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@PEAUHWND__@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BackgroundColor@CApplicationViewTitleBar@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@Windows@@@Z
    virtual long get_BackgroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonBackgroundColor@CApplicationViewTitleBar@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@Windows@@@Z
    virtual long get_ButtonBackgroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonForegroundColor@CApplicationViewTitleBar@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@Windows@@@Z
    virtual long get_ButtonForegroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonHoverBackgroundColor@CApplicationViewTitleBar@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@Windows@@@Z
    virtual long get_ButtonHoverBackgroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonHoverForegroundColor@CApplicationViewTitleBar@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@Windows@@@Z
    virtual long get_ButtonHoverForegroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonInactiveBackgroundColor@CApplicationViewTitleBar@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@Windows@@@Z
    virtual long get_ButtonInactiveBackgroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonInactiveForegroundColor@CApplicationViewTitleBar@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@Windows@@@Z
    virtual long get_ButtonInactiveForegroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonPressedBackgroundColor@CApplicationViewTitleBar@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@Windows@@@Z
    virtual long get_ButtonPressedBackgroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonPressedForegroundColor@CApplicationViewTitleBar@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@Windows@@@Z
    virtual long get_ButtonPressedForegroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ForegroundColor@CApplicationViewTitleBar@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@Windows@@@Z
    virtual long get_ForegroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InactiveBackgroundColor@CApplicationViewTitleBar@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@Windows@@@Z
    virtual long get_InactiveBackgroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InactiveForegroundColor@CApplicationViewTitleBar@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@Windows@@@Z
    virtual long get_InactiveForegroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BackgroundColor@CApplicationViewTitleBar@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@Windows@@@Z
    virtual long put_BackgroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ButtonBackgroundColor@CApplicationViewTitleBar@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@Windows@@@Z
    virtual long put_ButtonBackgroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ButtonForegroundColor@CApplicationViewTitleBar@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@Windows@@@Z
    virtual long put_ButtonForegroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ButtonHoverBackgroundColor@CApplicationViewTitleBar@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@Windows@@@Z
    virtual long put_ButtonHoverBackgroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ButtonHoverForegroundColor@CApplicationViewTitleBar@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@Windows@@@Z
    virtual long put_ButtonHoverForegroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ButtonInactiveBackgroundColor@CApplicationViewTitleBar@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@Windows@@@Z
    virtual long put_ButtonInactiveBackgroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ButtonInactiveForegroundColor@CApplicationViewTitleBar@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@Windows@@@Z
    virtual long put_ButtonInactiveForegroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ButtonPressedBackgroundColor@CApplicationViewTitleBar@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@Windows@@@Z
    virtual long put_ButtonPressedBackgroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ButtonPressedForegroundColor@CApplicationViewTitleBar@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@Windows@@@Z
    virtual long put_ButtonPressedForegroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ForegroundColor@CApplicationViewTitleBar@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@Windows@@@Z
    virtual long put_ForegroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InactiveBackgroundColor@CApplicationViewTitleBar@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@Windows@@@Z
    virtual long put_InactiveBackgroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InactiveForegroundColor@CApplicationViewTitleBar@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@Windows@@@Z
    virtual long put_InactiveForegroundColor(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CApplicationViewTitleBar@@UEAA@XZ
    virtual ~CApplicationViewTitleBar();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetColor@CApplicationViewTitleBar@@AEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@Windows@@PEA_NPEAPEAU234@@Z
    long _SetColor(WindissectOpaque *, bool *, WindissectOpaque * *);
};
