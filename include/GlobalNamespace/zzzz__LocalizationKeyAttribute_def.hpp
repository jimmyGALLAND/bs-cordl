#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(LocalizationKeyAttribute)
// Forward declare root types
namespace GlobalNamespace {
class LocalizationKeyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LocalizationKeyAttribute);
// Type: ::LocalizationKeyAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15544))
// CS Name: ::LocalizationKeyAttribute*
class CORDL_TYPE LocalizationKeyAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  static inline ::GlobalNamespace::LocalizationKeyAttribute* New_ctor();

  /// @brief Method .ctor addr 0x28008a4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LocalizationKeyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalizationKeyAttribute(LocalizationKeyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalizationKeyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalizationKeyAttribute(LocalizationKeyAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalizationKeyAttribute();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalizationKeyAttribute, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LocalizationKeyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalizationKeyAttribute*, "", "LocalizationKeyAttribute");
