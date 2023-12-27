#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__FireworkItemController_def.hpp"
#include "GlobalNamespace/zzzz__FireworkItemController_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "GlobalNamespace/zzzz__RandomObjectPicker_1_def.hpp"
#include "GlobalNamespace/zzzz__DirectionalLight_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::*)()>(
    &::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23975e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ParticleSystem*& GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::__get__particleSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____particleSystem;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> const& GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::__get__particleSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____particleSystem;
}
constexpr void GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::__set__particleSystem(::UnityEngine::ParticleSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____particleSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::__get__isSubemitter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____isSubemitter;
}
constexpr bool const& GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::__get__isSubemitter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____isSubemitter;
}
constexpr void GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::__set__isSubemitter(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____isSubemitter = value;
}
constexpr bool& GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::__get__useMainColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____useMainColor;
}
constexpr bool const& GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::__get__useMainColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____useMainColor;
}
constexpr void GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::__set__useMainColor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____useMainColor = value;
}
constexpr bool& GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::__get__useOwnGradient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____useOwnGradient;
}
constexpr bool const& GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::__get__useOwnGradient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____useOwnGradient;
}
constexpr void GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::__set__useOwnGradient(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____useOwnGradient = value;
}
constexpr ::UnityEngine::Gradient*& GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::__get__particleColorGradient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____particleColorGradient;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Gradient*> const& GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::__get__particleColorGradient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____particleColorGradient;
}
constexpr void GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::__set__particleColorGradient(::UnityEngine::Gradient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____particleColorGradient)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::__get__randomizeSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____randomizeSpeed;
}
constexpr bool const& GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::__get__randomizeSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____randomizeSpeed;
}
constexpr void GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::__set__randomizeSpeed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____randomizeSpeed = value;
}
inline ::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem* GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*>());
}
inline void GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::__FireworkItemController__FireworkItemParticleSystem() {}
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController.set_directionalLight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FireworkItemController::*)(::GlobalNamespace::DirectionalLight*)>(
    &::GlobalNamespace::FireworkItemController::set_directionalLight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2396ddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(), "set_directionalLight", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DirectionalLight*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController.set_directionalLightIntensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FireworkItemController::*)(float_t)>(
    &::GlobalNamespace::FireworkItemController::set_directionalLightIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2396de4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(), "set_directionalLightIntensity",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FireworkItemController::*)(::System::Action_1<::GlobalNamespace::FireworkItemController*>*)>(
    &::GlobalNamespace::FireworkItemController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2396dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(), "add_didFinishEvent", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::FireworkItemController*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FireworkItemController::*)(::System::Action_1<::GlobalNamespace::FireworkItemController*>*)>(
    &::GlobalNamespace::FireworkItemController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2396e9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(), "remove_didFinishEvent", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::FireworkItemController*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FireworkItemController::*)()>(&::GlobalNamespace::FireworkItemController::Awake)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2396f4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FireworkItemController::*)()>(&::GlobalNamespace::FireworkItemController::OnDisable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2396fd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(), "OnDisable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController.Fire
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FireworkItemController::*)()>(&::GlobalNamespace::FireworkItemController::Fire)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2397128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(), "Fire",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController.FireCoroutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::FireworkItemController::*)()>(
    &::GlobalNamespace::FireworkItemController::FireCoroutine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2397148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(),
                                                                               "FireCoroutine", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController.SetLightsColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FireworkItemController::*)(float_t)>(
    &::GlobalNamespace::FireworkItemController::SetLightsColor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2397028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(), "SetLightsColor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController.PlayExplosionSound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FireworkItemController::*)()>(
    &::GlobalNamespace::FireworkItemController::PlayExplosionSound)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x23971d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(),
                                                                               "PlayExplosionSound", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController.InitializeParticleSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FireworkItemController::*)()>(
    &::GlobalNamespace::FireworkItemController::InitializeParticleSystem)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x23972b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(),
                                                                               "InitializeParticleSystem", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FireworkItemController::*)()>(&::GlobalNamespace::FireworkItemController::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23975c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*, ::Array<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*>*>&
GlobalNamespace::FireworkItemController::__get__particleSystems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____particleSystems;
}
constexpr ::ArrayW<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*, ::Array<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*>*> const&
GlobalNamespace::FireworkItemController::__get__particleSystems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____particleSystems;
}
constexpr void GlobalNamespace::FireworkItemController::__set__particleSystems(
    ::ArrayW<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*, ::Array<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____particleSystems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*, ::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>& GlobalNamespace::FireworkItemController::__get__lights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lights;
}
constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*, ::Array<::GlobalNamespace::TubeBloomPrePassLight*>*> const& GlobalNamespace::FireworkItemController::__get__lights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lights;
}
constexpr void GlobalNamespace::FireworkItemController::__set__lights(::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*, ::Array<::GlobalNamespace::TubeBloomPrePassLight*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lights)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AudioSource*& GlobalNamespace::FireworkItemController::__get__audioSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____audioSource;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> const& GlobalNamespace::FireworkItemController::__get__audioSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____audioSource;
}
constexpr void GlobalNamespace::FireworkItemController::__set__audioSource(::UnityEngine::AudioSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::FireworkItemController::__get__lightFlashDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lightFlashDuration;
}
constexpr float_t const& GlobalNamespace::FireworkItemController::__get__lightFlashDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lightFlashDuration;
}
constexpr void GlobalNamespace::FireworkItemController::__set__lightFlashDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____lightFlashDuration = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::FireworkItemController::__get__lightIntensityCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lightIntensityCurve;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& GlobalNamespace::FireworkItemController::__get__lightIntensityCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lightIntensityCurve;
}
constexpr void GlobalNamespace::FireworkItemController::__set__lightIntensityCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightIntensityCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::FireworkItemController::__get__lightIntensityMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lightIntensityMultiplier;
}
constexpr float_t const& GlobalNamespace::FireworkItemController::__get__lightIntensityMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lightIntensityMultiplier;
}
constexpr void GlobalNamespace::FireworkItemController::__set__lightIntensityMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____lightIntensityMultiplier = value;
}
constexpr bool& GlobalNamespace::FireworkItemController::__get__randomizeColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____randomizeColor;
}
constexpr bool const& GlobalNamespace::FireworkItemController::__get__randomizeColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____randomizeColor;
}
constexpr void GlobalNamespace::FireworkItemController::__set__randomizeColor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____randomizeColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::FireworkItemController::__get__lightsColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lightsColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::FireworkItemController::__get__lightsColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lightsColor;
}
constexpr void GlobalNamespace::FireworkItemController::__set__lightsColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____lightsColor = value;
}
constexpr ::UnityEngine::Gradient*& GlobalNamespace::FireworkItemController::__get__lightsColorGradient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lightsColorGradient;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Gradient*> const& GlobalNamespace::FireworkItemController::__get__lightsColorGradient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lightsColorGradient;
}
constexpr void GlobalNamespace::FireworkItemController::__set__lightsColorGradient(::UnityEngine::Gradient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightsColorGradient)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::FireworkItemController::__get__randomizeSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____randomizeSpeed;
}
constexpr bool const& GlobalNamespace::FireworkItemController::__get__randomizeSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____randomizeSpeed;
}
constexpr void GlobalNamespace::FireworkItemController::__set__randomizeSpeed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____randomizeSpeed = value;
}
constexpr float_t& GlobalNamespace::FireworkItemController::__get__minSpeedMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____minSpeedMultiplier;
}
constexpr float_t const& GlobalNamespace::FireworkItemController::__get__minSpeedMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____minSpeedMultiplier;
}
constexpr void GlobalNamespace::FireworkItemController::__set__minSpeedMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____minSpeedMultiplier = value;
}
constexpr float_t& GlobalNamespace::FireworkItemController::__get__maxSpeedMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____maxSpeedMultiplier;
}
constexpr float_t const& GlobalNamespace::FireworkItemController::__get__maxSpeedMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____maxSpeedMultiplier;
}
constexpr void GlobalNamespace::FireworkItemController::__set__maxSpeedMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____maxSpeedMultiplier = value;
}
constexpr ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*>& GlobalNamespace::FireworkItemController::__get__explosionClips() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____explosionClips;
}
constexpr ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> const& GlobalNamespace::FireworkItemController::__get__explosionClips() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____explosionClips;
}
constexpr void GlobalNamespace::FireworkItemController::__set__explosionClips(::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____explosionClips)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*& GlobalNamespace::FireworkItemController::__get__randomAudioPicker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____randomAudioPicker;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*> const& GlobalNamespace::FireworkItemController::__get__randomAudioPicker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____randomAudioPicker;
}
constexpr void GlobalNamespace::FireworkItemController::__set__randomAudioPicker(::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____randomAudioPicker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::DirectionalLight*& GlobalNamespace::FireworkItemController::__get__directionalLight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____directionalLight;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DirectionalLight*> const& GlobalNamespace::FireworkItemController::__get__directionalLight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____directionalLight;
}
constexpr void GlobalNamespace::FireworkItemController::__set__directionalLight(::GlobalNamespace::DirectionalLight* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____directionalLight)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::FireworkItemController::__get__directionalLightIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____directionalLightIntensity;
}
constexpr float_t const& GlobalNamespace::FireworkItemController::__get__directionalLightIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____directionalLightIntensity;
}
constexpr void GlobalNamespace::FireworkItemController::__set__directionalLightIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____directionalLightIntensity = value;
}
constexpr bool& GlobalNamespace::FireworkItemController::__get__initialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____initialized;
}
constexpr bool const& GlobalNamespace::FireworkItemController::__get__initialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____initialized;
}
constexpr void GlobalNamespace::FireworkItemController::__set__initialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____initialized = value;
}
constexpr ::System::Action_1<::GlobalNamespace::FireworkItemController*>*& GlobalNamespace::FireworkItemController::__get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___didFinishEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::FireworkItemController*>*> const& GlobalNamespace::FireworkItemController::__get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::FireworkItemController::__set_didFinishEvent(::System::Action_1<::GlobalNamespace::FireworkItemController*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didFinishEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::FireworkItemController::set_directionalLight(::GlobalNamespace::DirectionalLight* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(), "set_directionalLight", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DirectionalLight*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::FireworkItemController::set_directionalLightIntensity(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(), "set_directionalLightIntensity",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::FireworkItemController::add_didFinishEvent(::System::Action_1<::GlobalNamespace::FireworkItemController*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(), "add_didFinishEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::FireworkItemController*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::FireworkItemController::remove_didFinishEvent(::System::Action_1<::GlobalNamespace::FireworkItemController*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(), "remove_didFinishEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::FireworkItemController*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::FireworkItemController::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FireworkItemController::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(), "OnDisable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FireworkItemController::Fire() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(), "Fire",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::FireworkItemController::FireCoroutine() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(), "FireCoroutine",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline void GlobalNamespace::FireworkItemController::SetLightsColor(float_t intensity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(), "SetLightsColor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, intensity);
}
inline void GlobalNamespace::FireworkItemController::PlayExplosionSound() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(),
                                                                             "PlayExplosionSound", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FireworkItemController::InitializeParticleSystem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(),
                                                                             "InitializeParticleSystem", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::FireworkItemController* GlobalNamespace::FireworkItemController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FireworkItemController*>());
}
inline void GlobalNamespace::FireworkItemController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FireworkItemController::FireworkItemController() {}
//  Writing Method size for method: ::GlobalNamespace::__FireworkItemController__Pool._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__FireworkItemController__Pool::*)()>(
    &::GlobalNamespace::__FireworkItemController__Pool::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x23975f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FireworkItemController__Pool*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__FireworkItemController__Pool* GlobalNamespace::__FireworkItemController__Pool::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__FireworkItemController__Pool*>());
}
inline void GlobalNamespace::__FireworkItemController__Pool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FireworkItemController__Pool*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__FireworkItemController__Pool::__FireworkItemController__Pool() {}
//  Writing Method size for method: ::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::*)(int32_t)>(
    &::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23971b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::*)()>(
    &::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2397640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29*>::get(),
                                                 "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::*)()>(
    &::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::MoveNext)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x2397644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29*>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::*)()>(
    &::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2397874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29*>::get(),
                                                 "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::*)()>(
    &::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x239787c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::*)()>(
    &::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23978bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::__set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::FireworkItemController*& GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FireworkItemController*> const& GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::__set___4__this(::GlobalNamespace::FireworkItemController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::__get__soundTimeToCenter_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____soundTimeToCenter_5__2;
}
constexpr float_t const& GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::__get__soundTimeToCenter_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____soundTimeToCenter_5__2;
}
constexpr void GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::__set__soundTimeToCenter_5__2(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____soundTimeToCenter_5__2 = value;
}
constexpr float_t& GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::__get__elapsedTime_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____elapsedTime_5__3;
}
constexpr float_t const& GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::__get__elapsedTime_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____elapsedTime_5__3;
}
constexpr void GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::__set__elapsedTime_5__3(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____elapsedTime_5__3 = value;
}
constexpr bool& GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::__get__explosionSoundFired_5__4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____explosionSoundFired_5__4;
}
constexpr bool const& GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::__get__explosionSoundFired_5__4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____explosionSoundFired_5__4;
}
constexpr void GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::__set__explosionSoundFired_5__4(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____explosionSoundFired_5__4 = value;
}
inline ::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29* GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29*>(__1__state));
}
inline void GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29*>::get(),
                                               "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::__FireworkItemController___FireCoroutine_d__29() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
