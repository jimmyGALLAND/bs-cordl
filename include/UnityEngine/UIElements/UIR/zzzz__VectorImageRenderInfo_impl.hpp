#pragma once
#include "UnityEngine/UIElements/UIR/zzzz__Alloc_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__VectorImageRenderInfo_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GradientRemap_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::VectorImageRenderInfo.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::VectorImageRenderInfo::*)()>(
    &::UnityEngine::UIElements::UIR::VectorImageRenderInfo::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2dccea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageRenderInfo*>::get(),
                                                                               "Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::VectorImageRenderInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::VectorImageRenderInfo::*)()>(
    &::UnityEngine::UIElements::UIR::VectorImageRenderInfo::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2dcce40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageRenderInfo*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::UIElements::UIR::VectorImageRenderInfo::__get_useCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___useCount;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::VectorImageRenderInfo::__get_useCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___useCount;
}
constexpr void UnityEngine::UIElements::UIR::VectorImageRenderInfo::__set_useCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___useCount = value;
}
constexpr ::UnityEngine::UIElements::UIR::GradientRemap*& UnityEngine::UIElements::UIR::VectorImageRenderInfo::__get_firstGradientRemap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___firstGradientRemap;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::GradientRemap*> const& UnityEngine::UIElements::UIR::VectorImageRenderInfo::__get_firstGradientRemap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___firstGradientRemap;
}
constexpr void UnityEngine::UIElements::UIR::VectorImageRenderInfo::__set_firstGradientRemap(::UnityEngine::UIElements::UIR::GradientRemap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___firstGradientRemap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::Alloc& UnityEngine::UIElements::UIR::VectorImageRenderInfo::__get_gradientSettingsAlloc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___gradientSettingsAlloc;
}
constexpr ::UnityEngine::UIElements::UIR::Alloc const& UnityEngine::UIElements::UIR::VectorImageRenderInfo::__get_gradientSettingsAlloc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___gradientSettingsAlloc;
}
constexpr void UnityEngine::UIElements::UIR::VectorImageRenderInfo::__set_gradientSettingsAlloc(::UnityEngine::UIElements::UIR::Alloc value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___gradientSettingsAlloc = value;
}
inline void UnityEngine::UIElements::UIR::VectorImageRenderInfo::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageRenderInfo*>::get(),
                                                                             "Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::VectorImageRenderInfo* UnityEngine::UIElements::UIR::VectorImageRenderInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::UIR::VectorImageRenderInfo*>());
}
inline void UnityEngine::UIElements::UIR::VectorImageRenderInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageRenderInfo*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::VectorImageRenderInfo::VectorImageRenderInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
