#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithMicrophoneAvailabilityState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithMicrophoneAvailabilityState)
namespace Oculus::Platform::Models {
class MicrophoneAvailabilityState;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithMicrophoneAvailabilityState;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithMicrophoneAvailabilityState);
// Type: Oculus.Platform::MessageWithMicrophoneAvailabilityState
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::MessageWithMicrophoneAvailabilityState*
class CORDL_TYPE MessageWithMicrophoneAvailabilityState : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::MicrophoneAvailabilityState*> {
public:
// Declarations
/// @brief Method GetDataFromMessage, addr 0x3eeeb8c, size 0x94, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::MicrophoneAvailabilityState* GetDataFromMessage(::System::IntPtr  c_message) ;

/// @brief Method GetMicrophoneAvailabilityState, addr 0x3eeeb50, size 0x3c, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::MicrophoneAvailabilityState* GetMicrophoneAvailabilityState() ;

static inline ::Oculus::Platform::MessageWithMicrophoneAvailabilityState* New_ctor(::System::IntPtr  c_message) ;

/// @brief Method .ctor, addr 0x3eeb798, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  c_message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MessageWithMicrophoneAvailabilityState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MessageWithMicrophoneAvailabilityState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithMicrophoneAvailabilityState(MessageWithMicrophoneAvailabilityState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithMicrophoneAvailabilityState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithMicrophoneAvailabilityState(MessageWithMicrophoneAvailabilityState const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithMicrophoneAvailabilityState, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithMicrophoneAvailabilityState);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithMicrophoneAvailabilityState*, "Oculus.Platform", "MessageWithMicrophoneAvailabilityState");
