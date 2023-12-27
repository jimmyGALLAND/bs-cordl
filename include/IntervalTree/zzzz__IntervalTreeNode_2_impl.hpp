#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "IntervalTree/zzzz__IntervalTreeNode_2_def.hpp"
#include "IntervalTree/zzzz__RangeValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "IntervalTree/zzzz__IntervalTreeNode_2_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
template <typename TKey, typename TValue> inline void IntervalTree::__IntervalTreeNode_2____c<TKey, TValue>::setStaticF___9(::IntervalTree::__IntervalTreeNode_2____c<TKey, TValue>* value) {
  ::cordl_internals::setStaticField<::IntervalTree::__IntervalTreeNode_2____c<TKey, TValue>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::__IntervalTreeNode_2____c<TKey, TValue>*>::get>(
      std::forward<::IntervalTree::__IntervalTreeNode_2____c<TKey, TValue>*>(value));
}
template <typename TKey, typename TValue> inline ::IntervalTree::__IntervalTreeNode_2____c<TKey, TValue>* IntervalTree::__IntervalTreeNode_2____c<TKey, TValue>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::IntervalTree::__IntervalTreeNode_2____c<TKey, TValue>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::__IntervalTreeNode_2____c<TKey, TValue>*>::get>();
}
template <typename TKey, typename TValue>
inline void IntervalTree::__IntervalTreeNode_2____c<TKey, TValue>::setStaticF___9__13_0(::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TKey>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TKey>*, "<>9__13_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::__IntervalTreeNode_2____c<TKey, TValue>*>::get>(
      std::forward<::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TKey>*>(value));
}
template <typename TKey, typename TValue> inline ::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TKey>* IntervalTree::__IntervalTreeNode_2____c<TKey, TValue>::getStaticF___9__13_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TKey>*, "<>9__13_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::__IntervalTreeNode_2____c<TKey, TValue>*>::get>();
}
template <typename TKey, typename TValue>
inline void IntervalTree::__IntervalTreeNode_2____c<TKey, TValue>::setStaticF___9__15_0(::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TKey>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TKey>*, "<>9__15_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::__IntervalTreeNode_2____c<TKey, TValue>*>::get>(
      std::forward<::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TKey>*>(value));
}
template <typename TKey, typename TValue> inline ::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TKey>* IntervalTree::__IntervalTreeNode_2____c<TKey, TValue>::getStaticF___9__15_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TKey>*, "<>9__15_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::__IntervalTreeNode_2____c<TKey, TValue>*>::get>();
}
template <typename TKey, typename TValue> inline ::IntervalTree::__IntervalTreeNode_2____c<TKey, TValue>* IntervalTree::__IntervalTreeNode_2____c<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::IntervalTree::__IntervalTreeNode_2____c<TKey, TValue>*>());
}
template <typename TKey, typename TValue> inline void IntervalTree::__IntervalTreeNode_2____c<TKey, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::__IntervalTreeNode_2____c<TKey, TValue>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline TKey IntervalTree::__IntervalTreeNode_2____c<TKey, TValue>::_get_Max_b__13_0(::IntervalTree::RangeValuePair_2<TKey, TValue> i) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::__IntervalTreeNode_2____c<TKey, TValue>*>::get(), "<get_Max>b__13_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::IntervalTree::RangeValuePair_2<TKey, TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<TKey, false>(this, ___internal_method, i);
}
template <typename TKey, typename TValue> inline TKey IntervalTree::__IntervalTreeNode_2____c<TKey, TValue>::_get_Min_b__15_0(::IntervalTree::RangeValuePair_2<TKey, TValue> i) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::__IntervalTreeNode_2____c<TKey, TValue>*>::get(), "<get_Min>b__15_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::IntervalTree::RangeValuePair_2<TKey, TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<TKey, false>(this, ___internal_method, i);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::IntervalTree::__IntervalTreeNode_2____c<TKey, TValue>::__IntervalTreeNode_2____c() {}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::IntervalTree::RangeValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr IntervalTree::IntervalTreeNode_2<TKey, TValue>::operator ::System::Collections::Generic::IComparer_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
template <typename TKey, typename TValue> constexpr TKey& IntervalTree::IntervalTreeNode_2<TKey, TValue>::__get_center() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___center;
}
template <typename TKey, typename TValue> constexpr TKey const& IntervalTree::IntervalTreeNode_2<TKey, TValue>::__get_center() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___center;
}
template <typename TKey, typename TValue> constexpr void IntervalTree::IntervalTreeNode_2<TKey, TValue>::__set_center(TKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___center)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue> constexpr ::IntervalTree::IntervalTreeNode_2<TKey, TValue>*& IntervalTree::IntervalTreeNode_2<TKey, TValue>::__get_leftNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___leftNode;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::IntervalTree::IntervalTreeNode_2<TKey, TValue>*> const& IntervalTree::IntervalTreeNode_2<TKey, TValue>::__get_leftNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___leftNode;
}
template <typename TKey, typename TValue> constexpr void IntervalTree::IntervalTreeNode_2<TKey, TValue>::__set_leftNode(::IntervalTree::IntervalTreeNode_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue> constexpr ::IntervalTree::IntervalTreeNode_2<TKey, TValue>*& IntervalTree::IntervalTreeNode_2<TKey, TValue>::__get_rightNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___rightNode;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::IntervalTree::IntervalTreeNode_2<TKey, TValue>*> const& IntervalTree::IntervalTreeNode_2<TKey, TValue>::__get_rightNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___rightNode;
}
template <typename TKey, typename TValue> constexpr void IntervalTree::IntervalTreeNode_2<TKey, TValue>::__set_rightNode(::IntervalTree::IntervalTreeNode_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue>
constexpr ::ArrayW<::IntervalTree::RangeValuePair_2<TKey, TValue>, ::Array<::IntervalTree::RangeValuePair_2<TKey, TValue>>*>& IntervalTree::IntervalTreeNode_2<TKey, TValue>::__get_items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___items;
}
template <typename TKey, typename TValue>
constexpr ::ArrayW<::IntervalTree::RangeValuePair_2<TKey, TValue>, ::Array<::IntervalTree::RangeValuePair_2<TKey, TValue>>*> const&
IntervalTree::IntervalTreeNode_2<TKey, TValue>::__get_items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___items;
}
template <typename TKey, typename TValue>
constexpr void IntervalTree::IntervalTreeNode_2<TKey, TValue>::__set_items(::ArrayW<::IntervalTree::RangeValuePair_2<TKey, TValue>, ::Array<::IntervalTree::RangeValuePair_2<TKey, TValue>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___items)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::IComparer_1<TKey>*& IntervalTree::IntervalTreeNode_2<TKey, TValue>::__get_comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___comparer;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<TKey>*> const& IntervalTree::IntervalTreeNode_2<TKey, TValue>::__get_comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___comparer;
}
template <typename TKey, typename TValue> constexpr void IntervalTree::IntervalTreeNode_2<TKey, TValue>::__set_comparer(::System::Collections::Generic::IComparer_1<TKey>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___comparer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue>
inline ::IntervalTree::IntervalTreeNode_2<TKey, TValue>* IntervalTree::IntervalTreeNode_2<TKey, TValue>::New_ctor(::System::Collections::Generic::IComparer_1<TKey>* comparer) {
  return THROW_UNLESS(::il2cpp_utils::New<::IntervalTree::IntervalTreeNode_2<TKey, TValue>*>(comparer));
}
template <typename TKey, typename TValue> inline void IntervalTree::IntervalTreeNode_2<TKey, TValue>::_ctor(::System::Collections::Generic::IComparer_1<TKey>* comparer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::IntervalTreeNode_2<TKey, TValue>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<TKey>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, comparer);
}
template <typename TKey, typename TValue>
inline ::IntervalTree::IntervalTreeNode_2<TKey, TValue>*
IntervalTree::IntervalTreeNode_2<TKey, TValue>::New_ctor(::System::Collections::Generic::IList_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>* items,
                                                         ::System::Collections::Generic::IComparer_1<TKey>* comparer) {
  return THROW_UNLESS(::il2cpp_utils::New<::IntervalTree::IntervalTreeNode_2<TKey, TValue>*>(items, comparer));
}
template <typename TKey, typename TValue>
inline void IntervalTree::IntervalTreeNode_2<TKey, TValue>::_ctor(::System::Collections::Generic::IList_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>* items,
                                                                  ::System::Collections::Generic::IComparer_1<TKey>* comparer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::IntervalTreeNode_2<TKey, TValue>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<TKey>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, items, comparer);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::IEnumerable_1<TValue>* IntervalTree::IntervalTreeNode_2<TKey, TValue>::Query(TKey value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::IntervalTreeNode_2<TKey, TValue>*>::get(), "Query", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TValue>*, false>(this, ___internal_method, value);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::List_1<TValue>* IntervalTree::IntervalTreeNode_2<TKey, TValue>::Query(TKey from, TKey to) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::IntervalTreeNode_2<TKey, TValue>*>::get(), "Query", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<TValue>*, false>(this, ___internal_method, from, to);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::IEnumerable_1<TValue>* IntervalTree::IntervalTreeNode_2<TKey, TValue>::QueryClosestPrev(TKey value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::IntervalTreeNode_2<TKey, TValue>*>::get(), "QueryClosestPrev",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TValue>*, false>(this, ___internal_method, value);
}
template <typename TKey, typename TValue> inline ::IntervalTree::IntervalTreeNode_2<TKey, TValue>* IntervalTree::IntervalTreeNode_2<TKey, TValue>::GetClosestNodeTo(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::IntervalTreeNode_2<TKey, TValue>*>::get(), "GetClosestNodeTo",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<::IntervalTree::IntervalTreeNode_2<TKey, TValue>*, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue>
inline int32_t
IntervalTree::IntervalTreeNode_2<TKey, TValue>::System_Collections_Generic_IComparer_IntervalTree_RangeValuePair_TKey_TValue___Compare(::IntervalTree::RangeValuePair_2<TKey, TValue> x,
                                                                                                                                       ::IntervalTree::RangeValuePair_2<TKey, TValue> y) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::IntervalTreeNode_2<TKey, TValue>*>::get(),
                                               "System.Collections.Generic.IComparer<IntervalTree.RangeValuePair<TKey,TValue>>.Compare", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::IntervalTree::RangeValuePair_2<TKey, TValue>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::IntervalTree::RangeValuePair_2<TKey, TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x, y);
}
template <typename TKey, typename TValue> inline TKey IntervalTree::IntervalTreeNode_2<TKey, TValue>::get_Max() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::IntervalTreeNode_2<TKey, TValue>*>::get(),
                                                                             "get_Max", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TKey, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline TKey IntervalTree::IntervalTreeNode_2<TKey, TValue>::get_Min() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::IntervalTreeNode_2<TKey, TValue>*>::get(),
                                                                             "get_Min", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TKey, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::IntervalTree::IntervalTreeNode_2<TKey, TValue>::IntervalTreeNode_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
