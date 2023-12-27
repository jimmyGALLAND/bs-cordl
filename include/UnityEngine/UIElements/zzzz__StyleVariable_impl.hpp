#pragma once
#include "UnityEngine/UIElements/zzzz__StyleVariable_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleVariable::*)(
    ::StringW, ::UnityEngine::UIElements::StyleSheet*, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*>)>(
    &::UnityEngine::UIElements::StyleVariable::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e69af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariable>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariable.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::StyleVariable::*)()>(&::UnityEngine::UIElements::StyleVariable::GetHashCode)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2e69b04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariable>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariable>::get(), 2));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StyleVariable::_ctor(::StringW name, ::UnityEngine::UIElements::StyleSheet* sheet,
                                                          ::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*> handles) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariable>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, sheet, handles);
}
inline int32_t UnityEngine::UIElements::StyleVariable::GetHashCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariable>::get(), "GetHashCode",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "sheet", ty: "::UnityEngine::UIElements::StyleSheet*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "handles", ty: "::ArrayW<::UnityEngine::UIElements::StyleValueHandle,::Array<::UnityEngine::UIElements::StyleValueHandle>*>", modifiers: "",
// def_value: Some("nullptr") }]
constexpr ::UnityEngine::UIElements::StyleVariable::StyleVariable(::StringW name, ::UnityEngine::UIElements::StyleSheet* sheet,
                                                                  ::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*> handles) noexcept {
  this->name = name;
  this->sheet = sheet;
  this->handles = handles;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleVariable::StyleVariable() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
