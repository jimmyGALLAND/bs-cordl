#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(LockHolder)
namespace System {
class IDisposable;
}
namespace System::Threading {
class Lock;
}
// Forward declare root types
namespace System::Threading {
struct LockHolder;
}
// Write type traits
MARK_VAL_T(::System::Threading::LockHolder);
// Type: System.Threading::LockHolder
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2695))
// CS Name: ::System.Threading::LockHolder
struct CORDL_TYPE LockHolder {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Hold addr 0x2614158 size 0x24 virtual false final false
  static inline ::System::Threading::LockHolder Hold(::System::Threading::Lock* l);

  /// @brief Method Dispose addr 0x2614184 size 0x1c virtual true final true
  inline void Dispose();

  // Ctor Parameters [CppParam { name: "_lock", ty: "::System::Threading::Lock*", modifiers: "", def_value: None }]
  constexpr LockHolder(::System::Threading::Lock* _lock) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr LockHolder();

  /// @brief Field _lock, offset: 0x0, size: 0x8, def value: None
  ::System::Threading::Lock* _lock;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::LockHolder, 0x8>, "Size mismatch!");

} // namespace System::Threading
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::LockHolder, "System.Threading", "LockHolder");
