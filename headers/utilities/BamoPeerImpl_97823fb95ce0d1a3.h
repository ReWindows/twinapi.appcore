#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 12 member(s).
namespace BamoImpl::ShareWindowCommandBamos_AutoBamos {
class BamoPeerImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Materialize_Windows_Internal_Shell_ShareWindow_Bamo_BamoShareWindowCommandSourceProxy@BamoPeerImpl@ShareWindowCommandBamos_AutoBamos@BamoImpl@@QEAAJI@Z
    long Materialize_Windows_Internal_Shell_ShareWindow_Bamo_BamoShareWindowCommandSourceProxy(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoPeerImpl@ShareWindowCommandBamos_AutoBamos@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendAckProxyReference@BamoPeerImpl@ShareWindowCommandBamos_AutoBamos@BamoImpl@@UEAAXI_N@Z
    virtual void SendAckProxyReference(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendCheckProtocol@BamoPeerImpl@ShareWindowCommandBamos_AutoBamos@BamoImpl@@UEAAXAEBU_GUID@@@Z
    virtual void SendCheckProtocol(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendDisposeProxy@BamoPeerImpl@ShareWindowCommandBamos_AutoBamos@BamoImpl@@UEAAXI_N@Z
    virtual void SendDisposeProxy(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendProxyDisposed@BamoPeerImpl@ShareWindowCommandBamos_AutoBamos@BamoImpl@@UEAAXI@Z
    virtual void SendProxyDisposed(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendRequestDisposeProxy@BamoPeerImpl@ShareWindowCommandBamos_AutoBamos@BamoImpl@@UEAAXI@Z
    virtual void SendRequestDisposeProxy(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendSetBootstrapProxy@BamoPeerImpl@ShareWindowCommandBamos_AutoBamos@BamoImpl@@UEAAXI@Z
    virtual void SendSetBootstrapProxy(unsigned int);
private:
    // Category: Method | Source: PE Export
    // Symbol: ?LogResumeOutboundMessages@BamoPeerImpl@ShareWindowCommandBamos_AutoBamos@BamoImpl@@EEBAXII@Z
    virtual void LogResumeOutboundMessages(unsigned int, unsigned int) const;
    // Category: Method | Source: PE Export
    // Symbol: ?LogSuspendOutboundMessages@BamoPeerImpl@ShareWindowCommandBamos_AutoBamos@BamoImpl@@EEBAXII@Z
    virtual void LogSuspendOutboundMessages(unsigned int, unsigned int) const;
};
} // namespace BamoImpl::ShareWindowCommandBamos_AutoBamos
