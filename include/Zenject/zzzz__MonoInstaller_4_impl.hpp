#pragma once
// IWYU pragma private; include "Zenject/MonoInstaller_4.hpp"
#include "Zenject/zzzz__MonoInstallerBase_impl.hpp"
#include "Zenject/zzzz__MonoInstaller_4_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template<typename TParam1,typename TParam2,typename TParam3,typename TDerived>
inline TDerived Zenject::MonoInstaller_4<TParam1,TParam2,TParam3,TDerived>::InstallFromResource(::Zenject::DiContainer*  container, TParam1  p1, TParam2  p2, TParam3  p3)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoInstaller_4<TParam1,TParam2,TParam3,TDerived>*>::get(),
                        "InstallFromResource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<TDerived, false>(nullptr, ___internal_method, container, p1, p2, p3);
}
template<typename TParam1,typename TParam2,typename TParam3,typename TDerived>
inline TDerived Zenject::MonoInstaller_4<TParam1,TParam2,TParam3,TDerived>::InstallFromResource(::StringW  resourcePath, ::Zenject::DiContainer*  container, TParam1  p1, TParam2  p2, TParam3  p3)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoInstaller_4<TParam1,TParam2,TParam3,TDerived>*>::get(),
                        "InstallFromResource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<TDerived, false>(nullptr, ___internal_method, resourcePath, container, p1, p2, p3);
}
template<typename TParam1,typename TParam2,typename TParam3,typename TDerived>
inline ::Zenject::MonoInstaller_4<TParam1,TParam2,TParam3,TDerived>* Zenject::MonoInstaller_4<TParam1,TParam2,TParam3,TDerived>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::MonoInstaller_4<TParam1,TParam2,TParam3,TDerived>*>());
}
template<typename TParam1,typename TParam2,typename TParam3,typename TDerived>
inline void Zenject::MonoInstaller_4<TParam1,TParam2,TParam3,TDerived>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoInstaller_4<TParam1,TParam2,TParam3,TDerived>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TParam1,typename TParam2,typename TParam3,typename TDerived>
inline ::Zenject::InjectTypeInfo* Zenject::MonoInstaller_4<TParam1,TParam2,TParam3,TDerived>::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoInstaller_4<TParam1,TParam2,TParam3,TDerived>*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template<typename TParam1,typename TParam2,typename TParam3,typename TDerived>
constexpr ::Zenject::MonoInstaller_4<TParam1,TParam2,TParam3,TDerived>::MonoInstaller_4()   {
}
