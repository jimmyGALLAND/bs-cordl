#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeConvertorAttribute_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeConvertorAttribute.set_Method
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlTypeConvertorAttribute::*)(::StringW)>(
    &::System::Xml::Serialization::XmlTypeConvertorAttribute::set_Method)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28abea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeConvertorAttribute*>::get(), "set_Method",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeConvertorAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlTypeConvertorAttribute::*)(::StringW)>(
    &::System::Xml::Serialization::XmlTypeConvertorAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28abea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeConvertorAttribute*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Serialization::XmlTypeConvertorAttribute::__get__Method_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Method_k__BackingField;
}
constexpr ::StringW const& System::Xml::Serialization::XmlTypeConvertorAttribute::__get__Method_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Method_k__BackingField;
}
constexpr void System::Xml::Serialization::XmlTypeConvertorAttribute::__set__Method_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Method_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::Serialization::XmlTypeConvertorAttribute::set_Method(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeConvertorAttribute*>::get(), "set_Method",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::Serialization::XmlTypeConvertorAttribute* System::Xml::Serialization::XmlTypeConvertorAttribute::New_ctor(::StringW method) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Serialization::XmlTypeConvertorAttribute*>(method));
}
inline void System::Xml::Serialization::XmlTypeConvertorAttribute::_ctor(::StringW method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeConvertorAttribute*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, method);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlTypeConvertorAttribute::XmlTypeConvertorAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
