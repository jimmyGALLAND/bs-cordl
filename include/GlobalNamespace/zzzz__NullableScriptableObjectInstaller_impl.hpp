#pragma once
// IWYU pragma private; include "GlobalNamespace/NullableScriptableObjectInstaller.hpp"
#include "Zenject/zzzz__ScriptableObjectInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__NullableScriptableObjectInstaller_def.hpp"
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NullableScriptableObjectInstaller.InstallBindings
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NullableScriptableObjectInstaller::*)()>(&::GlobalNamespace::NullableScriptableObjectInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x4a7c0b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NullableScriptableObjectInstaller*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NullableScriptableObjectInstaller*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NullableScriptableObjectInstaller._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NullableScriptableObjectInstaller::*)()>(&::GlobalNamespace::NullableScriptableObjectInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a7c154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NullableScriptableObjectInstaller*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Zenject::ScriptableObjectInstaller>& GlobalNamespace::NullableScriptableObjectInstaller::__cordl_internal_get__installer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____installer;
}
constexpr ::UnityW<::Zenject::ScriptableObjectInstaller> const& GlobalNamespace::NullableScriptableObjectInstaller::__cordl_internal_get__installer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____installer;
}
constexpr void GlobalNamespace::NullableScriptableObjectInstaller::__cordl_internal_set__installer(::UnityW<::Zenject::ScriptableObjectInstaller>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____installer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::NullableScriptableObjectInstaller::InstallBindings()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NullableScriptableObjectInstaller*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::NullableScriptableObjectInstaller* GlobalNamespace::NullableScriptableObjectInstaller::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NullableScriptableObjectInstaller*>());
}
inline void GlobalNamespace::NullableScriptableObjectInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NullableScriptableObjectInstaller*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NullableScriptableObjectInstaller::NullableScriptableObjectInstaller()   {
}
