#pragma once
#include "UnityEngine/UIElements/zzzz__CustomStyleProperty_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::CustomStyleProperty_1<T>>"
template <typename T> constexpr UnityEngine::UIElements::CustomStyleProperty_1<T>::operator ::System::IEquatable_1<::UnityEngine::UIElements::CustomStyleProperty_1<T>>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::CustomStyleProperty_1<T>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline ::StringW UnityEngine::UIElements::CustomStyleProperty_1<T>::get_name() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CustomStyleProperty_1<T>>::get(),
                                                                             "get_name", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::CustomStyleProperty_1<T>::set_name(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CustomStyleProperty_1<T>>::get(), "set_name",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::UIElements::CustomStyleProperty_1<T>::_ctor(::StringW propertyName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CustomStyleProperty_1<T>>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, propertyName);
}
template <typename T> inline bool UnityEngine::UIElements::CustomStyleProperty_1<T>::Equals(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CustomStyleProperty_1<T>>::get(), "Equals",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
template <typename T> inline bool UnityEngine::UIElements::CustomStyleProperty_1<T>::Equals(::UnityEngine::UIElements::CustomStyleProperty_1<T> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CustomStyleProperty_1<T>>::get(), "Equals", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CustomStyleProperty_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
template <typename T> inline int32_t UnityEngine::UIElements::CustomStyleProperty_1<T>::GetHashCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CustomStyleProperty_1<T>>::get(),
                                                                             "GetHashCode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_name_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }]
template <typename T> constexpr ::UnityEngine::UIElements::CustomStyleProperty_1<T>::CustomStyleProperty_1(::StringW _name_k__BackingField) noexcept {
  this->_name_k__BackingField = _name_k__BackingField;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::CustomStyleProperty_1<T>::CustomStyleProperty_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
