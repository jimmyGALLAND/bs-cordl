#pragma once
#include "GlobalNamespace/zzzz__SaberType_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SetSaberFakeGlowColor_def.hpp"
#include "GlobalNamespace/zzzz__Parametric3SliceSpriteController_def.hpp"
#include "GlobalNamespace/zzzz__SaberTypeObject_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SetSaberFakeGlowColor.set_saberType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetSaberFakeGlowColor::*)(::GlobalNamespace::SaberType)>(
    &::GlobalNamespace::SetSaberFakeGlowColor::set_saberType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22644b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetSaberFakeGlowColor*>::get(), "set_saberType", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SaberType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetSaberFakeGlowColor.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetSaberFakeGlowColor::*)()>(&::GlobalNamespace::SetSaberFakeGlowColor::Start)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x22649ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetSaberFakeGlowColor*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetSaberFakeGlowColor.SetColors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetSaberFakeGlowColor::*)()>(&::GlobalNamespace::SetSaberFakeGlowColor::SetColors)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2264990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetSaberFakeGlowColor*>::get(), "SetColors",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetSaberFakeGlowColor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetSaberFakeGlowColor::*)()>(&::GlobalNamespace::SetSaberFakeGlowColor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2264a6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetSaberFakeGlowColor*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& GlobalNamespace::SetSaberFakeGlowColor::__get__tintColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____tintColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::SetSaberFakeGlowColor::__get__tintColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____tintColor;
}
constexpr void GlobalNamespace::SetSaberFakeGlowColor::__set__tintColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____tintColor = value;
}
constexpr ::GlobalNamespace::SaberTypeObject*& GlobalNamespace::SetSaberFakeGlowColor::__get__saberTypeObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____saberTypeObject;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberTypeObject*> const& GlobalNamespace::SetSaberFakeGlowColor::__get__saberTypeObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____saberTypeObject;
}
constexpr void GlobalNamespace::SetSaberFakeGlowColor::__set__saberTypeObject(::GlobalNamespace::SaberTypeObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saberTypeObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::Parametric3SliceSpriteController*& GlobalNamespace::SetSaberFakeGlowColor::__get__parametric3SliceSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____parametric3SliceSprite;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Parametric3SliceSpriteController*> const& GlobalNamespace::SetSaberFakeGlowColor::__get__parametric3SliceSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____parametric3SliceSprite;
}
constexpr void GlobalNamespace::SetSaberFakeGlowColor::__set__parametric3SliceSprite(::GlobalNamespace::Parametric3SliceSpriteController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parametric3SliceSprite)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ColorManager*& GlobalNamespace::SetSaberFakeGlowColor::__get__colorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____colorManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& GlobalNamespace::SetSaberFakeGlowColor::__get__colorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____colorManager;
}
constexpr void GlobalNamespace::SetSaberFakeGlowColor::__set__colorManager(::GlobalNamespace::ColorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SaberType& GlobalNamespace::SetSaberFakeGlowColor::__get__saberType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____saberType;
}
constexpr ::GlobalNamespace::SaberType const& GlobalNamespace::SetSaberFakeGlowColor::__get__saberType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____saberType;
}
constexpr void GlobalNamespace::SetSaberFakeGlowColor::__set__saberType(::GlobalNamespace::SaberType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____saberType = value;
}
inline void GlobalNamespace::SetSaberFakeGlowColor::set_saberType(::GlobalNamespace::SaberType value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetSaberFakeGlowColor*>::get(), "set_saberType", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SaberType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SetSaberFakeGlowColor::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetSaberFakeGlowColor*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SetSaberFakeGlowColor::SetColors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetSaberFakeGlowColor*>::get(), "SetColors",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SetSaberFakeGlowColor* GlobalNamespace::SetSaberFakeGlowColor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SetSaberFakeGlowColor*>());
}
inline void GlobalNamespace::SetSaberFakeGlowColor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetSaberFakeGlowColor*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SetSaberFakeGlowColor::SetSaberFakeGlowColor() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
