#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__PropertyNameTable_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__PropertyNameTable_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::__PropertyNameTable__Entry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Utilities::__PropertyNameTable__Entry::*)(
    ::StringW, int32_t, ::Newtonsoft::Json::Utilities::__PropertyNameTable__Entry*)>(&::Newtonsoft::Json::Utilities::__PropertyNameTable__Entry::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x265a378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::__PropertyNameTable__Entry*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Utilities::__PropertyNameTable__Entry*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Newtonsoft::Json::Utilities::__PropertyNameTable__Entry::__get_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Value;
}
constexpr ::StringW const& Newtonsoft::Json::Utilities::__PropertyNameTable__Entry::__get_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Value;
}
constexpr void Newtonsoft::Json::Utilities::__PropertyNameTable__Entry::__set_Value(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Newtonsoft::Json::Utilities::__PropertyNameTable__Entry::__get_HashCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___HashCode;
}
constexpr int32_t const& Newtonsoft::Json::Utilities::__PropertyNameTable__Entry::__get_HashCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___HashCode;
}
constexpr void Newtonsoft::Json::Utilities::__PropertyNameTable__Entry::__set_HashCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___HashCode = value;
}
constexpr ::Newtonsoft::Json::Utilities::__PropertyNameTable__Entry*& Newtonsoft::Json::Utilities::__PropertyNameTable__Entry::__get_Next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Next;
}
constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Utilities::__PropertyNameTable__Entry*> const& Newtonsoft::Json::Utilities::__PropertyNameTable__Entry::__get_Next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Next;
}
constexpr void Newtonsoft::Json::Utilities::__PropertyNameTable__Entry::__set_Next(::Newtonsoft::Json::Utilities::__PropertyNameTable__Entry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Newtonsoft::Json::Utilities::__PropertyNameTable__Entry* Newtonsoft::Json::Utilities::__PropertyNameTable__Entry::New_ctor(::StringW value, int32_t hashCode,
                                                                                                                                    ::Newtonsoft::Json::Utilities::__PropertyNameTable__Entry* next) {
  return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::Utilities::__PropertyNameTable__Entry*>(value, hashCode, next));
}
inline void Newtonsoft::Json::Utilities::__PropertyNameTable__Entry::_ctor(::StringW value, int32_t hashCode, ::Newtonsoft::Json::Utilities::__PropertyNameTable__Entry* next) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::__PropertyNameTable__Entry*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Utilities::__PropertyNameTable__Entry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, hashCode, next);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::__PropertyNameTable__Entry::__PropertyNameTable__Entry() {}
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::PropertyNameTable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Utilities::PropertyNameTable::*)()>(
    &::Newtonsoft::Json::Utilities::PropertyNameTable::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2659e18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::PropertyNameTable*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::PropertyNameTable.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::Newtonsoft::Json::Utilities::PropertyNameTable::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(&::Newtonsoft::Json::Utilities::PropertyNameTable::Get)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2659e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::PropertyNameTable*>::get(), "Get", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::PropertyNameTable.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Utilities::PropertyNameTable::*)(::StringW)>(
    &::Newtonsoft::Json::Utilities::PropertyNameTable::Add)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x265a0b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::PropertyNameTable*>::get(), "Add", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::PropertyNameTable.AddEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Utilities::PropertyNameTable::*)(::StringW, int32_t)>(
    &::Newtonsoft::Json::Utilities::PropertyNameTable::AddEntry)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x265a26c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::PropertyNameTable*>::get(), "AddEntry", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::PropertyNameTable.Grow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Utilities::PropertyNameTable::*)()>(
    &::Newtonsoft::Json::Utilities::PropertyNameTable::Grow)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x265a3b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::PropertyNameTable*>::get(), "Grow",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::PropertyNameTable.TextEquals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::Newtonsoft::Json::Utilities::PropertyNameTable::TextEquals)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x265a008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::PropertyNameTable*>::get(), "TextEquals", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& Newtonsoft::Json::Utilities::PropertyNameTable::__get__count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____count;
}
constexpr int32_t const& Newtonsoft::Json::Utilities::PropertyNameTable::__get__count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____count;
}
constexpr void Newtonsoft::Json::Utilities::PropertyNameTable::__set__count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____count = value;
}
constexpr ::ArrayW<::Newtonsoft::Json::Utilities::__PropertyNameTable__Entry*, ::Array<::Newtonsoft::Json::Utilities::__PropertyNameTable__Entry*>*>&
Newtonsoft::Json::Utilities::PropertyNameTable::__get__entries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____entries;
}
constexpr ::ArrayW<::Newtonsoft::Json::Utilities::__PropertyNameTable__Entry*, ::Array<::Newtonsoft::Json::Utilities::__PropertyNameTable__Entry*>*> const&
Newtonsoft::Json::Utilities::PropertyNameTable::__get__entries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____entries;
}
constexpr void Newtonsoft::Json::Utilities::PropertyNameTable::__set__entries(
    ::ArrayW<::Newtonsoft::Json::Utilities::__PropertyNameTable__Entry*, ::Array<::Newtonsoft::Json::Utilities::__PropertyNameTable__Entry*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____entries)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Newtonsoft::Json::Utilities::PropertyNameTable::__get__mask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____mask;
}
constexpr int32_t const& Newtonsoft::Json::Utilities::PropertyNameTable::__get__mask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____mask;
}
constexpr void Newtonsoft::Json::Utilities::PropertyNameTable::__set__mask(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____mask = value;
}
inline void Newtonsoft::Json::Utilities::PropertyNameTable::setStaticF_HashCodeRandomizer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "HashCodeRandomizer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::PropertyNameTable*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Newtonsoft::Json::Utilities::PropertyNameTable::getStaticF_HashCodeRandomizer() {
  return ::cordl_internals::getStaticField<int32_t, "HashCodeRandomizer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::PropertyNameTable*>::get>();
}
inline ::Newtonsoft::Json::Utilities::PropertyNameTable* Newtonsoft::Json::Utilities::PropertyNameTable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::Utilities::PropertyNameTable*>());
}
inline void Newtonsoft::Json::Utilities::PropertyNameTable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::PropertyNameTable*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Utilities::PropertyNameTable::Get(::ArrayW<char16_t, ::Array<char16_t>*> key, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::PropertyNameTable*>::get(), "Get", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, key, start, length);
}
inline ::StringW Newtonsoft::Json::Utilities::PropertyNameTable::Add(::StringW key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::PropertyNameTable*>::get(), "Add", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, key);
}
inline ::StringW Newtonsoft::Json::Utilities::PropertyNameTable::AddEntry(::StringW str, int32_t hashCode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::PropertyNameTable*>::get(), "AddEntry", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, str, hashCode);
}
inline void Newtonsoft::Json::Utilities::PropertyNameTable::Grow() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::PropertyNameTable*>::get(), "Grow",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Utilities::PropertyNameTable::TextEquals(::StringW str1, ::ArrayW<char16_t, ::Array<char16_t>*> str2, int32_t str2Start, int32_t str2Length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::PropertyNameTable*>::get(), "TextEquals", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str1, str2, str2Start, str2Length);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::PropertyNameTable::PropertyNameTable() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
