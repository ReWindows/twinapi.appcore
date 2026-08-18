#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 70 member(s).
class CommandLineActivatedEventArgsImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CommandLineActivatedEventArgsImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CommandLineActivatedEventArgsImpl@@QEAA@XZ
    CommandLineActivatedEventArgsImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CommandLineActivatedEventArgsImpl@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CommandLineActivatedEventArgsImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CommandLineActivatedEventArgsImpl@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CommandLineActivatedEventArgsImpl@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@CommandLineActivatedEventArgsImpl@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalObjectToPropertySet@CommandLineActivatedEventArgsImpl@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    virtual long MarshalObjectToPropertySet(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CommandLineActivatedEventArgsImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CommandLineActivatedEventArgsImpl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CommandLineActivatedEventArgsImpl@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Operation@CommandLineActivatedEventArgsImpl@@UEAAJPEAPEAUICommandLineActivationOperation@Activation@ApplicationModel@Windows@@@Z
    virtual long get_Operation(::Windows::ApplicationModel::Activation::ICommandLineActivationOperation * *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CommandLineActivatedEventArgsImpl@@EEAA@XZ
    virtual ~CommandLineActivatedEventArgsImpl();
};
