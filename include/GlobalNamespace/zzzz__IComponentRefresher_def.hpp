#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IComponentRefresher)
// Forward declare root types
namespace GlobalNamespace {
class IComponentRefresher;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IComponentRefresher);
// Type: ::IComponentRefresher
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15856))
// CS Name: ::IComponentRefresher*
class CORDL_TYPE IComponentRefresher {
public:
  // Declarations
  /// @brief Method __Refresh addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void __Refresh();

  // Ctor Parameters [CppParam { name: "", ty: "IComponentRefresher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IComponentRefresher(IComponentRefresher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IComponentRefresher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IComponentRefresher(IComponentRefresher const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IComponentRefresher);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IComponentRefresher*, "", "IComponentRefresher");
