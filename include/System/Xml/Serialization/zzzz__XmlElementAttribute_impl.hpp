#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlElementAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlElementAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlElementAttribute::*)(::StringW, ::System::Type*)>(
    &::System::Xml::Serialization::XmlElementAttribute::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x28abef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlElementAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Serialization::XmlElementAttribute::__get_elementName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___elementName;
}
constexpr ::StringW const& System::Xml::Serialization::XmlElementAttribute::__get_elementName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___elementName;
}
constexpr void System::Xml::Serialization::XmlElementAttribute::__set_elementName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___elementName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& System::Xml::Serialization::XmlElementAttribute::__get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___type;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& System::Xml::Serialization::XmlElementAttribute::__get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___type;
}
constexpr void System::Xml::Serialization::XmlElementAttribute::__set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::Serialization::XmlElementAttribute::__get_order() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___order;
}
constexpr int32_t const& System::Xml::Serialization::XmlElementAttribute::__get_order() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___order;
}
constexpr void System::Xml::Serialization::XmlElementAttribute::__set_order(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___order = value;
}
inline ::System::Xml::Serialization::XmlElementAttribute* System::Xml::Serialization::XmlElementAttribute::New_ctor(::StringW elementName, ::System::Type* type) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Serialization::XmlElementAttribute*>(elementName, type));
}
inline void System::Xml::Serialization::XmlElementAttribute::_ctor(::StringW elementName, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlElementAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, elementName, type);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlElementAttribute::XmlElementAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
