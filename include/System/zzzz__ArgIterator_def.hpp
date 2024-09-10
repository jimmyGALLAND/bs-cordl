#pragma once
// IWYU pragma private; include "System/ArgIterator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArgIterator)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
struct ArgIterator;
}
// Write type traits
MARK_VAL_T(::System::ArgIterator);
// Type: System::ArgIterator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::System::ArgIterator
struct CORDL_TYPE ArgIterator {
public:
// Declarations
/// @brief Method Equals, addr 0x3da1e60, size 0x4c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method GetHashCode, addr 0x3da1eac, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

// Ctor Parameters []
// @brief default ctor
constexpr ArgIterator() ;

// Ctor Parameters [CppParam { name: "sig", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "args", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "next_arg", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "num_args", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ArgIterator(::System::IntPtr  sig, ::System::IntPtr  args, int32_t  next_arg, int32_t  num_args) noexcept;

/// @brief Field sig, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  sig;

/// @brief Field args, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  args;

/// @brief Field next_arg, offset: 0x10, size: 0x4, def value: None
 int32_t  next_arg;

/// @brief Field num_args, offset: 0x14, size: 0x4, def value: None
 int32_t  num_args;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ArgIterator, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ArgIterator, sig) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::ArgIterator, args) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::ArgIterator, next_arg) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ArgIterator, num_args) == 0x14, "Offset mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::ArgIterator, "System", "ArgIterator");
