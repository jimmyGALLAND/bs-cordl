#pragma once
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/zzzz__TooltipAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::TooltipAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TooltipAttribute::*)(::StringW)>(&::UnityEngine::TooltipAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ccc120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TooltipAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::TooltipAttribute::__get_tooltip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tooltip;
}
constexpr ::StringW const& UnityEngine::TooltipAttribute::__get_tooltip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tooltip;
}
constexpr void UnityEngine::TooltipAttribute::__set_tooltip(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tooltip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::TooltipAttribute* UnityEngine::TooltipAttribute::New_ctor(::StringW tooltip) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::TooltipAttribute*>(tooltip));
}
inline void UnityEngine::TooltipAttribute::_ctor(::StringW tooltip) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TooltipAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tooltip);
}
// Ctor Parameters []
constexpr ::UnityEngine::TooltipAttribute::TooltipAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
