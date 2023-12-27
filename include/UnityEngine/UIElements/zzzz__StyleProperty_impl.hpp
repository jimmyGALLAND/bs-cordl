#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleProperty_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleProperty.get_name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::StyleProperty::*)()>(&::UnityEngine::UIElements::StyleProperty::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e69970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleProperty*>::get(), "get_name",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleProperty.get_values
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*> (
    ::UnityEngine::UIElements::StyleProperty::*)()>(&::UnityEngine::UIElements::StyleProperty::get_values)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e69978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleProperty*>::get(), "get_values",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleProperty._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleProperty::*)()>(&::UnityEngine::UIElements::StyleProperty::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e69980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleProperty*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::UIElements::StyleProperty::__get_m_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Name;
}
constexpr ::StringW const& UnityEngine::UIElements::StyleProperty::__get_m_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Name;
}
constexpr void UnityEngine::UIElements::StyleProperty::__set_m_Name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::UIElements::StyleProperty::__get_m_Line() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Line;
}
constexpr int32_t const& UnityEngine::UIElements::StyleProperty::__get_m_Line() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Line;
}
constexpr void UnityEngine::UIElements::StyleProperty::__set_m_Line(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_Line = value;
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*>& UnityEngine::UIElements::StyleProperty::__get_m_Values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Values;
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*> const& UnityEngine::UIElements::StyleProperty::__get_m_Values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Values;
}
constexpr void UnityEngine::UIElements::StyleProperty::__set_m_Values(::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Values)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UIElements::StyleProperty::__get_isCustomProperty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___isCustomProperty;
}
constexpr bool const& UnityEngine::UIElements::StyleProperty::__get_isCustomProperty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___isCustomProperty;
}
constexpr void UnityEngine::UIElements::StyleProperty::__set_isCustomProperty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___isCustomProperty = value;
}
constexpr bool& UnityEngine::UIElements::StyleProperty::__get_requireVariableResolve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___requireVariableResolve;
}
constexpr bool const& UnityEngine::UIElements::StyleProperty::__get_requireVariableResolve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___requireVariableResolve;
}
constexpr void UnityEngine::UIElements::StyleProperty::__set_requireVariableResolve(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___requireVariableResolve = value;
}
inline ::StringW UnityEngine::UIElements::StyleProperty::get_name() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleProperty*>::get(), "get_name",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*> UnityEngine::UIElements::StyleProperty::get_values() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleProperty*>::get(), "get_values",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*>, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleProperty* UnityEngine::UIElements::StyleProperty::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::StyleProperty*>());
}
inline void UnityEngine::UIElements::StyleProperty::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleProperty*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleProperty::StyleProperty() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
