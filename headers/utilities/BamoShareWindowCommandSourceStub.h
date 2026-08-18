#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 13 member(s).
namespace Windows::Internal::Shell::ShareWindow::Bamo {
class BamoShareWindowCommandSourceStub {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoShareWindowCommandSourceStub@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommandInvoked@BamoShareWindowCommandSourceStub@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAJAEBUWindowId@UI@6winrt@@W4ShareWindowCommand@4869@AEBU_GUID@@@Z
    virtual long OnCommandInvoked(WindissectOpaque const &, int, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommandRequested@BamoShareWindowCommandSourceStub@Bamo@ShareWindow@Shell@Internal@Windows@@QEAAJP6AJW4ShareWindowCommand@4UI@6winrt@@PEAX@ZP6AJ1@Z1AEBUWindowId@869@PEAI@Z
    long OnCommandRequested(long ( *)(int, void *), long ( *)(void *), void *, WindissectOpaque const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFindSharedWindows@BamoShareWindowCommandSourceStub@Bamo@ShareWindow@Shell@Internal@Windows@@QEAAJP6AJPEBUWindowId@UI@6winrt@@IPEAX@ZP6AJ1@Z10IAEBU_GUID@@PEAI@Z
    long OnFindSharedWindows(long ( *)(WindissectOpaque const *, unsigned int, void *), long ( *)(void *), void *, WindissectOpaque const *, unsigned int, _GUID const &, unsigned int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoShareWindowCommandSourceStub@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoShareWindowCommandSourceStub@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrimary@BamoShareWindowCommandSourceStub@Bamo@ShareWindow@Shell@Internal@Windows@@UEAAJ_N@Z
    virtual long SetPrimary(bool);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoShareWindowCommandSourceStub@Bamo@ShareWindow@Shell@Internal@Windows@@EEBAPEAVBamoStubImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoStubImpl * GetImpl() const;
};
} // namespace Windows::Internal::Shell::ShareWindow::Bamo
