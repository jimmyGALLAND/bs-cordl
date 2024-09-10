#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithLivestreamingVideoStats.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithLivestreamingVideoStats)
namespace Oculus::Platform::Models {
class LivestreamingVideoStats;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLivestreamingVideoStats;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithLivestreamingVideoStats);
// Type: Oculus.Platform::MessageWithLivestreamingVideoStats
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::MessageWithLivestreamingVideoStats*
class CORDL_TYPE MessageWithLivestreamingVideoStats : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LivestreamingVideoStats*> {
public:
// Declarations
/// @brief Method GetDataFromMessage, addr 0x3eeeabc, size 0x94, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::LivestreamingVideoStats* GetDataFromMessage(::System::IntPtr  c_message) ;

/// @brief Method GetLivestreamingVideoStats, addr 0x3eeea80, size 0x3c, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::LivestreamingVideoStats* GetLivestreamingVideoStats() ;

static inline ::Oculus::Platform::MessageWithLivestreamingVideoStats* New_ctor(::System::IntPtr  c_message) ;

/// @brief Method .ctor, addr 0x3eeea28, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  c_message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MessageWithLivestreamingVideoStats() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLivestreamingVideoStats", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithLivestreamingVideoStats(MessageWithLivestreamingVideoStats && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLivestreamingVideoStats", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithLivestreamingVideoStats(MessageWithLivestreamingVideoStats const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithLivestreamingVideoStats, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithLivestreamingVideoStats);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLivestreamingVideoStats*, "Oculus.Platform", "MessageWithLivestreamingVideoStats");
