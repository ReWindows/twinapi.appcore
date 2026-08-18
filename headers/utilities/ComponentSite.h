#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 64 member(s).
namespace Windows::Foundation::Private {
class ComponentSite {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ComponentSite@Private@Foundation@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@ComponentSite@Private@Foundation@Windows@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitGlobalDCompDevice@ComponentSite@Private@Foundation@Windows@@SAJXZ
    static long CommitGlobalDCompDevice();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ComponentSite@Private@Foundation@Windows@@QEAA@XZ
    ComponentSite();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureSiteInput@ComponentSite@Private@Foundation@Windows@@UEAAJ_KPEAUIUnknown@@@Z
    virtual long ConfigureSiteInput(uint64_t, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectAsync@ComponentSite@Private@Foundation@Windows@@UEAAJPEAPEAU?$IAsyncOperation@I@34@@Z
    virtual long DisconnectAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ComponentSite@Private@Foundation@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ComponentSite@Private@Foundation@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSharedVisual@ComponentSite@Private@Foundation@Windows@@UEAAJPEAUICompositor@Composition@UI@4@PEAPEAUIVisual@674@@Z
    virtual long GetSharedVisual(::Windows::UI::Composition::ICompositor *, ::Windows::UI::Composition::IVisual * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ComponentSite@Private@Foundation@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@ComponentSite@Private@Foundation@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@ComponentSite@Private@Foundation@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ComponentSite@Private@Foundation@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ComponentSite@Private@Foundation@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSharedVisual@ComponentSite@Private@Foundation@Windows@@UEAAJXZ
    virtual long RemoveSharedVisual();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetComponentVisualHandle@ComponentSite@Private@Foundation@Windows@@UEAAJPEAX@Z
    virtual long SetComponentVisualHandle(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSharedVisual@ComponentSite@Private@Foundation@Windows@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSharedVisual(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartMonitoringComponentProcess@ComponentSite@Private@Foundation@Windows@@UEAAJPEAX@Z
    virtual long StartMonitoringComponentProcess(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopMonitoringComponentProcess@ComponentSite@Private@Foundation@Windows@@UEAAJXZ
    virtual long StopMonitoringComponentProcess();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ProcessExited@ComponentSite@Private@Foundation@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVComponentSite@Private@Foundation@Windows@@PEAUIInspectable@@@34@PEAUEventRegistrationToken@@@Z
    virtual long add_ProcessExited(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ComponentInteropWindow@ComponentSite@Private@Foundation@Windows@@UEAAJPEA_K@Z
    virtual long get_ComponentInteropWindow(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ComponentPid@ComponentSite@Private@Foundation@Windows@@UEAAJPEAI@Z
    virtual long get_ComponentPid(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ComponentViewInstanceId@ComponentSite@Private@Foundation@Windows@@UEAAJPEAI@Z
    virtual long get_ComponentViewInstanceId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CompositionDevice@ComponentSite@Private@Foundation@Windows@@UEAAJPEAPEAUICompositionDevice@234@@Z
    virtual long get_CompositionDevice(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CoreWindowSite@ComponentSite@Private@Foundation@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_CoreWindowSite(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HostInteropWindow@ComponentSite@Private@Foundation@Windows@@UEAAJPEA_K@Z
    virtual long get_HostInteropWindow(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HostViewInstanceId@ComponentSite@Private@Foundation@Windows@@UEAAJPEAI@Z
    virtual long get_HostViewInstanceId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@ComponentSite@Private@Foundation@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_Id(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputSite@ComponentSite@Private@Foundation@Windows@@UEAAJPEAPEAUIInputSite@Input@Internal@UI@4@@Z
    virtual long get_InputSite(::Windows::UI::Internal::Input::IInputSite * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsValid@ComponentSite@Private@Foundation@Windows@@UEAAJPEAE@Z
    virtual long get_IsValid(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SharedVisual@ComponentSite@Private@Foundation@Windows@@UEAAJPEAPEAUICompositionVisual@234@@Z
    virtual long get_SharedVisual(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_View@ComponentSite@Private@Foundation@Windows@@UEAAJPEAPEAUICoreApplicationView@Core@ApplicationModel@4@@Z
    virtual long get_View(::Windows::ApplicationModel::Core::ICoreApplicationView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ComponentInteropWindow@ComponentSite@Private@Foundation@Windows@@UEAAJ_K@Z
    virtual long put_ComponentInteropWindow(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ComponentPid@ComponentSite@Private@Foundation@Windows@@UEAAJI@Z
    virtual long put_ComponentPid(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ComponentViewInstanceId@ComponentSite@Private@Foundation@Windows@@UEAAJI@Z
    virtual long put_ComponentViewInstanceId(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CompositionDevice@ComponentSite@Private@Foundation@Windows@@UEAAJPEAUICompositionDevice@234@@Z
    virtual long put_CompositionDevice(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HostInteropWindow@ComponentSite@Private@Foundation@Windows@@UEAAJ_K@Z
    virtual long put_HostInteropWindow(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ProcessExited@ComponentSite@Private@Foundation@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ProcessExited(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ComponentSite@Private@Foundation@Windows@@UEAA@XZ
    virtual ~ComponentSite();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseOrDisconnectHelper@ComponentSite@Private@Foundation@Windows@@AEAAJW4ClosingType@1234@@Z
    long CloseOrDisconnectHelper(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromCoreAppMap@ComponentSite@Private@Foundation@Windows@@AEAAJXZ
    long RemoveFromCoreAppMap();
};
} // namespace Windows::Foundation::Private
