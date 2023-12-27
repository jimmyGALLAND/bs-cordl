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
class __FireworkItemController__Pool;
}
namespace GlobalNamespace {
class __FireworksController___SpawningCoroutine_d__8;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class FireworkItemController;
}
namespace GlobalNamespace {
class DirectionalLight;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4847))
// CS Name: ::FireworksController::<SpawningCoroutine>d__8*
class CORDL_TYPE __FireworksController___SpawningCoroutine_d__8 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::FireworksController* __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::GlobalNamespace::FireworksController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FireworksController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::FireworksController* value);

  static inline ::GlobalNamespace::__FireworksController___SpawningCoroutine_d__8* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x239794c size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x2397a9c size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x2397aa0 size 0x2fc virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2397d9c size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x2397da4 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2397de4 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__FireworksController___SpawningCoroutine_d__8", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FireworksController___SpawningCoroutine_d__8(__FireworksController___SpawningCoroutine_d__8&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FireworksController___SpawningCoroutine_d__8", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FireworksController___SpawningCoroutine_d__8(__FireworksController___SpawningCoroutine_d__8 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FireworksController___SpawningCoroutine_d__8();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::FireworksController* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FireworksController___SpawningCoroutine_d__8, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::FireworksController
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4848))
// CS Name: ::FireworksController*
class CORDL_TYPE FireworksController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _SpawningCoroutine_d__8 = ::GlobalNamespace::__FireworksController___SpawningCoroutine_d__8;

  /// @brief Field _spawnSize, offset 0x18, size 0xc
  __declspec(property(get = __get__spawnSize, put = __set__spawnSize))::UnityEngine::Vector3 _spawnSize;

  /// @brief Field _minSpawnInterval, offset 0x24, size 0x4
  __declspec(property(get = __get__minSpawnInterval, put = __set__minSpawnInterval)) float_t _minSpawnInterval;

  /// @brief Field _maxSpawnInterval, offset 0x28, size 0x4
  __declspec(property(get = __get__maxSpawnInterval, put = __set__maxSpawnInterval)) float_t _maxSpawnInterval;

  /// @brief Field _directionalLights, offset 0x30, size 0x8
  __declspec(property(get = __get__directionalLights, put = __set__directionalLights))::ArrayW<::GlobalNamespace::DirectionalLight*, ::Array<::GlobalNamespace::DirectionalLight*>*> _directionalLights;

  /// @brief Field _lightsIntensity, offset 0x38, size 0x4
  __declspec(property(get = __get__lightsIntensity, put = __set__lightsIntensity)) float_t _lightsIntensity;

  /// @brief Field _currentLightId, offset 0x3c, size 0x4
  __declspec(property(get = __get__currentLightId, put = __set__currentLightId)) int32_t _currentLightId;

  /// @brief Field _fireworkItemPool, offset 0x40, size 0x8
  __declspec(property(get = __get__fireworkItemPool, put = __set__fireworkItemPool))::GlobalNamespace::__FireworkItemController__Pool* _fireworkItemPool;

  constexpr ::UnityEngine::Vector3& __get__spawnSize();

  constexpr ::UnityEngine::Vector3 const& __get__spawnSize() const;

  constexpr void __set__spawnSize(::UnityEngine::Vector3 value);

  constexpr float_t& __get__minSpawnInterval();

  constexpr float_t const& __get__minSpawnInterval() const;

  constexpr void __set__minSpawnInterval(float_t value);

  constexpr float_t& __get__maxSpawnInterval();

  constexpr float_t const& __get__maxSpawnInterval() const;

  constexpr void __set__maxSpawnInterval(float_t value);

  constexpr ::ArrayW<::GlobalNamespace::DirectionalLight*, ::Array<::GlobalNamespace::DirectionalLight*>*>& __get__directionalLights();

  constexpr ::ArrayW<::GlobalNamespace::DirectionalLight*, ::Array<::GlobalNamespace::DirectionalLight*>*> const& __get__directionalLights() const;

  constexpr void __set__directionalLights(::ArrayW<::GlobalNamespace::DirectionalLight*, ::Array<::GlobalNamespace::DirectionalLight*>*> value);

  constexpr float_t& __get__lightsIntensity();

  constexpr float_t const& __get__lightsIntensity() const;

  constexpr void __set__lightsIntensity(float_t value);

  constexpr int32_t& __get__currentLightId();

  constexpr int32_t const& __get__currentLightId() const;

  constexpr void __set__currentLightId(int32_t value);

  constexpr ::GlobalNamespace::__FireworkItemController__Pool*& __get__fireworkItemPool();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__FireworkItemController__Pool*> const& __get__fireworkItemPool() const;

  constexpr void __set__fireworkItemPool(::GlobalNamespace::__FireworkItemController__Pool* value);

  /// @brief Method OnEnable addr 0x23978c4 size 0x20 virtual false final false
  inline void OnEnable();

  /// @brief Method SpawningCoroutine addr 0x23978e4 size 0x68 virtual false final false
  inline ::System::Collections::IEnumerator* SpawningCoroutine();

  /// @brief Method HandleFireworkItemControllerDidFinish addr 0x2397974 size 0xb8 virtual false final false
  inline void HandleFireworkItemControllerDidFinish(::GlobalNamespace::FireworkItemController* fireworkItemController);

  /// @brief Method OnDrawGizmosSelected addr 0x2397a2c size 0x54 virtual false final false
  inline void OnDrawGizmosSelected();

  static inline ::GlobalNamespace::FireworksController* New_ctor();

  /// @brief Method .ctor addr 0x2397a80 size 0x1c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FireworksController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FireworksController(FireworksController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FireworksController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FireworksController(FireworksController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FireworksController();

public:
  /// @brief Field _spawnSize, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____spawnSize;

  /// @brief Field _minSpawnInterval, offset: 0x24, size: 0x4, def value: None
  float_t ____minSpawnInterval;

  /// @brief Field _maxSpawnInterval, offset: 0x28, size: 0x4, def value: None
  float_t ____maxSpawnInterval;

  /// @brief Field _directionalLights, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::DirectionalLight*, ::Array<::GlobalNamespace::DirectionalLight*>*> ____directionalLights;

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

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FireworksController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FireworksController*, "", "FireworksController");
NEED_NO_BOX(::GlobalNamespace::__FireworksController___SpawningCoroutine_d__8);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FireworksController___SpawningCoroutine_d__8*, "", "FireworksController/<SpawningCoroutine>d__8");
