#pragma once
// IWYU pragma private; include "Zenject/Factory_4.hpp"
#include "Zenject/zzzz__PlaceholderFactory_4_impl.hpp"
#include "Zenject/zzzz__Factory_4_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template<typename TParam1,typename TParam2,typename TParam3,typename TValue>
inline ::Zenject::Factory_4<TParam1,TParam2,TParam3,TValue>* Zenject::Factory_4<TParam1,TParam2,TParam3,TValue>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::Factory_4<TParam1,TParam2,TParam3,TValue>*>());
}
template<typename TParam1,typename TParam2,typename TParam3,typename TValue>
inline void Zenject::Factory_4<TParam1,TParam2,TParam3,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Factory_4<TParam1,TParam2,TParam3,TValue>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TParam1,typename TParam2,typename TParam3,typename TValue>
inline ::System::Object* Zenject::Factory_4<TParam1,TParam2,TParam3,TValue>::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Factory_4<TParam1,TParam2,TParam3,TValue>*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template<typename TParam1,typename TParam2,typename TParam3,typename TValue>
inline ::Zenject::InjectTypeInfo* Zenject::Factory_4<TParam1,TParam2,TParam3,TValue>::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Factory_4<TParam1,TParam2,TParam3,TValue>*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template<typename TParam1,typename TParam2,typename TParam3,typename TValue>
constexpr ::Zenject::Factory_4<TParam1,TParam2,TParam3,TValue>::Factory_4()   {
}
