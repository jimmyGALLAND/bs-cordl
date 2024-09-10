#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithUserReportID.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithUserReportID)
namespace Oculus::Platform::Models {
class UserReportID;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithUserReportID;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithUserReportID);
// Type: Oculus.Platform::MessageWithUserReportID
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::MessageWithUserReportID*
class CORDL_TYPE MessageWithUserReportID : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserReportID*> {
public:
// Declarations
/// @brief Method GetDataFromMessage, addr 0x3ef034c, size 0x94, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::UserReportID* GetDataFromMessage(::System::IntPtr  c_message) ;

/// @brief Method GetUserReportID, addr 0x3ef0310, size 0x3c, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::UserReportID* GetUserReportID() ;

static inline ::Oculus::Platform::MessageWithUserReportID* New_ctor(::System::IntPtr  c_message) ;

/// @brief Method .ctor, addr 0x3ef02b8, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  c_message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MessageWithUserReportID() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MessageWithUserReportID", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithUserReportID(MessageWithUserReportID && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithUserReportID", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithUserReportID(MessageWithUserReportID const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithUserReportID, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithUserReportID);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithUserReportID*, "Oculus.Platform", "MessageWithUserReportID");
