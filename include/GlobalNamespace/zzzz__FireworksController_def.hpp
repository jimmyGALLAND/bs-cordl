#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FireworksController)
namespace GlobalNamespace {
class DirectionalLight;
}
namespace GlobalNamespace {
class FireworkItemController;
}
namespace GlobalNamespace {
class __FireworkItemController__Pool;
}
namespace GlobalNamespace {
class __FireworksController___SpawningCoroutine_d__8;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class FireworksController;
}
namespace GlobalNamespace {
class __FireworksController___SpawningCoroutine_d__8;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FireworksController);
MARK_REF_PTR_T(::GlobalNamespace::__FireworksController___SpawningCoroutine_d__8);
// Type: ::<SpawningCoroutine>d__8
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FireworksController::<SpawningCoroutine>d__8*
class CORDL_TYPE __FireworksController___SpawningCoroutine_d__8 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::FireworksController> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x25b9d94, size 0x2fc, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__FireworksController___SpawningCoroutine_d__8* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x25ba090, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x25ba098, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x25ba0d8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x25b9d90, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::FireworksController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::FireworksController>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::FireworksController> value);

  /// @brief Method .ctor, addr 0x25b9c40, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FireworksController___SpawningCoroutine_d__8();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FireworksController___SpawningCoroutine_d__8", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FireworksController___SpawningCoroutine_d__8(__FireworksController___SpawningCoroutine_d__8&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FireworksController___SpawningCoroutine_d__8", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FireworksController___SpawningCoroutine_d__8(__FireworksController___SpawningCoroutine_d__8 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FireworksController> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FireworksController___SpawningCoroutine_d__8, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__FireworksController___SpawningCoroutine_d__8, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FireworksController___SpawningCoroutine_d__8, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FireworksController___SpawningCoroutine_d__8, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::FireworksController
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FireworksController*
class CORDL_TYPE FireworksController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _SpawningCoroutine_d__8 = ::GlobalNamespace::__FireworksController___SpawningCoroutine_d__8;

  /// @brief Field _currentLightId, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__currentLightId, put = __cordl_internal_set__currentLightId)) int32_t _currentLightId;

  /// @brief Field _directionalLights, offset 0x30, size 0x8
  __declspec(
      property(get = __cordl_internal_get__directionalLights,
               put = __cordl_internal_set__directionalLights))::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*> _directionalLights;

  /// @brief Field _fireworkItemPool, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__fireworkItemPool, put = __cordl_internal_set__fireworkItemPool))::GlobalNamespace::__FireworkItemController__Pool* _fireworkItemPool;

  /// @brief Field _lightsIntensity, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__lightsIntensity, put = __cordl_internal_set__lightsIntensity)) float_t _lightsIntensity;

  /// @brief Field _maxSpawnInterval, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__maxSpawnInterval, put = __cordl_internal_set__maxSpawnInterval)) float_t _maxSpawnInterval;

  /// @brief Field _minSpawnInterval, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__minSpawnInterval, put = __cordl_internal_set__minSpawnInterval)) float_t _minSpawnInterval;

  /// @brief Field _spawnSize, offset 0x18, size 0xc
  __declspec(property(get = __cordl_internal_get__spawnSize, put = __cordl_internal_set__spawnSize))::UnityEngine::Vector3 _spawnSize;

  /// @brief Method HandleFireworkItemControllerDidFinish, addr 0x25b9c68, size 0xb8, virtual false, abstract: false, final false
  inline void HandleFireworkItemControllerDidFinish(::GlobalNamespace::FireworkItemController* fireworkItemController);

  static inline ::GlobalNamespace::FireworksController* New_ctor();

  /// @brief Method OnDrawGizmosSelected, addr 0x25b9d20, size 0x54, virtual false, abstract: false, final false
  inline void OnDrawGizmosSelected();

  /// @brief Method OnEnable, addr 0x25b9bb8, size 0x20, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method SpawningCoroutine, addr 0x25b9bd8, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* SpawningCoroutine();

  constexpr int32_t const& __cordl_internal_get__currentLightId() const;

  constexpr int32_t& __cordl_internal_get__currentLightId();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*> const& __cordl_internal_get__directionalLights() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*>& __cordl_internal_get__directionalLights();

  constexpr ::GlobalNamespace::__FireworkItemController__Pool*& __cordl_internal_get__fireworkItemPool();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__FireworkItemController__Pool*> const& __cordl_internal_get__fireworkItemPool() const;

  constexpr float_t const& __cordl_internal_get__lightsIntensity() const;

  constexpr float_t& __cordl_internal_get__lightsIntensity();

  constexpr float_t const& __cordl_internal_get__maxSpawnInterval() const;

  constexpr float_t& __cordl_internal_get__maxSpawnInterval();

  constexpr float_t const& __cordl_internal_get__minSpawnInterval() const;

  constexpr float_t& __cordl_internal_get__minSpawnInterval();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__spawnSize() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__spawnSize();

  constexpr void __cordl_internal_set__currentLightId(int32_t value);

  constexpr void __cordl_internal_set__directionalLights(::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*> value);

  constexpr void __cordl_internal_set__fireworkItemPool(::GlobalNamespace::__FireworkItemController__Pool* value);

  constexpr void __cordl_internal_set__lightsIntensity(float_t value);

  constexpr void __cordl_internal_set__maxSpawnInterval(float_t value);

  constexpr void __cordl_internal_set__minSpawnInterval(float_t value);

  constexpr void __cordl_internal_set__spawnSize(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x25b9d74, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FireworksController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FireworksController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FireworksController(FireworksController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FireworksController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FireworksController(FireworksController const&) = delete;

  /// @brief Field _spawnSize, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____spawnSize;

  /// @brief Field _minSpawnInterval, offset: 0x24, size: 0x4, def value: None
  float_t ____minSpawnInterval;

  /// @brief Field _maxSpawnInterval, offset: 0x28, size: 0x4, def value: None
  float_t ____maxSpawnInterval;

  /// @brief Field _directionalLights, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*> ____directionalLights;

  /// @brief Field _lightsIntensity, offset: 0x38, size: 0x4, def value: None
  float_t ____lightsIntensity;

  /// @brief Field _currentLightId, offset: 0x3c, size: 0x4, def value: None
  int32_t ____currentLightId;

  /// @brief Field _fireworkItemPool, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__FireworkItemController__Pool* ____fireworkItemPool;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FireworksController, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworksController, ____spawnSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworksController, ____minSpawnInterval) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworksController, ____maxSpawnInterval) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworksController, ____directionalLights) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworksController, ____lightsIntensity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworksController, ____currentLightId) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworksController, ____fireworkItemPool) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FireworksController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FireworksController*, "", "FireworksController");
NEED_NO_BOX(::GlobalNamespace::__FireworksController___SpawningCoroutine_d__8);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FireworksController___SpawningCoroutine_d__8*, "", "FireworksController/<SpawningCoroutine>d__8");
