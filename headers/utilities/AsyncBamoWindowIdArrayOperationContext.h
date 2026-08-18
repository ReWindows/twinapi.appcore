#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 2 member(s).
namespace Windows::Internal::Shell::ShareWindow::Bamo {
class AsyncBamoWindowIdArrayOperationContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompletionHandler@AsyncBamoWindowIdArrayOperationContext@Bamo@ShareWindow@Shell@Internal@Windows@@SAJPEBUWindowId@UI@6winrt@@IPEAX@Z
    static long CompletionHandler(WindissectOpaque const *, unsigned int, void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AsyncBamoWindowIdArrayOperationContext@Bamo@ShareWindow@Shell@Internal@Windows@@QEAA@XZ
    ~AsyncBamoWindowIdArrayOperationContext();
};
} // namespace Windows::Internal::Shell::ShareWindow::Bamo
