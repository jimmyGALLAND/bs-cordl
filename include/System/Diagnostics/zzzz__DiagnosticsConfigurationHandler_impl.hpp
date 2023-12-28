#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Diagnostics/zzzz__DiagnosticsConfigurationHandler_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Configuration/zzzz__IConfigurationSectionHandler_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::DiagnosticsConfigurationHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::DiagnosticsConfigurationHandler::*)()>(
    &::System::Diagnostics::DiagnosticsConfigurationHandler::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x294525c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::DiagnosticsConfigurationHandler*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::DiagnosticsConfigurationHandler.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Diagnostics::DiagnosticsConfigurationHandler::*)(::System::Object*, ::System::Object*, ::System::Xml::XmlNode*)>(&::System::Diagnostics::DiagnosticsConfigurationHandler::Create)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2945294;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::DiagnosticsConfigurationHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::DiagnosticsConfigurationHandler*>::get(), 4));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Configuration::IConfigurationSectionHandler"
constexpr System::Diagnostics::DiagnosticsConfigurationHandler::operator ::System::Configuration::IConfigurationSectionHandler*() noexcept {
  return static_cast<::System::Configuration::IConfigurationSectionHandler*>(static_cast<void*>(this));
}
inline ::System::Diagnostics::DiagnosticsConfigurationHandler* System::Diagnostics::DiagnosticsConfigurationHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Diagnostics::DiagnosticsConfigurationHandler*>());
}
inline void System::Diagnostics::DiagnosticsConfigurationHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::DiagnosticsConfigurationHandler*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* System::Diagnostics::DiagnosticsConfigurationHandler::Create(::System::Object* parent, ::System::Object* configContext, ::System::Xml::XmlNode* section) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::DiagnosticsConfigurationHandler*>::get(), "Create", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, parent, configContext, section);
}
// Ctor Parameters []
constexpr ::System::Diagnostics::DiagnosticsConfigurationHandler::DiagnosticsConfigurationHandler() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
