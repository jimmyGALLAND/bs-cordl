#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/KeyboardEventExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__KeyboardEventExtensions_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyDownEvent_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardEventExtensions.ShouldSendNavigationMoveEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::KeyDownEvent*)>(&::UnityEngine::UIElements::KeyboardEventExtensions::ShouldSendNavigationMoveEvent)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x49948ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardEventExtensions*>::get(),
                        "ShouldSendNavigationMoveEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyDownEvent*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardEventExtensions.ShouldSendNavigationMoveEventRuntime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Event*)>(&::UnityEngine::UIElements::KeyboardEventExtensions::ShouldSendNavigationMoveEventRuntime)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4994c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardEventExtensions*>::get(),
                        "ShouldSendNavigationMoveEventRuntime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get()}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::KeyboardEventExtensions::ShouldSendNavigationMoveEvent(::UnityEngine::UIElements::KeyDownEvent*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardEventExtensions*>::get(),
                        "ShouldSendNavigationMoveEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyDownEvent*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, e);
}
inline bool UnityEngine::UIElements::KeyboardEventExtensions::ShouldSendNavigationMoveEventRuntime(::UnityEngine::Event*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardEventExtensions*>::get(),
                        "ShouldSendNavigationMoveEventRuntime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, e);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::KeyboardEventExtensions::KeyboardEventExtensions()   {
}
