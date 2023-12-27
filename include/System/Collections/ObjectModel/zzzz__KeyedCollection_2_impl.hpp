#pragma once
#include "System/Collections/ObjectModel/zzzz__Collection_1_impl.hpp"
#include "System/Collections/ObjectModel/zzzz__KeyedCollection_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
template <typename TKey, typename TItem> constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::__get_comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___comparer;
}
template <typename TKey, typename TItem>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<TKey>*> const&
System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::__get_comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___comparer;
}
template <typename TKey, typename TItem>
constexpr void System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::__set_comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___comparer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TItem> constexpr ::System::Collections::Generic::Dictionary_2<TKey, TItem>*& System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::__get_dict() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___dict;
}
template <typename TKey, typename TItem>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TKey, TItem>*> const& System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::__get_dict() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___dict;
}
template <typename TKey, typename TItem> constexpr void System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::__set_dict(::System::Collections::Generic::Dictionary_2<TKey, TItem>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dict)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TItem> constexpr int32_t& System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::__get_keyCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___keyCount;
}
template <typename TKey, typename TItem> constexpr int32_t const& System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::__get_keyCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___keyCount;
}
template <typename TKey, typename TItem> constexpr void System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::__set_keyCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___keyCount = value;
}
template <typename TKey, typename TItem> constexpr int32_t& System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::__get_threshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___threshold;
}
template <typename TKey, typename TItem> constexpr int32_t const& System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::__get_threshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___threshold;
}
template <typename TKey, typename TItem> constexpr void System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::__set_threshold(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___threshold = value;
}
template <typename TKey, typename TItem> inline ::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>* System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>());
}
template <typename TKey, typename TItem> inline void System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TItem>
inline ::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*
System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::New_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>(comparer));
}
template <typename TKey, typename TItem> inline void System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TKey>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, comparer);
}
template <typename TKey, typename TItem>
inline ::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*
System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::New_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer, int32_t dictionaryCreationThreshold) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>(comparer, dictionaryCreationThreshold));
}
template <typename TKey, typename TItem>
inline void System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer, int32_t dictionaryCreationThreshold) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TKey>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, comparer, dictionaryCreationThreshold);
}
template <typename TKey, typename TItem> inline ::System::Collections::Generic::List_1<TItem>* System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::get_Items() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>::get(), "get_Items",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<TItem>*, false>(this, ___internal_method);
}
template <typename TKey, typename TItem> inline TItem System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::get_Item(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>::get(), "get_Item",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<TItem, false>(this, ___internal_method, key);
}
template <typename TKey, typename TItem> inline bool System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::Contains(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>::get(), "Contains",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
template <typename TKey, typename TItem> inline bool System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::TryGetValue(TKey key, ByRef<TItem> item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>::get(), "TryGetValue", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TItem>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, item);
}
template <typename TKey, typename TItem> inline ::System::Collections::Generic::IDictionary_2<TKey, TItem>* System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::get_Dictionary() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>::get(), "get_Dictionary",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<TKey, TItem>*, false>(this, ___internal_method);
}
template <typename TKey, typename TItem> inline void System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::ClearItems() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>::get(), "ClearItems",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TItem> inline TKey System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::GetKeyForItem(TItem item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>::get(), "GetKeyForItem",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get() })));
  return ::cordl_internals::RunMethodRethrow<TKey, false>(this, ___internal_method, item);
}
template <typename TKey, typename TItem> inline void System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::InsertItem(int32_t index, TItem item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>::get(), "InsertItem", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, item);
}
template <typename TKey, typename TItem> inline void System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::RemoveItem(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>::get(), "RemoveItem",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
template <typename TKey, typename TItem> inline void System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::SetItem(int32_t index, TItem item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>::get(), "SetItem", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, item);
}
template <typename TKey, typename TItem> inline void System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::AddKey(TKey key, TItem item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>::get(), "AddKey", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, item);
}
template <typename TKey, typename TItem> inline void System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::CreateDictionary() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>::get(), "CreateDictionary",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TItem> inline void System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::RemoveKey(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>::get(), "RemoveKey",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
// Ctor Parameters []
template <typename TKey, typename TItem> constexpr ::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::KeyedCollection_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
