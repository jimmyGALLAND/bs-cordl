#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FlyingTextSpawner)
namespace GlobalNamespace {
class FlyingObjectEffect;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class __FlyingTextEffect__Pool;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
class IFlyingObjectEffectDidFinishEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class FlyingTextSpawner;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FlyingTextSpawner);
// Type: ::FlyingTextSpawner
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4891))
// CS Name: ::FlyingTextSpawner*
class CORDL_TYPE FlyingTextSpawner : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _duration, offset 0x18, size 0x4
  __declspec(property(get = __get__duration, put = __set__duration)) float_t _duration;

  /// @brief Field _xSpread, offset 0x1c, size 0x4
  __declspec(property(get = __get__xSpread, put = __set__xSpread)) float_t _xSpread;

  /// @brief Field _targetYPos, offset 0x20, size 0x4
  __declspec(property(get = __get__targetYPos, put = __set__targetYPos)) float_t _targetYPos;

  /// @brief Field _targetZPos, offset 0x24, size 0x4
  __declspec(property(get = __get__targetZPos, put = __set__targetZPos)) float_t _targetZPos;

  /// @brief Field _color, offset 0x28, size 0x10
  __declspec(property(get = __get__color, put = __set__color))::UnityEngine::Color _color;

  /// @brief Field _fontSize, offset 0x38, size 0x4
  __declspec(property(get = __get__fontSize, put = __set__fontSize)) float_t _fontSize;

  /// @brief Field _shake, offset 0x3c, size 0x1
  __declspec(property(get = __get__shake, put = __set__shake)) bool _shake;

  /// @brief Field _flyingTextEffectPool, offset 0x40, size 0x8
  __declspec(property(get = __get__flyingTextEffectPool, put = __set__flyingTextEffectPool))::GlobalNamespace::__FlyingTextEffect__Pool* _flyingTextEffectPool;

  /// @brief Convert operator to "::GlobalNamespace::IFlyingObjectEffectDidFinishEvent"
  constexpr operator ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*() noexcept;

  constexpr float_t& __get__duration();

  constexpr float_t const& __get__duration() const;

  constexpr void __set__duration(float_t value);

  constexpr float_t& __get__xSpread();

  constexpr float_t const& __get__xSpread() const;

  constexpr void __set__xSpread(float_t value);

  constexpr float_t& __get__targetYPos();

  constexpr float_t const& __get__targetYPos() const;

  constexpr void __set__targetYPos(float_t value);

  constexpr float_t& __get__targetZPos();

  constexpr float_t const& __get__targetZPos() const;

  constexpr void __set__targetZPos(float_t value);

  constexpr ::UnityEngine::Color& __get__color();

  constexpr ::UnityEngine::Color const& __get__color() const;

  constexpr void __set__color(::UnityEngine::Color value);

  constexpr float_t& __get__fontSize();

  constexpr float_t const& __get__fontSize() const;

  constexpr void __set__fontSize(float_t value);

  constexpr bool& __get__shake();

  constexpr bool const& __get__shake() const;

  constexpr void __set__shake(bool value);

  constexpr ::GlobalNamespace::__FlyingTextEffect__Pool*& __get__flyingTextEffectPool();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__FlyingTextEffect__Pool*> const& __get__flyingTextEffectPool() const;

  constexpr void __set__flyingTextEffectPool(::GlobalNamespace::__FlyingTextEffect__Pool* value);

  /// @brief Method SpawnText addr 0x23a1f2c size 0x1e4 virtual false final false
  inline void SpawnText(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rotation, ::UnityEngine::Quaternion inverseRotation, ::StringW text);

  /// @brief Method HandleFlyingObjectEffectDidFinish addr 0x23a2110 size 0x11c virtual true final true
  inline void HandleFlyingObjectEffectDidFinish(::GlobalNamespace::FlyingObjectEffect* flyingObjectEffect);

  static inline ::GlobalNamespace::FlyingTextSpawner* New_ctor();

  /// @brief Method .ctor addr 0x23a222c size 0x28 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FlyingTextSpawner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlyingTextSpawner(FlyingTextSpawner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlyingTextSpawner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlyingTextSpawner(FlyingTextSpawner const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlyingTextSpawner();

public:
  /// @brief Field _duration, offset: 0x18, size: 0x4, def value: None
  float_t ____duration;

  /// @brief Field _xSpread, offset: 0x1c, size: 0x4, def value: None
  float_t ____xSpread;

  /// @brief Field _targetYPos, offset: 0x20, size: 0x4, def value: None
  float_t ____targetYPos;

  /// @brief Field _targetZPos, offset: 0x24, size: 0x4, def value: None
  float_t ____targetZPos;

  /// @brief Field _color, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  /// @brief Field _fontSize, offset: 0x38, size: 0x4, def value: None
  float_t ____fontSize;

  /// @brief Field _shake, offset: 0x3c, size: 0x1, def value: None
  bool ____shake;

  /// @brief Field _flyingTextEffectPool, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__FlyingTextEffect__Pool* ____flyingTextEffectPool;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlyingTextSpawner, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FlyingTextSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlyingTextSpawner*, "", "FlyingTextSpawner");
