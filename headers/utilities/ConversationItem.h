#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 2 member(s).
namespace Microsoft::BamoImpl {
class ConversationItem {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?AsPrincipal@ConversationItem@BamoImpl@Microsoft@@UEAAPEAVBamoPrincipalImpl@23@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * AsPrincipal();
    // Category: Method | Source: PE Export
    // Symbol: ?AsProxy@ConversationItem@BamoImpl@Microsoft@@UEAAPEAVBamoProxyImpl@23@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * AsProxy();
};
} // namespace Microsoft::BamoImpl
