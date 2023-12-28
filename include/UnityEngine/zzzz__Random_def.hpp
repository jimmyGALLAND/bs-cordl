#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Random)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine {
class Random;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Random);
// Type: UnityEngine::Random
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10140))
// CS Name: ::UnityEngine::Random*
class CORDL_TYPE Random : public ::System::Object {
public:
  // Declarations
  /// @brief Method InitState addr 0x2cc5130 size 0x3c virtual false final false
  static inline void InitState(int32_t seed);

  /// @brief Method Range addr 0x2cc516c size 0x40 virtual false final false
  static inline float_t Range(float_t minInclusive, float_t maxInclusive);

  /// @brief Method Range addr 0x2cc51ac size 0x44 virtual false final false
  static inline int32_t Range(int32_t minInclusive, int32_t maxExclusive);

  /// @brief Method RandomRangeInt addr 0x2cc51f0 size 0x44 virtual false final false
  static inline int32_t RandomRangeInt(int32_t minInclusive, int32_t maxExclusive);

  /// @brief Method get_value addr 0x2cc5234 size 0x28 virtual false final false
  static inline float_t get_value();

  /// @brief Method get_insideUnitSphere addr 0x2cc525c size 0x4c virtual false final false
  static inline ::UnityEngine::Vector3 get_insideUnitSphere();

  /// @brief Method get_onUnitSphere addr 0x2cc52e4 size 0x4c virtual false final false
  static inline ::UnityEngine::Vector3 get_onUnitSphere();

  /// @brief Method get_rotation addr 0x2cc536c size 0x48 virtual false final false
  static inline ::UnityEngine::Quaternion get_rotation();

  /// @brief Method ColorHSV addr 0x2cc53f0 size 0x24 virtual false final false
  static inline ::UnityEngine::Color ColorHSV();

  /// @brief Method ColorHSV addr 0x2cc5414 size 0x164 virtual false final false
  static inline ::UnityEngine::Color ColorHSV(float_t hueMin, float_t hueMax, float_t saturationMin, float_t saturationMax, float_t valueMin, float_t valueMax, float_t alphaMin, float_t alphaMax);

  /// @brief Method get_insideUnitSphere_Injected addr 0x2cc52a8 size 0x3c virtual false final false
  static inline void get_insideUnitSphere_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_onUnitSphere_Injected addr 0x2cc5330 size 0x3c virtual false final false
  static inline void get_onUnitSphere_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_rotation_Injected addr 0x2cc53b4 size 0x3c virtual false final false
  static inline void get_rotation_Injected(ByRef<::UnityEngine::Quaternion> ret);

  // Ctor Parameters [CppParam { name: "", ty: "Random", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Random(Random&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Random", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Random(Random const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Random();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Random, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Random);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Random*, "UnityEngine", "Random");
