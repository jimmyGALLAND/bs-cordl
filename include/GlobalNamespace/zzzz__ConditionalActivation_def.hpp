#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ConditionalActivation)
namespace GlobalNamespace {
class BoolSO;
}
// Forward declare root types
namespace GlobalNamespace {
class ConditionalActivation;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ConditionalActivation);
// Type: ::ConditionalActivation
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ConditionalActivation*
class CORDL_TYPE ConditionalActivation : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _activateOnFalse, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__activateOnFalse, put = __cordl_internal_set__activateOnFalse)) bool _activateOnFalse;

  /// @brief Field _value, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value))::UnityW<::GlobalNamespace::BoolSO> _value;

  /// @brief Method Awake, addr 0x23d85a0, size 0x84, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::ConditionalActivation* New_ctor();

  constexpr bool const& __cordl_internal_get__activateOnFalse() const;

  constexpr bool& __cordl_internal_get__activateOnFalse();

  constexpr ::UnityW<::GlobalNamespace::BoolSO> const& __cordl_internal_get__value() const;

  constexpr ::UnityW<::GlobalNamespace::BoolSO>& __cordl_internal_get__value();

  constexpr void __cordl_internal_set__activateOnFalse(bool value);

  constexpr void __cordl_internal_set__value(::UnityW<::GlobalNamespace::BoolSO> value);

  /// @brief Method .ctor, addr 0x23d8624, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConditionalActivation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConditionalActivation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConditionalActivation(ConditionalActivation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConditionalActivation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConditionalActivation(ConditionalActivation const&) = delete;

  /// @brief Field _value, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BoolSO> ____value;

  /// @brief Field _activateOnFalse, offset: 0x20, size: 0x1, def value: None
  bool ____activateOnFalse;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConditionalActivation, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ConditionalActivation, ____value) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConditionalActivation, ____activateOnFalse) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ConditionalActivation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConditionalActivation*, "", "ConditionalActivation");
