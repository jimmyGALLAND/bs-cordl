#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__TOPNodeTags_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::TOPNodeTags._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::TOPNodeTags::*)()>(&::HoudiniEngineUnity::TOPNodeTags::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x219a6dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::TOPNodeTags*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& HoudiniEngineUnity::TOPNodeTags::__get__show() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____show;
}
constexpr bool const& HoudiniEngineUnity::TOPNodeTags::__get__show() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____show;
}
constexpr void HoudiniEngineUnity::TOPNodeTags::__set__show(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____show = value;
}
constexpr bool& HoudiniEngineUnity::TOPNodeTags::__get__autoload() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____autoload;
}
constexpr bool const& HoudiniEngineUnity::TOPNodeTags::__get__autoload() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____autoload;
}
constexpr void HoudiniEngineUnity::TOPNodeTags::__set__autoload(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____autoload = value;
}
inline ::HoudiniEngineUnity::TOPNodeTags* HoudiniEngineUnity::TOPNodeTags::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::TOPNodeTags*>());
}
inline void HoudiniEngineUnity::TOPNodeTags::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::TOPNodeTags*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::TOPNodeTags::TOPNodeTags() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
