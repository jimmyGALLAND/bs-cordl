#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__Avatar_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarVisualDataProvider_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarPoseData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IOptionalAvatarDataProvider_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__OptionalAvatarData_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarPoseDataProvider_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::Avatar.get_bodyCenterWorldPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::BeatSaber::AvatarCore::Avatar::*)()>(
    &::BeatSaber::AvatarCore::Avatar::get_bodyCenterWorldPosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::Avatar*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::Avatar*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::Avatar.SetPoseDataProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::Avatar::*)(::BeatSaber::AvatarCore::IAvatarPoseDataProvider*)>(
    &::BeatSaber::AvatarCore::Avatar::SetPoseDataProvider)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xe0a674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::Avatar*>::get(), "SetPoseDataProvider", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarPoseDataProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::Avatar.SetVisualDataProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::Avatar::*)(::BeatSaber::AvatarCore::IAvatarVisualDataProvider*)>(
    &::BeatSaber::AvatarCore::Avatar::SetVisualDataProvider)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xe0a894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::Avatar*>::get(), "SetVisualDataProvider", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarVisualDataProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::Avatar.SetOptionalDataProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::Avatar::*)(::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*)>(
    &::BeatSaber::AvatarCore::Avatar::SetOptionalDataProvider)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xe0a978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::Avatar*>::get(), "SetOptionalDataProvider", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::Avatar.UpdateAvatarFromOptionalDataList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::Avatar::*)(
    ::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::OptionalAvatarData>*)>(&::BeatSaber::AvatarCore::Avatar::UpdateAvatarFromOptionalDataList)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xe0ab68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::Avatar*>::get(), "UpdateAvatarFromOptionalDataList", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::OptionalAvatarData>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::Avatar.UpdateAvatarFromOptionalData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::Avatar::*)(::BeatSaber::AvatarCore::OptionalAvatarData)>(
    &::BeatSaber::AvatarCore::Avatar::UpdateAvatarFromOptionalData)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xe0acc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::Avatar*>::get(), "UpdateAvatarFromOptionalData", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::OptionalAvatarData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::Avatar.SetLightColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::Avatar::*)(::UnityEngine::Color)>(&::BeatSaber::AvatarCore::Avatar::SetLightColor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::Avatar*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::Avatar*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::Avatar.UpdateAvatarFromPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::Avatar::*)(::BeatSaber::AvatarCore::AvatarPoseData)>(
    &::BeatSaber::AvatarCore::Avatar::UpdateAvatarFromPose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::Avatar*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::Avatar*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::Avatar.UpdateAvatarFromVisualData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::Avatar::*)(::GlobalNamespace::MultiplayerAvatarsData)>(
    &::BeatSaber::AvatarCore::Avatar::UpdateAvatarFromVisualData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::Avatar*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::Avatar*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::Avatar.UpdateAvatarFromOptionalData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::Avatar::*)(::BeatSaber::AvatarCore::OptionalAvatarData, float_t)>(
    &::BeatSaber::AvatarCore::Avatar::UpdateAvatarFromOptionalData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::Avatar*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::Avatar*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::Avatar._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::Avatar::*)()>(&::BeatSaber::AvatarCore::Avatar::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0ad8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::Avatar*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::AvatarCore::IAvatarVisualDataProvider*& BeatSaber::AvatarCore::Avatar::__get_visualDataProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___visualDataProvider;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IAvatarVisualDataProvider*> const& BeatSaber::AvatarCore::Avatar::__get_visualDataProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___visualDataProvider;
}
constexpr void BeatSaber::AvatarCore::Avatar::__set_visualDataProvider(::BeatSaber::AvatarCore::IAvatarVisualDataProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___visualDataProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::AvatarCore::IAvatarPoseDataProvider*& BeatSaber::AvatarCore::Avatar::__get_poseDataProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___poseDataProvider;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IAvatarPoseDataProvider*> const& BeatSaber::AvatarCore::Avatar::__get_poseDataProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___poseDataProvider;
}
constexpr void BeatSaber::AvatarCore::Avatar::__set_poseDataProvider(::BeatSaber::AvatarCore::IAvatarPoseDataProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___poseDataProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*& BeatSaber::AvatarCore::Avatar::__get_optionalDataProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___optionalDataProvider;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*> const& BeatSaber::AvatarCore::Avatar::__get_optionalDataProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___optionalDataProvider;
}
constexpr void BeatSaber::AvatarCore::Avatar::__set_optionalDataProvider(::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___optionalDataProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Vector3 BeatSaber::AvatarCore::Avatar::get_bodyCenterWorldPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::Avatar*>::get(),
                                                                             "get_bodyCenterWorldPosition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::Avatar::SetPoseDataProvider(::BeatSaber::AvatarCore::IAvatarPoseDataProvider* poseDataProvider) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::Avatar*>::get(), "SetPoseDataProvider", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarPoseDataProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, poseDataProvider);
}
inline void BeatSaber::AvatarCore::Avatar::SetVisualDataProvider(::BeatSaber::AvatarCore::IAvatarVisualDataProvider* visualDataProvider) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::Avatar*>::get(), "SetVisualDataProvider", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarVisualDataProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, visualDataProvider);
}
inline void BeatSaber::AvatarCore::Avatar::SetOptionalDataProvider(::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* optionalDataProvider) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::Avatar*>::get(), "SetOptionalDataProvider", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, optionalDataProvider);
}
inline void BeatSaber::AvatarCore::Avatar::UpdateAvatarFromOptionalDataList(::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::OptionalAvatarData>* optionalData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::Avatar*>::get(), "UpdateAvatarFromOptionalDataList", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::OptionalAvatarData>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, optionalData);
}
inline void BeatSaber::AvatarCore::Avatar::UpdateAvatarFromOptionalData(::BeatSaber::AvatarCore::OptionalAvatarData data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::Avatar*>::get(), "UpdateAvatarFromOptionalData", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::OptionalAvatarData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void BeatSaber::AvatarCore::Avatar::SetLightColor(::UnityEngine::Color lightColor) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::Avatar*>::get(), "SetLightColor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightColor);
}
inline void BeatSaber::AvatarCore::Avatar::UpdateAvatarFromPose(::BeatSaber::AvatarCore::AvatarPoseData currentPose) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::Avatar*>::get(), "UpdateAvatarFromPose", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::AvatarPoseData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentPose);
}
inline void BeatSaber::AvatarCore::Avatar::UpdateAvatarFromVisualData(::GlobalNamespace::MultiplayerAvatarsData visualData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::Avatar*>::get(), "UpdateAvatarFromVisualData", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerAvatarsData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, visualData);
}
inline void BeatSaber::AvatarCore::Avatar::UpdateAvatarFromOptionalData(::BeatSaber::AvatarCore::OptionalAvatarData data, float_t playbackDelaySeconds) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::Avatar*>::get(), "UpdateAvatarFromOptionalData", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::OptionalAvatarData>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, playbackDelaySeconds);
}
inline ::BeatSaber::AvatarCore::Avatar* BeatSaber::AvatarCore::Avatar::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BeatSaber::AvatarCore::Avatar*>());
}
inline void BeatSaber::AvatarCore::Avatar::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::Avatar*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::Avatar::Avatar() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
