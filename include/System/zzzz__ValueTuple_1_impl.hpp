#pragma once
// IWYU pragma private; include "System/ValueTuple_1.hpp"
#include "System/zzzz__ValueTuple_1_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/Collections/zzzz__IStructuralComparable_def.hpp"
#include "System/Collections/zzzz__IStructuralEquatable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ITuple_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IValueTupleInternal_def.hpp"
#include "System/zzzz__Object_def.hpp"
/// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_1<T1>>"
template<typename T1>
constexpr  System::ValueTuple_1<T1>::operator ::System::IEquatable_1<::System::ValueTuple_1<T1>>*()  {
return static_cast<::System::IEquatable_1<::System::ValueTuple_1<T1>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::System::ValueTuple_1<T1>>"
template<typename T1>
constexpr ::System::IEquatable_1<::System::ValueTuple_1<T1>>* System::ValueTuple_1<T1>::i___System__IEquatable_1___System__ValueTuple_1_T1__()  {
return static_cast<::System::IEquatable_1<::System::ValueTuple_1<T1>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
template<typename T1>
constexpr  System::ValueTuple_1<T1>::operator ::System::Collections::IStructuralEquatable*()  {
return static_cast<::System::Collections::IStructuralEquatable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::IStructuralEquatable"
template<typename T1>
constexpr ::System::Collections::IStructuralEquatable* System::ValueTuple_1<T1>::i___System__Collections__IStructuralEquatable()  {
return static_cast<::System::Collections::IStructuralEquatable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IStructuralComparable"
template<typename T1>
constexpr  System::ValueTuple_1<T1>::operator ::System::Collections::IStructuralComparable*()  {
return static_cast<::System::Collections::IStructuralComparable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::IStructuralComparable"
template<typename T1>
constexpr ::System::Collections::IStructuralComparable* System::ValueTuple_1<T1>::i___System__Collections__IStructuralComparable()  {
return static_cast<::System::Collections::IStructuralComparable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IComparable"
template<typename T1>
constexpr  System::ValueTuple_1<T1>::operator ::System::IComparable*()  {
return static_cast<::System::IComparable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable"
template<typename T1>
constexpr ::System::IComparable* System::ValueTuple_1<T1>::i___System__IComparable()  {
return static_cast<::System::IComparable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_1<T1>>"
template<typename T1>
constexpr  System::ValueTuple_1<T1>::operator ::System::IComparable_1<::System::ValueTuple_1<T1>>*()  {
return static_cast<::System::IComparable_1<::System::ValueTuple_1<T1>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable_1<::System::ValueTuple_1<T1>>"
template<typename T1>
constexpr ::System::IComparable_1<::System::ValueTuple_1<T1>>* System::ValueTuple_1<T1>::i___System__IComparable_1___System__ValueTuple_1_T1__()  {
return static_cast<::System::IComparable_1<::System::ValueTuple_1<T1>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IValueTupleInternal"
template<typename T1>
constexpr  System::ValueTuple_1<T1>::operator ::System::IValueTupleInternal*()  {
return static_cast<::System::IValueTupleInternal*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IValueTupleInternal"
template<typename T1>
constexpr ::System::IValueTupleInternal* System::ValueTuple_1<T1>::i___System__IValueTupleInternal()  {
return static_cast<::System::IValueTupleInternal*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
template<typename T1>
constexpr  System::ValueTuple_1<T1>::operator ::System::Runtime::CompilerServices::ITuple*()  {
return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ITuple"
template<typename T1>
constexpr ::System::Runtime::CompilerServices::ITuple* System::ValueTuple_1<T1>::i___System__Runtime__CompilerServices__ITuple()  {
return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template<typename T1>
inline void System::ValueTuple_1<T1>::_ctor(T1  item1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_1<T1>>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item1);
}
template<typename T1>
inline bool System::ValueTuple_1<T1>::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_1<T1>>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
template<typename T1>
inline bool System::ValueTuple_1<T1>::Equals(::System::ValueTuple_1<T1>  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_1<T1>>::get(),
                        "Equals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_1<T1>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
template<typename T1>
inline bool System::ValueTuple_1<T1>::System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_1<T1>>::get(),
                        "System.Collections.IStructuralEquatable.Equals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other, comparer);
}
template<typename T1>
inline int32_t System::ValueTuple_1<T1>::System_IComparable_CompareTo(::System::Object*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_1<T1>>::get(),
                        "System.IComparable.CompareTo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
template<typename T1>
inline int32_t System::ValueTuple_1<T1>::CompareTo(::System::ValueTuple_1<T1>  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_1<T1>>::get(),
                        "CompareTo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_1<T1>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
template<typename T1>
inline int32_t System::ValueTuple_1<T1>::System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_1<T1>>::get(),
                        "System.Collections.IStructuralComparable.CompareTo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IComparer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other, comparer);
}
template<typename T1>
inline int32_t System::ValueTuple_1<T1>::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_1<T1>>::get(),
                    2
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template<typename T1>
inline int32_t System::ValueTuple_1<T1>::System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_1<T1>>::get(),
                        "System.Collections.IStructuralEquatable.GetHashCode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, comparer);
}
template<typename T1>
inline int32_t System::ValueTuple_1<T1>::System_IValueTupleInternal_GetHashCode(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_1<T1>>::get(),
                        "System.IValueTupleInternal.GetHashCode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, comparer);
}
template<typename T1>
inline ::StringW System::ValueTuple_1<T1>::ToString()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_1<T1>>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template<typename T1>
inline ::StringW System::ValueTuple_1<T1>::System_IValueTupleInternal_ToStringEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_1<T1>>::get(),
                        "System.IValueTupleInternal.ToStringEnd",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template<typename T1>
inline int32_t System::ValueTuple_1<T1>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_1<T1>>::get(),
                        "System.Runtime.CompilerServices.ITuple.get_Length",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: Some("nullptr") }]
template<typename T1>
constexpr ::System::ValueTuple_1<T1>::ValueTuple_1(T1  Item1) noexcept  {
this->Item1 = Item1;
}
// Ctor Parameters []
template<typename T1>
constexpr ::System::ValueTuple_1<T1>::ValueTuple_1()   {
}
