#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LightColorGroupParent_def.hpp"
#include "GlobalNamespace/zzzz__IEditTimeValidated_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightColorGroupParent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightColorGroupParent::*)()>(&::GlobalNamespace::LightColorGroupParent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23a935c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorGroupParent*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IEditTimeValidated"
constexpr GlobalNamespace::LightColorGroupParent::operator ::GlobalNamespace::IEditTimeValidated*() noexcept {
  return static_cast<::GlobalNamespace::IEditTimeValidated*>(static_cast<void*>(this));
}
inline ::GlobalNamespace::LightColorGroupParent* GlobalNamespace::LightColorGroupParent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LightColorGroupParent*>());
}
inline void GlobalNamespace::LightColorGroupParent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorGroupParent*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightColorGroupParent::LightColorGroupParent() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
