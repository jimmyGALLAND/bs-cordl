#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlSchemaProviderAttribute_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlSchemaProviderAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSchemaProviderAttribute::*)(::StringW)>(
    &::System::Xml::Serialization::XmlSchemaProviderAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28abf5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSchemaProviderAttribute*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSchemaProviderAttribute.set_IsAny
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSchemaProviderAttribute::*)(bool)>(
    &::System::Xml::Serialization::XmlSchemaProviderAttribute::set_IsAny)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28abf84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSchemaProviderAttribute*>::get(), "set_IsAny",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Serialization::XmlSchemaProviderAttribute::__get__methodName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____methodName;
}
constexpr ::StringW const& System::Xml::Serialization::XmlSchemaProviderAttribute::__get__methodName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____methodName;
}
constexpr void System::Xml::Serialization::XmlSchemaProviderAttribute::__set__methodName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____methodName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::Serialization::XmlSchemaProviderAttribute::__get__isAny() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____isAny;
}
constexpr bool const& System::Xml::Serialization::XmlSchemaProviderAttribute::__get__isAny() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____isAny;
}
constexpr void System::Xml::Serialization::XmlSchemaProviderAttribute::__set__isAny(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____isAny = value;
}
inline ::System::Xml::Serialization::XmlSchemaProviderAttribute* System::Xml::Serialization::XmlSchemaProviderAttribute::New_ctor(::StringW methodName) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Serialization::XmlSchemaProviderAttribute*>(methodName));
}
inline void System::Xml::Serialization::XmlSchemaProviderAttribute::_ctor(::StringW methodName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSchemaProviderAttribute*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, methodName);
}
inline void System::Xml::Serialization::XmlSchemaProviderAttribute::set_IsAny(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSchemaProviderAttribute*>::get(), "set_IsAny",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlSchemaProviderAttribute::XmlSchemaProviderAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
