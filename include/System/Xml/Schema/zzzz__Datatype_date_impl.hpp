#pragma once
#include "System/Xml/Schema/zzzz__Datatype_dateTimeBase_impl.hpp"
#include "System/Xml/Schema/zzzz__Datatype_date_def.hpp"
#include "System/Xml/Schema/zzzz__XmlTypeCode_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::Datatype_date.get_TypeCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlTypeCode (::System::Xml::Schema::Datatype_date::*)()>(
    &::System::Xml::Schema::Datatype_date::get_TypeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28b9fec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_date*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_date*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_date._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Datatype_date::*)()>(&::System::Xml::Schema::Datatype_date::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x28b9ff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_date*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Xml::Schema::XmlTypeCode System::Xml::Schema::Datatype_date::get_TypeCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_date*>::get(), "get_TypeCode",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlTypeCode, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::Datatype_date* System::Xml::Schema::Datatype_date::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Schema::Datatype_date*>());
}
inline void System::Xml::Schema::Datatype_date::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_date*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::Datatype_date::Datatype_date() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
