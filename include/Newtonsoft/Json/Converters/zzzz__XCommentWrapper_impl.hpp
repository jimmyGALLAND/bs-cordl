#pragma once
#include "Newtonsoft/Json/Converters/zzzz__XObjectWrapper_impl.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XCommentWrapper_def.hpp"
#include "Newtonsoft/Json/Converters/zzzz__IXmlNode_def.hpp"
#include "System/Xml/Linq/zzzz__XComment_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XCommentWrapper.get_Text
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Linq::XComment* (::Newtonsoft::Json::Converters::XCommentWrapper::*)()>(
    &::Newtonsoft::Json::Converters::XCommentWrapper::get_Text)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x26bc73c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::XCommentWrapper*>::get(),
                                                                               "get_Text", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XCommentWrapper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Converters::XCommentWrapper::*)(::System::Xml::Linq::XComment*)>(
    &::Newtonsoft::Json::Converters::XCommentWrapper::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x26bc7b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::XCommentWrapper*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Linq::XComment*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XCommentWrapper.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Converters::XCommentWrapper::*)()>(
    &::Newtonsoft::Json::Converters::XCommentWrapper::get_Value)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26bc820;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::XCommentWrapper*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::XCommentWrapper*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XCommentWrapper.set_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Converters::XCommentWrapper::*)(::StringW)>(
    &::Newtonsoft::Json::Converters::XCommentWrapper::set_Value)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26bc83c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::XCommentWrapper*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::XCommentWrapper*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XCommentWrapper.get_ParentNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (::Newtonsoft::Json::Converters::XCommentWrapper::*)()>(
    &::Newtonsoft::Json::Converters::XCommentWrapper::get_ParentNode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x26bc860;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::XCommentWrapper*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::XCommentWrapper*>::get(), 18));
    return ___internal_method;
  }
};
inline ::System::Xml::Linq::XComment* Newtonsoft::Json::Converters::XCommentWrapper::get_Text() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::XCommentWrapper*>::get(),
                                                                             "get_Text", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Linq::XComment*, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Converters::XCommentWrapper* Newtonsoft::Json::Converters::XCommentWrapper::New_ctor(::System::Xml::Linq::XComment* text) {
  return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::Converters::XCommentWrapper*>(text));
}
inline void Newtonsoft::Json::Converters::XCommentWrapper::_ctor(::System::Xml::Linq::XComment* text) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::XCommentWrapper*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Linq::XComment*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text);
}
inline ::StringW Newtonsoft::Json::Converters::XCommentWrapper::get_Value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::XCommentWrapper*>::get(),
                                                                             "get_Value", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Converters::XCommentWrapper::set_Value(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::XCommentWrapper*>::get(), "set_Value",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XCommentWrapper::get_ParentNode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::XCommentWrapper*>::get(),
                                                                             "get_ParentNode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlNode*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Converters::XCommentWrapper::XCommentWrapper() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
