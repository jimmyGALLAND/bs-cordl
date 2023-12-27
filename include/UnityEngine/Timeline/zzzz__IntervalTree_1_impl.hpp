#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Timeline/zzzz__IntervalTree_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Timeline/zzzz__IntervalTree_1_def.hpp"
#include "UnityEngine/Timeline/zzzz__IntervalTreeNode_def.hpp"
// Ctor Parameters [CppParam { name: "intervalStart", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "intervalEnd", ty: "int64_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "item", ty: "T", modifiers: "", def_value: Some("nullptr") }]
template <typename T> constexpr ::UnityEngine::Timeline::__IntervalTree_1__Entry<T>::__IntervalTree_1__Entry(int64_t intervalStart, int64_t intervalEnd, T item) noexcept {
  this->intervalStart = intervalStart;
  this->intervalEnd = intervalEnd;
  this->item = item;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Timeline::__IntervalTree_1__Entry<T>::__IntervalTree_1__Entry() {}
template <typename T> constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::__IntervalTree_1__Entry<T>>*& UnityEngine::Timeline::IntervalTree_1<T>::__get_m_Entries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Entries;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Timeline::__IntervalTree_1__Entry<T>>*> const&
UnityEngine::Timeline::IntervalTree_1<T>::__get_m_Entries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Entries;
}
template <typename T> constexpr void UnityEngine::Timeline::IntervalTree_1<T>::__set_m_Entries(::System::Collections::Generic::List_1<::UnityEngine::Timeline::__IntervalTree_1__Entry<T>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Entries)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IntervalTreeNode>*& UnityEngine::Timeline::IntervalTree_1<T>::__get_m_Nodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Nodes;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Timeline::IntervalTreeNode>*> const&
UnityEngine::Timeline::IntervalTree_1<T>::__get_m_Nodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Nodes;
}
template <typename T> constexpr void UnityEngine::Timeline::IntervalTree_1<T>::__set_m_Nodes(::System::Collections::Generic::List_1<::UnityEngine::Timeline::IntervalTreeNode>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Nodes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr bool& UnityEngine::Timeline::IntervalTree_1<T>::__get__dirty_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____dirty_k__BackingField;
}
template <typename T> constexpr bool const& UnityEngine::Timeline::IntervalTree_1<T>::__get__dirty_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____dirty_k__BackingField;
}
template <typename T> constexpr void UnityEngine::Timeline::IntervalTree_1<T>::__set__dirty_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____dirty_k__BackingField = value;
}
template <typename T> inline bool UnityEngine::Timeline::IntervalTree_1<T>::get_dirty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::IntervalTree_1<T>*>::get(), "get_dirty",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Timeline::IntervalTree_1<T>::set_dirty(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::IntervalTree_1<T>*>::get(), "set_dirty", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::Timeline::IntervalTree_1<T>::Add(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::IntervalTree_1<T>*>::get(), "Add", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline void UnityEngine::Timeline::IntervalTree_1<T>::IntersectsWith(int64_t value, ::System::Collections::Generic::List_1<T>* results) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::IntervalTree_1<T>*>::get(), "IntersectsWith", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, results);
}
template <typename T> inline void UnityEngine::Timeline::IntervalTree_1<T>::IntersectsWithRange(int64_t start, int64_t end, ::System::Collections::Generic::List_1<T>* results) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::IntervalTree_1<T>*>::get(), "IntersectsWithRange", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, start, end, results);
}
template <typename T> inline void UnityEngine::Timeline::IntervalTree_1<T>::UpdateIntervals() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::IntervalTree_1<T>*>::get(),
                                                                             "UpdateIntervals", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void UnityEngine::Timeline::IntervalTree_1<T>::Query(::UnityEngine::Timeline::IntervalTreeNode intervalTreeNode, int64_t value, ::System::Collections::Generic::List_1<T>* results) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::IntervalTree_1<T>*>::get(), "Query", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::IntervalTreeNode>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, intervalTreeNode, value, results);
}
template <typename T>
inline void UnityEngine::Timeline::IntervalTree_1<T>::QueryRange(::UnityEngine::Timeline::IntervalTreeNode intervalTreeNode, int64_t start, int64_t end,
                                                                 ::System::Collections::Generic::List_1<T>* results) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::IntervalTree_1<T>*>::get(), "QueryRange", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::IntervalTreeNode>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, intervalTreeNode, start, end, results);
}
template <typename T> inline void UnityEngine::Timeline::IntervalTree_1<T>::Rebuild() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::IntervalTree_1<T>*>::get(), "Rebuild",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline int32_t UnityEngine::Timeline::IntervalTree_1<T>::Rebuild(int32_t start, int32_t end) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::IntervalTree_1<T>*>::get(), "Rebuild", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, start, end);
}
template <typename T> inline void UnityEngine::Timeline::IntervalTree_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::IntervalTree_1<T>*>::get(), "Clear",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::Timeline::IntervalTree_1<T>* UnityEngine::Timeline::IntervalTree_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Timeline::IntervalTree_1<T>*>());
}
template <typename T> inline void UnityEngine::Timeline::IntervalTree_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::IntervalTree_1<T>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Timeline::IntervalTree_1<T>::IntervalTree_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
