#pragma once
// IWYU pragma private; include "Zenject/FactoryToChoiceIdBinder_5.hpp"
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_5_impl.hpp"
#include "Zenject/zzzz__FactoryToChoiceIdBinder_5_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_5_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TContract>
inline ::Zenject::FactoryToChoiceIdBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>* Zenject::FactoryToChoiceIdBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>::New_ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::FactoryToChoiceIdBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>*>(bindContainer, bindInfo, factoryBindInfo));
}
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TContract>
inline void Zenject::FactoryToChoiceIdBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>::_ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryToChoiceIdBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryBindInfo*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindContainer, bindInfo, factoryBindInfo);
}
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TContract>
inline ::Zenject::FactoryArgumentsToChoiceBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>* Zenject::FactoryToChoiceIdBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>::WithId(::System::Object*  identifier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryToChoiceIdBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>*>::get(),
                        "WithId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryArgumentsToChoiceBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>*, false>(this, ___internal_method, identifier);
}
// Ctor Parameters []
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TContract>
constexpr ::Zenject::FactoryToChoiceIdBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>::FactoryToChoiceIdBinder_5()   {
}
