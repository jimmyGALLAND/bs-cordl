#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BeatmapObjectAvoidanceTiltEvaluator)
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class BezierSplineEvaluator;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectAvoidanceTiltEvaluator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator);
// Type: ::BeatmapObjectAvoidanceTiltEvaluator
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10243))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3958))
// CS Name: ::BeatmapObjectAvoidanceTiltEvaluator*
class CORDL_TYPE BeatmapObjectAvoidanceTiltEvaluator : public ::System::Object {
public:
  // Declarations
  /// @brief Field _audioTimeSource, offset 0x10, size 0x8
  __declspec(property(get = __get__audioTimeSource, put = __set__audioTimeSource))::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field _gravity, offset 0x18, size 0x8
  __declspec(property(get = __get__gravity, put = __set__gravity))::UnityEngine::Vector2 _gravity;

  /// @brief Field _normalizedGravity, offset 0x20, size 0x8
  __declspec(property(get = __get__normalizedGravity, put = __set__normalizedGravity))::UnityEngine::Vector2 _normalizedGravity;

  /// @brief Field _bezierSplineEvaluator, offset 0x28, size 0x8
  __declspec(property(get = __get__bezierSplineEvaluator, put = __set__bezierSplineEvaluator))::GlobalNamespace::BezierSplineEvaluator* _bezierSplineEvaluator;

  /// @brief Field _currentAcceleration, offset 0x30, size 0x4
  __declspec(property(get = __get__currentAcceleration, put = __set__currentAcceleration)) float_t _currentAcceleration;

  constexpr ::GlobalNamespace::IAudioTimeSource*& __get__audioTimeSource();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& __get__audioTimeSource() const;

  constexpr void __set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  constexpr ::UnityEngine::Vector2& __get__gravity();

  constexpr ::UnityEngine::Vector2 const& __get__gravity() const;

  constexpr void __set__gravity(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get__normalizedGravity();

  constexpr ::UnityEngine::Vector2 const& __get__normalizedGravity() const;

  constexpr void __set__normalizedGravity(::UnityEngine::Vector2 value);

  constexpr ::GlobalNamespace::BezierSplineEvaluator*& __get__bezierSplineEvaluator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BezierSplineEvaluator*> const& __get__bezierSplineEvaluator() const;

  constexpr void __set__bezierSplineEvaluator(::GlobalNamespace::BezierSplineEvaluator* value);

  constexpr float_t& __get__currentAcceleration();

  constexpr float_t const& __get__currentAcceleration() const;

  constexpr void __set__currentAcceleration(float_t value);

  static inline ::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator* New_ctor(::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::BezierSplineEvaluator* bezierSplineEvaluator,
                                                                                 ::UnityEngine::Vector2 gravity);

  /// @brief Method .ctor addr 0x2217308 size 0xe0 virtual false final false
  inline void _ctor(::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::BezierSplineEvaluator* bezierSplineEvaluator, ::UnityEngine::Vector2 gravity);

  /// @brief Method GetTiltAngle addr 0x22173e8 size 0x2cc virtual false final false
  inline float_t GetTiltAngle();

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectAvoidanceTiltEvaluator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapObjectAvoidanceTiltEvaluator(BeatmapObjectAvoidanceTiltEvaluator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectAvoidanceTiltEvaluator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapObjectAvoidanceTiltEvaluator(BeatmapObjectAvoidanceTiltEvaluator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapObjectAvoidanceTiltEvaluator();

public:
  /// @brief Field _audioTimeSource, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  /// @brief Field _gravity, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____gravity;

  /// @brief Field _normalizedGravity, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____normalizedGravity;

  /// @brief Field _bezierSplineEvaluator, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BezierSplineEvaluator* ____bezierSplineEvaluator;

  /// @brief Field _currentAcceleration, offset: 0x30, size: 0x4, def value: None
  float_t ____currentAcceleration;

  /// @brief Field kLookAheadTime offset 0xffffffff size 0x4
  static constexpr float_t kLookAheadTime{ 0.2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator*, "", "BeatmapObjectAvoidanceTiltEvaluator");
