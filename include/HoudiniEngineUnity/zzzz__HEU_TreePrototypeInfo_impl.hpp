#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_TreePrototypeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TreePrototypeInfo.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_TreePrototypeInfo::*)(::HoudiniEngineUnity::HEU_TreePrototypeInfo*)>(
    &::HoudiniEngineUnity::HEU_TreePrototypeInfo::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x21ea4b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>::get(), "IsEquivalentTo", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TreePrototypeInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_TreePrototypeInfo::*)()>(&::HoudiniEngineUnity::HEU_TreePrototypeInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ea604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>"
constexpr HoudiniEngineUnity::HEU_TreePrototypeInfo::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>*>(static_cast<void*>(this));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_TreePrototypeInfo::__get__prefabPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____prefabPath;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_TreePrototypeInfo::__get__prefabPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____prefabPath;
}
constexpr void HoudiniEngineUnity::HEU_TreePrototypeInfo::__set__prefabPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____prefabPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& HoudiniEngineUnity::HEU_TreePrototypeInfo::__get__bendfactor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bendfactor;
}
constexpr float_t const& HoudiniEngineUnity::HEU_TreePrototypeInfo::__get__bendfactor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bendfactor;
}
constexpr void HoudiniEngineUnity::HEU_TreePrototypeInfo::__set__bendfactor(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____bendfactor = value;
}
inline bool HoudiniEngineUnity::HEU_TreePrototypeInfo::IsEquivalentTo(::HoudiniEngineUnity::HEU_TreePrototypeInfo* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>::get(), "IsEquivalentTo", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::HoudiniEngineUnity::HEU_TreePrototypeInfo* HoudiniEngineUnity::HEU_TreePrototypeInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>());
}
inline void HoudiniEngineUnity::HEU_TreePrototypeInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_TreePrototypeInfo::HEU_TreePrototypeInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
