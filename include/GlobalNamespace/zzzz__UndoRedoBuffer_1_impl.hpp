#pragma once
// IWYU pragma private; include "GlobalNamespace/UndoRedoBuffer_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UndoRedoBuffer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template<typename T>
constexpr ::System::Collections::Generic::List_1<T>*& GlobalNamespace::UndoRedoBuffer_1<T>::__cordl_internal_get__data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
template<typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> const& GlobalNamespace::UndoRedoBuffer_1<T>::__cordl_internal_get__data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
template<typename T>
constexpr void GlobalNamespace::UndoRedoBuffer_1<T>::__cordl_internal_set__data(::System::Collections::Generic::List_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template<typename T>
constexpr int32_t& GlobalNamespace::UndoRedoBuffer_1<T>::__cordl_internal_get__capacity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____capacity;
}
template<typename T>
constexpr int32_t const& GlobalNamespace::UndoRedoBuffer_1<T>::__cordl_internal_get__capacity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____capacity;
}
template<typename T>
constexpr void GlobalNamespace::UndoRedoBuffer_1<T>::__cordl_internal_set__capacity(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____capacity = value;
}
template<typename T>
constexpr int32_t& GlobalNamespace::UndoRedoBuffer_1<T>::__cordl_internal_get__cursor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cursor;
}
template<typename T>
constexpr int32_t const& GlobalNamespace::UndoRedoBuffer_1<T>::__cordl_internal_get__cursor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cursor;
}
template<typename T>
constexpr void GlobalNamespace::UndoRedoBuffer_1<T>::__cordl_internal_set__cursor(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cursor = value;
}
template<typename T>
inline ::GlobalNamespace::UndoRedoBuffer_1<T>* GlobalNamespace::UndoRedoBuffer_1<T>::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::UndoRedoBuffer_1<T>*>(capacity));
}
template<typename T>
inline void GlobalNamespace::UndoRedoBuffer_1<T>::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UndoRedoBuffer_1<T>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity);
}
template<typename T>
inline void GlobalNamespace::UndoRedoBuffer_1<T>::Add(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UndoRedoBuffer_1<T>*>::get(),
                        "Add",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template<typename T>
inline T GlobalNamespace::UndoRedoBuffer_1<T>::Undo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UndoRedoBuffer_1<T>*>::get(),
                        "Undo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template<typename T>
inline T GlobalNamespace::UndoRedoBuffer_1<T>::Redo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UndoRedoBuffer_1<T>*>::get(),
                        "Redo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::UndoRedoBuffer_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UndoRedoBuffer_1<T>*>::get(),
                        "Clear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::UndoRedoBuffer_1<T>::UndoRedoBuffer_1()   {
}
