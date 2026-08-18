# `Windows::ApplicationModel::Core` :: `CoreApplication`

**Category:** [Utilities & Helpers](./README.md)

Reconstructed from `twinapi.appcore.dll`. Total members: **246**.

```cpp
#pragma once

#include <cstdint>

// Forward declarations (automatically generated)
class WindissectOpaque;
class ApplicationViewTelemetry; 
class CApplicationViewTitleBar; 
class CCrashDetector; 
class CMarshaledInterface; 
class CUITelemetry; 
class CallerIdentity; 
class CoreApplicationProvider; 
class CoreApplicationViewTelemetry; 
class CortanaPermissionsTelemetry; 
namespace InputDial { class InputDialTelemetry; } 
class InputTraceLogging; 
namespace Microsoft { namespace Bamo { namespace Lib { namespace BamoImpl { class RecentFilesListener_AutoBamos; } } } } 
namespace Microsoft { namespace BamoImpl { class BamoAsyncOperationCoordinator; } } 
namespace Microsoft { namespace WRL { class Details; } } 
namespace Microsoft { namespace WRL { namespace Wrappers { class Details; } } } 
class RoVariant; 
class SharePlatformProvider; 
class UserActivitiesTraceProvider; 
class UserActivityRequestManagerProvider; 
namespace Windows { namespace ApplicationModel { namespace Core { class CoreApplicationView; } } } 
namespace Windows { namespace ApplicationModel { namespace Core { class CoreApplicationViewTitleBar; } } } 
namespace Windows { namespace ApplicationModel { class EnteredBackgroundEventArgs; } } 
namespace Windows { namespace ApplicationModel { class LeavingBackgroundEventArgs; } } 
namespace Windows { class Foundation; } 
namespace Windows { namespace Internal { class Details; } } 
namespace Windows { namespace Internal { class PlatformExtensions; } } 
namespace Windows { namespace Security { class ExchangeActiveSyncProvisioning; } } 
namespace Windows { namespace Storage { class Streams; } } 
class XWinRT; 
class tip2; 
class tson; 
class winrt; 
class APPLICATION_VIEW_DATA; class ActivityData; class AdvertisingManagerForUserImpl; class AdvertisingManagerHelperImpl; class AdvertisingManagerImpl; class AgileGitPtr; class ApplicationViewLoggingProvider; class ApplicationViewTelemetry; class AutoStubBias; class CActivateSink; class CActivatedEventArgsBase; class CActivatedEventArgsWithPrelaunchAndViewIdBase; class CActivatedEventArgsWithViewIdBase; class CActivationViewSwitcher; class CActivationViewSwitcherFactory; class CAggregatableClassFactory; class CApplicationView; class CApplicationViewConsolidatedEventArgs; class CApplicationViewServiceIdentity; class CApplicationViewStatics; class CApplicationViewTitleBar; class CApplicationViewTransferContext; class CApplicationViewTransferContextStatics; class CAsyncCallback; class CAutoSRWExclusiveLock; class CAutoSRWSharedLock; class CBackgroundActivationContext; class CBackgroundTaskCapability; class CBaseRPCTimeout; class CCrashDetector; class CDataRequest; class CDataRequestDeferralShim; class CDataRequestShim; class CDataRequestedEventArgs; class CDataTransferManager; class CDataTransferManagerStatics; class CEdgeGesture; class CEdgeGestureEventArgs; class CEdgeGestureFactory; class CIdentity; class CImmersiveWindowFactoryBase; class CImmersiveWindowFactoryProxy; class CLaunchActivatedEventArgs; class CLaunchActivatedEventArgsFactory; class CMarshaledInterface; class CMinImmersiveWindowFactory; class CNode; class COSTaskCompletion; class COSTaskCompletionHam; class CPackageDebugSettings; class CPair; class CPlmSuspendControl; class CProjectionManagerStatics; class CProtocolActivatedEventArgs; class CProtocolActivatedEventArgsFactory; class CRefCountedObject; class CSRWLock; class CSessionQueryService; class CShareBrokeredTask; class CShareOperationProxy; class CSharedModeSettingsStatics; class CShellExperience; class CShellExperienceProperties; class CShellExperienceReactivatedEventArgs; class CShellExperienceStatics; class CSmuggledObject; class CSuspensionDependencyManager; class CTCoAllocPolicy; class CTLocalAllocPolicy; class CTargetApplicationChosenEventArgs; class CThreadRefTaker; class CTypeWrapper; class CUITelemetry; class CViewModePreferences; class CViewModePreferencesStatics; class CViewSwitcherStatics; class CWRLObjectWithGITSite; class CWindowViewServiceIdentity; class CWindowViewServicesLifetimeManager; class CWrlAggregatableClass; class CWrlLightweightHandlerBase; class CWrlLightweightHandlerClient; class CWrlLightweightHandlerClientImpl; class CWrlLightweightHandlerServer; class CallerIdentity; class Chunk; class ChunkElementIterator; class ChunkView; class CloseHandle; class CloudPCHelpers; class CoTaskMemFree; class ComBlob; class CommandLineActivatedEventArgsImpl; class CommandLineActivatedEventArgsImplFactory; class ComponentActivationPrivate; class ComponentActivationResultImpl; class ComponentStatics; class ComponentStatics2; class ComponentUIPrivateActivatedEventArgs; class ComponentUIPrivateActivatedEventArgsFactory; class CompositionDeviceInterop; class CompositionVisualInterop; class ContainerSharingRequestPriv; class CoreApplicationProvider; class CoreApplicationView2Proxy; class CoreApplicationViewLoggingProvider; class CoreApplicationViewTelemetry; class CortanaPermissionsTelemetry; class CortanaSearchTelemetryLogging; class CreationThreadDispatcher; class CustomMaterialProps; class DataTransferManagerModalExperience; class DelegateInvokeHelper; class Destroy; class DisplayPickerHelper; class DisplayPickerHelperLogging; class DisplayPickerHelperTelemetry; class EducationSettingsStatics; class Event; class EventRegistrationToken; class ExperienceHostLogging; class ExperienceHostLoggingTelemetry; class FEATURE_ERROR; class FEATURE_LOGGED_TRAITS; class FEATURE_STATE_CHANGE_SUBSCRIPTION__; class FeedbackHubBroker; class GlobalInterfaceTable; class HINSTANCE__; class HKEY__; class HSTRING__; class HStringWithRelease; class HTIPTEST__; class HWND__; class HostedViewClosingEventArgsImpl; class IActivationFactory; class IAgileObject; class IApplicationGlomBroker; class IApplicationInvocableFlow; class IApplicationView8Internal; class IApplicationViewBroker; class IApplicationViewFullScreenInternal; class IApplicationViewPositionInternal; class IAsyncCallback; class IAsyncCallbackDispatcher; class IBackgroundActivationSessionManagerEvents; class IBackgroundTaskCapabilityInternal; class IBrokeredTask; class IBrokeredTaskNotify; class IClassFactory; class IComponentReceiveHandle; class IComponentSitePrivate; class ICoreApplicationViewTitleBarInternal; class ICoreWindowAdapterInterop; class ICoreWindowComponentInterop; class ICoreWindowInterop; class IDCompositionDesktopDevice; class IDCompositionDesktopDevicePartner; class IDCompositionDeviceInterop; class IDCompositionTarget; class IDCompositionVisual; class IDCompositionVisual2; class IDCompositionVisualInterop; class IDCompositionVisualPartner; class IDisplayPickerHelper; class IEdgeGestureSource; class IForegroundTransfer; class IFullScreenBroker; class IHostedViewDeferClose; class IImmersiveApplicationDebugControlInternal; class IImmersiveMonitor; class IImmersiveShellBroker; class IInitializeWithWindow; class IInspectable; class IMarshal; class IMessageCallSendHost; class IMessageConversation; class IMessagePort; class IMessageSession; class IModalExperienceExtension; class IOSTaskCompletion; class IOSTaskCompletion2; class IOSTaskCompletionRevokedHandler; class IObservableVector; class IPackageExecutionStateChangeNotification; class IPlmSuspendControl; class IPrivateCoreWindow; class IRestrictedErrorInfo; class IRpcOptions; class IServiceHostBrokerProvider; class IServiceProvider; class IShareInvocableFlow; class IShareProviderPrivate; class IShareProvidersRequestedCallback; class ISharingRequestPriv; class ISharingSourcePriv; class IShellExperienceBroker; class ISplashScreen; class IStream; class ITitleBarAppearanceBroker; class IUnknown; class IViewServiceIdentity; class IWeakReference; class IWeakReferenceSource; class IWindowSizingBroker; class InputTraceLogging; class Iterator; class KeyTraits; class LeaveCriticalSection; class MaterialPropertiesTelemetryLogging; class MaterialProps; class MaterialPropsBase; class MaterialPropsStatics; class MsgCallState; class MsgScopeID; class MsgString; class NonAgileDispatcher; class PinnedWebsiteFactoryImpl; class PinnedWebsiteImpl; class ProjectionManagerLoggingProvider; class RecentFilesActionInfoPrincipal; class RecentFilesActionInfoProxy; class RecentFilesListenerClientConnection; class RecentFilesListenerServerConnection; class RegCloseKey; class ReleaseSRWLockExclusive; class ReleaseSRWLockShared; class RemoteDesktopTelemetryCore; class RemoteDesktopUtils; class RestrictedComponentStatics; class RoVariant; class RpcOptionsHelper; class RpcServerErrorHelpers; class SP; class SP_HLOCAL; class ShareManagerProvider; class ShareMessagingHelper; class SharePlatformProvider; class ShareProviderFactoryImpl; class ShareProviderImpl; class ShareProviderOperationImpl; class ShareProvidersRequestedEventArgsImpl; class ShareWindowCommandLoggingProvider; class ShareWindowCommandTelemetry; class ShellSession; class SplitIterator; class StartupTaskActivatedEventArgsImpl; class StartupTaskActivatedEventArgsImplFactory; class TLV; class TaskbarPinningFactory; class TipReportingInfo; class TraceLoggingCorrelationVector; class TraceLoggingCorrelationVectorV2_t; class TwinApiAppCoreProvider; class UserActivitiesTraceProvider; class UserActivityChannelStaticsImpl; class UserActivityRequestImpl; class UserActivityRequestManagerImpl; class UserActivityRequestManagerProvider; class UserActivityRequestManagerStaticsImpl; class UserActivityRequestedEventArgsImpl; class UserAwareCallerIdentity; class UserAwareProcessIdentity; class Utils; class View; class ViewActivationResult; class ViewService; class WindowHelper; class WindowServicesLogging; class XWinRT; class _Buffer_view; class _CONTEXT; class _EAS_CLIENT_DEVICE_INFORMATION; class _EVENT_FILTER_DESCRIPTOR; class _EXCEPTION_RECORD; class _FILETIME; class _GUID; class _HAM_ACTIVITY_CALLBACK_PAYLOAD; class _Mbstatet; class _PSM_APPSTATE_REGISTRATION; class _RO_REGISTRATION_COOKIE; class _RTL_CRITICAL_SECTION; class _RTL_RUN_ONCE; class _RTL_SRWLOCK; class _SECURITY_ATTRIBUTES; class _TOKEN_MANDATORY_LABEL; class _TOKEN_OWNER; class _TOKEN_SECURITY_ATTRIBUTES_INFORMATION; class _TOKEN_SECURITY_ATTRIBUTE_V1const; class _TOKEN_USER; class _TP_CALLBACK_INSTANCE; class _TP_TIMER; class _TP_WAIT; class _TP_WORK; class _TlgReflectorTag_Param0IsProviderType; class _UNICODE_STRING; class _WNF_STATE_NAME; class _WNF_TYPE_ID; class _WNF_USER_SUBSCRIPTION; class __WIL_RTL_FEATURE_USAGE_DATA; class __WIL__WNF_STATE_NAME; class _tip_CloudPCExtensionNotifyTipTest; class _tip_CloudPCGetForWindowTipTest; class _tip_CloudPCSerializerTipTest; class _tip_RemoteDesktopHostGetCurrentTipTest; class _tip_RemoteDesktopLocalActionTipTest; class _tlgProvider_t; class _tlgWrapSz; class _tlgWrapperByRef; class _tlgWrapperByVal; class iterable_iterator_nothrow; class iterator; class lambda_02a86428158461f4dc557e8a6d2b58da; class lambda_036fdf7ef9381cb01bf02453a9b70cda; class lambda_04752c98d14d956ac34810cecee32b82; class lambda_0568c1d02acb6cfd2e0847962eb055f8; class lambda_05cef1f6fdf474c9f3ed207deba0f73b; class lambda_0a10a6f1c8fd6011902b34f2bc73ae47; class lambda_0c5c9dba1bfcf38c44c366a7e675cc4c; class lambda_0ca0ae0b18340746875f2cead81cf1bf; class lambda_0d777a2d81be1cece50164dfa8ecc594; class lambda_0d865b96fce7c02641690f4c93be6806; class lambda_102f77582a54758914d2b2a285cca115; class lambda_11719ddb7af569c571dd0d1a8e86b3b1; class lambda_1270d2a5e356d57a23a17f4cab796ff3; class lambda_1283f0781fd208bc295fa9d987634f7a; class lambda_16e90beb890bb5a0f3e760349136ba81; class lambda_173afd403649a69e372018b2c829629e; class lambda_1a3122b79915cc8a6a89dd287a2570ea; class lambda_1d5d2d34f64773d78d752442de1f6f0a; class lambda_1dff1401726d3ff2a88c959c52b8f99d; class lambda_1e55a80bb81ba0c2b5870bdc46a5e203; class lambda_21966711ae7a1998a0d02bc4695d5c9f; class lambda_22deb5770fee3f84e68d9acb5cacba14; class lambda_27d7d14823826031efde997a0b43464f; class lambda_280dea28ea9646253edd34947cb0c56c; class lambda_288a29455de0ed31b493fb052c13ecf9; class lambda_298aeba488d9bb0badda5769584f0ce6; class lambda_2a1598e3b58c60ea2007e5cdb1539adf; class lambda_2c33622b634b42688e160684566b8ad0; class lambda_2c778fc749a844d12e5af2170d04b461; class lambda_2cb6877f22df479bc8db11cbb49003e5; class lambda_2d7d05c0060d065ec95e56a39cb99f9d; class lambda_2f8f5a8bbe1258b45906a9b9801d2c6f; class lambda_31ff4a2c0d80fdc7dcdd77a826189af3; class lambda_32501005d6ccac55957e23ca74a3cd91; class lambda_32da9fb00b7a0d962c5da47bfca785ee; class lambda_34ec6f7c3896534feedd7c8959b9c99b; class lambda_35d1eb19b72b229630cf46e24773db45; class lambda_388bafe7b2abe38b0604ea4778d3e2ba; class lambda_3a45916471b3aa9b1bc2abf6093e097c; class lambda_3b4140cb53ca4bdc9328e69e4369f776; class lambda_3ca3992c153e556d907515321b7dba6f; class lambda_3cc4a64afc6128d83d5f3d248cfa2b6c; class lambda_3cdd2f15e21cf7699e46e1ea2280aa60; class lambda_3d7a86a60a6ffa8437595ef925602cc9; class lambda_3d7f6963719cdaaffbfd1a781722281a; class lambda_3dfc1d99bb85eb5f7ed8bfa1b4f05ef8; class lambda_3e2439b6d11d829675a1795798118bad; class lambda_40969db3430aac63964281b3ef6dcbc0; class lambda_43125c03a871f156fa83b765b51bc9a2; class lambda_48b4cfe3ad30734e46a2f67cd50c6d6f; class lambda_4b10207a7852c669eeab966fa96efd37; class lambda_4b2352314bb51adb7d6b37844e9687ef; class lambda_4cd6db8fa42e8751a798d1898a97b68a; class lambda_4d840bc2b9d8083e415c235a43ba55a8; class lambda_528a9a3a615b4d763ff7a80e02fe0606; class lambda_536aabd8396fe059602c90c7fadc8d73; class lambda_54a9d10c0130a0c37b411a1922d1458f; class lambda_54e9968fe4748bf3ffed524bde8784ea; class lambda_55376a90e52cb6f1a87c9c8dd9f03db0; class lambda_55fb7b179fb09efa9672c24f1065a601; class lambda_56c6915c6bdc8e56bc9476a4f5de68f6; class lambda_58164fb121266522882a6e7d2100f906; class lambda_583d5d57a0ae0c38b38683c327860aee; class lambda_5d8abe9bc87da946846ae7c424c547d5; class lambda_5f35489aad71f4f5df85ac3d0f61ed80; class lambda_6312b0f4ab93ee86b4d4bf67a12e3cd2; class lambda_634137658e9a3909f2d189723ce3e558; class lambda_6685f1c9f93d79016910bf32b10be4eb; class lambda_6766a8d502a0bafb84b25af48342bf86; class lambda_6c057fd7fe07988bb61d55b3a0f72996; class lambda_7030d12a21dba11210293044e97fe9c7; class lambda_72e676ed7aa26765821a6a785fee96bd; class lambda_739c26bc9a6e0d6e28021fc5e84f4868; class lambda_7436a8e101941e66520267930c02ec87; class lambda_757840746f67dbf400ab6558ad4b26a3; class lambda_75809acbbb7787ff8e8b770caea2ed3e; class lambda_7a37b05473701e197a36b9018b777fc4; class lambda_7dd712919cb8ee471a06d9fa1d991503; class lambda_7fa85c69944a64826e9cf34ed4d1e0f7; class lambda_87a3bcd26461087703d79c311179f030; class lambda_8a7d2eb8dd62c3f603da525ccd881d60; class lambda_8cb8b8a0e687bf0307555e8ecd7a4d4c; class lambda_8d34d4a02c43a0e0333ef1ffbd7da523; class lambda_8f7dda65764ee73d26260ba95c02182c; class lambda_9013ee9e23efe4882b67eff5b0ecf103; class lambda_91a8abb73af174da9e679f075ef427a9; class lambda_9266bce69ce560db4b42be4e79ea956c; class lambda_94a888c21fc104d2227361da1579f3b3; class lambda_95a4401bd1a293aa88aa8e0ee662e619; class lambda_98bd1fd8e399890a149b11aa8025529f; class lambda_997918018871054c095f0e71800fc0de; class lambda_99fcb8865352b94a382864325dcc47e5; class lambda_9a9fb1f201f635ad4f1f02094ee62bad; class lambda_9e143b6f1f63c6d6df3008e647f50299; class lambda_9fbb65ad67daeb9700ab4bc9a71b67bd; class lambda_a184920055c18acdef849eb28d6ffee7; class lambda_a274e44dc7d0e33deeaf90f0f93f8370; class lambda_a4fb263c18e63e5717678d11372eaebb; class lambda_af715e622cf4c00401566d9edd093612; class lambda_b0dd21ca8f98b267c9dfed18019033f3; class lambda_b0e35623d0f36fbd71c2bc289911e0f8; class lambda_b1025e5eff2589bec4de2a81057e2537; class lambda_b2b1f12ec5e10a03f029f18c1cd09bc3; class lambda_b318c533f770df7f86e24469dce60a5b; class lambda_b5602eca863c8697653aaef1fa2ae553; class lambda_b5da1c51b2e9cb391e3363ee9347503a; class lambda_b70241e9b5ebaad244db3e52d52cab17; class lambda_b7087a7af9aa5c62cfe4e1f215d16492; class lambda_b737cf33228134bea419d0a60a599f01; class lambda_b978106a95b12ded9109db0ce65cbee1; class lambda_b9c6a9526e98e8096438348dee47a029; class lambda_bd6be1d625bf25d97723f4960a493fe6; class lambda_c06bd913fe980784c932ce8bf93bd220; class lambda_c2fd7731c5ae0d37e65ea73be67c0f1b; class lambda_c345cdf3dcfda659ca4a5de6373bcc49; class lambda_c6942a2b4d9ad66f623ab3ded4fb85d7; class lambda_cd1543e457a4c434be657991cc7b6720; class lambda_d0e18bb7085214cbeede5ccc93ed8062; class lambda_d28283a6c310c846aef711a97467b492; class lambda_d3822f423c09f4d619ac08243ca5a7f3; class lambda_d54cf1f8e86697f83d0f6c344c45122f; class lambda_d5686a23820dc9b4bbfaca65874424a2; class lambda_d786000ed0b1eea095a7d99583335dd0; class lambda_dafa9902b759350aa39286ec1bcd5918; class lambda_db6615d73db91dd637bb757d5ab5bb94; class lambda_dbfc21e52a3d9c36ac1eb15f16c2a17e; class lambda_dfbe94b1cf60f4335119b73a1ba37156; class lambda_e201bcbe9ca6675b6820789ace03d40a; class lambda_e25cdcd0018e1012bf4ef4aa667c5761; class lambda_e376c91416f8ab9d6c776959bfb62292; class lambda_e478ebca019219710ec18bdfd8216607; class lambda_e57ee1a2e72b0b78287c6981a59e4902; class lambda_e8a79fb6fc3c45dd107e70bcaef2c08f; class lambda_e8cd93869a7f73d8d490ce3385f33a01; class lambda_e956b14c933205657ad5d2f19cd01032; class lambda_e98e4ec71303cd8151b1de4cc0da1dbb; class lambda_ea7f2d80bea802fcdbd79abebdd95d39; class lambda_eb4450fbed2e4811040a2d68b6ba0a5a; class lambda_ecc7324d837525eb667f13e8b1d6d360; class lambda_f0077d4b403204e4021dbb79c1713aa7; class lambda_f042b632a9055c4f9ca56ab397e7a0ea; class lambda_f177c15eaddc64c61f4e29e52ba17c8f; class lambda_f43160275266d14ca8cd8470dbcbcadb; class lambda_f8bf4f6bad25856445002f2d943cad4b; class lambda_fa3ad7dc6cd2dd04aa9550026dd63ab6; class lambda_fcff84a42bba68d02d1a1dc96260ea96; class lambda_fe4963f365ce69f195211d4d17e86514; class lambda_fef8da6f69e7fd30478257cc3edcee19; class lambda_ff7c215ef7c02be905006003b5646e7b; class permission; class promise_type; class size_address_ptr; class tagBIND_OPTS; class tagBLOB; class tagMsgRoutingInfo; class tagRECT; class thunk; class tip2; class tson; class type; class type_info; class vector_iterator; class wil_FeatureState; class wil_details_FeatureReportingCache; class wil_details_FeatureStateCache; class wil_details_FeatureUsageSRUM; class winrt; 
namespace BamoImpl { namespace RecentFilesListener_AutoBamos { class BamoConnectionImpl; class BamoPeerImpl; } } 
namespace BamoImpl { namespace ShareWindowCommandBamos_AutoBamos { class BamoConnectionImpl; class BamoPeerImpl; } } 
namespace BamoRecentFilesListener { class BamoRecentFilesActionInfoPrincipal; class BamoRecentFilesActionInfoProxy; class BamoRecentFilesActionInfoStub; class BamoRecentFilesListenerPrincipal; class BamoRecentFilesListenerProxy; class BamoRecentFilesListenerProxyOwner; class BamoRecentFilesListenerStub; } 
namespace BamoRecentFilesListener { namespace BamoImpl { class BamoRecentFilesActionInfoPrincipalImpl; class BamoRecentFilesActionInfoProxyImpl; class BamoRecentFilesActionInfoStubImpl; class BamoRecentFilesListenerPrincipalImpl; class BamoRecentFilesListenerProxyImpl; class BamoRecentFilesListenerStubImpl; } } 
namespace IAppWindow { namespace UI { namespace WindowManagement { class IAppWindow; } } } 
namespace ICoreWindow { namespace IApplicationViewConsolidatedEventArgsInternal { namespace UI { class IApplicationViewConsolidatedEventArgsInternal; } } } 
namespace ICoreWindow { namespace IContextMenuRequestedEventArgs { namespace UI { class IContextMenuRequestedEventArgs; } } } 
namespace ICoreWindow { namespace UI { namespace Core { class ICoreWindow; } } } 
namespace IDynamicVirtualChannelReceiver { namespace IDynamicVirtualChannelReceiverEventArgs { namespace Internal { class IDynamicVirtualChannelReceiverEventArgs; } } } 
namespace IDynamicVirtualChannelReceiver { namespace Internal { namespace DynamicVirtualChannel { class IDynamicVirtualChannelReceiver; } } } 
namespace InputDial { class InputDialTelemetry; class InputDialTraceProvider; } 
namespace MaterialPropertiesTelemetry { class CustomMaterialProperties_Initialize; class MaterialProperties_Initialize; } 
namespace Microsoft { namespace Bamo { class BamoPrincipal; class BamoProxy; class BamoStub; class BaseBamoConnection; class BaseBamoPeer; class Lock; class VariablySizedResult; } } 
namespace Microsoft { namespace Bamo { namespace Lib { namespace BamoImpl { class RecentFilesListener_AutoBamos; } } } } 
namespace Microsoft { namespace Bamo { namespace Lib { namespace RecentFilesListener_AutoBamos { class BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Principal; class BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Proxy; class BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Stub; class ListProxy; } } } } 
namespace Microsoft { namespace BamoImpl { class BamoAsyncOperationCoordinator; class BamoImplObject; class BamoPrincipalImpl; class BamoProxyImpl; class BamoStubImpl; class BaseBamoConnectionImpl; class BaseBamoPeerImpl; class BufferStream; class BufferingMessageCallHost; class CalloutWrapperObject; class ConnectionIndirector; class ConversationItem; class InternalLock; class RemoteCallBuffer; class Util; } } 
namespace Microsoft { namespace WRL { class ActivationFactory; class AgileRef; class CloakedIid; class ComPtr; class DeferrableEventArgs; class Details; class EventSource; class FtmBase; class Implements; class InvokeModeOptions; class RuntimeClassFlags; class SimpleClassFactory; class SimpleSealedActivationFactory; class WeakRef; } } 
namespace Microsoft { namespace WRL { namespace Wrappers { class Details; class HString; class HStringReference; class SRWLock; } } } 
namespace ProjectionManagerTelemetry { class RequestStartProjectingAsync; class RequestStartProjectingWithPlacementAsync; class StartProjectingAsync; class StartProjectingWithDeviceInfoAsync; class StopProjectingAsync; class SwapDisplaysForViewsAsync; } 
namespace RecentFilesListener_AutoBamos { class BamoConnection; class BamoPeer; } 
namespace RemoteSystemData { namespace Details { class ValueSetWriter; } } 
namespace ShareWindowCommandBamos_AutoBamos { class BamoConnection; class BamoPeer; } 
namespace ShareWindowCommandServerTip { class _tip_ShareWindowCommandSessionTest; class _tip_ShareWindowCommandSourceStubTest; } 
namespace ShareWindowCommandSourceTip { class _tip_ShareWindowCommandSourceCreationForValidLAFTest; } 
namespace SharedShareWindowCommandTip { class _tip_FindSharedWindowsTest; class _tip_ShareWindowCommandInvokeTest; } 
namespace TestInfo_ODR_guard { class TestInfo; } 
namespace Windows { class Foundation; } 
namespace Windows { namespace ApplicationModel { class EnteredBackgroundEventArgs; class IEnteredBackgroundEventArgs; class ILeavingBackgroundEventArgs; class ISuspendingDeferral; class ISuspendingEventArgs; class ISuspendingOperation; class LeavingBackgroundEventArgs; class PackageVersion; class SuspendingDeferral; class SuspendingDeferralRecord; class SuspendingEventArgs; class SuspendingOperation; } } 
namespace Windows { namespace ApplicationModel { namespace Activation { class BackgroundActivatedEventArgs; class ComponentActivationResultPrivate; class IActivatedEventArgs; class IBackgroundActivatedEventArgs; class ICommandLineActivatedEventArgs; class ICommandLineActivationOperation; class IComponentActivationResultPrivate; class IMultiviewActivationProperties; class IPrelaunchActivatedEventArgs; class IProtocolActivatedEventArgs; class IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData; class ISplashScreen; class ITileActivatedInfo; class MultiviewActivationProperties; } } } 
namespace Windows { namespace ApplicationModel { namespace Activation { namespace Private { class IApplicationActivationResult; class IApplicationActivationStatics; } } } } 
namespace Windows { namespace ApplicationModel { namespace AppService { class AppServiceResponse; class IAppServiceConnection; } } } 
namespace Windows { namespace ApplicationModel { namespace Background { class IBackgroundTask; class IBackgroundTaskFactory; class IBackgroundTaskInstance; } } } 
namespace Windows { namespace ApplicationModel { namespace Contacts { class Contact; } } } 
namespace Windows { namespace ApplicationModel { namespace Core { class ActivationEventCallback; class ApartmentShutdownCallback; class ApplicationActivationFactory; class BackgroundTaskWrapper; class ComponentPrivateTearOff; class CoreApplication; class CoreApplicationFactory; class CoreApplicationView; class CoreApplicationViewAgileContainer; class CoreApplicationViewTitleBar; class DefaultInProcBackgroundTask; class DesignModeWindowFactory; class HostedViewClosingEventArgs; class IActivationEventCallback; class IComponentPrivate; class ICoreApplication; class ICoreApplicationPrivate; class ICoreApplicationView; class ICoreApplicationView2; class ICoreApplicationView6; class ICoreApplicationViewInternal; class ICoreApplicationViewTitleBar; class IFrameworkView; class IFrameworkViewSource; class IHostPrivate; class IHostedViewClosingEventArgs; class IRestrictedAppContainer; class IUnhandledError; class IUnhandledErrorDetectedEventArgs; class UnhandledError; class UnhandledErrorDetectedEventArgs; class UnhandledErrorEvent; class UnhandledErrorInvokeHelper; } } } 
namespace Windows { namespace ApplicationModel { namespace Core { namespace Details { class SmugglableInterfaceLifetimeTraits; } } } } 
namespace Windows { namespace ApplicationModel { namespace Core { namespace Features { class OneCoreTransforms; } } } } 
namespace Windows { namespace ApplicationModel { namespace Core { namespace Internal { class IPrelaunchConfig; } } } } 
namespace Windows { namespace ApplicationModel { namespace DataTransfer { class DataRequestedEventArgs; class DataTransferManager; class IDataPackage; class IDataPackageView; class IDataRequest; class IDataRequestDeferral; class IDataRequestedEventArgs; class IDataTransferManager; class IDataTransferManager2; class IShareProvider; class IShareProviderHandler; class IShareProviderOperation; class IShareUIOptions; class IStandardDataFormatsStatics; class ITargetApplicationChosenEventArgs; class ShareProvider; class ShareProvidersRequestedEventArgs; class ShareUIOptions; class TargetApplicationChosenEventArgs; } } } 
namespace Windows { namespace ApplicationModel { namespace DataTransfer { namespace ShareTarget { class IQuickLink; class IShareOperation; class IShareOperation2; class IShareOperation3; class QuickLink; } } } } 
namespace Windows { namespace ApplicationModel { namespace Holographic { class HolographicKeyboardStatics; class IHolographicKeyboard; } } } 
namespace Windows { namespace ApplicationModel { namespace Internal { namespace UserActivities { class IUserActivityBrokerSource; class IUserActivityChannelInternalStatics; class IUserActivityResponder; } } } } 
namespace Windows { namespace ApplicationModel { namespace Preview { namespace Holographic { class HolographicApplicationPreview; class HolographicKeyboardPlacementOverridePreviewStatics; class IHolographicKeyboardPlacementOverridePreview; } } } } 
namespace Windows { namespace ApplicationModel { namespace UserActivities { class IUserActivity; class IUserActivity2; class IUserActivityChannel; class IUserActivityChannelStatics; class IUserActivityChannelStatics2; class IUserActivityChannelStatics3; class IUserActivityRequest; class IUserActivityRequestManager; class IUserActivityRequestedEventArgs; class UserActivityRequestManager; class UserActivityRequestedEventArgs; } } } 
namespace Windows { namespace Data { namespace Json { class IJsonArray; class IJsonObject; } } } 
namespace Windows { namespace Devices { namespace Enumeration { class IDeviceInformation; } } } 
namespace Windows { namespace Devices { namespace Picker { namespace Internal { class IProjectionDevicePicker; class IProjectionDeviceSelectedEventArgs; class ProjectionDevicePicker; class ProjectionDeviceSelectedEventArgs; } } } } 
namespace Windows { namespace Internal { class AsyncCallbackBase; class CBasicResult; class CMarshaledInterfaceResult; class CNoResult; class CResultBase; class ComTaskPool; class ComTaskPoolHandler; class Details; class GitPtr; class IAsyncFireCompletion; class IComPoolTask; class INilDelegate; class PlatformExtensions; class String; class StringReference; } } 
namespace Windows { namespace Internal { namespace ApplicationModel { class WindowManagement; } } } 
namespace Windows { namespace Internal { namespace ApplicationModel { namespace WindowingEnvironment { class IApplicationViewDisplayInfoBroker; class RectEqualityPredicate; class RectLifetimeTraits; } } } } 
namespace Windows { namespace Internal { namespace DynamicVirtualChannel { class DynamicVirtualChannelReceiver; class DynamicVirtualChannelReceiverEventArgs; class IDynamicVirtualChannelReceiver; class IDynamicVirtualChannelReceiverEventArgs; class IDynamicVirtualChannelReceiverFactory; class IDynamicVirtualChannelSenderFactory; } } } 
namespace Windows { namespace Internal { namespace FeedbackHub { class FeedbackHubInternalImpl; class IFeedbackHubInternal; } } } 
namespace Windows { namespace Internal { namespace Foundation { namespace Contracts { class IActivationFactoryContractRedirectorContext; } } } } 
namespace Windows { namespace Internal { namespace Holographic { namespace UI { class HolographicViewPropertiesStatics; } } } } 
namespace Windows { namespace Internal { namespace Services { namespace Cortana { class CortanaPermissionsAppServiceManager; class CortanaPermissionsAppServiceManagerFactory; class ICortanaPermissionsAppServiceManager; } } } } 
namespace Windows { namespace Internal { namespace Shell { namespace Experience { class IShellExperience; class IShellExperiencePrivate; class IShellExperienceProperties; class IShellExperienceReactivatedEventArgs; class IShellExperienceStatics; class ShellExperience; class ShellExperienceReactivatedEventArgs; } } } } 
namespace Windows { namespace Internal { namespace Shell { namespace ShareWindow { namespace Bamo { class AsyncBamoTaskSource; class AsyncBamoWindowIdArrayOperationContext; class BamoShareWindowCommandSourcePrincipal; class BamoShareWindowCommandSourcePrincipalOwner; class BamoShareWindowCommandSourceProxy; class BamoShareWindowCommandSourceProxyOwner; class BamoShareWindowCommandSourceStub; class CoreUIMessageSession; class ShareWindowCommandBamoClientConnection; class ShareWindowCommandBamoServerConnection; class ShareWindowCommandSourcePrincipalOwner; class ShareWindowCommandSourceProxyOwner; class ShareWindowProviderConnection; } } } } } 
namespace Windows { namespace Internal { namespace Shell { namespace ShareWindow { namespace Bamo { namespace BamoImpl { class BamoShareWindowCommandSourcePrincipalImpl; class BamoShareWindowCommandSourceProxyImpl; class BamoShareWindowCommandSourceStubImpl; } } } } } } 
namespace Windows { namespace Internal { namespace ShellHelpers { class PropertySetHelper; } } } 
namespace Windows { namespace Internal { namespace Taskbar { class IPinnedWebsite; class IPinnedWebsitesBrokerStatics; class PinnedWebsite; class PinnedWebsiteData; } } } 
namespace Windows { namespace Internal { namespace UI { namespace StartScreen { class IJumpListItemPrivate; class IJumpListItemSerialization; class IJumpListItemSerializationStatics; class IJumpListSerialization; class IJumpListSerializationStatics; } } } } 
namespace Windows { namespace Internal { namespace _StringDetail { class dummy_t; } } } 
namespace Windows { namespace Management { namespace Deployment { class IPackageManager; } } } 
namespace Windows { namespace Media { namespace Casting { namespace Internal { class IDeviceAssociationAndAccessHelperFactory; class IMiracastDeviceHelper; } } } } 
namespace Windows { namespace Phone { namespace UI { namespace Core { class INavigationClient; } } } } 
namespace Windows { namespace Security { class ExchangeActiveSyncProvisioning; } } 
namespace Windows { namespace Security { namespace Credentials { class IWebAccount; } } } 
namespace Windows { namespace Services { namespace Cortana { class CortanaPermissionsManager; class CortanaPermissionsManagerFactory; class ICortanaPermissionsManager; } } } 
namespace Windows { namespace Storage { class StorageFile; class Streams; } } 
namespace Windows { namespace System { class IDispatcherQueue; class IUser; } } 
namespace Windows { namespace System { namespace Internal { class ISignInStateManager; class IUserManagerStatics; } } } 
namespace Windows { namespace System { namespace Profile { class AnalyticsInfoStatics; class AnalyticsVersionInfo; class AppApplicabilityStatics; class IAnalyticsInfoStatics; class IAnalyticsInfoStatics2; class IAnalyticsVersionInfo; class IAnalyticsVersionInfo2; class ISharedModeSettingsStatics; class ISharedModeSettingsStatics2; class UnsupportedAppRequirement; } } } 
namespace Windows { namespace System { namespace UserProfile { class IAdvertisingManagerForUser; class IAdvertisingManagerStatics; class IAdvertisingManagerStatics2; } } } 
namespace Windows { namespace UI { class Color; class ICustomMaterialProperties; class IMaterialProperties; class IMaterialPropertiesStatics; class IUIContext; class WindowId; } } 
namespace Windows { namespace UI { namespace Composition { class ICompositionObject; class ICompositor; class ICompositorPartner; class IVisual; class IVisual2; class IVisualTargetPartner; } } } 
namespace Windows { namespace UI { namespace Core { class ApplicationViewConsolidatedEventArgsInternal; class ContextMenuRequestedEventArgs; class CoreDispatcher; class CoreWindow; class IApplicationViewConsolidatedEventArgsInternal; class IContextMenuRequestedEventArgs; class ICoreDispatcher; class ICoreWindow; class ICoreWindow5; class ICoreWindowFactory; class ICoreWindowSite; class ICoreWindowSitePrivate; class ICoreWindowStatic; class IDispatchedHandler; class IInputSiteProvider; class IWindowActivatedEventArgs; class WindowActivatedEventArgs; } } } 
namespace Windows { namespace UI { namespace Input { class EdgeGesture; class EdgeGestureEventArgs; class IEdgeGesture; class IRadialController; class IRadialControllerConfiguration; class IRadialControllerConfiguration2; class IRadialControllerMenu; class IRadialControllerMenuConfigInternal; class IRadialControllerMenuItem; class IRadialControllerMenuItemInternal; class IRadialControllerMenuPrivate; class IRadialControllerPrivate; class RadialControllerConfiguration; class RadialControllerConfigurationStatics; class RadialControllerMenu; class RadialControllerMenuItem; class RadialControllerMenuItemFactory; class RadialControllerMenuPrivateStatics; } } } 
namespace Windows { namespace UI { namespace Internal { namespace Input { class IComponentSiteInputObjectStatics; class IInputSite; class IInputSiteStatics; } } } } 
namespace Windows { namespace UI { namespace StartScreen { class IJumpList; class IJumpListItem; class IJumpListItemStatics; class IJumpListStatics; class JumpList; class JumpListItem; class JumpListItemStatics; class JumpListStatics; } } } 
namespace Windows { namespace UI { namespace ViewManagement { class ApplicationView; class ApplicationViewConsolidatedEventArgs; class IActivationViewSwitcher; class IApplicationView; class IApplicationView10; class IApplicationView2; class IApplicationView3; class IApplicationView4; class IApplicationView7; class IApplicationView9; class IApplicationViewConsolidatedEventArgs; class IApplicationViewConsolidatedEventArgs2; class IApplicationViewFullscreenStatics; class IApplicationViewInteropStatics; class IApplicationViewStatics; class IApplicationViewStatics2; class IApplicationViewStatics3; class IApplicationViewStatics4; class IApplicationViewSwitcherStatics; class IApplicationViewSwitcherStatics2; class IApplicationViewSwitcherStatics3; class IApplicationViewTitleBar; class IApplicationViewTransferContext; class IApplicationViewWithContext; class IUIViewSettings; class IViewModePreferences; class IViewModePreferencesStatics; class UIViewSettings; } } } 
namespace Windows { namespace UI { namespace WindowManagement { class AppWindow; class DisplayRegion; class IAppWindow; class IApplicationWindowPartner; class IWindowingEnvironment; } } } 
namespace Windows { namespace UI { namespace Xaml { class IUIElement; class IUIElementHostingPreviewStaticsPrivate; } } } 
namespace std { class _Container_proxy; class _Deque_const_iterator; class _Deque_iterator; class _Deque_simple_types; class _Deque_val; class _Exact_args_t; class _Hash_find_last_result; class _Iterator_base0; class _List_const_iterator; class _List_iterator; class _List_node; class _List_simple_types; class _List_unchecked_const_iterator; class _List_unchecked_iterator; class _List_val; class _Simple_types; class _String_constructor_concat_tag; class _String_view_iterator; class _Tree_find_result; class _Tree_id; class _Tree_iterator; class _Tree_node; class _Tree_simple_types; class _Tree_unchecked_const_iterator; class _Tree_val; class _Value_init_tag; class _Vector_const_iterator; class _Vector_iterator; class _Vector_val; class allocator; class bad_alloc; class bad_array_new_length; class bad_optional_access; class basic_ostream; class basic_streambuf; class basic_string; class basic_string_view; class basic_stringbuf; class char_traits; class default_delete; class deque; class exception; class exception_ptr; class fpos; class function; class invalid_argument; class locale; class logic_error; class nothrow_t; class nullptr_t; class optional; class pair; class piecewise_construct_t; class ratio; class reverse_iterator; class shared_ptr; class tuple; class unique_ptr; class vector; } 
namespace std { namespace chrono { class duration; class time_point; } } 
namespace std { namespace experimental { class coroutine_handle; class coroutine_traits; } } 
namespace wil { class ActivityBase; class ActivityThreadWatcher; class CallContextInfo; class DiagnosticsInfo; class FailureInfo; class ResultException; class StoredFailureInfo; class ThreadErrorContext; class WNF_CHANGE_STAMP_STRUCT; class com_ptr_t; class empty_deleter; class err_exception_policy; class err_failfast_policy; class err_returncode_policy; class function_deleter; class iterable_range_nothrow; class move_on_copy; class process_heap_deleter; class srwlock; class unique_any_array_ptr; class unique_any_t; class unique_winrt_event_token; class vector_range; } 
namespace wil { namespace details { class DestroyThreadPoolTimer; class FeatureLogging; class FeatureStateManager; class IFailureCallback; class MapToSmartType; class ResultStatus; class StoredCallContextInfo; class SystemThreadPoolMethods; class ThreadFailureCallbackHolder; class delete_wnf_subscription_state; class empty_wnf_state; class handle_null_resource_policy; class resource_policy; class shared_object; class token_info_deleter; class unique_storage; class wnf_subscription_state; class wnf_subscription_state_base; } } 
namespace wil { namespace details_abi { class FeatureStateData; class ProcessLocalData; class ProcessLocalStorageData; class RawUsageIndex; class ThreadLocalData; class UsageIndexProperty; class UsageIndexes; class heap_buffer; class heap_vector; } } 
namespace wistd { class default_delete; class function; class integral_constant; class unique_ptr; } 
namespace wistd { namespace __function { class __base; } } 

// Reconstructed from twinapi.appcore.dll by Windissect. 246 member(s).
namespace Windows::ApplicationModel::Core {
class CoreApplication {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireSuspendLockExclusive@CoreApplication@Core@ApplicationModel@Windows@@QEAAXXZ
    void AcquireSuspendLockExclusive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateApplication@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAUIActivatedEventArgs@Activation@34@AEBVString@Internal@4@111_KW4ACTIVATEOPTIONSINTERNAL@@@Z
    virtual long ActivateApplication(::Windows::ApplicationModel::Activation::IActivatedEventArgs *, ::Windows::Internal::String const &, ::Windows::Internal::String const &, ::Windows::Internal::String const &, ::Windows::Internal::String const &, uint64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateBackground@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAUIActivatedEventArgs@Activation@34@AEBVString@Internal@4@11AEAVAppRunOrActivateView@CoreApplicationProvider@@@Z
    virtual long ActivateBackground(::Windows::ApplicationModel::Activation::IActivatedEventArgs *, ::Windows::Internal::String const &, ::Windows::Internal::String const &, ::Windows::Internal::String const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateForeground@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAUIActivatedEventArgs@Activation@34@AEBVString@Internal@4@1111AEAVAppRunOrActivateView@CoreApplicationProvider@@_KW4ACTIVATEOPTIONSINTERNAL@@@Z
    virtual long ActivateForeground(::Windows::ApplicationModel::Activation::IActivatedEventArgs *, ::Windows::Internal::String const &, ::Windows::Internal::String const &, ::Windows::Internal::String const &, ::Windows::Internal::String const &, ::Windows::Internal::String const &, WindissectOpaque &, uint64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateSpecific@CoreApplication@Core@ApplicationModel@Windows@@QEAAJPEAUHSTRING__@@U_GUID@@PEAPEAUIInspectable@@@Z
    long ActivateSpecific(HSTRING__*, _GUID, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateSpecificWithViewId@CoreApplication@Core@ApplicationModel@Windows@@QEAAJPEAUHSTRING__@@IPEAPEAUIInspectable@@@Z
    long ActivateSpecificWithViewId(HSTRING__*, unsigned int, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddComponentSite@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAUIInspectable@@@Z
    virtual long AddComponentSite(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDispatcherMapping@CoreApplication@Core@ApplicationModel@Windows@@UEAAJKPEAUICoreDispatcher@2UI@4@@Z
    virtual long AddDispatcherMapping(unsigned long, ::Windows::UI::Core::ICoreDispatcher *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CoreApplication@Core@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddViewForComponentSite@CoreApplication@Core@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAVCoreApplicationViewAgileContainer@234@@Z
    virtual long AddViewForComponentSite(_GUID const &, ::Windows::ApplicationModel::Core::CoreApplicationViewAgileContainer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddViewForCurrentThread@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAVCoreApplicationViewAgileContainer@234@@Z
    virtual long AddViewForCurrentThread(::Windows::ApplicationModel::Core::CoreApplicationViewAgileContainer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddWindowThreadMapping@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAVCoreApplicationViewAgileContainer@234@@Z
    virtual long AddWindowThreadMapping(::Windows::ApplicationModel::Core::CoreApplicationViewAgileContainer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyViewActivationResults@CoreApplication@Core@ApplicationModel@Windows@@UEAAJAEBUViewActivationResult@@PEAUIActivatedEventArgs@Activation@34@W4ACTIVATEOPTIONSINTERNAL@@PEAUICoreWindowFactory@2UI@4@_KAEAW4ApplicationExecutionState@734@@Z
    virtual long ApplyViewActivationResults(ViewActivationResult const &, ::Windows::ApplicationModel::Activation::IActivatedEventArgs *, int, ::Windows::UI::Core::ICoreWindowFactory *, uint64_t, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheExecutionMode@CoreApplication@Core@ApplicationModel@Windows@@QEAAJXZ
    long CacheExecutionMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanUpClosedViews@CoreApplication@Core@ApplicationModel@Windows@@QEAAXXZ
    void CleanUpClosedViews();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureComponent@CoreApplication@Core@ApplicationModel@Windows@@UEAAJU_GUID@@II_KPEAPEAXPEAPEAUIInspectable@@@Z
    virtual long ConfigureComponent(_GUID, unsigned int, unsigned int, uint64_t, void * *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureComponentInput@CoreApplication@Core@ApplicationModel@Windows@@QEAAJU_GUID@@I_KPEA_KPEAPEAUIInspectable@@@Z
    long ConfigureComponentInput(_GUID, unsigned int, uint64_t, uint64_t *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureHostInput@CoreApplication@Core@ApplicationModel@Windows@@UEAAJU_GUID@@_K@Z
    virtual long ConfigureHostInput(_GUID, uint64_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CoreApplication@Core@ApplicationModel@Windows@@QEAA@XZ
    CoreApplication();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CoreApplication@Core@ApplicationModel@Windows@@SAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z
    static int Create(_RTL_RUN_ONCE *, void *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndSendSharedVisual@CoreApplication@Core@ApplicationModel@Windows@@UEAAJU_GUID@@IPEAUIInspectable@@@Z
    virtual long CreateAndSendSharedVisual(_GUID, unsigned int, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateComponentSite@CoreApplication@Core@ApplicationModel@Windows@@UEAAJ_KPEAPEAUIInspectable@@@Z
    virtual long CreateComponentSite(uint64_t, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHelper@CoreApplication@Core@ApplicationModel@Windows@@SAKPEAX@Z
    static unsigned long CreateHelper(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInternal@CoreApplication@Core@ApplicationModel@Windows@@SAJXZ
    static long CreateInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMainView@CoreApplication@Core@ApplicationModel@Windows@@QEAAJAEAVAppRunOrActivateView@CoreApplicationProvider@@@Z
    long CreateMainView(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewView@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@0PEAPEAUICoreApplicationView@234@@Z
    virtual long CreateNewView(HSTRING__*, HSTRING__*, ::Windows::ApplicationModel::Core::ICoreApplicationView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewViewFromMainView@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAPEAUICoreApplicationView@234@@Z
    virtual long CreateNewViewFromMainView(::Windows::ApplicationModel::Core::ICoreApplicationView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewViewWithExperienceId@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUICoreApplicationView@234@@Z
    virtual long CreateNewViewWithExperienceId(HSTRING__*, ::Windows::ApplicationModel::Core::ICoreApplicationView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewViewWithViewSource@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAUIFrameworkViewSource@234@PEAPEAUICoreApplicationView@234@@Z
    virtual long CreateNewViewWithViewSource(::Windows::ApplicationModel::Core::IFrameworkViewSource *, ::Windows::ApplicationModel::Core::ICoreApplicationView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNonImmersiveView@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAPEAUICoreApplicationView@234@@Z
    virtual long CreateNonImmersiveView(::Windows::ApplicationModel::Core::ICoreApplicationView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateShutdownMonitor@CoreApplication@Core@ApplicationModel@Windows@@QEAAJXZ
    long CreateShutdownMonitor();
    // Category: Method | Source: PE Export
    // Symbol: ?DecrementApplicationUseCount@CoreApplication@Core@ApplicationModel@Windows@@UEAAJXZ
    virtual long DecrementApplicationUseCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecrementOutstandingSuspendCount@CoreApplication@Core@ApplicationModel@Windows@@QEAAXXZ
    void DecrementOutstandingSuspendCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecrementVisibilityCount@CoreApplication@Core@ApplicationModel@Windows@@QEAAJPEAUIDeferral@Foundation@4@PEAUICoreDispatcher@2UI@4@@Z
    long DecrementVisibilityCount(WindissectOpaque *, ::Windows::UI::Core::ICoreDispatcher *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disconnect@CoreApplication@Core@ApplicationModel@Windows@@QEAAJU_GUID@@PEAI@Z
    long Disconnect(_GUID, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnablePrelaunch@CoreApplication@Core@ApplicationModel@Windows@@UEAAJE@Z
    virtual long EnablePrelaunch(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exit@CoreApplication@Core@ApplicationModel@Windows@@UEAAJXZ
    virtual long Exit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardLocalError@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAUIRestrictedErrorInfo@@@Z
    virtual long ForwardLocalError(IRestrictedErrorInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardRemoteError@CoreApplication@Core@ApplicationModel@Windows@@UEAAJKPEAUIRestrictedErrorInfo@@@Z
    virtual long ForwardRemoteError(unsigned long, IRestrictedErrorInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppDisplayName@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetAppDisplayName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationWindowWithId@CoreApplication@Core@ApplicationModel@Windows@@UEAAJHPEAPEAUIInspectable@@@Z
    virtual long GetApplicationWindowWithId(int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComponentSiteByViewInstanceId@CoreApplication@Core@ApplicationModel@Windows@@UEAAJIPEAPEAUIInspectable@@@Z
    virtual long GetComponentSiteByViewInstanceId(unsigned int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComponentSiteFromSiteId@CoreApplication@Core@ApplicationModel@Windows@@UEAAJU_GUID@@PEAPEAUIInspectable@@@Z
    virtual long GetComponentSiteFromSiteId(_GUID, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComponentSiteIdFromViewInstanceId@CoreApplication@Core@ApplicationModel@Windows@@UEAAJIPEAU_GUID@@@Z
    virtual long GetComponentSiteIdFromViewInstanceId(unsigned int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComponentViewInstanceId@CoreApplication@Core@ApplicationModel@Windows@@QEAAJU_GUID@@PEAI@Z
    long GetComponentViewInstanceId(_GUID, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComponentViewInstanceIdAndDisconnectSiteId@CoreApplication@Core@ApplicationModel@Windows@@QEAAJU_GUID@@PEAI@Z
    long GetComponentViewInstanceIdAndDisconnectSiteId(_GUID, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentView@CoreApplication@Core@ApplicationModel@Windows@@UEAAJW4GetViewFromTidOptions@234@PEAPEAUICoreApplicationView@234@@Z
    virtual long GetCurrentView(int, ::Windows::ApplicationModel::Core::ICoreApplicationView * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentView@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAPEAUICoreApplicationView@234@@Z
    virtual long GetCurrentView(::Windows::ApplicationModel::Core::ICoreApplicationView * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCustomActivationFactory@CoreApplication@Core@ApplicationModel@Windows@@QEAAJPEAUHSTRING__@@PEAPEAUIActivationFactory@@@Z
    long GetCustomActivationFactory(HSTRING__*, IActivationFactory * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirectCompositionDevice@CoreApplication@Core@ApplicationModel@Windows@@SAJPEAPEAUIDCompositionDesktopDevicePartner@@@Z
    static long GetDirectCompositionDevice(IDCompositionDesktopDevicePartner * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDispatcherFromHwnd@CoreApplication@Core@ApplicationModel@Windows@@UEAAJIPEAPEAUICoreDispatcher@2UI@4@@Z
    virtual long GetDispatcherFromHwnd(unsigned int, ::Windows::UI::Core::ICoreDispatcher * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHwndFromViewOnASTA@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAUICoreApplicationView@234@PEAI@Z
    virtual long GetHwndFromViewOnASTA(::Windows::ApplicationModel::Core::ICoreApplicationView *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIslandTransformsEnabled@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long GetIslandTransformsEnabled(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessHandle@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAPEAX@Z
    virtual long GetProcessHandle(void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSuspendControl@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAPEAUIPlmSuspendControl@@@Z
    virtual long GetSuspendControl(IPlmSuspendControl * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewFromThreadId@CoreApplication@Core@ApplicationModel@Windows@@UEAAJIPEAPEAUICoreApplicationViewInternal@234@@Z
    virtual long GetViewFromThreadId(unsigned int, ::Windows::ApplicationModel::Core::ICoreApplicationViewInternal * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewInstanceIdFromComponentSiteId@CoreApplication@Core@ApplicationModel@Windows@@UEAAJU_GUID@@PEAI@Z
    virtual long GetViewInstanceIdFromComponentSiteId(_GUID, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowFactory@CoreApplication@Core@ApplicationModel@Windows@@UEAAJ_KW4ACTIVATEOPTIONSINTERNAL@@PEAUIActivatedEventArgs@Activation@34@PEAPEAUICoreWindowFactory@2UI@4@AEAW4ApplicationExecutionState@734@@Z
    virtual long GetWindowFactory(uint64_t, int, ::Windows::ApplicationModel::Activation::IActivatedEventArgs *, ::Windows::UI::Core::ICoreWindowFactory * *, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowFromThreadId@CoreApplication@Core@ApplicationModel@Windows@@UEAAJIPEAPEAUICoreWindow@2UI@4@@Z
    virtual long GetWindowFromThreadId(unsigned int, ::Windows::UI::Core::ICoreWindow * *);
    // Category: Method | Source: PE Export
    // Symbol: ?IncrementApplicationUseCount@CoreApplication@Core@ApplicationModel@Windows@@UEAAJXZ
    virtual long IncrementApplicationUseCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncrementVisibilityCount@CoreApplication@Core@ApplicationModel@Windows@@QEAAJPEAUIDeferral@Foundation@4@PEAUICoreDispatcher@2UI@4@@Z
    long IncrementVisibilityCount(WindissectOpaque *, ::Windows::UI::Core::ICoreDispatcher *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitDComp@CoreApplication@Core@ApplicationModel@Windows@@SAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z
    static int InitDComp(_RTL_RUN_ONCE *, void *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeApplicationServer@CoreApplication@Core@ApplicationModel@Windows@@QEAAJPEAUIFrameworkViewSource@234@PEAUIBackgroundTaskFactory@Background@34@EPEAUIGetActivationFactory@Foundation@4@AEAVAppRunOrActivateView@CoreApplicationProvider@@E@Z
    long InitializeApplicationServer(::Windows::ApplicationModel::Core::IFrameworkViewSource *, ::Windows::ApplicationModel::Background::IBackgroundTaskFactory *, unsigned char, WindissectOpaque *, WindissectOpaque &, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForAttach@CoreApplication@Core@ApplicationModel@Windows@@UEAAJXZ
    virtual long InitializeForAttach();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeInternal@CoreApplication@Core@ApplicationModel@Windows@@QEAAJPEAUIFrameworkViewSource@234@PEAUIBackgroundTaskFactory@Background@34@EPEAUIGetActivationFactory@Foundation@4@AEAVAppRunOrActivateView@CoreApplicationProvider@@E@Z
    long InitializeInternal(::Windows::ApplicationModel::Core::IFrameworkViewSource *, ::Windows::ApplicationModel::Background::IBackgroundTaskFactory *, unsigned char, WindissectOpaque *, WindissectOpaque &, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeSuspendCallbacksIfNecessary@CoreApplication@Core@ApplicationModel@Windows@@QEAAJXZ
    long InitializeSuspendCallbacksIfNecessary();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CoreApplication@Core@ApplicationModel@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@CoreApplication@Core@ApplicationModel@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeBackgroundActivatedHandlers@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAUIBackgroundTaskInstance@Background@34@@Z
    virtual long InvokeBackgroundActivatedHandlers(::Windows::ApplicationModel::Background::IBackgroundTaskInstance *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeEnteredBackgroundEvent@CoreApplication@Core@ApplicationModel@Windows@@QEAAJPEAVEnteredBackgroundEventArgs@34@@Z
    long InvokeEnteredBackgroundEvent(::Windows::ApplicationModel::EnteredBackgroundEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeLeavingBackgroundEvent@CoreApplication@Core@ApplicationModel@Windows@@QEAAJPEAVLeavingBackgroundEventArgs@34@@Z
    long InvokeLeavingBackgroundEvent(::Windows::ApplicationModel::LeavingBackgroundEventArgs *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMainWindowCreated@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long IsMainWindowCreated(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkVisibilityEventInProgress@CoreApplication@Core@ApplicationModel@Windows@@QEAAXXZ
    void MarkVisibilityEventInProgress();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CoreApplication@Core@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CoreApplication@Core@ApplicationModel@Windows@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReceiveSharedVisual@CoreApplication@Core@ApplicationModel@Windows@@QEAAJU_GUID@@_K@Z
    long ReceiveSharedVisual(_GUID, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWithPSM@CoreApplication@Core@ApplicationModel@Windows@@QEAAJ_N@Z
    long RegisterWithPSM(bool);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CoreApplication@Core@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseSuspendLockExclusive@CoreApplication@Core@ApplicationModel@Windows@@QEAAXXZ
    void ReleaseSuspendLockExclusive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseViewForThread@CoreApplication@Core@ApplicationModel@Windows@@UEAAJK@Z
    virtual long ReleaseViewForThread(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveComponentSite@CoreApplication@Core@ApplicationModel@Windows@@UEAAJU_GUID@@@Z
    virtual long RemoveComponentSite(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDispatcherMapping@CoreApplication@Core@ApplicationModel@Windows@@UEAAJK@Z
    virtual long RemoveDispatcherMapping(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveViewForComponentSite@CoreApplication@Core@ApplicationModel@Windows@@UEAAJAEBU_GUID@@@Z
    virtual long RemoveViewForComponentSite(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveWindowThreadMapping@CoreApplication@Core@ApplicationModel@Windows@@UEAAJK@Z
    virtual long RemoveWindowThreadMapping(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestRestartAsync@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@W4AppRestartFailureReason@Core@ApplicationModel@Windows@@@Foundation@4@@Z
    virtual long RequestRestartAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestRestartForUserAsync@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAUIUser@System@4@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@W4AppRestartFailureReason@Core@ApplicationModel@Windows@@@Foundation@4@@Z
    virtual long RequestRestartForUserAsync(::Windows::System::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSharedVisual@CoreApplication@Core@ApplicationModel@Windows@@UEAAJU_GUID@@PEA_K@Z
    virtual long RequestSharedVisual(_GUID, uint64_t *);
    // Category: Method | Source: PE Export
    // Symbol: ?Run@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAUIFrameworkViewSource@234@@Z
    virtual long Run(::Windows::ApplicationModel::Core::IFrameworkViewSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunInternal@CoreApplication@Core@ApplicationModel@Windows@@QEAAJPEAUIFrameworkViewSource@234@PEAUIBackgroundTaskFactory@Background@34@EPEAUIGetActivationFactory@Foundation@4@@Z
    long RunInternal(::Windows::ApplicationModel::Core::IFrameworkViewSource *, ::Windows::ApplicationModel::Background::IBackgroundTaskFactory *, unsigned char, WindissectOpaque *);
    // Category: Method | Source: PE Export
    // Symbol: ?RunWithActivationFactories@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAUIGetActivationFactory@Foundation@4@@Z
    virtual long RunWithActivationFactories(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CoreApplication@Core@ApplicationModel@Windows@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetComponentSiteIdForComponentViewInstanceId@CoreApplication@Core@ApplicationModel@Windows@@QEAAJU_GUID@@I@Z
    long SetComponentSiteIdForComponentViewInstanceId(_GUID, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetComponentViewInstanceId@CoreApplication@Core@ApplicationModel@Windows@@UEAAJU_GUID@@I@Z
    virtual long SetComponentViewInstanceId(_GUID, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDesignerSharedVisualHandle@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAXI@Z
    virtual long SetDesignerSharedVisualHandle(void *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSharedVisualHandle@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAXU_GUID@@I@Z
    virtual long SetSharedVisualHandle(void *, _GUID, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TearDown@CoreApplication@Core@ApplicationModel@Windows@@QEAAJXZ
    long TearDown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Uninitialize@CoreApplication@Core@ApplicationModel@Windows@@SAXXZ
    static void Uninitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyInitialized@CoreApplication@Core@ApplicationModel@Windows@@UEAAJXZ
    virtual long VerifyInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForActivate@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAPEAUICoreWindow@2UI@4@@Z
    virtual long WaitForActivate(::Windows::UI::Core::ICoreWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForExit@CoreApplication@Core@ApplicationModel@Windows@@QEAAJXZ
    long WaitForExit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForPsmRegistration@CoreApplication@Core@ApplicationModel@Windows@@QEAAXXZ
    void WaitForPsmRegistration();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForResume@CoreApplication@Core@ApplicationModel@Windows@@QEAAXXZ
    void WaitForResume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_BackgroundActivated@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAU?$IEventHandler@PEAVBackgroundActivatedEventArgs@Activation@ApplicationModel@Windows@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_BackgroundActivated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_EnteredBackground@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAU?$IEventHandler@PEAVEnteredBackgroundEventArgs@ApplicationModel@Windows@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_EnteredBackground(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Exiting@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_Exiting(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_FinalUnhandledErrorDetected@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAU?$IEventHandler@PEAVUnhandledErrorDetectedEventArgs@Core@ApplicationModel@Windows@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_FinalUnhandledErrorDetected(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_LeavingBackground@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAU?$IEventHandler@PEAVLeavingBackgroundEventArgs@ApplicationModel@Windows@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_LeavingBackground(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Resuming@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_Resuming(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Suspending@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAU?$IEventHandler@PEAVSuspendingEventArgs@ApplicationModel@Windows@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_Suspending(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_UnhandledErrorDetected@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAU?$IEventHandler@PEAVUnhandledErrorDetectedEventArgs@Core@ApplicationModel@Windows@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_UnhandledErrorDetected(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Context@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@4@@Z
    virtual long get_Context(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Id(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MainView@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAPEAUICoreApplicationView@234@@Z
    virtual long get_MainView(::Windows::ApplicationModel::Core::ICoreApplicationView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PrivateProperties@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@4@@Z
    virtual long get_PrivateProperties(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Properties@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@4@@Z
    virtual long get_Properties(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Views@CoreApplication@Core@ApplicationModel@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVCoreApplicationView@Core@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long get_Views(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_BackgroundActivated@CoreApplication@Core@ApplicationModel@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_BackgroundActivated(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_EnteredBackground@CoreApplication@Core@ApplicationModel@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_EnteredBackground(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Exiting@CoreApplication@Core@ApplicationModel@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Exiting(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_FinalUnhandledErrorDetected@CoreApplication@Core@ApplicationModel@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_FinalUnhandledErrorDetected(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_LeavingBackground@CoreApplication@Core@ApplicationModel@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_LeavingBackground(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Resuming@CoreApplication@Core@ApplicationModel@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Resuming(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Suspending@CoreApplication@Core@ApplicationModel@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Suspending(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_UnhandledErrorDetected@CoreApplication@Core@ApplicationModel@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_UnhandledErrorDetected(EventRegistrationToken);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppStateChangeNotificationRoutine@CoreApplication@Core@ApplicationModel@Windows@@CAXEPEAX0@Z
    static void AppStateChangeNotificationRoutine(unsigned char, void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewViewInternal@CoreApplication@Core@ApplicationModel@Windows@@AEAAJPEAUHSTRING__@@0PEAUIFrameworkViewSource@234@0PEAPEAUICoreApplicationView@234@@Z
    long CreateNewViewInternal(HSTRING__*, HSTRING__*, ::Windows::ApplicationModel::Core::IFrameworkViewSource *, HSTRING__*, ::Windows::ApplicationModel::Core::ICoreApplicationView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedVisual@CoreApplication@Core@ApplicationModel@Windows@@AEAAJPEAPEAUIDCompositionVisual2@@@Z
    long CreateSharedVisual(IDCompositionVisual2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindViewForViewInstanceId@CoreApplication@Core@ApplicationModel@Windows@@AEAAJIPEAPEAVCoreApplicationViewAgileContainer@234@@Z
    long FindViewForViewInstanceId(unsigned int, ::Windows::ApplicationModel::Core::CoreApplicationViewAgileContainer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRestartFailureReasonFromActivationResult@CoreApplication@Core@ApplicationModel@Windows@@AEAAJPEAUIApplicationActivationResult@Private@Activation@34@PEAW4AppRestartFailureReason@234@@Z
    long GetRestartFailureReasonFromActivationResult(::Windows::ApplicationModel::Activation::Private::IApplicationActivationResult *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitDComp@CoreApplication@Core@ApplicationModel@Windows@@AEAAJXZ
    long InitDComp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeSuspendCallbacks@CoreApplication@Core@ApplicationModel@Windows@@AEAAJXZ
    long InitializeSuspendCallbacks();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRestartAllowed@CoreApplication@Core@ApplicationModel@Windows@@AEAAJPEAW4AppRestartFailureReason@234@@Z
    long IsRestartAllowed(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PsmDoStateChange@CoreApplication@Core@ApplicationModel@Windows@@AEAAJEPEAX@Z
    long PsmDoStateChange(unsigned char, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterActivatableApplication@CoreApplication@Core@ApplicationModel@Windows@@AEAAJXZ
    long RegisterActivatableApplication();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterApplicationServers@CoreApplication@Core@ApplicationModel@Windows@@AEAAJXZ
    long RegisterApplicationServers();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppDisplayName@CoreApplication@Core@ApplicationModel@Windows@@AEAAJXZ
    long SetAppDisplayName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentInternal@CoreApplication@Core@ApplicationModel@Windows@@CAJPEAPEAV1234@_N@Z
    static long get_CurrentInternal(::Windows::ApplicationModel::Core::CoreApplication * *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreApplication@Core@ApplicationModel@Windows@@EEAA@XZ
    virtual ~CoreApplication();
};
} // namespace Windows::ApplicationModel::Core

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `get_Views` | `long` | `Method` | `Pdb` | No (PDB) |
| ``vector deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| ``scalar deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| `~CoreApplication` | `void` | `Dtor` | `Pdb` | No (PDB) |
| `CreateNonImmersiveView` | `long` | `Method` | `Pdb` | No (PDB) |
| `DecrementVisibilityCount` | `long` | `Method` | `Pdb` | No (PDB) |
| `IncrementVisibilityCount` | `long` | `Method` | `Pdb` | No (PDB) |
| `MarkVisibilityEventInProgress` | `void` | `Method` | `Pdb` | No (PDB) |
| `RuntimeClassInitialize` | `long` | `Method` | `Pdb` | No (PDB) |
| `CoreApplication` | `void` | `Ctor` | `Pdb` | No (PDB) |
| `VerifyInitialized` | `long` | `Method` | `Pdb` | No (PDB) |
| `get_CurrentInternal` | `long` | `Method` | `Pdb` | No (PDB) |
| `InvokeLeavingBackgroundEvent` | `long` | `Method` | `Pdb` | No (PDB) |
| `DecrementOutstandingSuspendCount` | `void` | `Method` | `Pdb` | No (PDB) |
| `ReleaseSuspendLockExclusive` | `void` | `Method` | `Pdb` | No (PDB) |
| `AcquireSuspendLockExclusive` | `void` | `Method` | `Pdb` | No (PDB) |
| `PsmDoStateChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `Create` | `int` | `Method` | `Pdb` | No (PDB) |
| `CreateInternal` | `long` | `Method` | `Pdb` | No (PDB) |
| `ActivateBackground` | `long` | `Method` | `Pdb` | No (PDB) |
| `ActivateApplication` | `long` | `Method` | `Pdb` | No (PDB) |
| `InvokeBackgroundActivatedHandlers` | `long` | `Method` | `Pdb` | No (PDB) |
| `RunInternal` | `long` | `Method` | `Pdb` | No (PDB) |
| `Uninitialize` | `void` | `Method` | `Pdb` | No (PDB) |
| `TearDown` | `long` | `Method` | `Pdb` | No (PDB) |
| `WaitForExit` | `long` | `Method` | `Pdb` | No (PDB) |
| `InitializeInternal` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateShutdownMonitor` | `long` | `Method` | `Pdb` | No (PDB) |
| `CacheExecutionMode` | `long` | `Method` | `Pdb` | No (PDB) |
| `InitializeApplicationServer` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetAppDisplayName` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `RegisterApplicationServers` | `long` | `Method` | `Pdb` | No (PDB) |
| `InitializeSuspendCallbacks` | `long` | `Method` | `Pdb` | No (PDB) |
| `remove_Resuming` | `long` | `Method` | `Pdb` | No (PDB) |
| `add_EnteredBackground` | `long` | `Method` | `Pdb` | No (PDB) |
| `add_Suspending` | `long` | `Method` | `Pdb` | No (PDB) |
| `add_Resuming` | `long` | `Method` | `Pdb` | No (PDB) |
| `add_LeavingBackground` | `long` | `Method` | `Pdb` | No (PDB) |
| `RegisterWithPSM` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateHelper` | `unsigned long` | `Method` | `Pdb` | No (PDB) |
| `InvokeEnteredBackgroundEvent` | `long` | `Method` | `Pdb` | No (PDB) |
| `AddRef` | `unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `long` | `Refcount` | `Pdb` | No (PDB) |
| `ActivateForeground` | `long` | `Method` | `Pdb` | No (PDB) |
| `WaitForResume` | `void` | `Method` | `Pdb` | No (PDB) |
| `ApplyViewActivationResults` | `long` | `Method` | `Pdb` | No (PDB) |
| `get_PrivateProperties` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetCurrentView` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetViewFromTid<struct Windows::ApplicationModel::Core::ICoreApplicationView>` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `CreateNewViewFromMainView` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateNewViewWithExperienceId` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateNewViewInternal` | `long` | `Method` | `Pdb` | No (PDB) |
| `AppStateChangeNotificationRoutine` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetViewFromTid<struct Windows::ApplicationModel::Core::ICoreApplicationViewInternal>` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetCurrentView` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `get_MainView` | `long` | `Method` | `Pdb` | No (PDB) |
| `InternalGetRuntimeClassName` | `unsigned short const *` | `Method` | `Pdb` | No (PDB) |
| `ForwardLocalError` | `long` | `Method` | `Pdb` | No (PDB) |
| `get_Context` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateMainView` | `long` | `Method` | `Pdb` | No (PDB) |
| `AddViewForCurrentThread` | `long` | `Method` | `Pdb` | No (PDB) |
| `get_Properties` | `long` | `Method` | `Pdb` | No (PDB) |
| `AddDispatcherMapping` | `long` | `Method` | `Pdb` | No (PDB) |
| `WaitForPsmRegistration` | `void` | `Method` | `Pdb` | No (PDB) |
| `ReleaseViewForThread` | `long` | `Method` | `Pdb` | No (PDB) |
| `AddWindowThreadMapping` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetWindowFromThreadId` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetIslandTransformsEnabled` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetSuspendControl` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `add_FinalUnhandledErrorDetected` | `long` | `Method` | `Pdb` | No (PDB) |
| `InitializeSuspendCallbacksIfNecessary` | `long` | `Method` | `Pdb` | No (PDB) |
| `CleanUpClosedViews` | `void` | `Method` | `Pdb` | No (PDB) |
| `InternalGetTrustLevel` | `enum TrustLevel` | `Method` | `Pdb` | Yes |
| `GetViewFromThreadId` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetDispatcherFromHwnd` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetComponentSiteIdForComponentViewInstanceId` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `remove_Suspending` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetTrustLevel` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `remove_FinalUnhandledErrorDetected` | `long` | `Method` | `Pdb` | No (PDB) |
| `add_BackgroundActivated` | `long` | `Method` | `Pdb` | No (PDB) |
| `add_Exiting` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetCustomActivationFactory` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `remove_BackgroundActivated` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetWindowFactory` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `RemoveWindowThreadMapping` | `long` | `Method` | `Pdb` | No (PDB) |
| `get_Id` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetTrustLevel` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetTrustLevel` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetTrustLevel` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetTrustLevel` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetTrustLevel` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetTrustLevel` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetTrustLevel` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetTrustLevel` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `ForEachView<class <lambda_280dea28ea9646253edd34947cb0c56c> >` | `long` | `Method` | `Pdb` | No (PDB) |
| `ForEachView<class <lambda_388bafe7b2abe38b0604ea4778d3e2ba> >` | `long` | `Method` | `Pdb` | No (PDB) |
| `ActivateSpecific` | `long` | `Method` | `Pdb` | No (PDB) |
| `ActivateSpecificWithViewId` | `long` | `Method` | `Pdb` | No (PDB) |
| `AddComponentSite` | `long` | `Method` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddViewForComponentSite` | `long` | `Method` | `Pdb` | No (PDB) |
| `ConfigureComponent` | `long` | `Method` | `Pdb` | No (PDB) |
| `ConfigureComponentInput` | `long` | `Method` | `Pdb` | No (PDB) |
| `ConfigureHostInput` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateAndSendSharedVisual` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateComponentSite` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateNewView` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateNewViewWithViewSource` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateSharedVisual` | `long` | `Method` | `Pdb` | No (PDB) |
| `DecrementApplicationUseCount` | `long` | `Method` | `Pdb` | Yes |
| `IncrementApplicationUseCount` | `long` | `Method` | `Pdb` | Yes |
| `Run` | `long` | `Method` | `Pdb` | Yes |
| `RunWithActivationFactories` | `long` | `Method` | `Pdb` | Yes |
| `Disconnect` | `long` | `Method` | `Pdb` | No (PDB) |
| `EnablePrelaunch` | `long` | `Method` | `Pdb` | No (PDB) |
| `Exit` | `long` | `Method` | `Pdb` | No (PDB) |
| `FindViewForViewInstanceId` | `long` | `Method` | `Pdb` | No (PDB) |
| `ForwardRemoteError` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetAppDisplayName` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetApplicationWindowWithId` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetComponentSiteByViewInstanceId` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetComponentSiteFromSiteId` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetComponentSiteIdFromViewInstanceId` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetComponentViewInstanceId` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetComponentViewInstanceIdAndDisconnectSiteId` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetDirectCompositionDevice` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetHwndFromViewOnASTA` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetIids` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetIids` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetIids` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetIids` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetIids` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetIids` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetIids` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetIids` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetIids` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetIids` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetIids` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetIids` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetIids` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetIids` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetProcessHandle` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetRestartFailureReasonFromActivationResult` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetRuntimeClassName` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetRuntimeClassName` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetRuntimeClassName` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetRuntimeClassName` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetRuntimeClassName` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetRuntimeClassName` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetRuntimeClassName` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetRuntimeClassName` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetRuntimeClassName` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetRuntimeClassName` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetRuntimeClassName` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetRuntimeClassName` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetRuntimeClassName` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetRuntimeClassName` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetTrustLevel` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetTrustLevel` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetTrustLevel` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetTrustLevel` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetTrustLevel` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetViewInstanceIdFromComponentSiteId` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `InitDComp` | `long` | `Method` | `Pdb` | No (PDB) |
| `InitDComp` | `int` | `Method` | `Pdb` | No (PDB) |
| `InitializeForAttach` | `long` | `Method` | `Pdb` | No (PDB) |
| `IsMainWindowCreated` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `IsRestartAllowed` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryService` | `long` | `Method` | `Pdb` | No (PDB) |
| `ReceiveSharedVisual` | `long` | `Method` | `Pdb` | No (PDB) |
| `RegisterActivatableApplication` | `long` | `Method` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `RemoveComponentSite` | `long` | `Method` | `Pdb` | No (PDB) |
| `RemoveDispatcherMapping` | `long` | `Method` | `Pdb` | No (PDB) |
| `RemoveViewForComponentSite` | `long` | `Method` | `Pdb` | No (PDB) |
| `RequestRestartAsync` | `long` | `Method` | `Pdb` | No (PDB) |
| `RequestRestartForUserAsync` | `long` | `Method` | `Pdb` | No (PDB) |
| `RequestSharedVisual` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetComponentViewInstanceId` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetDesignerSharedVisualHandle` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetSharedVisualHandle` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `WaitForActivate` | `long` | `Method` | `Pdb` | No (PDB) |
| `add_UnhandledErrorDetected` | `long` | `Method` | `Pdb` | No (PDB) |
| `remove_EnteredBackground` | `long` | `Method` | `Pdb` | No (PDB) |
| `remove_Exiting` | `long` | `Method` | `Pdb` | No (PDB) |
| `remove_LeavingBackground` | `long` | `Method` | `Pdb` | No (PDB) |
| `remove_UnhandledErrorDetected` | `long` | `Method` | `Pdb` | No (PDB) |
