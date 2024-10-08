#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithLaunchBlockFlowResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithLaunchBlockFlowResult)
namespace Oculus::Platform::Models {
class LaunchBlockFlowResult;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLaunchBlockFlowResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithLaunchBlockFlowResult);
// Type: Oculus.Platform::MessageWithLaunchBlockFlowResult
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::MessageWithLaunchBlockFlowResult*
class CORDL_TYPE MessageWithLaunchBlockFlowResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchBlockFlowResult*> {
public:
// Declarations
/// @brief Method GetDataFromMessage, addr 0x3eee014, size 0x94, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::LaunchBlockFlowResult* GetDataFromMessage(::System::IntPtr  c_message) ;

/// @brief Method GetLaunchBlockFlowResult, addr 0x3eedfd8, size 0x3c, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::LaunchBlockFlowResult* GetLaunchBlockFlowResult() ;

static inline ::Oculus::Platform::MessageWithLaunchBlockFlowResult* New_ctor(::System::IntPtr  c_message) ;

/// @brief Method .ctor, addr 0x3eeb4d8, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  c_message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MessageWithLaunchBlockFlowResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLaunchBlockFlowResult", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithLaunchBlockFlowResult(MessageWithLaunchBlockFlowResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLaunchBlockFlowResult", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithLaunchBlockFlowResult(MessageWithLaunchBlockFlowResult const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithLaunchBlockFlowResult, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithLaunchBlockFlowResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLaunchBlockFlowResult*, "Oculus.Platform", "MessageWithLaunchBlockFlowResult");
