#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TooltipAttribute)
// Forward declare root types
namespace UnityEngine {
class TooltipAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TooltipAttribute);
// Type: UnityEngine::TooltipAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10173))
// CS Name: ::UnityEngine::TooltipAttribute*
class CORDL_TYPE TooltipAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field tooltip, offset 0x10, size 0x8
  __declspec(property(get = __get_tooltip, put = __set_tooltip))::StringW tooltip;

  constexpr ::StringW& __get_tooltip();

  constexpr ::StringW const& __get_tooltip() const;

  constexpr void __set_tooltip(::StringW value);

  static inline ::UnityEngine::TooltipAttribute* New_ctor(::StringW tooltip);

  /// @brief Method .ctor addr 0x2ccc120 size 0x28 virtual false final false
  inline void _ctor(::StringW tooltip);

  // Ctor Parameters [CppParam { name: "", ty: "TooltipAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TooltipAttribute(TooltipAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TooltipAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TooltipAttribute(TooltipAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TooltipAttribute();

public:
  /// @brief Field tooltip, offset: 0x10, size: 0x8, def value: None
  ::StringW ___tooltip;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TooltipAttribute, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::TooltipAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TooltipAttribute*, "UnityEngine", "TooltipAttribute");
