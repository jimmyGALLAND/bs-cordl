#pragma once
// IWYU pragma private; include "Zenject/NonLazyBinder.hpp"
#include "Zenject/zzzz__IfNotBoundBinder_impl.hpp"
#include "Zenject/zzzz__NonLazyBinder_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__IfNotBoundBinder_def.hpp"
//  Writing Method size for method: ::Zenject::NonLazyBinder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::NonLazyBinder::*)(::Zenject::BindInfo*)>(&::Zenject::NonLazyBinder::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4a7c39c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NonLazyBinder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::NonLazyBinder.NonLazy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::IfNotBoundBinder* (::Zenject::NonLazyBinder::*)()>(&::Zenject::NonLazyBinder::NonLazy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4a7c3c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NonLazyBinder*>::get(),
                        "NonLazy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::NonLazyBinder.Lazy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::IfNotBoundBinder* (::Zenject::NonLazyBinder::*)()>(&::Zenject::NonLazyBinder::Lazy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x4a7c3e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NonLazyBinder*>::get(),
                        "Lazy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::Zenject::NonLazyBinder* Zenject::NonLazyBinder::New_ctor(::Zenject::BindInfo*  bindInfo)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::NonLazyBinder*>(bindInfo));
}
inline void Zenject::NonLazyBinder::_ctor(::Zenject::BindInfo*  bindInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NonLazyBinder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindInfo);
}
inline ::Zenject::IfNotBoundBinder* Zenject::NonLazyBinder::NonLazy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NonLazyBinder*>::get(),
                        "NonLazy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::IfNotBoundBinder*, false>(this, ___internal_method);
}
inline ::Zenject::IfNotBoundBinder* Zenject::NonLazyBinder::Lazy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NonLazyBinder*>::get(),
                        "Lazy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::IfNotBoundBinder*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::NonLazyBinder::NonLazyBinder()   {
}
