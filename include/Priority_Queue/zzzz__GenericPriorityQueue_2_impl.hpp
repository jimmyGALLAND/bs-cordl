#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Priority_Queue/zzzz__GenericPriorityQueue_2_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "Priority_Queue/zzzz__IPriorityQueue_2_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "Priority_Queue/zzzz__IFixedSizePriorityQueue_2_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "Priority_Queue/zzzz__GenericPriorityQueue_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TItem>"
template <typename TItem, typename TPriority>
constexpr Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25<TItem, TPriority>::operator ::System::Collections::Generic::IEnumerator_1<TItem>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TItem>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TItem, typename TPriority> constexpr Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25<TItem, TPriority>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TItem, typename TPriority> constexpr Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25<TItem, TPriority>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template <typename TItem, typename TPriority> constexpr int32_t& Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25<TItem, TPriority>::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
template <typename TItem, typename TPriority> constexpr int32_t const& Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25<TItem, TPriority>::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
template <typename TItem, typename TPriority> constexpr void Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25<TItem, TPriority>::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____1__state = value;
}
template <typename TItem, typename TPriority> constexpr TItem& Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25<TItem, TPriority>::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
template <typename TItem, typename TPriority> constexpr TItem const& Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25<TItem, TPriority>::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
template <typename TItem, typename TPriority> constexpr void Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25<TItem, TPriority>::__set___2__current(TItem value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TItem, typename TPriority>
constexpr ::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*& Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25<TItem, TPriority>::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____4__this;
}
template <typename TItem, typename TPriority>
constexpr ::cordl_internals::to_const_pointer<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*> const&
Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25<TItem, TPriority>::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____4__this;
}
template <typename TItem, typename TPriority>
constexpr void Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25<TItem, TPriority>::__set___4__this(::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TItem, typename TPriority> constexpr int32_t& Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25<TItem, TPriority>::__get__i_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____i_5__2;
}
template <typename TItem, typename TPriority> constexpr int32_t const& Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25<TItem, TPriority>::__get__i_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____i_5__2;
}
template <typename TItem, typename TPriority> constexpr void Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25<TItem, TPriority>::__set__i_5__2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____i_5__2 = value;
}
template <typename TItem, typename TPriority>
inline ::Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25<TItem, TPriority>*
Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25<TItem, TPriority>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25<TItem, TPriority>*>(__1__state));
}
template <typename TItem, typename TPriority> inline void Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25<TItem, TPriority>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25<TItem, TPriority>*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25<TItem, TPriority>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25<TItem, TPriority>*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline bool Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25<TItem, TPriority>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25<TItem, TPriority>*>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TItem, typename TPriority>
inline TItem Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25<TItem, TPriority>::System_Collections_Generic_IEnumerator_TItem__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25<TItem, TPriority>*>::get(),
                                               "System.Collections.Generic.IEnumerator<TItem>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TItem, false>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25<TItem, TPriority>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25<TItem, TPriority>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline ::System::Object* Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25<TItem, TPriority>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25<TItem, TPriority>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TItem, typename TPriority> constexpr ::Priority_Queue::__GenericPriorityQueue_2___GetEnumerator_d__25<TItem, TPriority>::__GenericPriorityQueue_2___GetEnumerator_d__25() {}
