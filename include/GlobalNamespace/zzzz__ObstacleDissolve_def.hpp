#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ObstacleDissolve)
namespace GlobalNamespace {
class CutoutAnimateEffect;
}
namespace GlobalNamespace {
class ObstacleControllerBase;
}
// Forward declare root types
namespace GlobalNamespace {
class ObstacleDissolve;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ObstacleDissolve);
// Type: ::ObstacleDissolve
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ObstacleDissolve*
class CORDL_TYPE ObstacleDissolve : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _cutoutAnimateEffect, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__cutoutAnimateEffect, put = __cordl_internal_set__cutoutAnimateEffect))::UnityW<::GlobalNamespace::CutoutAnimateEffect> _cutoutAnimateEffect;

  /// @brief Field _obstacleController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__obstacleController, put = __cordl_internal_set__obstacleController))::UnityW<::GlobalNamespace::ObstacleControllerBase> _obstacleController;

  /// @brief Method Awake, addr 0x252ef14, size 0xec, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleObcstacleDidStartDissolvingEvent, addr 0x252f150, size 0x28, virtual false, abstract: false, final false
  inline void HandleObcstacleDidStartDissolvingEvent(::GlobalNamespace::ObstacleControllerBase* obstacleController, float_t duration);

  /// @brief Method HandleObstacleDidInitEvent, addr 0x252f134, size 0x1c, virtual false, abstract: false, final false
  inline void HandleObstacleDidInitEvent(::GlobalNamespace::ObstacleControllerBase* obstacleController);

  static inline ::GlobalNamespace::ObstacleDissolve* New_ctor();

  /// @brief Method OnDestroy, addr 0x252f000, size 0x134, virtual false, abstract: false, final false
  inline void OnDestroy();

  constexpr ::UnityW<::GlobalNamespace::CutoutAnimateEffect> const& __cordl_internal_get__cutoutAnimateEffect() const;

  constexpr ::UnityW<::GlobalNamespace::CutoutAnimateEffect>& __cordl_internal_get__cutoutAnimateEffect();

  constexpr ::UnityW<::GlobalNamespace::ObstacleControllerBase> const& __cordl_internal_get__obstacleController() const;

  constexpr ::UnityW<::GlobalNamespace::ObstacleControllerBase>& __cordl_internal_get__obstacleController();

  constexpr void __cordl_internal_set__cutoutAnimateEffect(::UnityW<::GlobalNamespace::CutoutAnimateEffect> value);

  constexpr void __cordl_internal_set__obstacleController(::UnityW<::GlobalNamespace::ObstacleControllerBase> value);

  /// @brief Method .ctor, addr 0x252f178, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObstacleDissolve();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObstacleDissolve", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObstacleDissolve(ObstacleDissolve&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObstacleDissolve", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObstacleDissolve(ObstacleDissolve const&) = delete;

  /// @brief Field _obstacleController, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ObstacleControllerBase> ____obstacleController;

  /// @brief Field _cutoutAnimateEffect, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CutoutAnimateEffect> ____cutoutAnimateEffect;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObstacleDissolve, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleDissolve, ____obstacleController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleDissolve, ____cutoutAnimateEffect) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObstacleDissolve);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleDissolve*, "", "ObstacleDissolve");
