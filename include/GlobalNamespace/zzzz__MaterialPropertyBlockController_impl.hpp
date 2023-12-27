#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockController.get_renderers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*> (
    ::GlobalNamespace::MaterialPropertyBlockController::*)()>(&::GlobalNamespace::MaterialPropertyBlockController::get_renderers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2115060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockController*>::get(),
                                                                               "get_renderers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockController.get_materialPropertyBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::MaterialPropertyBlock* (::GlobalNamespace::MaterialPropertyBlockController::*)()>(
    &::GlobalNamespace::MaterialPropertyBlockController::get_materialPropertyBlock)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2114d60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockController*>::get(),
                                                                               "get_materialPropertyBlock", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockController.ApplyChanges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockController::*)()>(
    &::GlobalNamespace::MaterialPropertyBlockController::ApplyChanges)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x2114afc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockController*>::get(),
                                                                               "ApplyChanges", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockController::*)()>(
    &::GlobalNamespace::MaterialPropertyBlockController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2115068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockController*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*>& GlobalNamespace::MaterialPropertyBlockController::__get__renderers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____renderers;
}
constexpr ::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*> const& GlobalNamespace::MaterialPropertyBlockController::__get__renderers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____renderers;
}
constexpr void GlobalNamespace::MaterialPropertyBlockController::__set__renderers(::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renderers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::MaterialPropertyBlock*& GlobalNamespace::MaterialPropertyBlockController::__get__materialPropertyBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____materialPropertyBlock;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MaterialPropertyBlock*> const& GlobalNamespace::MaterialPropertyBlockController::__get__materialPropertyBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____materialPropertyBlock;
}
constexpr void GlobalNamespace::MaterialPropertyBlockController::__set__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____materialPropertyBlock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::MaterialPropertyBlockController::__get__numberOfMaterialsInRenderers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____numberOfMaterialsInRenderers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& GlobalNamespace::MaterialPropertyBlockController::__get__numberOfMaterialsInRenderers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____numberOfMaterialsInRenderers;
}
constexpr void GlobalNamespace::MaterialPropertyBlockController::__set__numberOfMaterialsInRenderers(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____numberOfMaterialsInRenderers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::MaterialPropertyBlockController::__get__isInitialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____isInitialized;
}
constexpr bool const& GlobalNamespace::MaterialPropertyBlockController::__get__isInitialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____isInitialized;
}
constexpr void GlobalNamespace::MaterialPropertyBlockController::__set__isInitialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____isInitialized = value;
}
inline ::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*> GlobalNamespace::MaterialPropertyBlockController::get_renderers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockController*>::get(),
                                                                             "get_renderers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*>, false>(this, ___internal_method);
}
inline ::UnityEngine::MaterialPropertyBlock* GlobalNamespace::MaterialPropertyBlockController::get_materialPropertyBlock() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockController*>::get(),
                                                                             "get_materialPropertyBlock", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::MaterialPropertyBlock*, false>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyBlockController::ApplyChanges() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockController*>::get(),
                                                                             "ApplyChanges", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MaterialPropertyBlockController* GlobalNamespace::MaterialPropertyBlockController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MaterialPropertyBlockController*>());
}
inline void GlobalNamespace::MaterialPropertyBlockController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockController*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialPropertyBlockController::MaterialPropertyBlockController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
