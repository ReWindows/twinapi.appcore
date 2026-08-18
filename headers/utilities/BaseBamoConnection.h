#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 13 member(s).
namespace Microsoft::Bamo {
class BaseBamoConnection {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ
    bool IsDisconnected() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?JoinConversationAsClient@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@UMsgScopeID@@PEBG@Z
    long JoinConversationAsClient(IMessageSession *, MsgScopeID, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?JoinConversationAsServer@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG@Z
    long JoinConversationAsServer(IMessageSession *, IMessagePort *, MsgScopeID, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveConversation@BaseBamoConnection@Bamo@Microsoft@@QEAAJXZ
    long LeaveConversation();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ
    unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z
    long TrackError(long);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireLock@BaseBamoConnection@Bamo@Microsoft@@MEAAXXZ
    virtual void AcquireLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnDisconnected@BaseBamoConnection@Bamo@Microsoft@@MEAAJXZ
    virtual long OnDisconnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPortConnectionFailed@BaseBamoConnection@Bamo@Microsoft@@MEAAJJIII@Z
    virtual long OnPortConnectionFailed(long, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseLock@BaseBamoConnection@Bamo@Microsoft@@MEAAXXZ
    virtual void ReleaseLock();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetBootstrapProxy@BaseBamoConnection@Bamo@Microsoft@@MEAAJPEAVBamoProxy@23@@Z
    virtual long SetBootstrapProxy(::Microsoft::Bamo::BamoProxy *);
};
} // namespace Microsoft::Bamo
