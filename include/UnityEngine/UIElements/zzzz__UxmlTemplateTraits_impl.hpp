#pragma once
#include "UnityEngine/UIElements/zzzz__UxmlTraits_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlTemplateTraits_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlTemplateTraits._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UxmlTemplateTraits::*)()>(&::UnityEngine::UIElements::UxmlTemplateTraits::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2e0e404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlTemplateTraits*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::UxmlTemplateTraits::__get_m_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Name;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& UnityEngine::UIElements::UxmlTemplateTraits::__get_m_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Name;
}
constexpr void UnityEngine::UIElements::UxmlTemplateTraits::__set_m_Name(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::UxmlTemplateTraits::__get_m_Path() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Path;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& UnityEngine::UIElements::UxmlTemplateTraits::__get_m_Path() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Path;
}
constexpr void UnityEngine::UIElements::UxmlTemplateTraits::__set_m_Path(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Path)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::UxmlTemplateTraits::__get_m_Src() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Src;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& UnityEngine::UIElements::UxmlTemplateTraits::__get_m_Src() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Src;
}
constexpr void UnityEngine::UIElements::UxmlTemplateTraits::__set_m_Src(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Src)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::UIElements::UxmlTemplateTraits* UnityEngine::UIElements::UxmlTemplateTraits::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::UxmlTemplateTraits*>());
}
inline void UnityEngine::UIElements::UxmlTemplateTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlTemplateTraits*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlTemplateTraits::UxmlTemplateTraits() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
