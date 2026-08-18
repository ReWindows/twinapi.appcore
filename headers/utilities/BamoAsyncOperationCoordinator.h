#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 4 member(s).
namespace Microsoft::BamoImpl {
class BamoAsyncOperationCoordinator {
public:
    class AsyncCallData;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearRequestData@BamoAsyncOperationCoordinator@BamoImpl@Microsoft@@QEAAXI@Z
    void ClearRequestData(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataForRequestCompletion@BamoAsyncOperationCoordinator@BamoImpl@Microsoft@@QEAA_NIPEAPEAX0@Z
    bool GetDataForRequestCompletion(unsigned int, void * *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterAsyncRequest@BamoAsyncOperationCoordinator@BamoImpl@Microsoft@@QEAAIPEAXP6AJ0@Z0@Z
    unsigned int RegisterAsyncRequest(void *, long ( *)(void *), void *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRequestIdValid@BamoAsyncOperationCoordinator@BamoImpl@Microsoft@@AEAA_NI@Z
    bool IsRequestIdValid(unsigned int);
};
} // namespace Microsoft::BamoImpl
