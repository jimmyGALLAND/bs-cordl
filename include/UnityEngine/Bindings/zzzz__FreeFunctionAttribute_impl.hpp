#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/FreeFunctionAttribute.hpp"
#include "UnityEngine/Bindings/zzzz__NativeMethodAttribute_impl.hpp"
#include "UnityEngine/Bindings/zzzz__FreeFunctionAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::FreeFunctionAttribute._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::FreeFunctionAttribute::*)()>(&::UnityEngine::Bindings::FreeFunctionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4882d7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::FreeFunctionAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::FreeFunctionAttribute._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::FreeFunctionAttribute::*)(::StringW)>(&::UnityEngine::Bindings::FreeFunctionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x4882d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::FreeFunctionAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::FreeFunctionAttribute._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::FreeFunctionAttribute::*)(::StringW, bool)>(&::UnityEngine::Bindings::FreeFunctionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x4882db8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::FreeFunctionAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Bindings::FreeFunctionAttribute* UnityEngine::Bindings::FreeFunctionAttribute::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Bindings::FreeFunctionAttribute*>());
}
inline void UnityEngine::Bindings::FreeFunctionAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::FreeFunctionAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Bindings::FreeFunctionAttribute* UnityEngine::Bindings::FreeFunctionAttribute::New_ctor(::StringW  name)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Bindings::FreeFunctionAttribute*>(name));
}
inline void UnityEngine::Bindings::FreeFunctionAttribute::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::FreeFunctionAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline ::UnityEngine::Bindings::FreeFunctionAttribute* UnityEngine::Bindings::FreeFunctionAttribute::New_ctor(::StringW  name, bool  isThreadSafe)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Bindings::FreeFunctionAttribute*>(name, isThreadSafe));
}
inline void UnityEngine::Bindings::FreeFunctionAttribute::_ctor(::StringW  name, bool  isThreadSafe)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::FreeFunctionAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, isThreadSafe);
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::FreeFunctionAttribute::FreeFunctionAttribute()   {
}
