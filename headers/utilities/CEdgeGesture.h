#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 30 member(s).
class CEdgeGesture {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CEdgeGesture@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEdgeGesture@@QEAA@XZ
    CEdgeGesture();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Canceled@CEdgeGesture@@UEAAJW4EDGEGESTURE_INVOCATION_KIND@@W4EDGEGESTURE_SWIPELOCATION@@@Z
    virtual long Canceled(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Completed@CEdgeGesture@@UEAAJW4EDGEGESTURE_INVOCATION_KIND@@W4EDGEGESTURE_SWIPELOCATION@@@Z
    virtual long Completed(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CEdgeGesture@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CEdgeGesture@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CEdgeGesture@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CEdgeGesture@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@CEdgeGesture@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CEdgeGesture@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CEdgeGesture@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CEdgeGesture@@QEAAJPEAUHWND__@@@Z
    long RuntimeClassInitialize(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Starting@CEdgeGesture@@UEAAJW4EDGEGESTURE_INVOCATION_KIND@@W4EDGEGESTURE_SWIPELOCATION@@@Z
    virtual long Starting(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Canceled@CEdgeGesture@@UEAAJPEAU?$ITypedEventHandler@PEAVEdgeGesture@Input@UI@Windows@@PEAVEdgeGestureEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Canceled(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Completed@CEdgeGesture@@UEAAJPEAU?$ITypedEventHandler@PEAVEdgeGesture@Input@UI@Windows@@PEAVEdgeGestureEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Completed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Starting@CEdgeGesture@@UEAAJPEAU?$ITypedEventHandler@PEAVEdgeGesture@Input@UI@Windows@@PEAVEdgeGestureEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Starting(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Canceled@CEdgeGesture@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Canceled(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Completed@CEdgeGesture@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Completed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Starting@CEdgeGesture@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Starting(EventRegistrationToken);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanFireEvent@CEdgeGesture@@AEBA_NXZ
    bool _CanFireEvent() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnContextMenuRequested@CEdgeGesture@@AEAAJPEAUICoreWindow@Core@UI@Windows@@PEAUIContextMenuRequestedEventArgs@345@@Z
    long _OnContextMenuRequested(::Windows::UI::Core::ICoreWindow *, ::Windows::UI::Core::IContextMenuRequestedEventArgs *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEdgeGesture@@EEAA@XZ
    virtual ~CEdgeGesture();
};
