#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithLaunchFriendRequestFlowResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithLaunchFriendRequestFlowResult)
namespace Oculus::Platform::Models {
class LaunchFriendRequestFlowResult;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLaunchFriendRequestFlowResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithLaunchFriendRequestFlowResult);
// Type: Oculus.Platform::MessageWithLaunchFriendRequestFlowResult
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::MessageWithLaunchFriendRequestFlowResult*
class CORDL_TYPE MessageWithLaunchFriendRequestFlowResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchFriendRequestFlowResult*> {
public:
// Declarations
/// @brief Method GetDataFromMessage, addr 0x3eee0e4, size 0x94, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::LaunchFriendRequestFlowResult* GetDataFromMessage(::System::IntPtr  c_message) ;

/// @brief Method GetLaunchFriendRequestFlowResult, addr 0x3eee0a8, size 0x3c, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::LaunchFriendRequestFlowResult* GetLaunchFriendRequestFlowResult() ;

static inline ::Oculus::Platform::MessageWithLaunchFriendRequestFlowResult* New_ctor(::System::IntPtr  c_message) ;

/// @brief Method .ctor, addr 0x3eeb530, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  c_message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MessageWithLaunchFriendRequestFlowResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLaunchFriendRequestFlowResult", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithLaunchFriendRequestFlowResult(MessageWithLaunchFriendRequestFlowResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLaunchFriendRequestFlowResult", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithLaunchFriendRequestFlowResult(MessageWithLaunchFriendRequestFlowResult const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithLaunchFriendRequestFlowResult, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithLaunchFriendRequestFlowResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLaunchFriendRequestFlowResult*, "Oculus.Platform", "MessageWithLaunchFriendRequestFlowResult");
