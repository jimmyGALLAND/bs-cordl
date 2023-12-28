#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleRule_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleProperty_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleRule.get_properties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::UIElements::StyleProperty*, ::Array<::UnityEngine::UIElements::StyleProperty*>*> (
    ::UnityEngine::UIElements::StyleRule::*)()>(&::UnityEngine::UIElements::StyleRule::get_properties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e6b52c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleRule*>::get(), "get_properties",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleRule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleRule::*)()>(&::UnityEngine::UIElements::StyleRule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e6b534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleRule*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::UIElements::StyleProperty*, ::Array<::UnityEngine::UIElements::StyleProperty*>*>& UnityEngine::UIElements::StyleRule::__get_m_Properties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Properties;
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleProperty*, ::Array<::UnityEngine::UIElements::StyleProperty*>*> const& UnityEngine::UIElements::StyleRule::__get_m_Properties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Properties;
}
constexpr void UnityEngine::UIElements::StyleRule::__set_m_Properties(::ArrayW<::UnityEngine::UIElements::StyleProperty*, ::Array<::UnityEngine::UIElements::StyleProperty*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Properties)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::UIElements::StyleRule::__get_line() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___line;
}
constexpr int32_t const& UnityEngine::UIElements::StyleRule::__get_line() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___line;
}
constexpr void UnityEngine::UIElements::StyleRule::__set_line(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___line = value;
}
constexpr int32_t& UnityEngine::UIElements::StyleRule::__get_customPropertiesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customPropertiesCount;
}
constexpr int32_t const& UnityEngine::UIElements::StyleRule::__get_customPropertiesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customPropertiesCount;
}
constexpr void UnityEngine::UIElements::StyleRule::__set_customPropertiesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___customPropertiesCount = value;
}
inline ::ArrayW<::UnityEngine::UIElements::StyleProperty*, ::Array<::UnityEngine::UIElements::StyleProperty*>*> UnityEngine::UIElements::StyleRule::get_properties() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleRule*>::get(), "get_properties",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::UIElements::StyleProperty*, ::Array<::UnityEngine::UIElements::StyleProperty*>*>, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleRule* UnityEngine::UIElements::StyleRule::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::StyleRule*>());
}
inline void UnityEngine::UIElements::StyleRule::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleRule*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleRule::StyleRule() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
