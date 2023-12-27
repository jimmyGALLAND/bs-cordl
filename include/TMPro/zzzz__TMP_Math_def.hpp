#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_Math)
// Forward declare root types
namespace TMPro {
class TMP_Math;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_Math);
// Type: TMPro::TMP_Math
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10243)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12315))
// CS Name: ::TMPro::TMP_Math*
class CORDL_TYPE TMP_Math : public ::System::Object {
public:
  // Declarations
  /// @brief Field MAX_16BIT, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MAX_16BIT, put = setStaticF_MAX_16BIT))::UnityEngine::Vector2 MAX_16BIT;

  /// @brief Field MIN_16BIT, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MIN_16BIT, put = setStaticF_MIN_16BIT))::UnityEngine::Vector2 MIN_16BIT;

  static inline void setStaticF_MAX_16BIT(::UnityEngine::Vector2 value);

  static inline ::UnityEngine::Vector2 getStaticF_MAX_16BIT();

  static inline void setStaticF_MIN_16BIT(::UnityEngine::Vector2 value);

  static inline ::UnityEngine::Vector2 getStaticF_MIN_16BIT();

  /// @brief Method Approximately addr 0x2c00c8c size 0x30 virtual false final false
  static inline bool Approximately(float_t a, float_t b);

  /// @brief Method Mod addr 0x2c00cbc size 0x14 virtual false final false
  static inline int32_t Mod(int32_t a, int32_t b);

  // Ctor Parameters [CppParam { name: "", ty: "TMP_Math", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_Math(TMP_Math&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_Math", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_Math(TMP_Math const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_Math();

public:
  /// @brief Field FLOAT_MAX offset 0xffffffff size 0x4
  static constexpr float_t FLOAT_MAX{ 32767.0 };

  /// @brief Field FLOAT_MIN offset 0xffffffff size 0x4
  static constexpr float_t FLOAT_MIN{ -32767.0 };

  /// @brief Field INT_MAX offset 0xffffffff size 0x4
  static constexpr int32_t _cordl_INT_MAX{ static_cast<int32_t>(0x7fffffff) };

  /// @brief Field INT_MIN offset 0xffffffff size 0x4
  static constexpr int32_t _cordl_INT_MIN{ static_cast<int32_t>(0x80000001) };

  /// @brief Field FLOAT_UNSET offset 0xffffffff size 0x4
  static constexpr float_t FLOAT_UNSET{ -32767.0 };

  /// @brief Field INT_UNSET offset 0xffffffff size 0x4
  static constexpr int32_t INT_UNSET{ static_cast<int32_t>(0xffff8001) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_Math, 0x10>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_Math);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Math*, "TMPro", "TMP_Math");
