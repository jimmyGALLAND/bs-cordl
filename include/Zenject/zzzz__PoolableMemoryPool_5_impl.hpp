#pragma once
// IWYU pragma private; include "Zenject/PoolableMemoryPool_5.hpp"
#include "Zenject/zzzz__MemoryPool_5_impl.hpp"
#include "Zenject/zzzz__PoolableMemoryPool_5_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TValue>
inline void Zenject::PoolableMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>::OnDespawned(TValue  item)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>*>::get(),
                    16
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TValue>
inline void Zenject::PoolableMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>::Reinitialize(TParam1  p1, TParam2  p2, TParam3  p3, TParam4  p4, TValue  item)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>*>::get(),
                    23
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, p1, p2, p3, p4, item);
}
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TValue>
inline ::Zenject::PoolableMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>* Zenject::PoolableMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::PoolableMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>*>());
}
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TValue>
inline void Zenject::PoolableMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TValue>
inline ::System::Object* Zenject::PoolableMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TValue>
inline ::Zenject::InjectTypeInfo* Zenject::PoolableMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TValue>
constexpr ::Zenject::PoolableMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>::PoolableMemoryPool_5()   {
}
