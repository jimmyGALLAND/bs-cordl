#pragma once
#include "UnityEngine/zzzz__KeyCode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRCubemapCapture_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Cubemap_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRCubemapCapture.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRCubemapCapture::*)()>(&::GlobalNamespace::OVRCubemapCapture::Update)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x27a7c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCubemapCapture*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCubemapCapture.TriggerCubemapCapture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector3, int32_t, ::StringW)>(&::GlobalNamespace::OVRCubemapCapture::TriggerCubemapCapture)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x27a7cb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCubemapCapture*>::get(), "TriggerCubemapCapture", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCubemapCapture.RenderIntoCubemap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Camera*, ::UnityEngine::Cubemap*)>(
    &::GlobalNamespace::OVRCubemapCapture::RenderIntoCubemap)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x27a7f60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCubemapCapture*>::get(), "RenderIntoCubemap", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Cubemap*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCubemapCapture.SaveCubemapCapture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Cubemap*, ::StringW)>(&::GlobalNamespace::OVRCubemapCapture::SaveCubemapCapture)> {
  constexpr static std::size_t size = 0x774;
  constexpr static std::size_t addrs = 0x27a84e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCubemapCapture*>::get(), "SaveCubemapCapture", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Cubemap*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCubemapCapture._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRCubemapCapture::*)()>(&::GlobalNamespace::OVRCubemapCapture::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27a8c54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCubemapCapture*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::OVRCubemapCapture::__get_autoTriggerAfterLaunch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoTriggerAfterLaunch;
}
constexpr bool const& GlobalNamespace::OVRCubemapCapture::__get_autoTriggerAfterLaunch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoTriggerAfterLaunch;
}
constexpr void GlobalNamespace::OVRCubemapCapture::__set_autoTriggerAfterLaunch(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___autoTriggerAfterLaunch = value;
}
constexpr float_t& GlobalNamespace::OVRCubemapCapture::__get_autoTriggerDelay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoTriggerDelay;
}
constexpr float_t const& GlobalNamespace::OVRCubemapCapture::__get_autoTriggerDelay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoTriggerDelay;
}
constexpr void GlobalNamespace::OVRCubemapCapture::__set_autoTriggerDelay(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___autoTriggerDelay = value;
}
constexpr float_t& GlobalNamespace::OVRCubemapCapture::__get_autoTriggerElapse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoTriggerElapse;
}
constexpr float_t const& GlobalNamespace::OVRCubemapCapture::__get_autoTriggerElapse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoTriggerElapse;
}
constexpr void GlobalNamespace::OVRCubemapCapture::__set_autoTriggerElapse(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___autoTriggerElapse = value;
}
constexpr ::UnityEngine::KeyCode& GlobalNamespace::OVRCubemapCapture::__get_triggeredByKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___triggeredByKey;
}
constexpr ::UnityEngine::KeyCode const& GlobalNamespace::OVRCubemapCapture::__get_triggeredByKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___triggeredByKey;
}
constexpr void GlobalNamespace::OVRCubemapCapture::__set_triggeredByKey(::UnityEngine::KeyCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___triggeredByKey = value;
}
constexpr ::StringW& GlobalNamespace::OVRCubemapCapture::__get_pathName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pathName;
}
constexpr ::StringW const& GlobalNamespace::OVRCubemapCapture::__get_pathName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pathName;
}
constexpr void GlobalNamespace::OVRCubemapCapture::__set_pathName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pathName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::OVRCubemapCapture::__get_cubemapSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cubemapSize;
}
constexpr int32_t const& GlobalNamespace::OVRCubemapCapture::__get_cubemapSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cubemapSize;
}
constexpr void GlobalNamespace::OVRCubemapCapture::__set_cubemapSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cubemapSize = value;
}
inline void GlobalNamespace::OVRCubemapCapture::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCubemapCapture*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param cubemapSize: int32_t (default: static_cast<int32_t>(0x800))
/// @param pathName: ::StringW (default: nullptr)
inline void GlobalNamespace::OVRCubemapCapture::TriggerCubemapCapture(::UnityEngine::Vector3 capturePos, int32_t cubemapSize, ::StringW pathName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCubemapCapture*>::get(), "TriggerCubemapCapture", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, capturePos, cubemapSize, pathName);
}
inline void GlobalNamespace::OVRCubemapCapture::RenderIntoCubemap(::UnityEngine::Camera* ownerCamera, ::UnityEngine::Cubemap* outCubemap) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCubemapCapture*>::get(), "RenderIntoCubemap", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Cubemap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ownerCamera, outCubemap);
}
/// @param pathName: ::StringW (default: nullptr)
inline bool GlobalNamespace::OVRCubemapCapture::SaveCubemapCapture(::UnityEngine::Cubemap* cubemap, ::StringW pathName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCubemapCapture*>::get(), "SaveCubemapCapture", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Cubemap*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, cubemap, pathName);
}
inline ::GlobalNamespace::OVRCubemapCapture* GlobalNamespace::OVRCubemapCapture::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRCubemapCapture*>());
}
inline void GlobalNamespace::OVRCubemapCapture::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCubemapCapture*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRCubemapCapture::OVRCubemapCapture() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
