#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__Test_MeshFilter_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivableWrapperClass_1_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::Test_MeshFilter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::Test_MeshFilter::*)(::UnityEngine::MeshFilter*)>(
    &::HoudiniEngineUnity::Test_MeshFilter::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21e6400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_MeshFilter*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshFilter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::Test_MeshFilter.IsNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::Test_MeshFilter::*)()>(&::HoudiniEngineUnity::Test_MeshFilter::IsNull)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x21e6428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_MeshFilter*>::get(), "IsNull",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::Test_MeshFilter.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::Test_MeshFilter::*)(::HoudiniEngineUnity::Test_MeshFilter*)>(
    &::HoudiniEngineUnity::Test_MeshFilter::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x21e6488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_MeshFilter*>::get(), "IsEquivalentTo", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_MeshFilter*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_MeshFilter*>"
constexpr HoudiniEngineUnity::Test_MeshFilter::operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_MeshFilter*>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_MeshFilter*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_MeshFilter*>"
constexpr HoudiniEngineUnity::Test_MeshFilter::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_MeshFilter*>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_MeshFilter*>*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::MeshFilter*& HoudiniEngineUnity::Test_MeshFilter::__get_self() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___self;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshFilter*> const& HoudiniEngineUnity::Test_MeshFilter::__get_self() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___self;
}
constexpr void HoudiniEngineUnity::Test_MeshFilter::__set_self(::UnityEngine::MeshFilter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___self)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HoudiniEngineUnity::Test_MeshFilter* HoudiniEngineUnity::Test_MeshFilter::New_ctor(::UnityEngine::MeshFilter* self) {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::Test_MeshFilter*>(self));
}
inline void HoudiniEngineUnity::Test_MeshFilter::_ctor(::UnityEngine::MeshFilter* self) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_MeshFilter*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshFilter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, self);
}
inline bool HoudiniEngineUnity::Test_MeshFilter::IsNull() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_MeshFilter*>::get(), "IsNull",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::Test_MeshFilter::IsEquivalentTo(::HoudiniEngineUnity::Test_MeshFilter* other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_MeshFilter*>::get(), "IsEquivalentTo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_MeshFilter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::Test_MeshFilter::Test_MeshFilter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
