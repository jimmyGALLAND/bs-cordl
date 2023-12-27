#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloatFxGroupEffectTarget)
// Forward declare root types
namespace GlobalNamespace {
class FloatFxGroupEffectTarget;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FloatFxGroupEffectTarget);
// Type: ::FloatFxGroupEffectTarget
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4909))
// CS Name: ::FloatFxGroupEffectTarget*
class CORDL_TYPE FloatFxGroupEffectTarget : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Method SetValue addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void SetValue(float_t value);

  /// @brief Method TriggerValue addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void TriggerValue(float_t value);

  static inline ::GlobalNamespace::FloatFxGroupEffectTarget* New_ctor();

  /// @brief Method .ctor addr 0x23a57f8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FloatFxGroupEffectTarget", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatFxGroupEffectTarget(FloatFxGroupEffectTarget&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatFxGroupEffectTarget", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatFxGroupEffectTarget(FloatFxGroupEffectTarget const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatFxGroupEffectTarget();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatFxGroupEffectTarget, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloatFxGroupEffectTarget);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatFxGroupEffectTarget*, "", "FloatFxGroupEffectTarget");
