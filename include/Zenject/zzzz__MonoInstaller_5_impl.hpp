#pragma once
// IWYU pragma private; include "Zenject/MonoInstaller_5.hpp"
#include "Zenject/zzzz__MonoInstallerBase_impl.hpp"
#include "Zenject/zzzz__MonoInstaller_5_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TDerived>
inline TDerived Zenject::MonoInstaller_5<TParam1,TParam2,TParam3,TParam4,TDerived>::InstallFromResource(::Zenject::DiContainer*  container, TParam1  p1, TParam2  p2, TParam3  p3, TParam4  p4)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoInstaller_5<TParam1,TParam2,TParam3,TParam4,TDerived>*>::get(),
                        "InstallFromResource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam4>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<TDerived, false>(nullptr, ___internal_method, container, p1, p2, p3, p4);
}
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TDerived>
inline TDerived Zenject::MonoInstaller_5<TParam1,TParam2,TParam3,TParam4,TDerived>::InstallFromResource(::StringW  resourcePath, ::Zenject::DiContainer*  container, TParam1  p1, TParam2  p2, TParam3  p3, TParam4  p4)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoInstaller_5<TParam1,TParam2,TParam3,TParam4,TDerived>*>::get(),
                        "InstallFromResource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam4>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<TDerived, false>(nullptr, ___internal_method, resourcePath, container, p1, p2, p3, p4);
}
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TDerived>
inline ::Zenject::MonoInstaller_5<TParam1,TParam2,TParam3,TParam4,TDerived>* Zenject::MonoInstaller_5<TParam1,TParam2,TParam3,TParam4,TDerived>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::MonoInstaller_5<TParam1,TParam2,TParam3,TParam4,TDerived>*>());
}
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TDerived>
inline void Zenject::MonoInstaller_5<TParam1,TParam2,TParam3,TParam4,TDerived>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoInstaller_5<TParam1,TParam2,TParam3,TParam4,TDerived>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TDerived>
inline ::Zenject::InjectTypeInfo* Zenject::MonoInstaller_5<TParam1,TParam2,TParam3,TParam4,TDerived>::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoInstaller_5<TParam1,TParam2,TParam3,TParam4,TDerived>*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TDerived>
constexpr ::Zenject::MonoInstaller_5<TParam1,TParam2,TParam3,TParam4,TDerived>::MonoInstaller_5()   {
}
