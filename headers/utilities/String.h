#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.appcore.dll by Windissect. 7 member(s).
namespace Windows::Internal {
class String {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Concat@String@Internal@Windows@@QEBAJAEBV123@PEAV123@@Z
    long Concat(::Windows::Internal::String const &, ::Windows::Internal::String *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Duplicate@String@Internal@Windows@@QEAAJAEBV123@@Z
    long Duplicate(::Windows::Internal::String const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z
    long Initialize(HSTRING__* const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1String@Internal@Windows@@QEAA@XZ
    ~String();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeAndAssignOnSuccess@String@Internal@Windows@@CAJJPEAUHSTRING__@@PEAPEAU4@@Z
    static long FreeAndAssignOnSuccess(long, HSTRING__*, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z
    long _InitializeHelper(unsigned short const *);
};
} // namespace Windows::Internal
