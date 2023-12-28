#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Ray2D)
namespace System {
class IFormattable;
}
namespace UnityEngine {
struct Vector2;
}
namespace System {
class IFormatProvider;
}
// Forward declare root types
namespace UnityEngine {
struct Ray2D;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Ray2D);
// Type: UnityEngine::Ray2D
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10243))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10166))
// CS Name: ::UnityEngine::Ray2D
struct CORDL_TYPE Ray2D {
public:
  // Declarations
  __declspec(property(get = get_origin))::UnityEngine::Vector2 origin;

  __declspec(property(get = get_direction))::UnityEngine::Vector2 direction;

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method .ctor addr 0x2ccae54 size 0xc8 virtual false final false
  inline void _ctor(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction);

  /// @brief Method get_origin addr 0x2ccaf1c size 0x8 virtual false final false
  inline ::UnityEngine::Vector2 get_origin();

  /// @brief Method get_direction addr 0x2ccaf24 size 0x8 virtual false final false
  inline ::UnityEngine::Vector2 get_direction();

  /// @brief Method GetPoint addr 0x2ccaf2c size 0x14 virtual false final false
  inline ::UnityEngine::Vector2 GetPoint(float_t distance);

  /// @brief Method ToString addr 0x2ccaf40 size 0xc virtual true final false
  inline ::StringW ToString();

  /// @brief Method ToString addr 0x2ccaf4c size 0x180 virtual true final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  // Ctor Parameters [CppParam { name: "m_Origin", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_Direction", ty: "::UnityEngine::Vector2", modifiers: "",
  // def_value: None }]
  constexpr Ray2D(::UnityEngine::Vector2 m_Origin, ::UnityEngine::Vector2 m_Direction) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Ray2D();

  /// @brief Field m_Origin, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_Origin;

  /// @brief Field m_Direction, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_Direction;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Ray2D, 0x10>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Ray2D, "UnityEngine", "Ray2D");
