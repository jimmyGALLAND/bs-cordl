#pragma once
// IWYU pragma private; include "System/OutOfMemoryException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OutOfMemoryException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class OutOfMemoryException;
}
// Write type traits
MARK_REF_PTR_T(::System::OutOfMemoryException);
// Type: System::OutOfMemoryException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::OutOfMemoryException*
class CORDL_TYPE OutOfMemoryException : public ::System::SystemException {
public:
// Declarations
static inline ::System::OutOfMemoryException* New_ctor() ;

static inline ::System::OutOfMemoryException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::System::OutOfMemoryException* New_ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x3d7d194, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x3d7d20c, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0x3d7d1ec, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OutOfMemoryException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OutOfMemoryException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OutOfMemoryException(OutOfMemoryException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OutOfMemoryException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OutOfMemoryException(OutOfMemoryException const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::OutOfMemoryException, 0x90>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::OutOfMemoryException);
DEFINE_IL2CPP_ARG_TYPE(::System::OutOfMemoryException*, "System", "OutOfMemoryException");
