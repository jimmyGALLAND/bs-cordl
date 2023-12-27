#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ProBuilder/zzzz__RectSelectMode_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PickerOptions)
namespace UnityEngine::ProBuilder {
struct RectSelectMode;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct PickerOptions;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::PickerOptions);
// Type: UnityEngine.ProBuilder::PickerOptions
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12164))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12184))
// CS Name: ::UnityEngine.ProBuilder::PickerOptions
struct CORDL_TYPE PickerOptions {
public:
  // Declarations
  /// @brief Field k_Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_Default, put = setStaticF_k_Default))::UnityEngine::ProBuilder::PickerOptions k_Default;

  __declspec(property(get = get_depthTest, put = set_depthTest)) bool depthTest;

  __declspec(property(get = get_rectSelectMode, put = set_rectSelectMode))::UnityEngine::ProBuilder::RectSelectMode rectSelectMode;

  static inline void setStaticF_k_Default(::UnityEngine::ProBuilder::PickerOptions value);

  static inline ::UnityEngine::ProBuilder::PickerOptions getStaticF_k_Default();

  /// @brief Method get_depthTest addr 0x2b66fec size 0x8 virtual false final false
  inline bool get_depthTest();

  /// @brief Method set_depthTest addr 0x2b66ff4 size 0xc virtual false final false
  inline void set_depthTest(bool value);

  /// @brief Method get_rectSelectMode addr 0x2b67000 size 0x8 virtual false final false
  inline ::UnityEngine::ProBuilder::RectSelectMode get_rectSelectMode();

  /// @brief Method set_rectSelectMode addr 0x2b67008 size 0x8 virtual false final false
  inline void set_rectSelectMode(::UnityEngine::ProBuilder::RectSelectMode value);

  /// @brief Method get_Default addr 0x2b67010 size 0x58 virtual false final false
  static inline ::UnityEngine::ProBuilder::PickerOptions get_Default();

  /// @brief Method Equals addr 0x2b67068 size 0x98 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0x2b67100 size 0x38 virtual false final false
  inline bool Equals(::UnityEngine::ProBuilder::PickerOptions other);

  /// @brief Method GetHashCode addr 0x2b67138 size 0x3c virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method op_Equality addr 0x2b67174 size 0x34 virtual false final false
  static inline bool op_Equality(::UnityEngine::ProBuilder::PickerOptions a, ::UnityEngine::ProBuilder::PickerOptions b);

  /// @brief Method op_Inequality addr 0x2b671a8 size 0x34 virtual false final false
  static inline bool op_Inequality(::UnityEngine::ProBuilder::PickerOptions a, ::UnityEngine::ProBuilder::PickerOptions b);

  // Ctor Parameters [CppParam { name: "_depthTest_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_rectSelectMode_k__BackingField", ty:
  // "::UnityEngine::ProBuilder::RectSelectMode", modifiers: "", def_value: None }]
  constexpr PickerOptions(bool _depthTest_k__BackingField, ::UnityEngine::ProBuilder::RectSelectMode _rectSelectMode_k__BackingField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr PickerOptions();

  /// @brief Field <depthTest>k__BackingField, offset: 0x0, size: 0x1, def value: None
  bool _depthTest_k__BackingField;

  /// @brief Field <rectSelectMode>k__BackingField, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::ProBuilder::RectSelectMode _rectSelectMode_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::PickerOptions, 0x8>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::PickerOptions, "UnityEngine.ProBuilder", "PickerOptions");
