#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FlyingScoreSpawner_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FlyingScoreSpawner)
namespace GlobalNamespace {
class FlyingObjectEffect;
}
namespace GlobalNamespace {
class IReadonlyCutScoreBuffer;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class __FlyingScoreSpawner__InitData;
}
namespace GlobalNamespace {
struct __FlyingScoreSpawner__SpawnPosition;
}
namespace GlobalNamespace {
class __FlyingScoreEffect__Pool;
}
namespace GlobalNamespace {
class IFlyingObjectEffectDidFinishEvent;
}
// Forward declare root types
namespace GlobalNamespace {
struct __FlyingScoreSpawner__SpawnPosition;
}
namespace GlobalNamespace {
class FlyingScoreSpawner;
}
namespace GlobalNamespace {
class __FlyingScoreSpawner__InitData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition);
MARK_REF_PTR_T(::GlobalNamespace::FlyingScoreSpawner);
MARK_REF_PTR_T(::GlobalNamespace::__FlyingScoreSpawner__InitData);
// Type: ::SpawnPosition
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4887))
// CS Name: ::FlyingScoreSpawner::SpawnPosition
struct CORDL_TYPE __FlyingScoreSpawner__SpawnPosition {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____FlyingScoreSpawner__SpawnPosition_Unwrapped
  enum struct ____FlyingScoreSpawner__SpawnPosition_Unwrapped : int32_t {
    __E_Underground = static_cast<int32_t>(0x0),
    __E_AboveGround = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____FlyingScoreSpawner__SpawnPosition_Unwrapped() const noexcept {
    return static_cast<____FlyingScoreSpawner__SpawnPosition_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __FlyingScoreSpawner__SpawnPosition(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __FlyingScoreSpawner__SpawnPosition();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Underground value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition const Underground;

  /// @brief Field AboveGround value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition const AboveGround;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::InitData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(4887))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4888))
// CS Name: ::FlyingScoreSpawner::InitData*
class CORDL_TYPE __FlyingScoreSpawner__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field spawnPosition, offset 0x10, size 0x4
  __declspec(property(get = __get_spawnPosition, put = __set_spawnPosition))::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition spawnPosition;

  constexpr ::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition& __get_spawnPosition();

  constexpr ::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition const& __get_spawnPosition() const;

  constexpr void __set_spawnPosition(::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition value);

  static inline ::GlobalNamespace::__FlyingScoreSpawner__InitData* New_ctor(::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition spawnPosition);

  /// @brief Method .ctor addr 0x23a1dc8 size 0x28 virtual false final false
  inline void _ctor(::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition spawnPosition);

  // Ctor Parameters [CppParam { name: "", ty: "__FlyingScoreSpawner__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FlyingScoreSpawner__InitData(__FlyingScoreSpawner__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FlyingScoreSpawner__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FlyingScoreSpawner__InitData(__FlyingScoreSpawner__InitData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FlyingScoreSpawner__InitData();

public:
  /// @brief Field spawnPosition, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition ___spawnPosition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FlyingScoreSpawner__InitData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::FlyingScoreSpawner
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4889))
// CS Name: ::FlyingScoreSpawner*
class CORDL_TYPE FlyingScoreSpawner : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__FlyingScoreSpawner__InitData;

  using SpawnPosition = ::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition;

  /// @brief Field _flyingScoreEffectPool, offset 0x18, size 0x8
  __declspec(property(get = __get__flyingScoreEffectPool, put = __set__flyingScoreEffectPool))::GlobalNamespace::__FlyingScoreEffect__Pool* _flyingScoreEffectPool;

  /// @brief Field _initData, offset 0x20, size 0x8
  __declspec(property(get = __get__initData, put = __set__initData))::GlobalNamespace::__FlyingScoreSpawner__InitData* _initData;

  /// @brief Convert operator to "::GlobalNamespace::IFlyingObjectEffectDidFinishEvent"
  constexpr operator ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*() noexcept;

  constexpr ::GlobalNamespace::__FlyingScoreEffect__Pool*& __get__flyingScoreEffectPool();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__FlyingScoreEffect__Pool*> const& __get__flyingScoreEffectPool() const;

  constexpr void __set__flyingScoreEffectPool(::GlobalNamespace::__FlyingScoreEffect__Pool* value);

  constexpr ::GlobalNamespace::__FlyingScoreSpawner__InitData*& __get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__FlyingScoreSpawner__InitData*> const& __get__initData() const;

  constexpr void __set__initData(::GlobalNamespace::__FlyingScoreSpawner__InitData* value);

  /// @brief Method SpawnFlyingScore addr 0x23a1a20 size 0x284 virtual false final false
  inline void SpawnFlyingScore(::GlobalNamespace::IReadonlyCutScoreBuffer* cutScoreBuffer, ::UnityEngine::Color color);

  /// @brief Method HandleFlyingObjectEffectDidFinish addr 0x23a1ca4 size 0x11c virtual true final true
  inline void HandleFlyingObjectEffectDidFinish(::GlobalNamespace::FlyingObjectEffect* flyingObjectEffect);

  static inline ::GlobalNamespace::FlyingScoreSpawner* New_ctor();

  /// @brief Method .ctor addr 0x23a1dc0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FlyingScoreSpawner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlyingScoreSpawner(FlyingScoreSpawner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlyingScoreSpawner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlyingScoreSpawner(FlyingScoreSpawner const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlyingScoreSpawner();

public:
  /// @brief Field _flyingScoreEffectPool, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__FlyingScoreEffect__Pool* ____flyingScoreEffectPool;

  /// @brief Field _initData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__FlyingScoreSpawner__InitData* ____initData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlyingScoreSpawner, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition, "", "FlyingScoreSpawner/SpawnPosition");
NEED_NO_BOX(::GlobalNamespace::FlyingScoreSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlyingScoreSpawner*, "", "FlyingScoreSpawner");
NEED_NO_BOX(::GlobalNamespace::__FlyingScoreSpawner__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FlyingScoreSpawner__InitData*, "", "FlyingScoreSpawner/InitData");
