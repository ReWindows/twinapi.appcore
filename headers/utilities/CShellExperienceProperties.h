#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 63 member(s).
class CShellExperienceProperties {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CShellExperienceProperties@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CShellExperienceProperties@@QEAA@XZ
    CShellExperienceProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CShellExperienceProperties@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@CShellExperienceProperties@@UEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CShellExperienceProperties@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CShellExperienceProperties@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CShellExperienceProperties@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetView@CShellExperienceProperties@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    virtual long GetView(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKey@CShellExperienceProperties@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long HasKey(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@CShellExperienceProperties@@UEAAJPEAUHSTRING__@@PEAUIInspectable@@PEAE@Z
    virtual long Insert(HSTRING__*, IInspectable *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CShellExperienceProperties@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@CShellExperienceProperties@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lookup@CShellExperienceProperties@@UEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    virtual long Lookup(HSTRING__*, IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CShellExperienceProperties@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CShellExperienceProperties@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@CShellExperienceProperties@@UEAAJPEAUHSTRING__@@@Z
    virtual long Remove(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CShellExperienceProperties@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_MapChanged@CShellExperienceProperties@@UEAAJPEAU?$MapChangedEventHandler@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_MapChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DesiredSize@CShellExperienceProperties@@UEAAJPEAUSize@Foundation@Windows@@@Z
    virtual long get_DesiredSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FullScreen@CShellExperienceProperties@@UEAAJPEAE@Z
    virtual long get_FullScreen(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@CShellExperienceProperties@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DesiredSize@CShellExperienceProperties@@UEAAJUSize@Foundation@Windows@@@Z
    virtual long put_DesiredSize(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FullScreen@CShellExperienceProperties@@UEAAJE@Z
    virtual long put_FullScreen(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_MapChanged@CShellExperienceProperties@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_MapChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShellExperienceProperties@@UEAA@XZ
    virtual ~CShellExperienceProperties();
};
