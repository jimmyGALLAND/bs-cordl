#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleScriptableObjectsPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SimpleScriptableObjectsPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
template<typename T>
constexpr ::System::Collections::Generic::Queue_1<T>*& GlobalNamespace::SimpleScriptableObjectsPool_1<T>::__cordl_internal_get__pool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pool;
}
template<typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<T>*> const& GlobalNamespace::SimpleScriptableObjectsPool_1<T>::__cordl_internal_get__pool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pool;
}
template<typename T>
constexpr void GlobalNamespace::SimpleScriptableObjectsPool_1<T>::__cordl_internal_set__pool(::System::Collections::Generic::Queue_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template<typename T>
inline T GlobalNamespace::SimpleScriptableObjectsPool_1<T>::Spawn()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleScriptableObjectsPool_1<T>*>::get(),
                        "Spawn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::SimpleScriptableObjectsPool_1<T>::Despawn(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleScriptableObjectsPool_1<T>*>::get(),
                        "Despawn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template<typename T>
inline void GlobalNamespace::SimpleScriptableObjectsPool_1<T>::Destroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleScriptableObjectsPool_1<T>*>::get(),
                        "Destroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::SimpleScriptableObjectsPool_1<T>* GlobalNamespace::SimpleScriptableObjectsPool_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SimpleScriptableObjectsPool_1<T>*>());
}
template<typename T>
inline void GlobalNamespace::SimpleScriptableObjectsPool_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleScriptableObjectsPool_1<T>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::SimpleScriptableObjectsPool_1<T>::SimpleScriptableObjectsPool_1()   {
}
