#pragma once
#include "System/zzzz__Enum_ParseFailureKind_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "System/zzzz__Enum_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Enum_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IConvertible_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Enum_ParseFailureKind_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::__Enum__EnumResult.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::__Enum__EnumResult::*)(bool)>(&::System::__Enum__EnumResult::Init)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x25e2a24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Enum__EnumResult>::get(), "Init", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__Enum__EnumResult.SetFailure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::__Enum__EnumResult::*)(::System::Exception*)>(&::System::__Enum__EnumResult::SetFailure)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x25e387c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Enum__EnumResult>::get(), "SetFailure", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__Enum__EnumResult.SetFailure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::__Enum__EnumResult::*)(::System::__Enum__ParseFailureKind, ::StringW)>(
    &::System::__Enum__EnumResult::SetFailure)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x25e327c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Enum__EnumResult>::get(), "SetFailure", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Enum__ParseFailureKind>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__Enum__EnumResult.SetFailure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::__Enum__EnumResult::*)(::System::__Enum__ParseFailureKind, ::StringW, ::System::Object*)>(
    &::System::__Enum__EnumResult::SetFailure)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x25e32b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Enum__EnumResult>::get(), "SetFailure", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Enum__ParseFailureKind>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__Enum__EnumResult.GetEnumParseException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::System::__Enum__EnumResult::*)()>(&::System::__Enum__EnumResult::GetEnumParseException)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x25e3100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Enum__EnumResult>::get(), "GetEnumParseException",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void System::__Enum__EnumResult::Init(bool canMethodThrow) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Enum__EnumResult>::get(), "Init", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, canMethodThrow);
}
inline void System::__Enum__EnumResult::SetFailure(::System::Exception* unhandledException) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Enum__EnumResult>::get(), "SetFailure", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unhandledException);
}
inline void System::__Enum__EnumResult::SetFailure(::System::__Enum__ParseFailureKind failure, ::StringW failureParameter) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Enum__EnumResult>::get(), "SetFailure", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Enum__ParseFailureKind>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, failure, failureParameter);
}
inline void System::__Enum__EnumResult::SetFailure(::System::__Enum__ParseFailureKind failure, ::StringW failureMessageID, ::System::Object* failureMessageFormatArgument) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Enum__EnumResult>::get(), "SetFailure", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Enum__ParseFailureKind>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, failure, failureMessageID, failureMessageFormatArgument);
}
inline ::System::Exception* System::__Enum__EnumResult::GetEnumParseException() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Enum__EnumResult>::get(), "GetEnumParseException",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "parsedEnum", ty: "::System::Object*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "canThrow", ty: "bool", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "m_failure", ty: "::System::__Enum__ParseFailureKind", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_failureMessageID", ty: "::StringW", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "m_failureParameter", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_failureMessageFormatArgument", ty: "::System::Object*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_innerException", ty: "::System::Exception*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::System::__Enum__EnumResult::__Enum__EnumResult(::System::Object* parsedEnum, bool canThrow, ::System::__Enum__ParseFailureKind m_failure, ::StringW m_failureMessageID,
                                                           ::StringW m_failureParameter, ::System::Object* m_failureMessageFormatArgument, ::System::Exception* m_innerException) noexcept {
  this->parsedEnum = parsedEnum;
  this->canThrow = canThrow;
  this->m_failure = m_failure;
  this->m_failureMessageID = m_failureMessageID;
  this->m_failureParameter = m_failureParameter;
  this->m_failureMessageFormatArgument = m_failureMessageFormatArgument;
  this->m_innerException = m_innerException;
}
// Ctor Parameters []
constexpr ::System::__Enum__EnumResult::__Enum__EnumResult() {}
//  Writing Method size for method: ::System::__Enum__ValuesAndNames._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::__Enum__ValuesAndNames::*)(::ArrayW<uint64_t, ::Array<uint64_t>*>, ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::System::__Enum__ValuesAndNames::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x25e1ec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Enum__ValuesAndNames*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t, ::Array<uint64_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& System::__Enum__ValuesAndNames::__get_Values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Values;
}
constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& System::__Enum__ValuesAndNames::__get_Values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Values;
}
constexpr void System::__Enum__ValuesAndNames::__set_Values(::ArrayW<uint64_t, ::Array<uint64_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Values)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::__Enum__ValuesAndNames::__get_Names() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Names;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::__Enum__ValuesAndNames::__get_Names() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Names;
}
constexpr void System::__Enum__ValuesAndNames::__set_Names(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Names)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::__Enum__ValuesAndNames* System::__Enum__ValuesAndNames::New_ctor(::ArrayW<uint64_t, ::Array<uint64_t>*> values, ::ArrayW<::StringW, ::Array<::StringW>*> names) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::__Enum__ValuesAndNames*>(values, names));
}
inline void System::__Enum__ValuesAndNames::_ctor(::ArrayW<uint64_t, ::Array<uint64_t>*> values, ::ArrayW<::StringW, ::Array<::StringW>*> names) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Enum__ValuesAndNames*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t, ::Array<uint64_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values, names);
}
// Ctor Parameters []
constexpr ::System::__Enum__ValuesAndNames::__Enum__ValuesAndNames() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
