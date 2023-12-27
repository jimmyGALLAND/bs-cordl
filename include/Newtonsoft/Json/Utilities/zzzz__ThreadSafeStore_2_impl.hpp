#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ThreadSafeStore_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TKey, typename TValue> constexpr ::System::Object*& Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey, TValue>::__get__lock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lock;
}
template <typename TKey, typename TValue> constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey, TValue>::__get__lock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lock;
}
template <typename TKey, typename TValue> constexpr void Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey, TValue>::__set__lock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::Dictionary_2<TKey, TValue>*& Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey, TValue>::__get__store() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____store;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TKey, TValue>*> const& Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey, TValue>::__get__store() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____store;
}
template <typename TKey, typename TValue> constexpr void Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey, TValue>::__set__store(::System::Collections::Generic::Dictionary_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____store)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue> constexpr ::System::Func_2<TKey, TValue>*& Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey, TValue>::__get__creator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____creator;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TKey, TValue>*> const& Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey, TValue>::__get__creator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____creator;
}
template <typename TKey, typename TValue> constexpr void Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey, TValue>::__set__creator(::System::Func_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____creator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue>
inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey, TValue>* Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey, TValue>::New_ctor(::System::Func_2<TKey, TValue>* creator) {
  return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey, TValue>*>(creator));
}
template <typename TKey, typename TValue> inline void Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey, TValue>::_ctor(::System::Func_2<TKey, TValue>* creator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey, TValue>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TKey, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, creator);
}
template <typename TKey, typename TValue> inline TValue Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey, TValue>::Get(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey, TValue>*>::get(), "Get",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline TValue Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey, TValue>::AddValue(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey, TValue>*>::get(), "AddValue",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, key);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey, TValue>::ThreadSafeStore_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
