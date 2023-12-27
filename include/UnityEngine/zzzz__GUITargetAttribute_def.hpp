#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GUITargetAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine {
class GUITargetAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GUITargetAttribute);
// Type: UnityEngine::GUITargetAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14619))
// CS Name: ::UnityEngine::GUITargetAttribute*
class CORDL_TYPE GUITargetAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field displayMask, offset 0x10, size 0x4
  __declspec(property(get = __get_displayMask, put = __set_displayMask)) int32_t displayMask;

  constexpr int32_t& __get_displayMask();

  constexpr int32_t const& __get_displayMask() const;

  constexpr void __set_displayMask(int32_t value);

  /// @brief Method GetGUITargetAttrValue addr 0x2d0877c size 0x180 virtual false final false
  static inline int32_t GetGUITargetAttrValue(::System::Type* klass, ::StringW methodName);

  // Ctor Parameters [CppParam { name: "", ty: "GUITargetAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GUITargetAttribute(GUITargetAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GUITargetAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GUITargetAttribute(GUITargetAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GUITargetAttribute();

public:
  /// @brief Field displayMask, offset: 0x10, size: 0x4, def value: None
  int32_t ___displayMask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GUITargetAttribute, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::GUITargetAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUITargetAttribute*, "UnityEngine", "GUITargetAttribute");
