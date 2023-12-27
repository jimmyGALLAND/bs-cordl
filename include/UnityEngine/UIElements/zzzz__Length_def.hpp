#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Length)
namespace System {
template <typename T> class IEquatable_1;
}
namespace UnityEngine::UIElements {
struct LengthUnit;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct __Length__Unit;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct __Length__Unit;
}
namespace UnityEngine::UIElements {
struct Length;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::__Length__Unit);
MARK_VAL_T(::UnityEngine::UIElements::Length);
// Type: ::Unit
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7312))
// CS Name: ::Length::Unit
struct CORDL_TYPE __Length__Unit {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Length__Unit_Unwrapped
  enum struct ____Length__Unit_Unwrapped : int32_t {
    __E_Pixel = static_cast<int32_t>(0x0),
    __E_Percent = static_cast<int32_t>(0x1),
    __E_Auto = static_cast<int32_t>(0x2),
    __E_None = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Length__Unit_Unwrapped() const noexcept {
    return static_cast<____Length__Unit_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Length__Unit(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Length__Unit();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Pixel value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::__Length__Unit const Pixel;

  /// @brief Field Percent value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::__Length__Unit const Percent;

  /// @brief Field Auto value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::__Length__Unit const Auto;

  /// @brief Field None value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UIElements::__Length__Unit const None;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__Length__Unit, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::Length
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7312))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7313))
// CS Name: ::UnityEngine.UIElements::Length
struct CORDL_TYPE Length {
public:
  // Declarations
  using Unit = ::UnityEngine::UIElements::__Length__Unit;

  __declspec(property(get = get_value, put = set_value)) float_t value;

  __declspec(property(get = get_unit, put = set_unit))::UnityEngine::UIElements::LengthUnit unit;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::Length>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::Length>*();

  /// @brief Method Percent addr 0x2e7534c size 0x28 virtual false final false
  static inline ::UnityEngine::UIElements::Length Percent(float_t value);

  /// @brief Method Auto addr 0x2e710cc size 0x8 virtual false final false
  static inline ::UnityEngine::UIElements::Length Auto();

  /// @brief Method None addr 0x2e710d4 size 0x8 virtual false final false
  static inline ::UnityEngine::UIElements::Length None();

  /// @brief Method get_value addr 0x2e7539c size 0x8 virtual false final false
  inline float_t get_value();

  /// @brief Method set_value addr 0x2e753a4 size 0x24 virtual false final false
  inline void set_value(float_t value);

  /// @brief Method get_unit addr 0x2e753c8 size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::LengthUnit get_unit();

  /// @brief Method set_unit addr 0x2e753d0 size 0x8 virtual false final false
  inline void set_unit(::UnityEngine::UIElements::LengthUnit value);

  /// @brief Method IsAuto addr 0x2e70c00 size 0x10 virtual false final false
  inline bool IsAuto();

  /// @brief Method IsNone addr 0x2e70c10 size 0x10 virtual false final false
  inline bool IsNone();

  /// @brief Method .ctor addr 0x2e753d8 size 0x28 virtual false final false
  inline void _ctor(float_t value);

  /// @brief Method .ctor addr 0x2e70bac size 0x28 virtual false final false
  inline void _ctor(float_t value, ::UnityEngine::UIElements::LengthUnit unit);

  /// @brief Method .ctor addr 0x2e75374 size 0x28 virtual false final false
  inline void _ctor(float_t value, ::UnityEngine::UIElements::__Length__Unit unit);

  /// @brief Method op_Implicit addr 0x2e75400 size 0x24 virtual false final false
  static inline ::UnityEngine::UIElements::Length op_Implicit___UnityEngine__UIElements__Length(float_t value);

  /// @brief Method op_Equality addr 0x2e70c58 size 0x28 virtual false final false
  static inline bool op_Equality(::UnityEngine::UIElements::Length lhs, ::UnityEngine::UIElements::Length rhs);

  /// @brief Method op_Inequality addr 0x2e75424 size 0x28 virtual false final false
  static inline bool op_Inequality(::UnityEngine::UIElements::Length lhs, ::UnityEngine::UIElements::Length rhs);

  /// @brief Method Equals addr 0x2e7544c size 0x28 virtual true final true
  inline bool Equals(::UnityEngine::UIElements::Length other);

  /// @brief Method Equals addr 0x2e75474 size 0x8c virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2e70dc8 size 0x28 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method ToString addr 0x2e71878 size 0x1c0 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "m_Value", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Unit", ty: "::UnityEngine::UIElements::__Length__Unit", modifiers: "", def_value:
  // None }]
  constexpr Length(float_t m_Value, ::UnityEngine::UIElements::__Length__Unit m_Unit) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Length();

  /// @brief Field m_Value, offset: 0x0, size: 0x4, def value: None
  float_t m_Value;

  /// @brief Field m_Unit, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::UIElements::__Length__Unit m_Unit;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field k_MaxValue offset 0xffffffff size 0x4
  static constexpr float_t k_MaxValue{ 8388608.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Length, 0x8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__Length__Unit, "UnityEngine.UIElements", "Length/Unit");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Length, "UnityEngine.UIElements", "Length");
