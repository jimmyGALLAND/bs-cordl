#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TimelineClip.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Timeline/zzzz__ClipCaps_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Timeline/zzzz__ClipCaps_def.hpp"
#include "UnityEngine/Timeline/zzzz__ICurvesOwner_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::__TimelineClip__Versions::__TimelineClip__Versions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::__TimelineClip__Versions::__TimelineClip__Versions()   {
}
constexpr ::UnityEngine::Timeline::__TimelineClip__Versions  UnityEngine::Timeline::__TimelineClip__Versions::Initial{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Timeline::__TimelineClip__Versions  UnityEngine::Timeline::__TimelineClip__Versions::ClipInFromGlobalToLocal{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::UnityEngine::Timeline::__TimelineClip__TimelineClipUpgrade.UpgradeClipInFromGlobalToLocal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Timeline::TimelineClip*)>(&::UnityEngine::Timeline::__TimelineClip__TimelineClipUpgrade::UpgradeClipInFromGlobalToLocal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4780878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TimelineClip__TimelineClipUpgrade*>::get(),
                        "UpgradeClipInFromGlobalToLocal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Timeline::__TimelineClip__TimelineClipUpgrade::UpgradeClipInFromGlobalToLocal(::UnityEngine::Timeline::TimelineClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TimelineClip__TimelineClipUpgrade*>::get(),
                        "UpgradeClipInFromGlobalToLocal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, clip);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::__TimelineClip__TimelineClipUpgrade::__TimelineClip__TimelineClipUpgrade()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation::__TimelineClip__ClipExtrapolation(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation::__TimelineClip__ClipExtrapolation()   {
}
constexpr ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation  UnityEngine::Timeline::__TimelineClip__ClipExtrapolation::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation  UnityEngine::Timeline::__TimelineClip__ClipExtrapolation::Hold{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation  UnityEngine::Timeline::__TimelineClip__ClipExtrapolation::Loop{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation  UnityEngine::Timeline::__TimelineClip__ClipExtrapolation::PingPong{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation  UnityEngine::Timeline::__TimelineClip__ClipExtrapolation::Continue{static_cast<int32_t>(0x4)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::__TimelineClip__BlendCurveMode::__TimelineClip__BlendCurveMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::__TimelineClip__BlendCurveMode::__TimelineClip__BlendCurveMode()   {
}
constexpr ::UnityEngine::Timeline::__TimelineClip__BlendCurveMode  UnityEngine::Timeline::__TimelineClip__BlendCurveMode::Auto{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Timeline::__TimelineClip__BlendCurveMode  UnityEngine::Timeline::__TimelineClip__BlendCurveMode::Manual{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.UpgradeToLatestVersion
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::UpgradeToLatestVersion)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x478083c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "UpgradeToLatestVersion",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(::UnityEngine::Timeline::TrackAsset*)>(&::UnityEngine::Timeline::TimelineClip::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x47808b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackAsset*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_hasPreExtrapolation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_hasPreExtrapolation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x47809e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_hasPreExtrapolation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_hasPostExtrapolation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_hasPostExtrapolation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4780a04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_hasPostExtrapolation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_timeScale
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_timeScale)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x4780a24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_timeScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_timeScale
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(double_t)>(&::UnityEngine::Timeline::TimelineClip::set_timeScale)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x4780bec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_timeScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4780cc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(double_t)>(&::UnityEngine::Timeline::TimelineClip::set_start)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x477cddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_duration
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_duration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4780df0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_duration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_duration
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(double_t)>(&::UnityEngine::Timeline::TimelineClip::set_duration)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x477cee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_duration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_end
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_end)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4780df8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_end",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_clipIn
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_clipIn)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4780e08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_clipIn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_clipIn
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(double_t)>(&::UnityEngine::Timeline::TimelineClip::set_clipIn)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x4780e28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_clipIn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_displayName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4780f00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_displayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_displayName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(::StringW)>(&::UnityEngine::Timeline::TimelineClip::set_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4780f08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_displayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_clipAssetDuration
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_clipAssetDuration)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x4780f10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_clipAssetDuration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_curves
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AnimationClip> (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_curves)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4780fd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_curves",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_curves
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(::UnityEngine::AnimationClip*)>(&::UnityEngine::Timeline::TimelineClip::set_curves)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4780fd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_curves",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationClip*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x4780fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "UnityEngine.Timeline.ICurvesOwner.get_defaultCurvesName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_hasCurves
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_hasCurves)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4781038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_hasCurves",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_asset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_asset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47810c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_asset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_asset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(::UnityEngine::Object*)>(&::UnityEngine::Timeline::TimelineClip::set_asset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47810cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_asset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.UnityEngine_Timeline_ICurvesOwner_get_assetOwner
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::UnityEngine_Timeline_ICurvesOwner_get_assetOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47810d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "UnityEngine.Timeline.ICurvesOwner.get_assetOwner",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.UnityEngine_Timeline_ICurvesOwner_get_targetTrack
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Timeline::TrackAsset> (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::UnityEngine_Timeline_ICurvesOwner_get_targetTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47810dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "UnityEngine.Timeline.ICurvesOwner.get_targetTrack",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_underlyingAsset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_underlyingAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47810e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_underlyingAsset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_underlyingAsset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(::UnityEngine::Object*)>(&::UnityEngine::Timeline::TimelineClip::set_underlyingAsset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x47810ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_underlyingAsset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_parentTrack
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Timeline::TrackAsset> (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_parentTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47810f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_parentTrack",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_parentTrack
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(::UnityEngine::Timeline::TrackAsset*)>(&::UnityEngine::Timeline::TimelineClip::set_parentTrack)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x47810f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_parentTrack",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackAsset*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.GetParentTrack
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Timeline::TrackAsset> (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::GetParentTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47810fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "GetParentTrack",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.SetParentTrack_Internal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(::UnityEngine::Timeline::TrackAsset*)>(&::UnityEngine::Timeline::TimelineClip::SetParentTrack_Internal)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x47808f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "SetParentTrack_Internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackAsset*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_easeInDuration
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_easeInDuration)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x4781234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_easeInDuration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_easeInDuration
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(double_t)>(&::UnityEngine::Timeline::TimelineClip::set_easeInDuration)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x478131c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_easeInDuration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_easeOutDuration
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_easeOutDuration)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x4781414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_easeOutDuration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_easeOutDuration
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(double_t)>(&::UnityEngine::Timeline::TimelineClip::set_easeOutDuration)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x47814fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_easeOutDuration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_eastOutTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_eastOutTime)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x47815f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_eastOutTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_easeOutTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_easeOutTime)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4781620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_easeOutTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_blendInDuration
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_blendInDuration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x478164c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_blendInDuration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_blendInDuration
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(double_t)>(&::UnityEngine::Timeline::TimelineClip::set_blendInDuration)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x478166c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_blendInDuration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_blendOutDuration
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_blendOutDuration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x47816f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_blendOutDuration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_blendOutDuration
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(double_t)>(&::UnityEngine::Timeline::TimelineClip::set_blendOutDuration)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4781714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_blendOutDuration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_blendInCurveMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::__TimelineClip__BlendCurveMode (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_blendInCurveMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x478179c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_blendInCurveMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_blendInCurveMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(::UnityEngine::Timeline::__TimelineClip__BlendCurveMode)>(&::UnityEngine::Timeline::TimelineClip::set_blendInCurveMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47817a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_blendInCurveMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__TimelineClip__BlendCurveMode>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_blendOutCurveMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::__TimelineClip__BlendCurveMode (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_blendOutCurveMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47817ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_blendOutCurveMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_blendOutCurveMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(::UnityEngine::Timeline::__TimelineClip__BlendCurveMode)>(&::UnityEngine::Timeline::TimelineClip::set_blendOutCurveMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47817b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_blendOutCurveMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__TimelineClip__BlendCurveMode>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_hasBlendIn
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_hasBlendIn)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x47814d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_hasBlendIn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_hasBlendOut
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_hasBlendOut)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x47812f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_hasBlendOut",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_mixInCurve
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationCurve* (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_mixInCurve)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x47817bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_mixInCurve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_mixInCurve
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(::UnityEngine::AnimationCurve*)>(&::UnityEngine::Timeline::TimelineClip::set_mixInCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4781860;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_mixInCurve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationCurve*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_mixInPercentage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_mixInPercentage)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4781868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_mixInPercentage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_mixInDuration
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_mixInDuration)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4781888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_mixInDuration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_mixOutCurve
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationCurve* (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_mixOutCurve)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x47818cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_mixOutCurve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_mixOutCurve
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(::UnityEngine::AnimationCurve*)>(&::UnityEngine::Timeline::TimelineClip::set_mixOutCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4781970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_mixOutCurve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationCurve*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_mixOutTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_mixOutTime)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4781978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_mixOutTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_mixOutDuration
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_mixOutDuration)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x47819a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_mixOutDuration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_mixOutPercentage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_mixOutPercentage)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x47819e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_mixOutPercentage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_recordable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_recordable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4781a08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_recordable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_recordable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(bool)>(&::UnityEngine::Timeline::TimelineClip::set_recordable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4781a10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_recordable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_exposedParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_exposedParameters)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x4781a1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_exposedParameters",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_clipCaps
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::ClipCaps (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_clipCaps)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x4780afc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_clipCaps",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.Hash
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::Hash)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x4781a94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "Hash",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.EvaluateMixOut
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Timeline::TimelineClip::*)(double_t)>(&::UnityEngine::Timeline::TimelineClip::EvaluateMixOut)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x4781b70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "EvaluateMixOut",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.EvaluateMixIn
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Timeline::TimelineClip::*)(double_t)>(&::UnityEngine::Timeline::TimelineClip::EvaluateMixIn)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x4781c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "EvaluateMixIn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.GetDefaultMixInCurve
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationCurve* (*)()>(&::UnityEngine::Timeline::TimelineClip::GetDefaultMixInCurve)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x4781848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "GetDefaultMixInCurve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.GetDefaultMixOutCurve
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationCurve* (*)()>(&::UnityEngine::Timeline::TimelineClip::GetDefaultMixOutCurve)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x4781958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "GetDefaultMixOutCurve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.ToLocalTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)(double_t)>(&::UnityEngine::Timeline::TimelineClip::ToLocalTime)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x4781d38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "ToLocalTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.ToLocalTimeUnbound
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)(double_t)>(&::UnityEngine::Timeline::TimelineClip::ToLocalTimeUnbound)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x4781fec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "ToLocalTimeUnbound",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.FromLocalTimeUnbound
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)(double_t)>(&::UnityEngine::Timeline::TimelineClip::FromLocalTimeUnbound)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x478203c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "FromLocalTimeUnbound",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_animationClip
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AnimationClip> (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_animationClip)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x4782080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_animationClip",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.SanitizeTimeValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(double_t, double_t)>(&::UnityEngine::Timeline::TimelineClip::SanitizeTimeValue)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x4780ccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "SanitizeTimeValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_postExtrapolationMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_postExtrapolationMode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4782178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_postExtrapolationMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_postExtrapolationMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation)>(&::UnityEngine::Timeline::TimelineClip::set_postExtrapolationMode)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x477d120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_postExtrapolationMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_preExtrapolationMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_preExtrapolationMode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x478219c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_preExtrapolationMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_preExtrapolationMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation)>(&::UnityEngine::Timeline::TimelineClip::set_preExtrapolationMode)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x477d0ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_preExtrapolationMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.SetPostExtrapolationTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(double_t)>(&::UnityEngine::Timeline::TimelineClip::SetPostExtrapolationTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47821c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "SetPostExtrapolationTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.SetPreExtrapolationTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(double_t)>(&::UnityEngine::Timeline::TimelineClip::SetPreExtrapolationTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47821c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "SetPreExtrapolationTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.IsExtrapolatedTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TimelineClip::*)(double_t)>(&::UnityEngine::Timeline::TimelineClip::IsExtrapolatedTime)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x47821d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "IsExtrapolatedTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.IsPreExtrapolatedTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TimelineClip::*)(double_t)>(&::UnityEngine::Timeline::TimelineClip::IsPreExtrapolatedTime)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x4781e28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "IsPreExtrapolatedTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.IsPostExtrapolatedTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TimelineClip::*)(double_t)>(&::UnityEngine::Timeline::TimelineClip::IsPostExtrapolatedTime)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x4781f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "IsPostExtrapolatedTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_extrapolatedStart
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_extrapolatedStart)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x478220c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_extrapolatedStart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_extrapolatedDuration
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_extrapolatedDuration)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x4782224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_extrapolatedDuration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.GetExtrapolatedTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(double_t, ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation, double_t)>(&::UnityEngine::Timeline::TimelineClip::GetExtrapolatedTime)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x4781e78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "GetExtrapolatedTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.CreateCurves
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(::StringW)>(&::UnityEngine::Timeline::TimelineClip::CreateCurves)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x47822f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "CreateCurves",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x47823bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x47823c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::ToString)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x4782404;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.ConformEaseValues
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::ConformEaseValues)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x47825e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "ConformEaseValues",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.CalculateEasingRatio
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(double_t, double_t)>(&::UnityEngine::Timeline::TimelineClip::CalculateEasingRatio)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x4782670;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "CalculateEasingRatio",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.UpdateDirty
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(double_t, double_t)>(&::UnityEngine::Timeline::TimelineClip::UpdateDirty)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4780cc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "UpdateDirty",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Timeline::ICurvesOwner"
constexpr  UnityEngine::Timeline::TimelineClip::operator ::UnityEngine::Timeline::ICurvesOwner*() noexcept {
return static_cast<::UnityEngine::Timeline::ICurvesOwner*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Timeline::ICurvesOwner"
constexpr ::UnityEngine::Timeline::ICurvesOwner* UnityEngine::Timeline::TimelineClip::i___UnityEngine__Timeline__ICurvesOwner() noexcept {
return static_cast<::UnityEngine::Timeline::ICurvesOwner*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  UnityEngine::Timeline::TimelineClip::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Timeline::TimelineClip::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
constexpr int32_t& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_Version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Version;
}
constexpr int32_t const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_Version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Version;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_Version(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Version = value;
}
constexpr double_t& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_Start()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Start;
}
constexpr double_t const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_Start() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Start;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_Start(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Start = value;
}
constexpr double_t& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_ClipIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClipIn;
}
constexpr double_t const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_ClipIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClipIn;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_ClipIn(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ClipIn = value;
}
constexpr ::UnityW<::UnityEngine::Object>& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_Asset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Asset;
}
constexpr ::UnityW<::UnityEngine::Object> const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_Asset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Asset;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_Asset(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Asset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr double_t& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_Duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Duration;
}
constexpr double_t const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_Duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Duration;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_Duration(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Duration = value;
}
constexpr double_t& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_TimeScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TimeScale;
}
constexpr double_t const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_TimeScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TimeScale;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_TimeScale(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TimeScale = value;
}
constexpr ::UnityW<::UnityEngine::Timeline::TrackAsset>& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_ParentTrack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ParentTrack;
}
constexpr ::UnityW<::UnityEngine::Timeline::TrackAsset> const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_ParentTrack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ParentTrack;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_ParentTrack(::UnityW<::UnityEngine::Timeline::TrackAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ParentTrack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr double_t& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_EaseInDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EaseInDuration;
}
constexpr double_t const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_EaseInDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EaseInDuration;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_EaseInDuration(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EaseInDuration = value;
}
constexpr double_t& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_EaseOutDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EaseOutDuration;
}
constexpr double_t const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_EaseOutDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EaseOutDuration;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_EaseOutDuration(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EaseOutDuration = value;
}
constexpr double_t& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_BlendInDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BlendInDuration;
}
constexpr double_t const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_BlendInDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BlendInDuration;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_BlendInDuration(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BlendInDuration = value;
}
constexpr double_t& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_BlendOutDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BlendOutDuration;
}
constexpr double_t const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_BlendOutDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BlendOutDuration;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_BlendOutDuration(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BlendOutDuration = value;
}
constexpr ::UnityEngine::AnimationCurve*& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_MixInCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MixInCurve;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_MixInCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MixInCurve;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_MixInCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MixInCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationCurve*& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_MixOutCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MixOutCurve;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_MixOutCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MixOutCurve;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_MixOutCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MixOutCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Timeline::__TimelineClip__BlendCurveMode& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_BlendInCurveMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BlendInCurveMode;
}
constexpr ::UnityEngine::Timeline::__TimelineClip__BlendCurveMode const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_BlendInCurveMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BlendInCurveMode;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_BlendInCurveMode(::UnityEngine::Timeline::__TimelineClip__BlendCurveMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BlendInCurveMode = value;
}
constexpr ::UnityEngine::Timeline::__TimelineClip__BlendCurveMode& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_BlendOutCurveMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BlendOutCurveMode;
}
constexpr ::UnityEngine::Timeline::__TimelineClip__BlendCurveMode const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_BlendOutCurveMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BlendOutCurveMode;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_BlendOutCurveMode(::UnityEngine::Timeline::__TimelineClip__BlendCurveMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BlendOutCurveMode = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_ExposedParameterNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExposedParameterNames;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_ExposedParameterNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExposedParameterNames;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_ExposedParameterNames(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ExposedParameterNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_AnimationCurves()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AnimationCurves;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_AnimationCurves() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AnimationCurves;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_AnimationCurves(::UnityW<::UnityEngine::AnimationClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AnimationCurves)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_Recordable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Recordable;
}
constexpr bool const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_Recordable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Recordable;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_Recordable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Recordable = value;
}
constexpr ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_PostExtrapolationMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PostExtrapolationMode;
}
constexpr ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_PostExtrapolationMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PostExtrapolationMode;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_PostExtrapolationMode(::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PostExtrapolationMode = value;
}
constexpr ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_PreExtrapolationMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreExtrapolationMode;
}
constexpr ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_PreExtrapolationMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreExtrapolationMode;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_PreExtrapolationMode(::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreExtrapolationMode = value;
}
constexpr double_t& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_PostExtrapolationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PostExtrapolationTime;
}
constexpr double_t const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_PostExtrapolationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PostExtrapolationTime;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_PostExtrapolationTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PostExtrapolationTime = value;
}
constexpr double_t& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_PreExtrapolationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreExtrapolationTime;
}
constexpr double_t const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_PreExtrapolationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreExtrapolationTime;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_PreExtrapolationTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreExtrapolationTime = value;
}
constexpr ::StringW& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_DisplayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DisplayName;
}
constexpr ::StringW const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_DisplayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DisplayName;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_DisplayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DisplayName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Timeline::TimelineClip::setStaticF_kDefaultClipCaps(::UnityEngine::Timeline::ClipCaps  value)  {
::cordl_internals::setStaticField<::UnityEngine::Timeline::ClipCaps, "kDefaultClipCaps", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get>(std::forward<::UnityEngine::Timeline::ClipCaps>(value));
}
inline ::UnityEngine::Timeline::ClipCaps UnityEngine::Timeline::TimelineClip::getStaticF_kDefaultClipCaps()  {
return ::cordl_internals::getStaticField<::UnityEngine::Timeline::ClipCaps, "kDefaultClipCaps", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get>();
}
inline void UnityEngine::Timeline::TimelineClip::setStaticF_kDefaultClipDurationInSeconds(float_t  value)  {
::cordl_internals::setStaticField<float_t, "kDefaultClipDurationInSeconds", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get>(std::forward<float_t>(value));
}
inline float_t UnityEngine::Timeline::TimelineClip::getStaticF_kDefaultClipDurationInSeconds()  {
return ::cordl_internals::getStaticField<float_t, "kDefaultClipDurationInSeconds", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get>();
}
inline void UnityEngine::Timeline::TimelineClip::setStaticF_kTimeScaleMin(double_t  value)  {
::cordl_internals::setStaticField<double_t, "kTimeScaleMin", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get>(std::forward<double_t>(value));
}
inline double_t UnityEngine::Timeline::TimelineClip::getStaticF_kTimeScaleMin()  {
return ::cordl_internals::getStaticField<double_t, "kTimeScaleMin", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get>();
}
inline void UnityEngine::Timeline::TimelineClip::setStaticF_kTimeScaleMax(double_t  value)  {
::cordl_internals::setStaticField<double_t, "kTimeScaleMax", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get>(std::forward<double_t>(value));
}
inline double_t UnityEngine::Timeline::TimelineClip::getStaticF_kTimeScaleMax()  {
return ::cordl_internals::getStaticField<double_t, "kTimeScaleMax", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get>();
}
inline void UnityEngine::Timeline::TimelineClip::setStaticF_kDefaultCurvesName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "kDefaultCurvesName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Timeline::TimelineClip::getStaticF_kDefaultCurvesName()  {
return ::cordl_internals::getStaticField<::StringW, "kDefaultCurvesName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get>();
}
inline void UnityEngine::Timeline::TimelineClip::setStaticF_kMinDuration(double_t  value)  {
::cordl_internals::setStaticField<double_t, "kMinDuration", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get>(std::forward<double_t>(value));
}
inline double_t UnityEngine::Timeline::TimelineClip::getStaticF_kMinDuration()  {
return ::cordl_internals::getStaticField<double_t, "kMinDuration", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get>();
}
inline void UnityEngine::Timeline::TimelineClip::setStaticF_kMaxTimeValue(double_t  value)  {
::cordl_internals::setStaticField<double_t, "kMaxTimeValue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get>(std::forward<double_t>(value));
}
inline double_t UnityEngine::Timeline::TimelineClip::getStaticF_kMaxTimeValue()  {
return ::cordl_internals::getStaticField<double_t, "kMaxTimeValue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get>();
}
inline void UnityEngine::Timeline::TimelineClip::UpgradeToLatestVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "UpgradeToLatestVersion",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::TimelineClip* UnityEngine::Timeline::TimelineClip::New_ctor(::UnityEngine::Timeline::TrackAsset*  parent)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Timeline::TimelineClip*>(parent));
}
inline void UnityEngine::Timeline::TimelineClip::_ctor(::UnityEngine::Timeline::TrackAsset*  parent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackAsset*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parent);
}
inline bool UnityEngine::Timeline::TimelineClip::get_hasPreExtrapolation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_hasPreExtrapolation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::TimelineClip::get_hasPostExtrapolation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_hasPostExtrapolation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline double_t UnityEngine::Timeline::TimelineClip::get_timeScale()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_timeScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_timeScale(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_timeScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline double_t UnityEngine::Timeline::TimelineClip::get_start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_start(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline double_t UnityEngine::Timeline::TimelineClip::get_duration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_duration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_duration(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_duration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline double_t UnityEngine::Timeline::TimelineClip::get_end()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_end",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline double_t UnityEngine::Timeline::TimelineClip::get_clipIn()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_clipIn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_clipIn(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_clipIn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Timeline::TimelineClip::get_displayName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_displayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_displayName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_displayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline double_t UnityEngine::Timeline::TimelineClip::get_clipAssetDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_clipAssetDuration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AnimationClip> UnityEngine::Timeline::TimelineClip::get_curves()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_curves",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AnimationClip>, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_curves(::UnityEngine::AnimationClip*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_curves",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationClip*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Timeline::TimelineClip::UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "UnityEngine.Timeline.ICurvesOwner.get_defaultCurvesName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::TimelineClip::get_hasCurves()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_hasCurves",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Timeline::TimelineClip::get_asset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_asset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_asset(::UnityEngine::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_asset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Timeline::TimelineClip::UnityEngine_Timeline_ICurvesOwner_get_assetOwner()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "UnityEngine.Timeline.ICurvesOwner.get_assetOwner",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Timeline::TrackAsset> UnityEngine::Timeline::TimelineClip::UnityEngine_Timeline_ICurvesOwner_get_targetTrack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "UnityEngine.Timeline.ICurvesOwner.get_targetTrack",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Timeline::TrackAsset>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Timeline::TimelineClip::get_underlyingAsset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_underlyingAsset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_underlyingAsset(::UnityEngine::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_underlyingAsset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Timeline::TrackAsset> UnityEngine::Timeline::TimelineClip::get_parentTrack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_parentTrack",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Timeline::TrackAsset>, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_parentTrack(::UnityEngine::Timeline::TrackAsset*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_parentTrack",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackAsset*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Timeline::TrackAsset> UnityEngine::Timeline::TimelineClip::GetParentTrack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "GetParentTrack",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Timeline::TrackAsset>, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::SetParentTrack_Internal(::UnityEngine::Timeline::TrackAsset*  newParentTrack)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "SetParentTrack_Internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackAsset*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newParentTrack);
}
inline double_t UnityEngine::Timeline::TimelineClip::get_easeInDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_easeInDuration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_easeInDuration(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_easeInDuration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline double_t UnityEngine::Timeline::TimelineClip::get_easeOutDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_easeOutDuration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_easeOutDuration(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_easeOutDuration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline double_t UnityEngine::Timeline::TimelineClip::get_eastOutTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_eastOutTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline double_t UnityEngine::Timeline::TimelineClip::get_easeOutTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_easeOutTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline double_t UnityEngine::Timeline::TimelineClip::get_blendInDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_blendInDuration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_blendInDuration(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_blendInDuration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline double_t UnityEngine::Timeline::TimelineClip::get_blendOutDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_blendOutDuration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_blendOutDuration(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_blendOutDuration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Timeline::__TimelineClip__BlendCurveMode UnityEngine::Timeline::TimelineClip::get_blendInCurveMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_blendInCurveMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::__TimelineClip__BlendCurveMode, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_blendInCurveMode(::UnityEngine::Timeline::__TimelineClip__BlendCurveMode  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_blendInCurveMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__TimelineClip__BlendCurveMode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Timeline::__TimelineClip__BlendCurveMode UnityEngine::Timeline::TimelineClip::get_blendOutCurveMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_blendOutCurveMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::__TimelineClip__BlendCurveMode, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_blendOutCurveMode(::UnityEngine::Timeline::__TimelineClip__BlendCurveMode  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_blendOutCurveMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__TimelineClip__BlendCurveMode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Timeline::TimelineClip::get_hasBlendIn()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_hasBlendIn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::TimelineClip::get_hasBlendOut()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_hasBlendOut",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::AnimationCurve* UnityEngine::Timeline::TimelineClip::get_mixInCurve()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_mixInCurve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_mixInCurve(::UnityEngine::AnimationCurve*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_mixInCurve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationCurve*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Timeline::TimelineClip::get_mixInPercentage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_mixInPercentage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline double_t UnityEngine::Timeline::TimelineClip::get_mixInDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_mixInDuration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline ::UnityEngine::AnimationCurve* UnityEngine::Timeline::TimelineClip::get_mixOutCurve()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_mixOutCurve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_mixOutCurve(::UnityEngine::AnimationCurve*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_mixOutCurve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationCurve*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline double_t UnityEngine::Timeline::TimelineClip::get_mixOutTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_mixOutTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline double_t UnityEngine::Timeline::TimelineClip::get_mixOutDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_mixOutDuration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::Timeline::TimelineClip::get_mixOutPercentage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_mixOutPercentage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::TimelineClip::get_recordable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_recordable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_recordable(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_recordable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::StringW>* UnityEngine::Timeline::TimelineClip::get_exposedParameters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_exposedParameters",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::ClipCaps UnityEngine::Timeline::TimelineClip::get_clipCaps()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_clipCaps",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::ClipCaps, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Timeline::TimelineClip::Hash()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "Hash",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::Timeline::TimelineClip::EvaluateMixOut(double_t  time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "EvaluateMixOut",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, time);
}
inline float_t UnityEngine::Timeline::TimelineClip::EvaluateMixIn(double_t  time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "EvaluateMixIn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, time);
}
inline ::UnityEngine::AnimationCurve* UnityEngine::Timeline::TimelineClip::GetDefaultMixInCurve()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "GetDefaultMixInCurve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::AnimationCurve* UnityEngine::Timeline::TimelineClip::GetDefaultMixOutCurve()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "GetDefaultMixOutCurve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*, false>(nullptr, ___internal_method);
}
inline double_t UnityEngine::Timeline::TimelineClip::ToLocalTime(double_t  time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "ToLocalTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method, time);
}
inline double_t UnityEngine::Timeline::TimelineClip::ToLocalTimeUnbound(double_t  time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "ToLocalTimeUnbound",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method, time);
}
inline double_t UnityEngine::Timeline::TimelineClip::FromLocalTimeUnbound(double_t  time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "FromLocalTimeUnbound",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method, time);
}
inline ::UnityW<::UnityEngine::AnimationClip> UnityEngine::Timeline::TimelineClip::get_animationClip()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_animationClip",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AnimationClip>, false>(this, ___internal_method);
}
inline double_t UnityEngine::Timeline::TimelineClip::SanitizeTimeValue(double_t  value, double_t  defaultValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "SanitizeTimeValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, value, defaultValue);
}
inline ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation UnityEngine::Timeline::TimelineClip::get_postExtrapolationMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_postExtrapolationMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_postExtrapolationMode(::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_postExtrapolationMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation UnityEngine::Timeline::TimelineClip::get_preExtrapolationMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_preExtrapolationMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_preExtrapolationMode(::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "set_preExtrapolationMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Timeline::TimelineClip::SetPostExtrapolationTime(double_t  time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "SetPostExtrapolationTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time);
}
inline void UnityEngine::Timeline::TimelineClip::SetPreExtrapolationTime(double_t  time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "SetPreExtrapolationTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time);
}
inline bool UnityEngine::Timeline::TimelineClip::IsExtrapolatedTime(double_t  sequenceTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "IsExtrapolatedTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, sequenceTime);
}
inline bool UnityEngine::Timeline::TimelineClip::IsPreExtrapolatedTime(double_t  sequenceTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "IsPreExtrapolatedTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, sequenceTime);
}
inline bool UnityEngine::Timeline::TimelineClip::IsPostExtrapolatedTime(double_t  sequenceTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "IsPostExtrapolatedTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, sequenceTime);
}
inline double_t UnityEngine::Timeline::TimelineClip::get_extrapolatedStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_extrapolatedStart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline double_t UnityEngine::Timeline::TimelineClip::get_extrapolatedDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "get_extrapolatedDuration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline double_t UnityEngine::Timeline::TimelineClip::GetExtrapolatedTime(double_t  time, ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation  mode, double_t  duration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "GetExtrapolatedTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, time, mode, duration);
}
inline void UnityEngine::Timeline::TimelineClip::CreateCurves(::StringW  curvesClipName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "CreateCurves",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, curvesClipName);
}
inline void UnityEngine::Timeline::TimelineClip::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::Timeline::TimelineClip::ToString()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::ConformEaseValues()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "ConformEaseValues",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline double_t UnityEngine::Timeline::TimelineClip::CalculateEasingRatio(double_t  easeIn, double_t  easeOut)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "CalculateEasingRatio",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, easeIn, easeOut);
}
inline void UnityEngine::Timeline::TimelineClip::UpdateDirty(double_t  oldValue, double_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClip*>::get(),
                        "UpdateDirty",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldValue, newValue);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TimelineClip::TimelineClip()   {
}
