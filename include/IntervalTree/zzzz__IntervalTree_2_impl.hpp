#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "IntervalTree/zzzz__IntervalTree_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "IntervalTree/zzzz__RangeValuePair_2_def.hpp"
#include "IntervalTree/zzzz__IntervalTree_2_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "IntervalTree/zzzz__IntervalTreeNode_2_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "IntervalTree/zzzz__IIntervalTree_2_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
template <typename TKey, typename TValue> inline void IntervalTree::__IntervalTree_2____c<TKey, TValue>::setStaticF___9(::IntervalTree::__IntervalTree_2____c<TKey, TValue>* value) {
  ::cordl_internals::setStaticField<::IntervalTree::__IntervalTree_2____c<TKey, TValue>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::__IntervalTree_2____c<TKey, TValue>*>::get>(
      std::forward<::IntervalTree::__IntervalTree_2____c<TKey, TValue>*>(value));
}
template <typename TKey, typename TValue> inline ::IntervalTree::__IntervalTree_2____c<TKey, TValue>* IntervalTree::__IntervalTree_2____c<TKey, TValue>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::IntervalTree::__IntervalTree_2____c<TKey, TValue>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::__IntervalTree_2____c<TKey, TValue>*>::get>();
}
template <typename TKey, typename TValue>
inline void IntervalTree::__IntervalTree_2____c<TKey, TValue>::setStaticF___9__10_0(::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TValue>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TValue>*, "<>9__10_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::__IntervalTree_2____c<TKey, TValue>*>::get>(
      std::forward<::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TValue>*>(value));
}
template <typename TKey, typename TValue> inline ::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TValue>* IntervalTree::__IntervalTree_2____c<TKey, TValue>::getStaticF___9__10_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TValue>*, "<>9__10_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::__IntervalTree_2____c<TKey, TValue>*>::get>();
}
template <typename TKey, typename TValue> inline ::IntervalTree::__IntervalTree_2____c<TKey, TValue>* IntervalTree::__IntervalTree_2____c<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::IntervalTree::__IntervalTree_2____c<TKey, TValue>*>());
}
template <typename TKey, typename TValue> inline void IntervalTree::__IntervalTree_2____c<TKey, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::__IntervalTree_2____c<TKey, TValue>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline TValue IntervalTree::__IntervalTree_2____c<TKey, TValue>::_get_Values_b__10_0(::IntervalTree::RangeValuePair_2<TKey, TValue> i) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::__IntervalTree_2____c<TKey, TValue>*>::get(), "<get_Values>b__10_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::IntervalTree::RangeValuePair_2<TKey, TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, i);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::IntervalTree::__IntervalTree_2____c<TKey, TValue>::__IntervalTree_2____c() {}
template <typename TKey, typename TValue> constexpr TValue& IntervalTree::__IntervalTree_2____c__DisplayClass19_0<TKey, TValue>::__get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___value;
}
template <typename TKey, typename TValue> constexpr TValue const& IntervalTree::__IntervalTree_2____c__DisplayClass19_0<TKey, TValue>::__get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___value;
}
template <typename TKey, typename TValue> constexpr void IntervalTree::__IntervalTree_2____c__DisplayClass19_0<TKey, TValue>::__set_value(TValue value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue>
inline ::IntervalTree::__IntervalTree_2____c__DisplayClass19_0<TKey, TValue>* IntervalTree::__IntervalTree_2____c__DisplayClass19_0<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::IntervalTree::__IntervalTree_2____c__DisplayClass19_0<TKey, TValue>*>());
}
template <typename TKey, typename TValue> inline void IntervalTree::__IntervalTree_2____c__DisplayClass19_0<TKey, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::__IntervalTree_2____c__DisplayClass19_0<TKey, TValue>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool IntervalTree::__IntervalTree_2____c__DisplayClass19_0<TKey, TValue>::_Remove_b__0(::IntervalTree::RangeValuePair_2<TKey, TValue> l) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::__IntervalTree_2____c__DisplayClass19_0<TKey, TValue>*>::get(), "<Remove>b__0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::IntervalTree::RangeValuePair_2<TKey, TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, l);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::IntervalTree::__IntervalTree_2____c__DisplayClass19_0<TKey, TValue>::__IntervalTree_2____c__DisplayClass19_0() {}
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::IEnumerable_1<TValue>*& IntervalTree::__IntervalTree_2____c__DisplayClass20_0<TKey, TValue>::__get_items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___items;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TValue>*> const& IntervalTree::__IntervalTree_2____c__DisplayClass20_0<TKey, TValue>::__get_items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___items;
}
template <typename TKey, typename TValue>
constexpr void IntervalTree::__IntervalTree_2____c__DisplayClass20_0<TKey, TValue>::__set_items(::System::Collections::Generic::IEnumerable_1<TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___items)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue>
inline ::IntervalTree::__IntervalTree_2____c__DisplayClass20_0<TKey, TValue>* IntervalTree::__IntervalTree_2____c__DisplayClass20_0<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::IntervalTree::__IntervalTree_2____c__DisplayClass20_0<TKey, TValue>*>());
}
template <typename TKey, typename TValue> inline void IntervalTree::__IntervalTree_2____c__DisplayClass20_0<TKey, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::__IntervalTree_2____c__DisplayClass20_0<TKey, TValue>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool IntervalTree::__IntervalTree_2____c__DisplayClass20_0<TKey, TValue>::_Remove_b__0(::IntervalTree::RangeValuePair_2<TKey, TValue> l) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::__IntervalTree_2____c__DisplayClass20_0<TKey, TValue>*>::get(), "<Remove>b__0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::IntervalTree::RangeValuePair_2<TKey, TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, l);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::IntervalTree::__IntervalTree_2____c__DisplayClass20_0<TKey, TValue>::__IntervalTree_2____c__DisplayClass20_0() {}
template <typename TKey, typename TValue> constexpr ::IntervalTree::IntervalTree_2<TKey, TValue>*& IntervalTree::__IntervalTree_2____c__DisplayClass23_0<TKey, TValue>::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____4__this;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::IntervalTree::IntervalTree_2<TKey, TValue>*> const& IntervalTree::__IntervalTree_2____c__DisplayClass23_0<TKey, TValue>::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____4__this;
}
template <typename TKey, typename TValue> constexpr void IntervalTree::__IntervalTree_2____c__DisplayClass23_0<TKey, TValue>::__set___4__this(::IntervalTree::IntervalTree_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue> constexpr TKey& IntervalTree::__IntervalTree_2____c__DisplayClass23_0<TKey, TValue>::__get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___key;
}
template <typename TKey, typename TValue> constexpr TKey const& IntervalTree::__IntervalTree_2____c__DisplayClass23_0<TKey, TValue>::__get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___key;
}
template <typename TKey, typename TValue> constexpr void IntervalTree::__IntervalTree_2____c__DisplayClass23_0<TKey, TValue>::__set_key(TKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___key)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue>
inline ::IntervalTree::__IntervalTree_2____c__DisplayClass23_0<TKey, TValue>* IntervalTree::__IntervalTree_2____c__DisplayClass23_0<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::IntervalTree::__IntervalTree_2____c__DisplayClass23_0<TKey, TValue>*>());
}
template <typename TKey, typename TValue> inline void IntervalTree::__IntervalTree_2____c__DisplayClass23_0<TKey, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::__IntervalTree_2____c__DisplayClass23_0<TKey, TValue>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline bool IntervalTree::__IntervalTree_2____c__DisplayClass23_0<TKey, TValue>::_GetClosestPrevValueTo_b__0(::IntervalTree::RangeValuePair_2<TKey, TValue> pair) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::__IntervalTree_2____c__DisplayClass23_0<TKey, TValue>*>::get(), "<GetClosestPrevValueTo>b__0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::IntervalTree::RangeValuePair_2<TKey, TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pair);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::IntervalTree::__IntervalTree_2____c__DisplayClass23_0<TKey, TValue>::__IntervalTree_2____c__DisplayClass23_0() {}
template <typename TKey, typename TValue> constexpr ::IntervalTree::IntervalTree_2<TKey, TValue>*& IntervalTree::__IntervalTree_2____c__DisplayClass24_0<TKey, TValue>::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____4__this;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::IntervalTree::IntervalTree_2<TKey, TValue>*> const& IntervalTree::__IntervalTree_2____c__DisplayClass24_0<TKey, TValue>::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____4__this;
}
template <typename TKey, typename TValue> constexpr void IntervalTree::__IntervalTree_2____c__DisplayClass24_0<TKey, TValue>::__set___4__this(::IntervalTree::IntervalTree_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue> constexpr TKey& IntervalTree::__IntervalTree_2____c__DisplayClass24_0<TKey, TValue>::__get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___key;
}
template <typename TKey, typename TValue> constexpr TKey const& IntervalTree::__IntervalTree_2____c__DisplayClass24_0<TKey, TValue>::__get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___key;
}
template <typename TKey, typename TValue> constexpr void IntervalTree::__IntervalTree_2____c__DisplayClass24_0<TKey, TValue>::__set_key(TKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___key)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue>
inline ::IntervalTree::__IntervalTree_2____c__DisplayClass24_0<TKey, TValue>* IntervalTree::__IntervalTree_2____c__DisplayClass24_0<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::IntervalTree::__IntervalTree_2____c__DisplayClass24_0<TKey, TValue>*>());
}
template <typename TKey, typename TValue> inline void IntervalTree::__IntervalTree_2____c__DisplayClass24_0<TKey, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::__IntervalTree_2____c__DisplayClass24_0<TKey, TValue>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline bool IntervalTree::__IntervalTree_2____c__DisplayClass24_0<TKey, TValue>::_GetClosestNextValueTo_b__0(::IntervalTree::RangeValuePair_2<TKey, TValue> pair) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::__IntervalTree_2____c__DisplayClass24_0<TKey, TValue>*>::get(), "<GetClosestNextValueTo>b__0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::IntervalTree::RangeValuePair_2<TKey, TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pair);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::IntervalTree::__IntervalTree_2____c__DisplayClass24_0<TKey, TValue>::__IntervalTree_2____c__DisplayClass24_0() {}
/// @brief Convert operator to "::IntervalTree::IIntervalTree_2<TKey,TValue>"
template <typename TKey, typename TValue> constexpr IntervalTree::IntervalTree_2<TKey, TValue>::operator ::IntervalTree::IIntervalTree_2<TKey, TValue>*() noexcept {
  return static_cast<::IntervalTree::IIntervalTree_2<TKey, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::IntervalTree::RangeValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr IntervalTree::IntervalTree_2<TKey, TValue>::operator ::System::Collections::Generic::IEnumerable_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr IntervalTree::IntervalTree_2<TKey, TValue>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
template <typename TKey, typename TValue> constexpr ::IntervalTree::IntervalTreeNode_2<TKey, TValue>*& IntervalTree::IntervalTree_2<TKey, TValue>::__get_root() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___root;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::IntervalTree::IntervalTreeNode_2<TKey, TValue>*> const& IntervalTree::IntervalTree_2<TKey, TValue>::__get_root() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___root;
}
template <typename TKey, typename TValue> constexpr void IntervalTree::IntervalTree_2<TKey, TValue>::__set_root(::IntervalTree::IntervalTreeNode_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___root)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::List_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*& IntervalTree::IntervalTree_2<TKey, TValue>::__get_items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___items;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*> const&
IntervalTree::IntervalTree_2<TKey, TValue>::__get_items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___items;
}
template <typename TKey, typename TValue>
constexpr void IntervalTree::IntervalTree_2<TKey, TValue>::__set_items(::System::Collections::Generic::List_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___items)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::IComparer_1<TKey>*& IntervalTree::IntervalTree_2<TKey, TValue>::__get_comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___comparer;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<TKey>*> const& IntervalTree::IntervalTree_2<TKey, TValue>::__get_comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___comparer;
}
template <typename TKey, typename TValue> constexpr void IntervalTree::IntervalTree_2<TKey, TValue>::__set_comparer(::System::Collections::Generic::IComparer_1<TKey>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___comparer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue> constexpr bool& IntervalTree::IntervalTree_2<TKey, TValue>::__get_isInSync() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___isInSync;
}
template <typename TKey, typename TValue> constexpr bool const& IntervalTree::IntervalTree_2<TKey, TValue>::__get_isInSync() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___isInSync;
}
template <typename TKey, typename TValue> constexpr void IntervalTree::IntervalTree_2<TKey, TValue>::__set_isInSync(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___isInSync = value;
}
template <typename TKey, typename TValue> inline ::System::Collections::IEnumerator* IntervalTree::IntervalTree_2<TKey, TValue>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::IntervalTree_2<TKey, TValue>*>::get(),
                                                                             "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline TKey IntervalTree::IntervalTree_2<TKey, TValue>::get_Max() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::IntervalTree_2<TKey, TValue>*>::get(), "get_Max",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TKey, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline TKey IntervalTree::IntervalTree_2<TKey, TValue>::get_Min() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::IntervalTree_2<TKey, TValue>*>::get(), "get_Min",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TKey, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::IEnumerable_1<TValue>* IntervalTree::IntervalTree_2<TKey, TValue>::get_Values() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::IntervalTree_2<TKey, TValue>*>::get(), "get_Values",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TValue>*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline int32_t IntervalTree::IntervalTree_2<TKey, TValue>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::IntervalTree_2<TKey, TValue>*>::get(), "get_Count",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::IntervalTree::IntervalTree_2<TKey, TValue>* IntervalTree::IntervalTree_2<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::IntervalTree::IntervalTree_2<TKey, TValue>*>());
}
template <typename TKey, typename TValue> inline void IntervalTree::IntervalTree_2<TKey, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::IntervalTree_2<TKey, TValue>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::IntervalTree::IntervalTree_2<TKey, TValue>* IntervalTree::IntervalTree_2<TKey, TValue>::New_ctor(::System::Collections::Generic::IComparer_1<TKey>* comparer) {
  return THROW_UNLESS(::il2cpp_utils::New<::IntervalTree::IntervalTree_2<TKey, TValue>*>(comparer));
}
template <typename TKey, typename TValue> inline void IntervalTree::IntervalTree_2<TKey, TValue>::_ctor(::System::Collections::Generic::IComparer_1<TKey>* comparer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::IntervalTree_2<TKey, TValue>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<TKey>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, comparer);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::IEnumerable_1<TValue>* IntervalTree::IntervalTree_2<TKey, TValue>::Query(TKey value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::IntervalTree_2<TKey, TValue>*>::get(), "Query", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TValue>*, false>(this, ___internal_method, value);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::IEnumerable_1<TValue>* IntervalTree::IntervalTree_2<TKey, TValue>::Query(TKey from, TKey to) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::IntervalTree_2<TKey, TValue>*>::get(), "Query", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TValue>*, false>(this, ___internal_method, from, to);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::List_1<TValue>* IntervalTree::IntervalTree_2<TKey, TValue>::QueryWithCount(TKey from, TKey to) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::IntervalTree_2<TKey, TValue>*>::get(), "QueryWithCount", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<TValue>*, false>(this, ___internal_method, from, to);
}
template <typename TKey, typename TValue> inline void IntervalTree::IntervalTree_2<TKey, TValue>::Add(TKey from, TKey to, TValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::IntervalTree_2<TKey, TValue>*>::get(), "Add", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, from, to, value);
}
template <typename TKey, typename TValue> inline void IntervalTree::IntervalTree_2<TKey, TValue>::Remove(TValue value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::IntervalTree_2<TKey, TValue>*>::get(), "Remove", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TKey, typename TValue> inline void IntervalTree::IntervalTree_2<TKey, TValue>::Remove(::System::Collections::Generic::IEnumerable_1<TValue>* items) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::IntervalTree_2<TKey, TValue>*>::get(), "Remove", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, items);
}
template <typename TKey, typename TValue> inline void IntervalTree::IntervalTree_2<TKey, TValue>::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::IntervalTree_2<TKey, TValue>*>::get(), "Clear",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>* IntervalTree::IntervalTree_2<TKey, TValue>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::IntervalTree_2<TKey, TValue>*>::get(),
                                                                             "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline TValue IntervalTree::IntervalTree_2<TKey, TValue>::GetClosestPrevValueTo(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::IntervalTree_2<TKey, TValue>*>::get(), "GetClosestPrevValueTo",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline TValue IntervalTree::IntervalTree_2<TKey, TValue>::GetClosestNextValueTo(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::IntervalTree_2<TKey, TValue>*>::get(), "GetClosestNextValueTo",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline void IntervalTree::IntervalTree_2<TKey, TValue>::Rebuild() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::IntervalTree_2<TKey, TValue>*>::get(), "Rebuild",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::IntervalTree::IntervalTree_2<TKey, TValue>::IntervalTree_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
