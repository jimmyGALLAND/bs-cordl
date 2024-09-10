#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithNetSyncSessionsChangedNotification.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithNetSyncSessionsChangedNotification)
namespace Oculus::Platform::Models {
class NetSyncSessionsChangedNotification;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithNetSyncSessionsChangedNotification;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification);
// Type: Oculus.Platform::MessageWithNetSyncSessionsChangedNotification
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::MessageWithNetSyncSessionsChangedNotification*
class CORDL_TYPE MessageWithNetSyncSessionsChangedNotification : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetSyncSessionsChangedNotification*> {
public:
// Declarations
/// @brief Method GetDataFromMessage, addr 0x3eeee54, size 0x94, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::NetSyncSessionsChangedNotification* GetDataFromMessage(::System::IntPtr  c_message) ;

/// @brief Method GetNetSyncSessionsChangedNotification, addr 0x3eeee18, size 0x3c, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::NetSyncSessionsChangedNotification* GetNetSyncSessionsChangedNotification() ;

static inline ::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification* New_ctor(::System::IntPtr  c_message) ;

/// @brief Method .ctor, addr 0x3eeb848, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  c_message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MessageWithNetSyncSessionsChangedNotification() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MessageWithNetSyncSessionsChangedNotification", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithNetSyncSessionsChangedNotification(MessageWithNetSyncSessionsChangedNotification && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithNetSyncSessionsChangedNotification", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithNetSyncSessionsChangedNotification(MessageWithNetSyncSessionsChangedNotification const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification*, "Oculus.Platform", "MessageWithNetSyncSessionsChangedNotification");
