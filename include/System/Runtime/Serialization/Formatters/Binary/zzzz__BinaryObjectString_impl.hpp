#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryObjectString_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryParser_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryWriter_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24c230c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString.Set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::*)(int32_t, ::StringW)>(
    &::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::Set)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24c2314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString*>::get(), "Set", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::*)(
    ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*)>(&::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::Write)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x24c2320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString*>::get(), "Write", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::*)(
    ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*)>(&::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::Read)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x24c2390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString*>::get(), "Read", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString.Dump
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::Dump)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24c23d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString*>::get(), "Dump",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::__get_objectId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___objectId;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::__get_objectId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___objectId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::__set_objectId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___objectId = value;
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::__get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___value;
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::__get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___value;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::__set_value(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString* System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString*>());
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::Set(int32_t objectId, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString*>::get(), "Set", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, objectId, value);
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString*>::get(), "Write", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sout);
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString*>::get(), "Read", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::Dump() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString*>::get(), "Dump",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::BinaryObjectString() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
