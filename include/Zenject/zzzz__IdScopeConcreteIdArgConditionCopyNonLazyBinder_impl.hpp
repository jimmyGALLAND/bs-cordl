#pragma once
// IWYU pragma private; include "Zenject/IdScopeConcreteIdArgConditionCopyNonLazyBinder.hpp"
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_impl.hpp"
#include "Zenject/zzzz__IdScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
//  Writing Method size for method: ::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder::*)(::Zenject::BindInfo*)>(&::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a7c2fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder.WithId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder::*)(::System::Object*)>(&::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder::WithId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x4a7c304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder*>::get(),
                        "WithId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder::New_ctor(::Zenject::BindInfo*  bindInfo)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder*>(bindInfo));
}
inline void Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder::_ctor(::Zenject::BindInfo*  bindInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindInfo);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder::WithId(::System::Object*  identifier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder*>::get(),
                        "WithId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, identifier);
}
// Ctor Parameters []
constexpr ::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder::IdScopeConcreteIdArgConditionCopyNonLazyBinder()   {
}