/// @brief Convert operator to "::Priority_Queue::IFixedSizePriorityQueue_2<TItem,TPriority>"
template <typename TItem, typename TPriority> constexpr Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::operator ::Priority_Queue::IFixedSizePriorityQueue_2<TItem, TPriority>*() noexcept {
  return static_cast<::Priority_Queue::IFixedSizePriorityQueue_2<TItem, TPriority>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Priority_Queue::IPriorityQueue_2<TItem,TPriority>"
template <typename TItem, typename TPriority> constexpr Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::operator ::Priority_Queue::IPriorityQueue_2<TItem, TPriority>*() noexcept {
  return static_cast<::Priority_Queue::IPriorityQueue_2<TItem, TPriority>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TItem>"
template <typename TItem, typename TPriority> constexpr Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::operator ::System::Collections::Generic::IEnumerable_1<TItem>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TItem>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TItem, typename TPriority> constexpr Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
template <typename TItem, typename TPriority> constexpr int32_t& Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::__get__numNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____numNodes;
}
template <typename TItem, typename TPriority> constexpr int32_t const& Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::__get__numNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____numNodes;
}
template <typename TItem, typename TPriority> constexpr void Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::__set__numNodes(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____numNodes = value;
}
template <typename TItem, typename TPriority> constexpr ::ArrayW<TItem, ::Array<TItem>*>& Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::__get__nodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____nodes;
}
template <typename TItem, typename TPriority> constexpr ::ArrayW<TItem, ::Array<TItem>*> const& Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::__get__nodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____nodes;
}
template <typename TItem, typename TPriority> constexpr void Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::__set__nodes(::ArrayW<TItem, ::Array<TItem>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nodes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TItem, typename TPriority> constexpr int64_t& Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::__get__numNodesEverEnqueued() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____numNodesEverEnqueued;
}
template <typename TItem, typename TPriority> constexpr int64_t const& Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::__get__numNodesEverEnqueued() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____numNodesEverEnqueued;
}
template <typename TItem, typename TPriority> constexpr void Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::__set__numNodesEverEnqueued(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____numNodesEverEnqueued = value;
}
template <typename TItem, typename TPriority> constexpr ::System::Comparison_1<TPriority>*& Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::__get__comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____comparer;
}
template <typename TItem, typename TPriority>
constexpr ::cordl_internals::to_const_pointer<::System::Comparison_1<TPriority>*> const& Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::__get__comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____comparer;
}
template <typename TItem, typename TPriority> constexpr void Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::__set__comparer(::System::Comparison_1<TPriority>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____comparer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TItem, typename TPriority> inline ::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>* Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::New_ctor(int32_t maxNodes) {
  return THROW_UNLESS(::il2cpp_utils::New<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>(maxNodes));
}
template <typename TItem, typename TPriority> inline void Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::_ctor(int32_t maxNodes) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxNodes);
}
template <typename TItem, typename TPriority>
inline ::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*
Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::New_ctor(int32_t maxNodes, ::System::Collections::Generic::IComparer_1<TPriority>* comparer) {
  return THROW_UNLESS(::il2cpp_utils::New<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>(maxNodes, comparer));
}
template <typename TItem, typename TPriority>
inline void Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::_ctor(int32_t maxNodes, ::System::Collections::Generic::IComparer_1<TPriority>* comparer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<TPriority>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxNodes, comparer);
}
template <typename TItem, typename TPriority>
inline ::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>* Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::New_ctor(int32_t maxNodes, ::System::Comparison_1<TPriority>* comparer) {
  return THROW_UNLESS(::il2cpp_utils::New<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>(maxNodes, comparer));
}
template <typename TItem, typename TPriority> inline void Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::_ctor(int32_t maxNodes, ::System::Comparison_1<TPriority>* comparer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Comparison_1<TPriority>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxNodes, comparer);
}
template <typename TItem, typename TPriority> inline int32_t Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>::get(),
                                                                             "get_Count", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline int32_t Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::get_MaxSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>::get(),
                                                                             "get_MaxSize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>::get(),
                                                                             "Clear", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline bool Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::Contains(TItem node) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>::get(), "Contains",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, node);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::Enqueue(TItem node, TPriority priority) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>::get(), "Enqueue", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TPriority>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, priority);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::CascadeUp(TItem node) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>::get(), "CascadeUp",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::CascadeDown(TItem node) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>::get(), "CascadeDown",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
template <typename TItem, typename TPriority> inline bool Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::HasHigherPriority(TItem higher, TItem lower) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>::get(), "HasHigherPriority", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, higher, lower);
}
template <typename TItem, typename TPriority> inline TItem Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::Dequeue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>::get(),
                                                                             "Dequeue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TItem, false>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::Resize(int32_t maxNodes) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>::get(), "Resize",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxNodes);
}
template <typename TItem, typename TPriority> inline TItem Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::get_First() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>::get(),
                                                                             "get_First", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TItem, false>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::UpdatePriority(TItem node, TPriority priority) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>::get(), "UpdatePriority", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TPriority>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, priority);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::OnNodeUpdated(TItem node) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>::get(), "OnNodeUpdated",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::Remove(TItem node) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>::get(), "Remove",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::ResetNode(TItem node) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>::get(), "ResetNode",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
template <typename TItem, typename TPriority> inline ::System::Collections::Generic::IEnumerator_1<TItem>* Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>::get(),
                                                                             "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TItem>*, false>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline ::System::Collections::IEnumerator* Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>::get(),
                                                                             "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline bool Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::IsValidQueue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>*>::get(),
                                                                             "IsValidQueue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TItem, typename TPriority> constexpr ::Priority_Queue::GenericPriorityQueue_2<TItem, TPriority>::GenericPriorityQueue_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
