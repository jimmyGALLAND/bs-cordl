#pragma once
#include "GlobalNamespace/zzzz__SelectableStateController_impl.hpp"
#include "GlobalNamespace/zzzz__SelectableStateController_1_def.hpp"
template <typename T> constexpr T& GlobalNamespace::SelectableStateController_1<T>::__get__component() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____component;
}
template <typename T> constexpr T const& GlobalNamespace::SelectableStateController_1<T>::__get__component() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____component;
}
template <typename T> constexpr void GlobalNamespace::SelectableStateController_1<T>::__set__component(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____component)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::GlobalNamespace::SelectableStateController_1<T>* GlobalNamespace::SelectableStateController_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SelectableStateController_1<T>*>());
}
template <typename T> inline void GlobalNamespace::SelectableStateController_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectableStateController_1<T>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::SelectableStateController_1<T>::SelectableStateController_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
