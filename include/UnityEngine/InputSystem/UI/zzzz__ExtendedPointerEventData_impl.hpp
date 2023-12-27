#pragma once
#include "UnityEngine/EventSystems/zzzz__PointerEventData_impl.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__UIPointerType_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__ExtendedPointerEventData_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__TouchControl_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__UIPointerType_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Pen_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)(::UnityEngine::EventSystems::EventSystem*)>(
    &::UnityEngine::InputSystem::UI::ExtendedPointerEventData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2acf7fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::EventSystem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.get_control
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControl* (::UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)()>(
    &::UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_control)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2acf804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(),
                                                                               "get_control", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.set_control
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)(::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_control)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2acf80c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(), "set_control", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.get_device
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputDevice* (::UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)()>(
    &::UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_device)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2acf814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(),
                                                                               "get_device", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.set_device
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_device)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2acf81c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(), "set_device", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.get_touchId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)()>(
    &::UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_touchId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2acf824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(),
                                                                               "get_touchId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.set_touchId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)(int32_t)>(
    &::UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_touchId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2acf82c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(), "set_touchId",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.get_pointerType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::UI::UIPointerType (::UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)()>(
    &::UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_pointerType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2acf834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(),
                                                                               "get_pointerType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.set_pointerType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)(::UnityEngine::InputSystem::UI::UIPointerType)>(
    &::UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_pointerType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2acf83c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(), "set_pointerType", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::UIPointerType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.get_uiToolkitPointerId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)()>(
    &::UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_uiToolkitPointerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2acf844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(),
                                                                               "get_uiToolkitPointerId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.set_uiToolkitPointerId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)(int32_t)>(
    &::UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_uiToolkitPointerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2acf84c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(), "set_uiToolkitPointerId",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.get_trackedDevicePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)()>(
    &::UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_trackedDevicePosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2acf854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(),
                                                                               "get_trackedDevicePosition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.set_trackedDevicePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_trackedDevicePosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2acf864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(), "set_trackedDevicePosition",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.get_trackedDeviceOrientation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)()>(
    &::UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_trackedDeviceOrientation)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2acf874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(),
                                                                               "get_trackedDeviceOrientation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.set_trackedDeviceOrientation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)(::UnityEngine::Quaternion)>(
    &::UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_trackedDeviceOrientation)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2acf888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(), "set_trackedDeviceOrientation",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)()>(
    &::UnityEngine::InputSystem::UI::ExtendedPointerEventData::ToString)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x2acf89c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.MakePointerIdForTouch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t)>(&::UnityEngine::InputSystem::UI::ExtendedPointerEventData::MakePointerIdForTouch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2acfc58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(), "MakePointerIdForTouch", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.TouchIdFromPointerId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::InputSystem::UI::ExtendedPointerEventData::TouchIdFromPointerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2acfc60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(), "TouchIdFromPointerId",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.ReadDeviceState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)()>(
    &::UnityEngine::InputSystem::UI::ExtendedPointerEventData::ReadDeviceState)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2acfc68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(),
                                                                               "ReadDeviceState", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.GetPenPointerId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::InputSystem::Pen*)>(
    &::UnityEngine::InputSystem::UI::ExtendedPointerEventData::GetPenPointerId)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2acfebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(), "GetPenPointerId",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Pen*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedPointerEventData.GetTouchPointerId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::InputSystem::Controls::TouchControl*)>(
    &::UnityEngine::InputSystem::UI::ExtendedPointerEventData::GetTouchPointerId)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2ad0110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(), "GetTouchPointerId", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Controls::TouchControl*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::InputControl*& UnityEngine::InputSystem::UI::ExtendedPointerEventData::__get__control_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____control_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputControl*> const& UnityEngine::InputSystem::UI::ExtendedPointerEventData::__get__control_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____control_k__BackingField;
}
constexpr void UnityEngine::InputSystem::UI::ExtendedPointerEventData::__set__control_k__BackingField(::UnityEngine::InputSystem::InputControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____control_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::InputDevice*& UnityEngine::InputSystem::UI::ExtendedPointerEventData::__get__device_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____device_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputDevice*> const& UnityEngine::InputSystem::UI::ExtendedPointerEventData::__get__device_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____device_k__BackingField;
}
constexpr void UnityEngine::InputSystem::UI::ExtendedPointerEventData::__set__device_k__BackingField(::UnityEngine::InputSystem::InputDevice* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____device_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::InputSystem::UI::ExtendedPointerEventData::__get__touchId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____touchId_k__BackingField;
}
constexpr int32_t const& UnityEngine::InputSystem::UI::ExtendedPointerEventData::__get__touchId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____touchId_k__BackingField;
}
constexpr void UnityEngine::InputSystem::UI::ExtendedPointerEventData::__set__touchId_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____touchId_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::UI::UIPointerType& UnityEngine::InputSystem::UI::ExtendedPointerEventData::__get__pointerType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____pointerType_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::UI::UIPointerType const& UnityEngine::InputSystem::UI::ExtendedPointerEventData::__get__pointerType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____pointerType_k__BackingField;
}
constexpr void UnityEngine::InputSystem::UI::ExtendedPointerEventData::__set__pointerType_k__BackingField(::UnityEngine::InputSystem::UI::UIPointerType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____pointerType_k__BackingField = value;
}
constexpr int32_t& UnityEngine::InputSystem::UI::ExtendedPointerEventData::__get__uiToolkitPointerId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____uiToolkitPointerId_k__BackingField;
}
constexpr int32_t const& UnityEngine::InputSystem::UI::ExtendedPointerEventData::__get__uiToolkitPointerId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____uiToolkitPointerId_k__BackingField;
}
constexpr void UnityEngine::InputSystem::UI::ExtendedPointerEventData::__set__uiToolkitPointerId_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____uiToolkitPointerId_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::InputSystem::UI::ExtendedPointerEventData::__get__trackedDevicePosition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____trackedDevicePosition_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::InputSystem::UI::ExtendedPointerEventData::__get__trackedDevicePosition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____trackedDevicePosition_k__BackingField;
}
constexpr void UnityEngine::InputSystem::UI::ExtendedPointerEventData::__set__trackedDevicePosition_k__BackingField(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____trackedDevicePosition_k__BackingField = value;
}
constexpr ::UnityEngine::Quaternion& UnityEngine::InputSystem::UI::ExtendedPointerEventData::__get__trackedDeviceOrientation_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____trackedDeviceOrientation_k__BackingField;
}
constexpr ::UnityEngine::Quaternion const& UnityEngine::InputSystem::UI::ExtendedPointerEventData::__get__trackedDeviceOrientation_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____trackedDeviceOrientation_k__BackingField;
}
constexpr void UnityEngine::InputSystem::UI::ExtendedPointerEventData::__set__trackedDeviceOrientation_k__BackingField(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____trackedDeviceOrientation_k__BackingField = value;
}
inline ::UnityEngine::InputSystem::UI::ExtendedPointerEventData* UnityEngine::InputSystem::UI::ExtendedPointerEventData::New_ctor(::UnityEngine::EventSystems::EventSystem* eventSystem) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(eventSystem));
}
inline void UnityEngine::InputSystem::UI::ExtendedPointerEventData::_ctor(::UnityEngine::EventSystems::EventSystem* eventSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::EventSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventSystem);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_control() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(),
                                                                             "get_control", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_control(::UnityEngine::InputSystem::InputControl* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(), "set_control", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_device() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(),
                                                                             "get_device", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_device(::UnityEngine::InputSystem::InputDevice* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(), "set_device", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_touchId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(),
                                                                             "get_touchId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_touchId(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(), "set_touchId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::UI::UIPointerType UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_pointerType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(),
                                                                             "get_pointerType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::UI::UIPointerType, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_pointerType(::UnityEngine::InputSystem::UI::UIPointerType value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(), "set_pointerType", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::UIPointerType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_uiToolkitPointerId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(),
                                                                             "get_uiToolkitPointerId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_uiToolkitPointerId(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(), "set_uiToolkitPointerId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_trackedDevicePosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(),
                                                                             "get_trackedDevicePosition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_trackedDevicePosition(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(), "set_trackedDevicePosition",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_trackedDeviceOrientation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(),
                                                                             "get_trackedDeviceOrientation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_trackedDeviceOrientation(::UnityEngine::Quaternion value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(), "set_trackedDeviceOrientation",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::UI::ExtendedPointerEventData::ToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(),
                                                                             "ToString", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::UI::ExtendedPointerEventData::MakePointerIdForTouch(int32_t deviceId, int32_t touchId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(), "MakePointerIdForTouch", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, deviceId, touchId);
}
inline int32_t UnityEngine::InputSystem::UI::ExtendedPointerEventData::TouchIdFromPointerId(int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(), "TouchIdFromPointerId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, pointerId);
}
inline void UnityEngine::InputSystem::UI::ExtendedPointerEventData::ReadDeviceState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(),
                                                                             "ReadDeviceState", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::UI::ExtendedPointerEventData::GetPenPointerId(::UnityEngine::InputSystem::Pen* pen) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(), "GetPenPointerId",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Pen*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, pen);
}
inline int32_t UnityEngine::InputSystem::UI::ExtendedPointerEventData::GetTouchPointerId(::UnityEngine::InputSystem::Controls::TouchControl* touchControl) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(), "GetTouchPointerId", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Controls::TouchControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, touchControl);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::UI::ExtendedPointerEventData::ExtendedPointerEventData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
