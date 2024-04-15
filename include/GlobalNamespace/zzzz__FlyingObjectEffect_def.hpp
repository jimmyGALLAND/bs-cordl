#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FlyingObjectEffect)
namespace GlobalNamespace {
class IFlyingObjectEffectDidFinishEvent;
}
namespace GlobalNamespace {
template <typename T> class ILazyCopyHashSet_1;
}
namespace GlobalNamespace {
template <typename T> class LazyCopyHashSet_1;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class FlyingObjectEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FlyingObjectEffect);
// Type: ::FlyingObjectEffect
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FlyingObjectEffect*
class CORDL_TYPE FlyingObjectEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _didFinishEvent, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__didFinishEvent,
                      put = __cordl_internal_set__didFinishEvent))::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>* _didFinishEvent;

  /// @brief Field _duration, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get__duration, put = __cordl_internal_set__duration)) float_t _duration;

  /// @brief Field _elapsedTime, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__elapsedTime, put = __cordl_internal_set__elapsedTime)) float_t _elapsedTime;

  /// @brief Field _initialized, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__initialized, put = __cordl_internal_set__initialized)) bool _initialized;

  /// @brief Field _moveAnimationCurve, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__moveAnimationCurve, put = __cordl_internal_set__moveAnimationCurve))::UnityEngine::AnimationCurve* _moveAnimationCurve;

  /// @brief Field _rotation, offset 0x44, size 0x10
  __declspec(property(get = __cordl_internal_get__rotation, put = __cordl_internal_set__rotation))::UnityEngine::Quaternion _rotation;

  /// @brief Field _shake, offset 0x74, size 0x1
  __declspec(property(get = __cordl_internal_get__shake, put = __cordl_internal_set__shake)) bool _shake;

  /// @brief Field _shakeFrequency, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__shakeFrequency, put = __cordl_internal_set__shakeFrequency)) float_t _shakeFrequency;

  /// @brief Field _shakeRotation, offset 0x34, size 0x10
  __declspec(property(get = __cordl_internal_get__shakeRotation, put = __cordl_internal_set__shakeRotation))::UnityEngine::Quaternion _shakeRotation;

  /// @brief Field _shakeStrength, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__shakeStrength, put = __cordl_internal_set__shakeStrength)) float_t _shakeStrength;

  /// @brief Field _shakeStrengthAnimationCurve, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__shakeStrengthAnimationCurve, put = __cordl_internal_set__shakeStrengthAnimationCurve))::UnityEngine::AnimationCurve* _shakeStrengthAnimationCurve;

  /// @brief Field _startPos, offset 0x58, size 0xc
  __declspec(property(get = __cordl_internal_get__startPos, put = __cordl_internal_set__startPos))::UnityEngine::Vector3 _startPos;

  /// @brief Field _targetPos, offset 0x64, size 0xc
  __declspec(property(get = __cordl_internal_get__targetPos, put = __cordl_internal_set__targetPos))::UnityEngine::Vector3 _targetPos;

  __declspec(property(get = get_didFinishEvent))::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>* didFinishEvent;

  /// @brief Method InitAndPresent, addr 0x25ba518, size 0xe8, virtual false, abstract: false, final false
  inline void InitAndPresent(float_t duration, ::UnityEngine::Vector3 targetPos, ::UnityEngine::Quaternion rotation, bool shake);

  /// @brief Method ManualUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ManualUpdate(float_t t);

  static inline ::GlobalNamespace::FlyingObjectEffect* New_ctor();

  /// @brief Method Update, addr 0x25ba600, size 0x3b8, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>*& __cordl_internal_get__didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>*> const& __cordl_internal_get__didFinishEvent() const;

  constexpr float_t const& __cordl_internal_get__duration() const;

  constexpr float_t& __cordl_internal_get__duration();

  constexpr float_t const& __cordl_internal_get__elapsedTime() const;

  constexpr float_t& __cordl_internal_get__elapsedTime();

  constexpr bool const& __cordl_internal_get__initialized() const;

  constexpr bool& __cordl_internal_get__initialized();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__moveAnimationCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get__moveAnimationCurve() const;

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__rotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__rotation();

  constexpr bool const& __cordl_internal_get__shake() const;

  constexpr bool& __cordl_internal_get__shake();

  constexpr float_t const& __cordl_internal_get__shakeFrequency() const;

  constexpr float_t& __cordl_internal_get__shakeFrequency();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__shakeRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__shakeRotation();

  constexpr float_t const& __cordl_internal_get__shakeStrength() const;

  constexpr float_t& __cordl_internal_get__shakeStrength();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__shakeStrengthAnimationCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get__shakeStrengthAnimationCurve() const;

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__startPos();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__targetPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__targetPos();

  constexpr void __cordl_internal_set__didFinishEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>* value);

  constexpr void __cordl_internal_set__duration(float_t value);

  constexpr void __cordl_internal_set__elapsedTime(float_t value);

  constexpr void __cordl_internal_set__initialized(bool value);

  constexpr void __cordl_internal_set__moveAnimationCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__rotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set__shake(bool value);

  constexpr void __cordl_internal_set__shakeFrequency(float_t value);

  constexpr void __cordl_internal_set__shakeRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set__shakeStrength(float_t value);

  constexpr void __cordl_internal_set__shakeStrengthAnimationCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__startPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__targetPos(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x25ba9b8, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_didFinishEvent, addr 0x25ba510, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>* get_didFinishEvent();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlyingObjectEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FlyingObjectEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlyingObjectEffect(FlyingObjectEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlyingObjectEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlyingObjectEffect(FlyingObjectEffect const&) = delete;

  /// @brief Field _moveAnimationCurve, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____moveAnimationCurve;

  /// @brief Field _shakeFrequency, offset: 0x20, size: 0x4, def value: None
  float_t ____shakeFrequency;

  /// @brief Field _shakeStrength, offset: 0x24, size: 0x4, def value: None
  float_t ____shakeStrength;

  /// @brief Field _shakeStrengthAnimationCurve, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____shakeStrengthAnimationCurve;

  /// @brief Field _initialized, offset: 0x30, size: 0x1, def value: None
  bool ____initialized;

  /// @brief Field _shakeRotation, offset: 0x34, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____shakeRotation;

  /// @brief Field _rotation, offset: 0x44, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____rotation;

  /// @brief Field _elapsedTime, offset: 0x54, size: 0x4, def value: None
  float_t ____elapsedTime;

  /// @brief Field _startPos, offset: 0x58, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____startPos;

  /// @brief Field _targetPos, offset: 0x64, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____targetPos;

  /// @brief Field _duration, offset: 0x70, size: 0x4, def value: None
  float_t ____duration;

  /// @brief Field _shake, offset: 0x74, size: 0x1, def value: None
  bool ____shake;

  /// @brief Field _didFinishEvent, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>* ____didFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlyingObjectEffect, 0x80>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingObjectEffect, ____moveAnimationCurve) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingObjectEffect, ____shakeFrequency) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingObjectEffect, ____shakeStrength) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingObjectEffect, ____shakeStrengthAnimationCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingObjectEffect, ____initialized) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingObjectEffect, ____shakeRotation) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingObjectEffect, ____rotation) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingObjectEffect, ____elapsedTime) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingObjectEffect, ____startPos) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingObjectEffect, ____targetPos) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingObjectEffect, ____duration) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingObjectEffect, ____shake) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingObjectEffect, ____didFinishEvent) == 0x78, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FlyingObjectEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlyingObjectEffect*, "", "FlyingObjectEffect");
