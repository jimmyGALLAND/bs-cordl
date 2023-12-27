#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPlaceholderFactory)
namespace Zenject {
class IValidatable;
}
// Forward declare root types
namespace Zenject {
class IPlaceholderFactory;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::IPlaceholderFactory);
// Type: Zenject::IPlaceholderFactory
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11025))
// CS Name: ::Zenject::IPlaceholderFactory*
class CORDL_TYPE IPlaceholderFactory {
public:
  // Declarations
  /// @brief Convert operator to "::Zenject::IValidatable"
  constexpr operator ::Zenject::IValidatable*() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IPlaceholderFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPlaceholderFactory(IPlaceholderFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPlaceholderFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPlaceholderFactory(IPlaceholderFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
NEED_NO_BOX(::Zenject::IPlaceholderFactory);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::IPlaceholderFactory*, "Zenject", "IPlaceholderFactory");
