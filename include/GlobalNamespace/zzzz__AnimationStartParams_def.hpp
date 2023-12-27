#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AnimationStartParams)
namespace UnityEngine {
class Animation;
}
// Forward declare root types
namespace GlobalNamespace {
class AnimationStartParams;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AnimationStartParams);
// Type: ::AnimationStartParams
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14351))
// CS Name: ::AnimationStartParams*
class CORDL_TYPE AnimationStartParams : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _timeOffset, offset 0x18, size 0x4
  __declspec(property(get = __get__timeOffset, put = __set__timeOffset)) float_t _timeOffset;

  /// @brief Field _speed, offset 0x1c, size 0x4
  __declspec(property(get = __get__speed, put = __set__speed)) float_t _speed;

  /// @brief Field _animation, offset 0x20, size 0x8
  __declspec(property(get = __get__animation, put = __set__animation))::UnityEngine::Animation* _animation;

  constexpr float_t& __get__timeOffset();

  constexpr float_t const& __get__timeOffset() const;

  constexpr void __set__timeOffset(float_t value);

  constexpr float_t& __get__speed();

  constexpr float_t const& __get__speed() const;

  constexpr void __set__speed(float_t value);

  constexpr ::UnityEngine::Animation*& __get__animation();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animation*> const& __get__animation() const;

  constexpr void __set__animation(::UnityEngine::Animation* value);

  /// @brief Method Start addr 0x20f0e28 size 0x2d8 virtual false final false
  inline void Start();

  static inline ::GlobalNamespace::AnimationStartParams* New_ctor();

  /// @brief Method .ctor addr 0x20f1100 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AnimationStartParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimationStartParams(AnimationStartParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimationStartParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimationStartParams(AnimationStartParams const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationStartParams();

public:
  /// @brief Field _timeOffset, offset: 0x18, size: 0x4, def value: None
  float_t ____timeOffset;

  /// @brief Field _speed, offset: 0x1c, size: 0x4, def value: None
  float_t ____speed;

  /// @brief Field _animation, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Animation* ____animation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AnimationStartParams, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AnimationStartParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AnimationStartParams*, "", "AnimationStartParams");
