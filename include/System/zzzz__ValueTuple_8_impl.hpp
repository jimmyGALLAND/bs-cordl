#pragma once
#include "System/zzzz__ValueTuple_8_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ITuple_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/Collections/zzzz__IStructuralComparable_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/Collections/zzzz__IStructuralEquatable_def.hpp"
#include "System/zzzz__IValueTupleInternal_def.hpp"
/// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,TRest>>"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
constexpr System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::operator ::System::IEquatable_1<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>*() {
  return static_cast<::System::IEquatable_1<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
constexpr System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::operator ::System::Collections::IStructuralEquatable*() {
  return static_cast<::System::Collections::IStructuralEquatable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IStructuralComparable"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
constexpr System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::operator ::System::Collections::IStructuralComparable*() {
  return static_cast<::System::Collections::IStructuralComparable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IComparable"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
constexpr System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::operator ::System::IComparable*() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,TRest>>"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
constexpr System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::operator ::System::IComparable_1<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>*() {
  return static_cast<::System::IComparable_1<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IValueTupleInternal"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
constexpr System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::operator ::System::IValueTupleInternal*() {
  return static_cast<::System::IValueTupleInternal*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
constexpr System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::operator ::System::Runtime::CompilerServices::ITuple*() {
  return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
inline void System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::_ctor(T1 item1, T2 item2, T3 item3, T4 item4, T5 item5, T6 item6, T7 item7, TRest rest) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T4>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T6>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T7>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TRest>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item1, item2, item3, item4, item5, item6, item7, rest);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
inline bool System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::Equals(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>::get(), "Equals",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
inline bool System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::Equals(::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>::get(), "Equals", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
inline bool System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::System_Collections_IStructuralEquatable_Equals(::System::Object* other, ::System::Collections::IEqualityComparer* comparer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>::get(),
                                               "System.Collections.IStructuralEquatable.Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other, comparer);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
inline int32_t System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::System_IComparable_CompareTo(::System::Object* other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>::get(), "System.IComparable.CompareTo",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
inline int32_t System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::CompareTo(::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>::get(), "CompareTo", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
inline int32_t System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::System_Collections_IStructuralComparable_CompareTo(::System::Object* other, ::System::Collections::IComparer* comparer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>::get(),
                                               "System.Collections.IStructuralComparable.CompareTo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IComparer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other, comparer);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
inline int32_t System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::GetHashCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>::get(),
                                                                             "GetHashCode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
inline int32_t System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer* comparer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>::get(), "System.Collections.IStructuralEquatable.GetHashCode",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, comparer);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
inline int32_t System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::GetHashCodeCore(::System::Collections::IEqualityComparer* comparer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>::get(), "GetHashCodeCore", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, comparer);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
inline int32_t System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::System_IValueTupleInternal_GetHashCode(::System::Collections::IEqualityComparer* comparer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>::get(), "System.IValueTupleInternal.GetHashCode", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, comparer);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
inline ::StringW System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::ToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>::get(),
                                                                             "ToString", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
inline ::StringW System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::System_IValueTupleInternal_ToStringEnd() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>::get(),
                                                                             "System.IValueTupleInternal.ToStringEnd", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
inline int32_t System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::System_Runtime_CompilerServices_ITuple_get_Length() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>>::get(),
                                                                             "System.Runtime.CompilerServices.ITuple.get_Length", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "Item3", ty: "T3", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "Item4", ty: "T4", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "Item5", ty: "T5", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "Item6", ty: "T6", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "Item7", ty: "T7", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "Rest", ty: "TRest", modifiers: "", def_value: Some("nullptr") }]
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
constexpr ::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::ValueTuple_8(T1 Item1, T2 Item2, T3 Item3, T4 Item4, T5 Item5, T6 Item6, T7 Item7, TRest Rest) noexcept {
  this->Item1 = Item1;
  this->Item2 = Item2;
  this->Item3 = Item3;
  this->Item4 = Item4;
  this->Item5 = Item5;
  this->Item6 = Item6;
  this->Item7 = Item7;
  this->Rest = Rest;
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
constexpr ::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, TRest>::ValueTuple_8() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
