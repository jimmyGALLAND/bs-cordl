#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(FloatFxGroupEffectManager)
namespace GlobalNamespace {
class FloatFxGroupEffect;
}
namespace GlobalNamespace {
class FloatFxGroup;
}
namespace GlobalNamespace {
class __FloatFxGroupEffectManager____c;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class FloatFxGroupEffectManager;
}
namespace GlobalNamespace {
class __FloatFxGroupEffectManager____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FloatFxGroupEffectManager);
MARK_REF_PTR_T(::GlobalNamespace::__FloatFxGroupEffectManager____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FloatFxGroupEffectManager::<>c*
class CORDL_TYPE __FloatFxGroupEffectManager____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__FloatFxGroupEffectManager____c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0))::System::Func_2<::UnityW<::GlobalNamespace::FloatFxGroup>, bool>* __9__3_0;

  static inline ::GlobalNamespace::__FloatFxGroupEffectManager____c* New_ctor();

  /// @brief Method <Start>b__3_0, addr 0x25c8128, size 0x20, virtual false, abstract: false, final false
  inline bool _Start_b__3_0(::GlobalNamespace::FloatFxGroup* group);

  /// @brief Method .ctor, addr 0x25c8120, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__FloatFxGroupEffectManager____c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::FloatFxGroup>, bool>* getStaticF___9__3_0();

  static inline void setStaticF___9(::GlobalNamespace::__FloatFxGroupEffectManager____c* value);

  static inline void setStaticF___9__3_0(::System::Func_2<::UnityW<::GlobalNamespace::FloatFxGroup>, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FloatFxGroupEffectManager____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FloatFxGroupEffectManager____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FloatFxGroupEffectManager____c(__FloatFxGroupEffectManager____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FloatFxGroupEffectManager____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FloatFxGroupEffectManager____c(__FloatFxGroupEffectManager____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FloatFxGroupEffectManager____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::FloatFxGroupEffectManager
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FloatFxGroupEffectManager*
class CORDL_TYPE FloatFxGroupEffectManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::GlobalNamespace::__FloatFxGroupEffectManager____c;

  /// @brief Field _container, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container))::Zenject::DiContainer* _container;

  /// @brief Field _floatFxGroupEffects, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__floatFxGroupEffects,
                      put = __cordl_internal_set__floatFxGroupEffects))::System::Collections::Generic::List_1<::GlobalNamespace::FloatFxGroupEffect*>* _floatFxGroupEffects;

  /// @brief Field _floatFxGroups, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__floatFxGroups,
                      put = __cordl_internal_set__floatFxGroups))::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroup>, ::Array<::UnityW<::GlobalNamespace::FloatFxGroup>>*> _floatFxGroups;

  static inline ::GlobalNamespace::FloatFxGroupEffectManager* New_ctor();

  /// @brief Method OnDestroy, addr 0x25c7e5c, size 0x148, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x25c779c, size 0x668, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __cordl_internal_get__container() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FloatFxGroupEffect*>*& __cordl_internal_get__floatFxGroupEffects();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::FloatFxGroupEffect*>*> const& __cordl_internal_get__floatFxGroupEffects() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroup>, ::Array<::UnityW<::GlobalNamespace::FloatFxGroup>>*> const& __cordl_internal_get__floatFxGroups() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroup>, ::Array<::UnityW<::GlobalNamespace::FloatFxGroup>>*>& __cordl_internal_get__floatFxGroups();

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__floatFxGroupEffects(::System::Collections::Generic::List_1<::GlobalNamespace::FloatFxGroupEffect*>* value);

  constexpr void __cordl_internal_set__floatFxGroups(::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroup>, ::Array<::UnityW<::GlobalNamespace::FloatFxGroup>>*> value);

  /// @brief Method .ctor, addr 0x25c8040, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatFxGroupEffectManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatFxGroupEffectManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatFxGroupEffectManager(FloatFxGroupEffectManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatFxGroupEffectManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatFxGroupEffectManager(FloatFxGroupEffectManager const&) = delete;

  /// @brief Field _floatFxGroups, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroup>, ::Array<::UnityW<::GlobalNamespace::FloatFxGroup>>*> ____floatFxGroups;

  /// @brief Field _container, offset: 0x20, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _floatFxGroupEffects, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::FloatFxGroupEffect*>* ____floatFxGroupEffects;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatFxGroupEffectManager, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatFxGroupEffectManager, ____floatFxGroups) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatFxGroupEffectManager, ____container) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatFxGroupEffectManager, ____floatFxGroupEffects) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloatFxGroupEffectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatFxGroupEffectManager*, "", "FloatFxGroupEffectManager");
NEED_NO_BOX(::GlobalNamespace::__FloatFxGroupEffectManager____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FloatFxGroupEffectManager____c*, "", "FloatFxGroupEffectManager/<>c");
