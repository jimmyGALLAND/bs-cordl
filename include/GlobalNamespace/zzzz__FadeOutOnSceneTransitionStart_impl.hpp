#pragma once
// IWYU pragma private; include "GlobalNamespace/FadeOutOnSceneTransitionStart.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FadeOutOnSceneTransitionStart_def.hpp"
#include "GlobalNamespace/zzzz__FadeInOutController_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FadeOutOnSceneTransitionStart.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FadeOutOnSceneTransitionStart::*)()>(&::GlobalNamespace::FadeOutOnSceneTransitionStart::Start)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3ff00f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FadeOutOnSceneTransitionStart*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FadeOutOnSceneTransitionStart.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FadeOutOnSceneTransitionStart::*)()>(&::GlobalNamespace::FadeOutOnSceneTransitionStart::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3ff0188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FadeOutOnSceneTransitionStart*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FadeOutOnSceneTransitionStart.HandleGameScenesManagerTransitionDidStart
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FadeOutOnSceneTransitionStart::*)(::GlobalNamespace::__GameScenesManager__SceneTransitionType, float_t)>(&::GlobalNamespace::FadeOutOnSceneTransitionStart::HandleGameScenesManagerTransitionDidStart)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3ff0258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FadeOutOnSceneTransitionStart*>::get(),
                        "HandleGameScenesManagerTransitionDidStart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameScenesManager__SceneTransitionType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FadeOutOnSceneTransitionStart._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FadeOutOnSceneTransitionStart::*)()>(&::GlobalNamespace::FadeOutOnSceneTransitionStart::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ff0274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FadeOutOnSceneTransitionStart*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::FadeInOutController>& GlobalNamespace::FadeOutOnSceneTransitionStart::__cordl_internal_get__fadeInOut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeInOut;
}
constexpr ::UnityW<::GlobalNamespace::FadeInOutController> const& GlobalNamespace::FadeOutOnSceneTransitionStart::__cordl_internal_get__fadeInOut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeInOut;
}
constexpr void GlobalNamespace::FadeOutOnSceneTransitionStart::__cordl_internal_set__fadeInOut(::UnityW<::GlobalNamespace::FadeInOutController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fadeInOut)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::FadeOutOnSceneTransitionStart::__cordl_internal_get__gameScenesManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameScenesManager;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::FadeOutOnSceneTransitionStart::__cordl_internal_get__gameScenesManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameScenesManager;
}
constexpr void GlobalNamespace::FadeOutOnSceneTransitionStart::__cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameScenesManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::FadeOutOnSceneTransitionStart::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FadeOutOnSceneTransitionStart*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FadeOutOnSceneTransitionStart::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FadeOutOnSceneTransitionStart*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FadeOutOnSceneTransitionStart::HandleGameScenesManagerTransitionDidStart(::GlobalNamespace::__GameScenesManager__SceneTransitionType  sceneTransitionType, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FadeOutOnSceneTransitionStart*>::get(),
                        "HandleGameScenesManagerTransitionDidStart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameScenesManager__SceneTransitionType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sceneTransitionType, duration);
}
inline ::GlobalNamespace::FadeOutOnSceneTransitionStart* GlobalNamespace::FadeOutOnSceneTransitionStart::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FadeOutOnSceneTransitionStart*>());
}
inline void GlobalNamespace::FadeOutOnSceneTransitionStart::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FadeOutOnSceneTransitionStart*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FadeOutOnSceneTransitionStart::FadeOutOnSceneTransitionStart()   {
}
