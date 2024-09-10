#pragma once
// IWYU pragma private; include "GlobalNamespace/CoroutineStarter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CoroutineStarter_def.hpp"
#include "GlobalNamespace/zzzz__ICoroutineStarter_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CoroutineStarter.ICoroutineStarter_StartCoroutine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Coroutine* (::GlobalNamespace::CoroutineStarter::*)(::System::Collections::IEnumerator*)>(&::GlobalNamespace::CoroutineStarter::ICoroutineStarter_StartCoroutine)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2267ef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoroutineStarter*>::get(),
                        "ICoroutineStarter.StartCoroutine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerator*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoroutineStarter.ICoroutineStarter_StopCoroutine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CoroutineStarter::*)(::UnityEngine::Coroutine*)>(&::GlobalNamespace::CoroutineStarter::ICoroutineStarter_StopCoroutine)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2267fc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoroutineStarter*>::get(),
                        "ICoroutineStarter.StopCoroutine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Coroutine*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoroutineStarter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CoroutineStarter::*)()>(&::GlobalNamespace::CoroutineStarter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2268090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoroutineStarter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::ICoroutineStarter"
constexpr  GlobalNamespace::CoroutineStarter::operator ::GlobalNamespace::ICoroutineStarter*() noexcept {
return static_cast<::GlobalNamespace::ICoroutineStarter*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ICoroutineStarter"
constexpr ::GlobalNamespace::ICoroutineStarter* GlobalNamespace::CoroutineStarter::i___GlobalNamespace__ICoroutineStarter() noexcept {
return static_cast<::GlobalNamespace::ICoroutineStarter*>(static_cast<void*>(this));
}
inline ::UnityEngine::Coroutine* GlobalNamespace::CoroutineStarter::ICoroutineStarter_StartCoroutine(::System::Collections::IEnumerator*  routine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoroutineStarter*>::get(),
                        "ICoroutineStarter.StartCoroutine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerator*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Coroutine*, false>(this, ___internal_method, routine);
}
inline void GlobalNamespace::CoroutineStarter::ICoroutineStarter_StopCoroutine(::UnityEngine::Coroutine*  routine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoroutineStarter*>::get(),
                        "ICoroutineStarter.StopCoroutine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Coroutine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, routine);
}
inline ::GlobalNamespace::CoroutineStarter* GlobalNamespace::CoroutineStarter::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CoroutineStarter*>());
}
inline void GlobalNamespace::CoroutineStarter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoroutineStarter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CoroutineStarter::CoroutineStarter()   {
}
