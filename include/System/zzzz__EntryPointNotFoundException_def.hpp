#pragma once
// IWYU pragma private; include "System/EntryPointNotFoundException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__TypeLoadException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EntryPointNotFoundException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class EntryPointNotFoundException;
}
// Write type traits
MARK_REF_PTR_T(::System::EntryPointNotFoundException);
// Type: System::EntryPointNotFoundException
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 172, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::EntryPointNotFoundException*
class CORDL_TYPE EntryPointNotFoundException : public ::System::TypeLoadException {
public:
// Declarations
static inline ::System::EntryPointNotFoundException* New_ctor() ;

static inline ::System::EntryPointNotFoundException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::System::EntryPointNotFoundException* New_ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x3d44148, size 0x5c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x3d441c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0x3d441a4, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EntryPointNotFoundException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EntryPointNotFoundException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EntryPointNotFoundException(EntryPointNotFoundException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EntryPointNotFoundException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EntryPointNotFoundException(EntryPointNotFoundException const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::EntryPointNotFoundException, 0xb0>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::EntryPointNotFoundException);
DEFINE_IL2CPP_ARG_TYPE(::System::EntryPointNotFoundException*, "System", "EntryPointNotFoundException");
