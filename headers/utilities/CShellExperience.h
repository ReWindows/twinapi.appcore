#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 36 member(s).
class CShellExperience {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CShellExperience@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowSetForeground@CShellExperience@@UEAAJXZ
    virtual long AllowSetForeground();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CShellExperience@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CShellExperience@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CShellExperience@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CShellExperience@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@CShellExperience@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CShellExperience@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueEvent@CShellExperience@@UEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z
    virtual long QueueEvent(HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseReactivatedEvent@CShellExperience@@UEAAJPEAUHSTRING__@@PEAUIBuffer@Streams@Storage@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z
    virtual long RaiseReactivatedEvent(HSTRING__*, WindissectOpaque *, WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CShellExperience@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExperienceId@CShellExperience@@UEAAJPEAUHSTRING__@@@Z
    virtual long SetExperienceId(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateProperties@CShellExperience@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    virtual long UpdateProperties(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Reactivated@CShellExperience@@UEAAJPEAU?$ITypedEventHandler@PEAVShellExperience@Experience@Shell@Internal@Windows@@PEAVShellExperienceReactivatedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Reactivated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExperienceID@CShellExperience@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ExperienceID(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Properties@CShellExperience@@UEAAJPEAPEAUIShellExperienceProperties@Experience@Shell@Internal@Windows@@@Z
    virtual long get_Properties(::Windows::Internal::Shell::Experience::IShellExperienceProperties * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ExperienceID@CShellExperience@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_ExperienceID(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Properties@CShellExperience@@UEAAJPEAUIShellExperienceProperties@Experience@Shell@Internal@Windows@@@Z
    virtual long put_Properties(::Windows::Internal::Shell::Experience::IShellExperienceProperties *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Reactivated@CShellExperience@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Reactivated(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShellExperience@@UEAA@XZ
    virtual ~CShellExperience();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeStringToBuffer@CShellExperience@@CAJPEAUHSTRING__@@PEAPEAUIBuffer@Streams@Storage@Windows@@@Z
    static long SerializeStringToBuffer(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetShellExperienceBroker@CShellExperience@@AEAAJPEAPEAUIShellExperienceBroker@@@Z
    long _GetShellExperienceBroker(IShellExperienceBroker * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyQueueEvent@CShellExperience@@AEAAJPEAUHSTRING__@@PEAUIBuffer@Streams@Storage@Windows@@@Z
    long _NotifyQueueEvent(HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyShellExperienceManager@CShellExperience@@AEAAJXZ
    long _NotifyShellExperienceManager();
};
