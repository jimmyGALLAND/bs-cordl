#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleTextureLoader)
namespace GlobalNamespace {
class ICoroutineStarter;
}
namespace GlobalNamespace {
template <typename K, typename V> class HMCache_2;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class Texture2D;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class __SimpleTextureLoader___LoadTextureCoroutine_d__3;
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
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace GlobalNamespace {
class SimpleTextureLoader;
}
namespace GlobalNamespace {
class __SimpleTextureLoader___LoadTextureCoroutine_d__3;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SimpleTextureLoader);
MARK_REF_PTR_T(::GlobalNamespace::__SimpleTextureLoader___LoadTextureCoroutine_d__3);
// Type: ::<LoadTextureCoroutine>d__3
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5376))
// CS Name: ::SimpleTextureLoader::<LoadTextureCoroutine>d__3*
class CORDL_TYPE __SimpleTextureLoader___LoadTextureCoroutine_d__3 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field useCache, offset 0x20, size 0x1
  __declspec(property(get = __get_useCache, put = __set_useCache)) bool useCache;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::SimpleTextureLoader* __4__this;

  /// @brief Field filePath, offset 0x30, size 0x8
  __declspec(property(get = __get_filePath, put = __set_filePath))::StringW filePath;

  /// @brief Field finishedCallback, offset 0x38, size 0x8
  __declspec(property(get = __get_finishedCallback, put = __set_finishedCallback))::System::Action_1<::UnityEngine::Texture2D*>* finishedCallback;

  /// @brief Field <uwr>5__2, offset 0x40, size 0x8
  __declspec(property(get = __get__uwr_5__2, put = __set__uwr_5__2))::UnityEngine::Networking::UnityWebRequest* _uwr_5__2;

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

  constexpr bool& __get_useCache();

  constexpr bool const& __get_useCache() const;

  constexpr void __set_useCache(bool value);

  constexpr ::GlobalNamespace::SimpleTextureLoader*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SimpleTextureLoader*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::SimpleTextureLoader* value);

  constexpr ::StringW& __get_filePath();

  constexpr ::StringW const& __get_filePath() const;

  constexpr void __set_filePath(::StringW value);

  constexpr ::System::Action_1<::UnityEngine::Texture2D*>*& __get_finishedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Texture2D*>*> const& __get_finishedCallback() const;

  constexpr void __set_finishedCallback(::System::Action_1<::UnityEngine::Texture2D*>* value);

  constexpr ::UnityEngine::Networking::UnityWebRequest*& __get__uwr_5__2();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::UnityWebRequest*> const& __get__uwr_5__2() const;

  constexpr void __set__uwr_5__2(::UnityEngine::Networking::UnityWebRequest* value);

  static inline ::GlobalNamespace::__SimpleTextureLoader___LoadTextureCoroutine_d__3* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x226d6f0 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x226d798 size 0x1c virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x226d7b4 size 0x29c virtual true final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1 addr 0x226da50 size 0xb0 virtual false final false
  inline void __m__Finally1();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x226db00 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x226db08 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x226db48 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__SimpleTextureLoader___LoadTextureCoroutine_d__3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SimpleTextureLoader___LoadTextureCoroutine_d__3(__SimpleTextureLoader___LoadTextureCoroutine_d__3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SimpleTextureLoader___LoadTextureCoroutine_d__3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SimpleTextureLoader___LoadTextureCoroutine_d__3(__SimpleTextureLoader___LoadTextureCoroutine_d__3 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SimpleTextureLoader___LoadTextureCoroutine_d__3();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field useCache, offset: 0x20, size: 0x1, def value: None
  bool ___useCache;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::SimpleTextureLoader* _____4__this;

  /// @brief Field filePath, offset: 0x30, size: 0x8, def value: None
  ::StringW ___filePath;

  /// @brief Field finishedCallback, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::Texture2D*>* ___finishedCallback;

  /// @brief Field <uwr>5__2, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Networking::UnityWebRequest* ____uwr_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SimpleTextureLoader___LoadTextureCoroutine_d__3, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SimpleTextureLoader
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5377))
// CS Name: ::SimpleTextureLoader*
class CORDL_TYPE SimpleTextureLoader : public ::System::Object {
public:
  // Declarations
  using _LoadTextureCoroutine_d__3 = ::GlobalNamespace::__SimpleTextureLoader___LoadTextureCoroutine_d__3;

  /// @brief Field _cache, offset 0x10, size 0x8
  __declspec(property(get = __get__cache, put = __set__cache))::GlobalNamespace::HMCache_2<::StringW, ::UnityEngine::Texture2D*>* _cache;

  /// @brief Field _coroutineStarter, offset 0x18, size 0x8
  __declspec(property(get = __get__coroutineStarter, put = __set__coroutineStarter))::GlobalNamespace::ICoroutineStarter* _coroutineStarter;

  constexpr ::GlobalNamespace::HMCache_2<::StringW, ::UnityEngine::Texture2D*>*& __get__cache();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HMCache_2<::StringW, ::UnityEngine::Texture2D*>*> const& __get__cache() const;

  constexpr void __set__cache(::GlobalNamespace::HMCache_2<::StringW, ::UnityEngine::Texture2D*>* value);

  constexpr ::GlobalNamespace::ICoroutineStarter*& __get__coroutineStarter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ICoroutineStarter*> const& __get__coroutineStarter() const;

  constexpr void __set__coroutineStarter(::GlobalNamespace::ICoroutineStarter* value);

  /// @brief Method LoadTexture addr 0x226d590 size 0xd0 virtual false final false
  inline void LoadTexture(::StringW filePath, bool useCache, ::System::Action_1<::UnityEngine::Texture2D*>* finishedCallback);

  /// @brief Method LoadTextureCoroutine addr 0x226d660 size 0x90 virtual false final false
  inline ::System::Collections::IEnumerator* LoadTextureCoroutine(::StringW filePath, bool useCache, ::System::Action_1<::UnityEngine::Texture2D*>* finishedCallback);

  static inline ::GlobalNamespace::SimpleTextureLoader* New_ctor();

  /// @brief Method .ctor addr 0x226d718 size 0x80 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SimpleTextureLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleTextureLoader(SimpleTextureLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleTextureLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleTextureLoader(SimpleTextureLoader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleTextureLoader();

public:
  /// @brief Field _cache, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::HMCache_2<::StringW, ::UnityEngine::Texture2D*>* ____cache;

  /// @brief Field _coroutineStarter, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ICoroutineStarter* ____coroutineStarter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SimpleTextureLoader, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SimpleTextureLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleTextureLoader*, "", "SimpleTextureLoader");
NEED_NO_BOX(::GlobalNamespace::__SimpleTextureLoader___LoadTextureCoroutine_d__3);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SimpleTextureLoader___LoadTextureCoroutine_d__3*, "", "SimpleTextureLoader/<LoadTextureCoroutine>d__3");
