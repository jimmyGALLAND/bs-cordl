#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Serialization/zzzz__FormerlySerializedAsAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Serialization::FormerlySerializedAsAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Serialization::FormerlySerializedAsAttribute::*)(::StringW)>(
    &::UnityEngine::Serialization::FormerlySerializedAsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2cf1ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Serialization::FormerlySerializedAsAttribute*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Serialization::FormerlySerializedAsAttribute::__get_m_oldName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_oldName;
}
constexpr ::StringW const& UnityEngine::Serialization::FormerlySerializedAsAttribute::__get_m_oldName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_oldName;
}
constexpr void UnityEngine::Serialization::FormerlySerializedAsAttribute::__set_m_oldName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_oldName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Serialization::FormerlySerializedAsAttribute* UnityEngine::Serialization::FormerlySerializedAsAttribute::New_ctor(::StringW oldName) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Serialization::FormerlySerializedAsAttribute*>(oldName));
}
inline void UnityEngine::Serialization::FormerlySerializedAsAttribute::_ctor(::StringW oldName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Serialization::FormerlySerializedAsAttribute*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldName);
}
// Ctor Parameters []
constexpr ::UnityEngine::Serialization::FormerlySerializedAsAttribute::FormerlySerializedAsAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
