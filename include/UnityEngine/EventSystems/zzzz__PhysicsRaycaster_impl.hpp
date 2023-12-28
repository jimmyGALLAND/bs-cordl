#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__PhysicsRaycaster_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PhysicsRaycaster_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer::*)(
    ::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit)>(&::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer::Compare)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2da1350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer*>::get(), "Compare", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer::*)()>(
    &::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2da1390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>"
constexpr UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer::operator ::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>*() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>*>(static_cast<void*>(this));
}
inline void UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer::setStaticF_instance(::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer*, "instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer*>::get>(
      std::forward<::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer*>(value));
}
inline ::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer* UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer::getStaticF_instance() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer*, "instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer*>::get>();
}
inline int32_t UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer::Compare(::UnityEngine::RaycastHit x, ::UnityEngine::RaycastHit y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer*>::get(), "Compare", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x, y);
}
inline ::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer* UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer*>());
}
inline void UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer::__PhysicsRaycaster__RaycastHitComparer() {}
//  Writing Method size for method: ::UnityEngine::EventSystems::PhysicsRaycaster._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::PhysicsRaycaster::*)()>(&::UnityEngine::EventSystems::PhysicsRaycaster::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2da0450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PhysicsRaycaster.get_eventCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Camera* (::UnityEngine::EventSystems::PhysicsRaycaster::*)()>(
    &::UnityEngine::EventSystems::PhysicsRaycaster::get_eventCamera)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2da0df4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PhysicsRaycaster.get_depth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::EventSystems::PhysicsRaycaster::*)()>(
    &::UnityEngine::EventSystems::PhysicsRaycaster::get_depth)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2da0e98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PhysicsRaycaster.get_finalEventMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::EventSystems::PhysicsRaycaster::*)()>(
    &::UnityEngine::EventSystems::PhysicsRaycaster::get_finalEventMask)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2da0d30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(),
                                                                               "get_finalEventMask", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PhysicsRaycaster.get_eventMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (::UnityEngine::EventSystems::PhysicsRaycaster::*)()>(
    &::UnityEngine::EventSystems::PhysicsRaycaster::get_eventMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2da0f5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(),
                                                                               "get_eventMask", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PhysicsRaycaster.set_eventMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::PhysicsRaycaster::*)(::UnityEngine::LayerMask)>(
    &::UnityEngine::EventSystems::PhysicsRaycaster::set_eventMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2da0f64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(), "set_eventMask", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PhysicsRaycaster.get_maxRayIntersections
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::EventSystems::PhysicsRaycaster::*)()>(
    &::UnityEngine::EventSystems::PhysicsRaycaster::get_maxRayIntersections)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2da0f6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(),
                                                                               "get_maxRayIntersections", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PhysicsRaycaster.set_maxRayIntersections
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::PhysicsRaycaster::*)(int32_t)>(
    &::UnityEngine::EventSystems::PhysicsRaycaster::set_maxRayIntersections)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2da0f74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(), "set_maxRayIntersections",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PhysicsRaycaster.ComputeRayAndDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::EventSystems::PhysicsRaycaster::*)(
    ::UnityEngine::EventSystems::PointerEventData*, ByRef<::UnityEngine::Ray>, ByRef<int32_t>, ByRef<float_t>)>(&::UnityEngine::EventSystems::PhysicsRaycaster::ComputeRayAndDistance)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x2da0a38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(), "ComputeRayAndDistance", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Ray>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PhysicsRaycaster.Raycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::PhysicsRaycaster::*)(
    ::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(&::UnityEngine::EventSystems::PhysicsRaycaster::Raycast)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x2da0f7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(), 17));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Camera*& UnityEngine::EventSystems::PhysicsRaycaster::__get_m_EventCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventCamera;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> const& UnityEngine::EventSystems::PhysicsRaycaster::__get_m_EventCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventCamera;
}
constexpr void UnityEngine::EventSystems::PhysicsRaycaster::__set_m_EventCamera(::UnityEngine::Camera* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_EventCamera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::LayerMask& UnityEngine::EventSystems::PhysicsRaycaster::__get_m_EventMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventMask;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::EventSystems::PhysicsRaycaster::__get_m_EventMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventMask;
}
constexpr void UnityEngine::EventSystems::PhysicsRaycaster::__set_m_EventMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EventMask = value;
}
constexpr int32_t& UnityEngine::EventSystems::PhysicsRaycaster::__get_m_MaxRayIntersections() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxRayIntersections;
}
constexpr int32_t const& UnityEngine::EventSystems::PhysicsRaycaster::__get_m_MaxRayIntersections() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxRayIntersections;
}
constexpr void UnityEngine::EventSystems::PhysicsRaycaster::__set_m_MaxRayIntersections(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxRayIntersections = value;
}
constexpr int32_t& UnityEngine::EventSystems::PhysicsRaycaster::__get_m_LastMaxRayIntersections() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastMaxRayIntersections;
}
constexpr int32_t const& UnityEngine::EventSystems::PhysicsRaycaster::__get_m_LastMaxRayIntersections() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastMaxRayIntersections;
}
constexpr void UnityEngine::EventSystems::PhysicsRaycaster::__set_m_LastMaxRayIntersections(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastMaxRayIntersections = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*>& UnityEngine::EventSystems::PhysicsRaycaster::__get_m_Hits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Hits;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> const& UnityEngine::EventSystems::PhysicsRaycaster::__get_m_Hits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Hits;
}
constexpr void UnityEngine::EventSystems::PhysicsRaycaster::__set_m_Hits(::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Hits)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::EventSystems::PhysicsRaycaster* UnityEngine::EventSystems::PhysicsRaycaster::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::EventSystems::PhysicsRaycaster*>());
}
inline void UnityEngine::EventSystems::PhysicsRaycaster::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Camera* UnityEngine::EventSystems::PhysicsRaycaster::get_eventCamera() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(),
                                                                             "get_eventCamera", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Camera*, false>(this, ___internal_method);
}
inline int32_t UnityEngine::EventSystems::PhysicsRaycaster::get_depth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(), "get_depth",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::EventSystems::PhysicsRaycaster::get_finalEventMask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(),
                                                                             "get_finalEventMask", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::LayerMask UnityEngine::EventSystems::PhysicsRaycaster::get_eventMask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(),
                                                                             "get_eventMask", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PhysicsRaycaster::set_eventMask(::UnityEngine::LayerMask value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(), "set_eventMask", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::EventSystems::PhysicsRaycaster::get_maxRayIntersections() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(),
                                                                             "get_maxRayIntersections", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PhysicsRaycaster::set_maxRayIntersections(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(), "set_maxRayIntersections",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::EventSystems::PhysicsRaycaster::ComputeRayAndDistance(::UnityEngine::EventSystems::PointerEventData* eventData, ByRef<::UnityEngine::Ray> ray,
                                                                               ByRef<int32_t> eventDisplayIndex, ByRef<float_t> distanceToClipPlane) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(), "ComputeRayAndDistance", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Ray>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, eventData, ray, eventDisplayIndex, distanceToClipPlane);
}
inline void UnityEngine::EventSystems::PhysicsRaycaster::Raycast(::UnityEngine::EventSystems::PointerEventData* eventData,
                                                                 ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(), "Raycast", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData, resultAppendList);
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::PhysicsRaycaster::PhysicsRaycaster() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
