#pragma once
// IWYU pragma private; include "System/NotSupportedException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NotSupportedException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System {
class NotSupportedException;
}
// Write type traits
MARK_REF_PTR_T(::System::NotSupportedException);
// Type: System::NotSupportedException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::NotSupportedException*
class CORDL_TYPE NotSupportedException : public ::System::SystemException {
public:
// Declarations
static inline ::System::NotSupportedException* New_ctor() ;

static inline ::System::NotSupportedException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::System::NotSupportedException* New_ctor(::StringW  message) ;

static inline ::System::NotSupportedException* New_ctor(::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method .ctor, addr 0x3d5d67c, size 0x5c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x3d5d6fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0x3d56d68, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x3d5d6d8, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  innerException) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NotSupportedException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NotSupportedException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NotSupportedException(NotSupportedException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NotSupportedException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NotSupportedException(NotSupportedException const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::NotSupportedException, 0x90>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::NotSupportedException);
DEFINE_IL2CPP_ARG_TYPE(::System::NotSupportedException*, "System", "NotSupportedException");
