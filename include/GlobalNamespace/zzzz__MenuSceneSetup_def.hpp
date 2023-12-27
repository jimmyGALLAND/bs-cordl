#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MenuSceneSetup)
namespace GlobalNamespace {
class GameScenesManager;
}
namespace HMUI {
class HierarchyManager;
}
namespace GlobalNamespace {
class __MenuSceneSetup___Start_d__3;
}
namespace HMUI {
class FlowCoordinator;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class MenuSceneSetup;
}
namespace GlobalNamespace {
class __MenuSceneSetup___Start_d__3;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MenuSceneSetup);
MARK_REF_PTR_T(::GlobalNamespace::__MenuSceneSetup___Start_d__3);
// Type: ::<Start>d__3
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6036))
// CS Name: ::MenuSceneSetup::<Start>d__3*
class CORDL_TYPE __MenuSceneSetup___Start_d__3 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::MenuSceneSetup* __4__this;

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

  constexpr ::GlobalNamespace::MenuSceneSetup*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuSceneSetup*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::MenuSceneSetup* value);

  static inline ::GlobalNamespace::__MenuSceneSetup___Start_d__3* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x231af84 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x231afb4 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x231afb8 size 0x94 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x231b04c size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x231b054 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x231b094 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuSceneSetup___Start_d__3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuSceneSetup___Start_d__3(__MenuSceneSetup___Start_d__3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuSceneSetup___Start_d__3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuSceneSetup___Start_d__3(__MenuSceneSetup___Start_d__3 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuSceneSetup___Start_d__3();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MenuSceneSetup* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuSceneSetup___Start_d__3, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MenuSceneSetup
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6037))
// CS Name: ::MenuSceneSetup*
class CORDL_TYPE MenuSceneSetup : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _Start_d__3 = ::GlobalNamespace::__MenuSceneSetup___Start_d__3;

  /// @brief Field _rootFlowCoordinator, offset 0x18, size 0x8
  __declspec(property(get = __get__rootFlowCoordinator, put = __set__rootFlowCoordinator))::HMUI::FlowCoordinator* _rootFlowCoordinator;

  /// @brief Field _gameScenesManager, offset 0x20, size 0x8
  __declspec(property(get = __get__gameScenesManager, put = __set__gameScenesManager))::GlobalNamespace::GameScenesManager* _gameScenesManager;

  /// @brief Field _hierarchyManager, offset 0x28, size 0x8
  __declspec(property(get = __get__hierarchyManager, put = __set__hierarchyManager))::HMUI::HierarchyManager* _hierarchyManager;

  constexpr ::HMUI::FlowCoordinator*& __get__rootFlowCoordinator();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> const& __get__rootFlowCoordinator() const;

  constexpr void __set__rootFlowCoordinator(::HMUI::FlowCoordinator* value);

  constexpr ::GlobalNamespace::GameScenesManager*& __get__gameScenesManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> const& __get__gameScenesManager() const;

  constexpr void __set__gameScenesManager(::GlobalNamespace::GameScenesManager* value);

  constexpr ::HMUI::HierarchyManager*& __get__hierarchyManager();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::HierarchyManager*> const& __get__hierarchyManager() const;

  constexpr void __set__hierarchyManager(::HMUI::HierarchyManager* value);

  /// @brief Method Start addr 0x231af1c size 0x68 virtual false final false
  inline ::System::Collections::IEnumerator* Start();

  static inline ::GlobalNamespace::MenuSceneSetup* New_ctor();

  /// @brief Method .ctor addr 0x231afac size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MenuSceneSetup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuSceneSetup(MenuSceneSetup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuSceneSetup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuSceneSetup(MenuSceneSetup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuSceneSetup();

public:
  /// @brief Field _rootFlowCoordinator, offset: 0x18, size: 0x8, def value: None
  ::HMUI::FlowCoordinator* ____rootFlowCoordinator;

  /// @brief Field _gameScenesManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::GameScenesManager* ____gameScenesManager;

  /// @brief Field _hierarchyManager, offset: 0x28, size: 0x8, def value: None
  ::HMUI::HierarchyManager* ____hierarchyManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuSceneSetup, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MenuSceneSetup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuSceneSetup*, "", "MenuSceneSetup");
NEED_NO_BOX(::GlobalNamespace::__MenuSceneSetup___Start_d__3);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuSceneSetup___Start_d__3*, "", "MenuSceneSetup/<Start>d__3");
