#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__PlaceholderFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerLobbyAvatarController)
namespace GlobalNamespace {
class __MultiplayerLobbyAvatarController___SpawnAnimationCoroutine_d__8;
}
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class __MultiplayerLobbyAvatarController___ShowDespawnAnimationAndDestroy_d__10;
}
namespace GlobalNamespace {
class __MultiplayerLobbyAvatarController___DespawnAnimationCoroutine_d__12;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace GlobalNamespace {
class VFXController;
}
namespace GlobalNamespace {
class __MultiplayerLobbyAvatarController__Factory;
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
class MultiplayerLobbyAvatarController;
}
namespace GlobalNamespace {
class __MultiplayerLobbyAvatarController__Factory;
}
namespace GlobalNamespace {
class __MultiplayerLobbyAvatarController___DespawnAnimationCoroutine_d__12;
}
namespace GlobalNamespace {
class __MultiplayerLobbyAvatarController___ShowDespawnAnimationAndDestroy_d__10;
}
namespace GlobalNamespace {
class __MultiplayerLobbyAvatarController___SpawnAnimationCoroutine_d__8;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLobbyAvatarController);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerLobbyAvatarController__Factory);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerLobbyAvatarController___DespawnAnimationCoroutine_d__12);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerLobbyAvatarController___ShowDespawnAnimationAndDestroy_d__10);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerLobbyAvatarController___SpawnAnimationCoroutine_d__8);
// Type: ::MultiplayerLobbyAvatarController
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5221))
// CS Name: ::MultiplayerLobbyAvatarController*
class CORDL_TYPE MultiplayerLobbyAvatarController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _DespawnAnimationCoroutine_d__12 = ::GlobalNamespace::__MultiplayerLobbyAvatarController___DespawnAnimationCoroutine_d__12;

  using _ShowDespawnAnimationAndDestroy_d__10 = ::GlobalNamespace::__MultiplayerLobbyAvatarController___ShowDespawnAnimationAndDestroy_d__10;

  using _SpawnAnimationCoroutine_d__8 = ::GlobalNamespace::__MultiplayerLobbyAvatarController___SpawnAnimationCoroutine_d__8;

  using Factory = ::GlobalNamespace::__MultiplayerLobbyAvatarController__Factory;

  /// @brief Field _spawnEffect, offset 0x18, size 0x8
  __declspec(property(get = __get__spawnEffect, put = __set__spawnEffect))::UnityEngine::Playables::PlayableDirector* _spawnEffect;

  /// @brief Field _despawnVFXController, offset 0x20, size 0x8
  __declspec(property(get = __get__despawnVFXController, put = __set__despawnVFXController))::GlobalNamespace::VFXController* _despawnVFXController;

  /// @brief Field _spawnAvatarDelay, offset 0x28, size 0x4
  __declspec(property(get = __get__spawnAvatarDelay, put = __set__spawnAvatarDelay)) float_t _spawnAvatarDelay;

  /// @brief Field _despawnAvatarDelay, offset 0x2c, size 0x4
  __declspec(property(get = __get__despawnAvatarDelay, put = __set__despawnAvatarDelay)) float_t _despawnAvatarDelay;

  /// @brief Field _destroyAvatarDelay, offset 0x30, size 0x4
  __declspec(property(get = __get__destroyAvatarDelay, put = __set__destroyAvatarDelay)) float_t _destroyAvatarDelay;

  /// @brief Field _visualObjects, offset 0x38, size 0x8
  __declspec(property(get = __get__visualObjects, put = __set__visualObjects))::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> _visualObjects;

  constexpr ::UnityEngine::Playables::PlayableDirector*& __get__spawnEffect();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Playables::PlayableDirector*> const& __get__spawnEffect() const;

  constexpr void __set__spawnEffect(::UnityEngine::Playables::PlayableDirector* value);

  constexpr ::GlobalNamespace::VFXController*& __get__despawnVFXController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VFXController*> const& __get__despawnVFXController() const;

  constexpr void __set__despawnVFXController(::GlobalNamespace::VFXController* value);

  constexpr float_t& __get__spawnAvatarDelay();

  constexpr float_t const& __get__spawnAvatarDelay() const;

  constexpr void __set__spawnAvatarDelay(float_t value);

  constexpr float_t& __get__despawnAvatarDelay();

  constexpr float_t const& __get__despawnAvatarDelay() const;

  constexpr void __set__despawnAvatarDelay(float_t value);

  constexpr float_t& __get__destroyAvatarDelay();

  constexpr float_t const& __get__destroyAvatarDelay() const;

  constexpr void __set__destroyAvatarDelay(float_t value);

  constexpr ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>& __get__visualObjects();

  constexpr ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> const& __get__visualObjects() const;

  constexpr void __set__visualObjects(::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> value);

  /// @brief Method ShowSpawnAnimation addr 0x22504ac size 0xb0 virtual false final false
  inline void ShowSpawnAnimation(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method SpawnAnimationCoroutine addr 0x22505c4 size 0x68 virtual false final false
  inline ::System::Collections::IEnumerator* SpawnAnimationCoroutine();

  /// @brief Method ActivateVisualObjects addr 0x225055c size 0x68 virtual false final false
  inline void ActivateVisualObjects(bool on);

  /// @brief Method ShowDespawnAnimationAndDestroy addr 0x2250654 size 0x68 virtual false final false
  inline ::System::Collections::IEnumerator* ShowDespawnAnimationAndDestroy();

  /// @brief Method DestroySelf addr 0x22506e4 size 0x6c virtual false final false
  inline void DestroySelf();

  /// @brief Method DespawnAnimationCoroutine addr 0x2250750 size 0x68 virtual false final false
  inline ::System::Collections::IEnumerator* DespawnAnimationCoroutine();

  static inline ::GlobalNamespace::MultiplayerLobbyAvatarController* New_ctor();

  /// @brief Method .ctor addr 0x22507e0 size 0x20 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLobbyAvatarController(MultiplayerLobbyAvatarController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLobbyAvatarController(MultiplayerLobbyAvatarController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLobbyAvatarController();

public:
  /// @brief Field _spawnEffect, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Playables::PlayableDirector* ____spawnEffect;

  /// @brief Field _despawnVFXController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::VFXController* ____despawnVFXController;

  /// @brief Field _spawnAvatarDelay, offset: 0x28, size: 0x4, def value: None
  float_t ____spawnAvatarDelay;

  /// @brief Field _despawnAvatarDelay, offset: 0x2c, size: 0x4, def value: None
  float_t ____despawnAvatarDelay;

  /// @brief Field _destroyAvatarDelay, offset: 0x30, size: 0x4, def value: None
  float_t ____destroyAvatarDelay;

  /// @brief Field _visualObjects, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> ____visualObjects;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLobbyAvatarController, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Factory
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11005)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11005), inst: 3488 }),
// TypeDefinitionIndex(TypeDefinitionIndex(12778)), TypeDefinitionIndex(TypeDefinitionIndex(5221))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5217)) CS Name:
// ::MultiplayerLobbyAvatarController::Factory*
class CORDL_TYPE __MultiplayerLobbyAvatarController__Factory : public ::Zenject::PlaceholderFactory_2<::GlobalNamespace::IConnectedPlayer*, ::GlobalNamespace::MultiplayerLobbyAvatarController*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MultiplayerLobbyAvatarController__Factory* New_ctor();

  /// @brief Method .ctor addr 0x2250800 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLobbyAvatarController__Factory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerLobbyAvatarController__Factory(__MultiplayerLobbyAvatarController__Factory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLobbyAvatarController__Factory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerLobbyAvatarController__Factory(__MultiplayerLobbyAvatarController__Factory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerLobbyAvatarController__Factory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerLobbyAvatarController__Factory, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<SpawnAnimationCoroutine>d__8
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5218))
// CS Name: ::MultiplayerLobbyAvatarController::<SpawnAnimationCoroutine>d__8*
class CORDL_TYPE __MultiplayerLobbyAvatarController___SpawnAnimationCoroutine_d__8 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::MultiplayerLobbyAvatarController* __4__this;

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

  constexpr ::GlobalNamespace::MultiplayerLobbyAvatarController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLobbyAvatarController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::MultiplayerLobbyAvatarController* value);

  static inline ::GlobalNamespace::__MultiplayerLobbyAvatarController___SpawnAnimationCoroutine_d__8* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x225062c size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x2250848 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x225084c size 0xb4 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2250900 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x2250908 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2250948 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLobbyAvatarController___SpawnAnimationCoroutine_d__8", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerLobbyAvatarController___SpawnAnimationCoroutine_d__8(__MultiplayerLobbyAvatarController___SpawnAnimationCoroutine_d__8&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLobbyAvatarController___SpawnAnimationCoroutine_d__8", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerLobbyAvatarController___SpawnAnimationCoroutine_d__8(__MultiplayerLobbyAvatarController___SpawnAnimationCoroutine_d__8 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerLobbyAvatarController___SpawnAnimationCoroutine_d__8();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLobbyAvatarController* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerLobbyAvatarController___SpawnAnimationCoroutine_d__8, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<ShowDespawnAnimationAndDestroy>d__10
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5219))
// CS Name: ::MultiplayerLobbyAvatarController::<ShowDespawnAnimationAndDestroy>d__10*
class CORDL_TYPE __MultiplayerLobbyAvatarController___ShowDespawnAnimationAndDestroy_d__10 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::MultiplayerLobbyAvatarController* __4__this;

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

  constexpr ::GlobalNamespace::MultiplayerLobbyAvatarController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLobbyAvatarController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::MultiplayerLobbyAvatarController* value);

  static inline ::GlobalNamespace::__MultiplayerLobbyAvatarController___ShowDespawnAnimationAndDestroy_d__10* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x22506bc size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x2250950 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x2250954 size 0x70 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x22509c4 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x22509cc size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2250a0c size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLobbyAvatarController___ShowDespawnAnimationAndDestroy_d__10", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerLobbyAvatarController___ShowDespawnAnimationAndDestroy_d__10(__MultiplayerLobbyAvatarController___ShowDespawnAnimationAndDestroy_d__10&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLobbyAvatarController___ShowDespawnAnimationAndDestroy_d__10", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerLobbyAvatarController___ShowDespawnAnimationAndDestroy_d__10(__MultiplayerLobbyAvatarController___ShowDespawnAnimationAndDestroy_d__10 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerLobbyAvatarController___ShowDespawnAnimationAndDestroy_d__10();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLobbyAvatarController* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerLobbyAvatarController___ShowDespawnAnimationAndDestroy_d__10, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<DespawnAnimationCoroutine>d__12
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5220))
// CS Name: ::MultiplayerLobbyAvatarController::<DespawnAnimationCoroutine>d__12*
class CORDL_TYPE __MultiplayerLobbyAvatarController___DespawnAnimationCoroutine_d__12 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::MultiplayerLobbyAvatarController* __4__this;

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

  constexpr ::GlobalNamespace::MultiplayerLobbyAvatarController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLobbyAvatarController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::MultiplayerLobbyAvatarController* value);

  static inline ::GlobalNamespace::__MultiplayerLobbyAvatarController___DespawnAnimationCoroutine_d__12* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x22507b8 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x2250a14 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x2250a18 size 0x108 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2250b20 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x2250b28 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2250b68 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLobbyAvatarController___DespawnAnimationCoroutine_d__12", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerLobbyAvatarController___DespawnAnimationCoroutine_d__12(__MultiplayerLobbyAvatarController___DespawnAnimationCoroutine_d__12&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLobbyAvatarController___DespawnAnimationCoroutine_d__12", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerLobbyAvatarController___DespawnAnimationCoroutine_d__12(__MultiplayerLobbyAvatarController___DespawnAnimationCoroutine_d__12 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerLobbyAvatarController___DespawnAnimationCoroutine_d__12();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLobbyAvatarController* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerLobbyAvatarController___DespawnAnimationCoroutine_d__12, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyAvatarController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyAvatarController*, "", "MultiplayerLobbyAvatarController");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerLobbyAvatarController__Factory);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerLobbyAvatarController__Factory*, "", "MultiplayerLobbyAvatarController/Factory");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerLobbyAvatarController___DespawnAnimationCoroutine_d__12);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerLobbyAvatarController___DespawnAnimationCoroutine_d__12*, "", "MultiplayerLobbyAvatarController/<DespawnAnimationCoroutine>d__12");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerLobbyAvatarController___ShowDespawnAnimationAndDestroy_d__10);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerLobbyAvatarController___ShowDespawnAnimationAndDestroy_d__10*, "", "MultiplayerLobbyAvatarController/<ShowDespawnAnimationAndDestroy>d__10");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerLobbyAvatarController___SpawnAnimationCoroutine_d__8);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerLobbyAvatarController___SpawnAnimationCoroutine_d__8*, "", "MultiplayerLobbyAvatarController/<SpawnAnimationCoroutine>d__8");
