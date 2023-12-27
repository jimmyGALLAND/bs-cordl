#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__TrackedDeviceRaycaster_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__TrackedDeviceRaycaster_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__ExtendedPointerEventData_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData::*)(
    ::UnityEngine::UI::Graphic*, ::UnityEngine::Vector3, ::UnityEngine::Vector2, float_t)>(&::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ad73ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Graphic*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData.get_graphic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Graphic* (::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData::*)()>(
    &::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData::get_graphic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad74d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>::get(), "get_graphic",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData.get_worldHitPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData::*)()>(
    &::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData::get_worldHitPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ad74d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>::get(),
                                                 "get_worldHitPosition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData.get_screenPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData::*)()>(
    &::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData::get_screenPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad74e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>::get(),
                                                 "get_screenPosition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData.get_distance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData::*)()>(
    &::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData::get_distance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad74ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>::get(),
                                                 "get_distance", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData::_ctor(::UnityEngine::UI::Graphic* graphic, ::UnityEngine::Vector3 worldHitPosition,
                                                                                          ::UnityEngine::Vector2 screenPosition, float_t distance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Graphic*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, graphic, worldHitPosition, screenPosition, distance);
}
inline ::UnityEngine::UI::Graphic* UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData::get_graphic() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>::get(), "get_graphic",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Graphic*, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData::get_worldHitPosition() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>::get(),
                                               "get_worldHitPosition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData::get_screenPosition() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>::get(),
                                               "get_screenPosition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData::get_distance() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>::get(), "get_distance",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_graphic_k__BackingField", ty: "::UnityEngine::UI::Graphic*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_worldHitPosition_k__BackingField",
// ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "_screenPosition_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_distance_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData::__TrackedDeviceRaycaster__RaycastHitData(::UnityEngine::UI::Graphic* _graphic_k__BackingField,
                                                                                                                             ::UnityEngine::Vector3 _worldHitPosition_k__BackingField,
                                                                                                                             ::UnityEngine::Vector2 _screenPosition_k__BackingField,
                                                                                                                             float_t _distance_k__BackingField) noexcept {
  this->_graphic_k__BackingField = _graphic_k__BackingField;
  this->_worldHitPosition_k__BackingField = _worldHitPosition_k__BackingField;
  this->_screenPosition_k__BackingField = _screenPosition_k__BackingField;
  this->_distance_k__BackingField = _distance_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData::__TrackedDeviceRaycaster__RaycastHitData() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c::*)()>(
    &::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad7558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c._SortedRaycastGraphics_b__25_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c::*)(
    ::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData, ::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData)>(
    &::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c::_SortedRaycastGraphics_b__25_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2ad7560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c*>::get(), "<SortedRaycastGraphics>b__25_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c::setStaticF___9(::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c*>::get>(
      std::forward<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c*>(value));
}
inline ::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c* UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c*>::get>();
}
inline void UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c::setStaticF___9__25_0(::System::Comparison_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>*, "<>9__25_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c*>::get>(
      std::forward<::System::Comparison_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>* UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c::getStaticF___9__25_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>*, "<>9__25_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c*>::get>();
}
inline ::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c* UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c*>());
}
inline void UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c::_SortedRaycastGraphics_b__25_0(::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData g1,
                                                                                                           ::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData g2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c*>::get(), "<SortedRaycastGraphics>b__25_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, g1, g2);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c::__TrackedDeviceRaycaster____c() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.get_eventCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Camera* (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_eventCamera)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2ad68cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.get_blockingMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_blockingMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad69f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(),
                                                                               "get_blockingMask", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.set_blockingMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)(::UnityEngine::LayerMask)>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_blockingMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad69fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(), "set_blockingMask",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.get_checkFor3DOcclusion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_checkFor3DOcclusion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad6a04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(),
                                                                               "get_checkFor3DOcclusion", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.set_checkFor3DOcclusion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)(bool)>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_checkFor3DOcclusion)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ad6a0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(), "set_checkFor3DOcclusion",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.get_checkFor2DOcclusion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_checkFor2DOcclusion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad6a18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(),
                                                                               "get_checkFor2DOcclusion", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.set_checkFor2DOcclusion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)(bool)>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_checkFor2DOcclusion)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ad6a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(), "set_checkFor2DOcclusion",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.get_ignoreReversedGraphics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_ignoreReversedGraphics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad6a2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(),
                                                                               "get_ignoreReversedGraphics", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.set_ignoreReversedGraphics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)(bool)>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_ignoreReversedGraphics)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ad6a34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(), "set_ignoreReversedGraphics",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.get_maxDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_maxDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad6a40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(),
                                                                               "get_maxDistance", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.set_maxDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)(float_t)>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_maxDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad6a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(), "set_maxDistance",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::OnEnable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2ad6a50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::OnDisable)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2ad6ad4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.Raycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)(
    ::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::Raycast)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2ad6bc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.PerformRaycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)(
    ::UnityEngine::InputSystem::UI::ExtendedPointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::PerformRaycast)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x2ad08a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(), "PerformRaycast", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.SortedRaycastGraphics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)(
    ::UnityEngine::Canvas*, ::UnityEngine::Ray, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>*)>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::SortedRaycastGraphics)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x2ad6c78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(), "SortedRaycastGraphics", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Canvas*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.RayIntersectsRectTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::RectTransform*, ::UnityEngine::Ray, ByRef<::UnityEngine::Vector3>, ByRef<float_t>)>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::RayIntersectsRectTransform)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x2ad7154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(), "RayIntersectsRectTransform", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.get_canvas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Canvas* (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_canvas)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2ad6960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(),
                                                                               "get_canvas", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2ad73c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>*&
UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__get_m_RaycastResultsCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_RaycastResultsCache;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>*> const&
UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__get_m_RaycastResultsCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_RaycastResultsCache;
}
constexpr void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__set_m_RaycastResultsCache(
    ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RaycastResultsCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__get_m_IgnoreReversedGraphics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_IgnoreReversedGraphics;
}
constexpr bool const& UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__get_m_IgnoreReversedGraphics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_IgnoreReversedGraphics;
}
constexpr void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__set_m_IgnoreReversedGraphics(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_IgnoreReversedGraphics = value;
}
constexpr bool& UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__get_m_CheckFor2DOcclusion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_CheckFor2DOcclusion;
}
constexpr bool const& UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__get_m_CheckFor2DOcclusion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_CheckFor2DOcclusion;
}
constexpr void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__set_m_CheckFor2DOcclusion(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_CheckFor2DOcclusion = value;
}
constexpr bool& UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__get_m_CheckFor3DOcclusion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_CheckFor3DOcclusion;
}
constexpr bool const& UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__get_m_CheckFor3DOcclusion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_CheckFor3DOcclusion;
}
constexpr void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__set_m_CheckFor3DOcclusion(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_CheckFor3DOcclusion = value;
}
constexpr float_t& UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__get_m_MaxDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_MaxDistance;
}
constexpr float_t const& UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__get_m_MaxDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_MaxDistance;
}
constexpr void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__set_m_MaxDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_MaxDistance = value;
}
constexpr ::UnityEngine::LayerMask& UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__get_m_BlockingMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_BlockingMask;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__get_m_BlockingMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_BlockingMask;
}
constexpr void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__set_m_BlockingMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_BlockingMask = value;
}
constexpr ::UnityEngine::Canvas*& UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__get_m_Canvas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Canvas;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Canvas*> const& UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__get_m_Canvas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Canvas;
}
constexpr void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__set_m_Canvas(::UnityEngine::Canvas* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Canvas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void
UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::setStaticF_s_Instances(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*> value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>, "s_Instances",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get>(
      std::forward<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>>(value));
}
inline ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*> UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::getStaticF_s_Instances() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>, "s_Instances",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get>();
}
inline void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::setStaticF_s_SortedGraphics(
    ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>*, "s_SortedGraphics",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>*
UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::getStaticF_s_SortedGraphics() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>*, "s_SortedGraphics",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get>();
}
inline ::UnityEngine::Camera* UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_eventCamera() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(),
                                                                             "get_eventCamera", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Camera*, false>(this, ___internal_method);
}
inline ::UnityEngine::LayerMask UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_blockingMask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(),
                                                                             "get_blockingMask", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_blockingMask(::UnityEngine::LayerMask value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(), "set_blockingMask",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_checkFor3DOcclusion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(),
                                                                             "get_checkFor3DOcclusion", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_checkFor3DOcclusion(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(), "set_checkFor3DOcclusion",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_checkFor2DOcclusion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(),
                                                                             "get_checkFor2DOcclusion", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_checkFor2DOcclusion(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(), "set_checkFor2DOcclusion",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_ignoreReversedGraphics() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(),
                                                                             "get_ignoreReversedGraphics", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_ignoreReversedGraphics(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(), "set_ignoreReversedGraphics",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_maxDistance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(),
                                                                             "get_maxDistance", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_maxDistance(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(), "set_maxDistance",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(),
                                                                             "OnEnable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(),
                                                                             "OnDisable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::Raycast(::UnityEngine::EventSystems::PointerEventData* eventData,
                                                                          ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(), "Raycast", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData, resultAppendList);
}
inline void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::PerformRaycast(::UnityEngine::InputSystem::UI::ExtendedPointerEventData* eventData,
                                                                                 ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(), "PerformRaycast", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData, resultAppendList);
}
inline void
UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::SortedRaycastGraphics(::UnityEngine::Canvas* canvas, ::UnityEngine::Ray ray,
                                                                            ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>* results) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(), "SortedRaycastGraphics", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Canvas*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, canvas, ray, results);
}
inline bool UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::RayIntersectsRectTransform(::UnityEngine::RectTransform* transform, ::UnityEngine::Ray ray,
                                                                                             ByRef<::UnityEngine::Vector3> worldPosition, ByRef<float_t> distance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(), "RayIntersectsRectTransform", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, transform, ray, worldPosition, distance);
}
inline ::UnityEngine::Canvas* UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_canvas() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(),
                                                                             "get_canvas", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Canvas*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster* UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>());
}
inline void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::TrackedDeviceRaycaster() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
