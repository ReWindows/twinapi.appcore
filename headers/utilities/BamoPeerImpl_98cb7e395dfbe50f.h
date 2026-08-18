#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 14 member(s).
namespace BamoImpl::RecentFilesListener_AutoBamos {
class BamoPeerImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Materialize_BamoRecentFilesListener_BamoRecentFilesActionInfoProxy@BamoPeerImpl@RecentFilesListener_AutoBamos@BamoImpl@@QEAAJI@Z
    long Materialize_BamoRecentFilesListener_BamoRecentFilesActionInfoProxy(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Materialize_BamoRecentFilesListener_BamoRecentFilesListenerProxy@BamoPeerImpl@RecentFilesListener_AutoBamos@BamoImpl@@QEAAJI@Z
    long Materialize_BamoRecentFilesListener_BamoRecentFilesListenerProxy(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Materialize_Microsoft_Bamo_Lib_RecentFilesListener_AutoBamos_BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Proxy@BamoPeerImpl@RecentFilesListener_AutoBamos@BamoImpl@@QEAAJI@Z
    long Materialize_Microsoft_Bamo_Lib_RecentFilesListener_AutoBamos_BamoList_BamoRecentFilesListener_RecentFilesActionInfoPrincipal_Proxy(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoPeerImpl@RecentFilesListener_AutoBamos@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendAckProxyReference@BamoPeerImpl@RecentFilesListener_AutoBamos@BamoImpl@@UEAAXI_N@Z
    virtual void SendAckProxyReference(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendCheckProtocol@BamoPeerImpl@RecentFilesListener_AutoBamos@BamoImpl@@UEAAXAEBU_GUID@@@Z
    virtual void SendCheckProtocol(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendDisposeProxy@BamoPeerImpl@RecentFilesListener_AutoBamos@BamoImpl@@UEAAXI_N@Z
    virtual void SendDisposeProxy(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendProxyDisposed@BamoPeerImpl@RecentFilesListener_AutoBamos@BamoImpl@@UEAAXI@Z
    virtual void SendProxyDisposed(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendRequestDisposeProxy@BamoPeerImpl@RecentFilesListener_AutoBamos@BamoImpl@@UEAAXI@Z
    virtual void SendRequestDisposeProxy(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendSetBootstrapProxy@BamoPeerImpl@RecentFilesListener_AutoBamos@BamoImpl@@UEAAXI@Z
    virtual void SendSetBootstrapProxy(unsigned int);
private:
    // Category: Method | Source: PE Export
    // Symbol: ?LogResumeOutboundMessages@BamoPeerImpl@RecentFilesListener_AutoBamos@BamoImpl@@EEBAXII@Z
    virtual void LogResumeOutboundMessages(unsigned int, unsigned int) const;
    // Category: Method | Source: PE Export
    // Symbol: ?LogSuspendOutboundMessages@BamoPeerImpl@RecentFilesListener_AutoBamos@BamoImpl@@EEBAXII@Z
    virtual void LogSuspendOutboundMessages(unsigned int, unsigned int) const;
};
} // namespace BamoImpl::RecentFilesListener_AutoBamos
