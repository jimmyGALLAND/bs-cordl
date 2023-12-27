#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArgIterator)
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
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2583))
// CS Name: ::System::ArgIterator
struct CORDL_TYPE ArgIterator {
public:
  // Declarations
  /// @brief Method Equals addr 0x25f62a8 size 0x50 virtual true final false
  inline bool Equals(::System::Object* o);

  /// @brief Method GetHashCode addr 0x25f62f8 size 0x8 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "sig", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "args", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "next_arg", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "num_args", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ArgIterator(void* sig, void* args, int32_t next_arg, int32_t num_args) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ArgIterator();

  /// @brief Field sig, offset: 0x0, size: 0x8, def value: None
  void* sig;

  /// @brief Field args, offset: 0x8, size: 0x8, def value: None
  void* args;

  /// @brief Field next_arg, offset: 0x10, size: 0x4, def value: None
  int32_t next_arg;

  /// @brief Field num_args, offset: 0x14, size: 0x4, def value: None
  int32_t num_args;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ArgIterator, 0x18>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::ArgIterator, "System", "ArgIterator");
