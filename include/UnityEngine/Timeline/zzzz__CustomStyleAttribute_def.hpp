#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CustomStyleAttribute)
// Forward declare root types
namespace UnityEngine::Timeline {
class CustomStyleAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::CustomStyleAttribute);
// Type: UnityEngine.Timeline::CustomStyleAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13925))
// CS Name: ::UnityEngine.Timeline::CustomStyleAttribute*
class CORDL_TYPE CustomStyleAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field ussStyle, offset 0x10, size 0x8
  __declspec(property(get = __get_ussStyle, put = __set_ussStyle))::StringW ussStyle;

  constexpr ::StringW& __get_ussStyle();

  constexpr ::StringW const& __get_ussStyle() const;

  constexpr void __set_ussStyle(::StringW value);

  static inline ::UnityEngine::Timeline::CustomStyleAttribute* New_ctor(::StringW ussStyle);

  /// @brief Method .ctor addr 0x2c6e7a0 size 0x28 virtual false final false
  inline void _ctor(::StringW ussStyle);

  // Ctor Parameters [CppParam { name: "", ty: "CustomStyleAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomStyleAttribute(CustomStyleAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomStyleAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomStyleAttribute(CustomStyleAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomStyleAttribute();

public:
  /// @brief Field ussStyle, offset: 0x10, size: 0x8, def value: None
  ::StringW ___ussStyle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::CustomStyleAttribute, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::CustomStyleAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::CustomStyleAttribute*, "UnityEngine.Timeline", "CustomStyleAttribute");
