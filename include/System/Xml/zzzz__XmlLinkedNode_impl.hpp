#pragma once
#include "System/Xml/zzzz__XmlNode_impl.hpp"
#include "System/Xml/zzzz__XmlLinkedNode_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlLinkedNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlLinkedNode::*)(::System::Xml::XmlDocument*)>(&::System::Xml::XmlLinkedNode::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2888008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLinkedNode*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDocument*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLinkedNode.get_PreviousSibling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlLinkedNode::*)()>(&::System::Xml::XmlLinkedNode::get_PreviousSibling)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x288a39c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLinkedNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLinkedNode*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLinkedNode.get_NextSibling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlLinkedNode::*)()>(&::System::Xml::XmlLinkedNode::get_NextSibling)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x288a404;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLinkedNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLinkedNode*>::get(), 13));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlLinkedNode*& System::Xml::XmlLinkedNode::__get_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlLinkedNode*> const& System::Xml::XmlLinkedNode::__get_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr void System::Xml::XmlLinkedNode::__set_next(::System::Xml::XmlLinkedNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::XmlLinkedNode* System::Xml::XmlLinkedNode::New_ctor(::System::Xml::XmlDocument* doc) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::XmlLinkedNode*>(doc));
}
inline void System::Xml::XmlLinkedNode::_ctor(::System::Xml::XmlDocument* doc) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLinkedNode*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDocument*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, doc);
}
inline ::System::Xml::XmlNode* System::Xml::XmlLinkedNode::get_PreviousSibling() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLinkedNode*>::get(), "get_PreviousSibling",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlNode* System::Xml::XmlLinkedNode::get_NextSibling() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLinkedNode*>::get(), "get_NextSibling",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::XmlLinkedNode::XmlLinkedNode() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
