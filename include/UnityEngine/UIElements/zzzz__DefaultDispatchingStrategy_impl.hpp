#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DefaultDispatchingStrategy.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DefaultDispatchingStrategy_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__IEventDispatchingStrategy_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultDispatchingStrategy.CanDispatchEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::DefaultDispatchingStrategy::*)(::UnityEngine::UIElements::EventBase*)>(&::UnityEngine::UIElements::DefaultDispatchingStrategy::CanDispatchEvent)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x498edf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultDispatchingStrategy*>::get(),
                        "CanDispatchEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultDispatchingStrategy.DispatchEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DefaultDispatchingStrategy::*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IPanel*)>(&::UnityEngine::UIElements::DefaultDispatchingStrategy::DispatchEvent)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x498ee6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultDispatchingStrategy*>::get(),
                        "DispatchEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultDispatchingStrategy._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DefaultDispatchingStrategy::*)()>(&::UnityEngine::UIElements::DefaultDispatchingStrategy::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x498d7ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultDispatchingStrategy*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::UIElements::IEventDispatchingStrategy"
constexpr  UnityEngine::UIElements::DefaultDispatchingStrategy::operator ::UnityEngine::UIElements::IEventDispatchingStrategy*() noexcept {
return static_cast<::UnityEngine::UIElements::IEventDispatchingStrategy*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IEventDispatchingStrategy"
constexpr ::UnityEngine::UIElements::IEventDispatchingStrategy* UnityEngine::UIElements::DefaultDispatchingStrategy::i___UnityEngine__UIElements__IEventDispatchingStrategy() noexcept {
return static_cast<::UnityEngine::UIElements::IEventDispatchingStrategy*>(static_cast<void*>(this));
}
inline bool UnityEngine::UIElements::DefaultDispatchingStrategy::CanDispatchEvent(::UnityEngine::UIElements::EventBase*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultDispatchingStrategy*>::get(),
                        "CanDispatchEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::DefaultDispatchingStrategy::DispatchEvent(::UnityEngine::UIElements::EventBase*  evt, ::UnityEngine::UIElements::IPanel*  panel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultDispatchingStrategy*>::get(),
                        "DispatchEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, panel);
}
inline ::UnityEngine::UIElements::DefaultDispatchingStrategy* UnityEngine::UIElements::DefaultDispatchingStrategy::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::DefaultDispatchingStrategy*>());
}
inline void UnityEngine::UIElements::DefaultDispatchingStrategy::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultDispatchingStrategy*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DefaultDispatchingStrategy::DefaultDispatchingStrategy()   {
}
