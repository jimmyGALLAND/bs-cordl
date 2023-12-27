#pragma once
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/InputSystem/OnScreen/zzzz__OnScreenControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/OnScreen/zzzz__OnScreenControl_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo.AddControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo (
    ::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo::*)(::UnityEngine::InputSystem::OnScreen::OnScreenControl*)>(
    &::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo::AddControl)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2ad9570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo>::get(), "AddControl", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo.RemoveControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo (
    ::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo::*)(::UnityEngine::InputSystem::OnScreen::OnScreenControl*)>(
    &::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo::RemoveControl)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2ad98e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo>::get(), "RemoveControl", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo.Destroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo::*)()>(
    &::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo::Destroy)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2ad94bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo>::get(), "Destroy",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo
UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo::AddControl(::UnityEngine::InputSystem::OnScreen::OnScreenControl* control) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo>::get(), "AddControl", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo, false>(this, ___internal_method, control);
}
inline ::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo
UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo::RemoveControl(::UnityEngine::InputSystem::OnScreen::OnScreenControl* control) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo>::get(), "RemoveControl", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo, false>(this, ___internal_method, control);
}
inline void UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo::Destroy() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo>::get(), "Destroy",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "eventPtr", ty: "::UnityEngine::InputSystem::LowLevel::InputEventPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "buffer", ty:
// "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "device", ty: "::UnityEngine::InputSystem::InputDevice*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "firstControl", ty: "::UnityEngine::InputSystem::OnScreen::OnScreenControl*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo::__OnScreenControl__OnScreenDeviceInfo(
    ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::Unity::Collections::NativeArray_1<uint8_t> buffer, ::UnityEngine::InputSystem::InputDevice* device,
    ::UnityEngine::InputSystem::OnScreen::OnScreenControl* firstControl) noexcept {
  this->eventPtr = eventPtr;
  this->buffer = buffer;
  this->device = device;
  this->firstControl = firstControl;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo::__OnScreenControl__OnScreenDeviceInfo() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenControl.get_controlPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::OnScreen::OnScreenControl::*)()>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenControl::get_controlPath)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ad8b80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>::get(),
                                                                               "get_controlPath", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenControl.set_controlPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenControl::*)(::StringW)>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenControl::set_controlPath)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2ad8b8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>::get(), "set_controlPath",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenControl.get_control
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControl* (::UnityEngine::InputSystem::OnScreen::OnScreenControl::*)()>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenControl::get_control)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad94b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>::get(),
                                                                               "get_control", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenControl.get_controlPathInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::OnScreen::OnScreenControl::*)()>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenControl::get_controlPathInternal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenControl.set_controlPathInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenControl::*)(::StringW)>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenControl::set_controlPathInternal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenControl.SetupInputControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenControl::*)()>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenControl::SetupInputControl)> {
  constexpr static std::size_t size = 0x8f0;
  constexpr static std::size_t addrs = 0x2ad8bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>::get(),
                                                                               "SetupInputControl", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenControl.SentDefaultValueToControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenControl::*)()>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenControl::SentDefaultValueToControl)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2ad959c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>::get(),
                                                                               "SentDefaultValueToControl", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenControl.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenControl::*)()>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenControl::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ad96d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenControl.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenControl::*)()>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenControl::OnDisable)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x2ad96d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenControl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenControl::*)()>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenControl::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad8b78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::InputControl*& UnityEngine::InputSystem::OnScreen::OnScreenControl::__get_m_Control() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Control;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputControl*> const& UnityEngine::InputSystem::OnScreen::OnScreenControl::__get_m_Control() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Control;
}
constexpr void UnityEngine::InputSystem::OnScreen::OnScreenControl::__set_m_Control(::UnityEngine::InputSystem::InputControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Control)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::OnScreen::OnScreenControl*& UnityEngine::InputSystem::OnScreen::OnScreenControl::__get_m_NextControlOnDevice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_NextControlOnDevice;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::OnScreen::OnScreenControl*> const& UnityEngine::InputSystem::OnScreen::OnScreenControl::__get_m_NextControlOnDevice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_NextControlOnDevice;
}
constexpr void UnityEngine::InputSystem::OnScreen::OnScreenControl::__set_m_NextControlOnDevice(::UnityEngine::InputSystem::OnScreen::OnScreenControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_NextControlOnDevice)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr& UnityEngine::InputSystem::OnScreen::OnScreenControl::__get_m_InputEventPtr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_InputEventPtr;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr const& UnityEngine::InputSystem::OnScreen::OnScreenControl::__get_m_InputEventPtr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_InputEventPtr;
}
constexpr void UnityEngine::InputSystem::OnScreen::OnScreenControl::__set_m_InputEventPtr(::UnityEngine::InputSystem::LowLevel::InputEventPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_InputEventPtr = value;
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenControl::setStaticF_s_OnScreenDevices(
    ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo> value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo>, "s_OnScreenDevices",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>::get>(
      std::forward<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo>>(value));
}
inline ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo>
UnityEngine::InputSystem::OnScreen::OnScreenControl::getStaticF_s_OnScreenDevices() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo>, "s_OnScreenDevices",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>::get>();
}
inline ::StringW UnityEngine::InputSystem::OnScreen::OnScreenControl::get_controlPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>::get(),
                                                                             "get_controlPath", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenControl::set_controlPath(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>::get(), "set_controlPath",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::OnScreen::OnScreenControl::get_control() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>::get(),
                                                                             "get_control", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::OnScreen::OnScreenControl::get_controlPathInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>::get(),
                                                                             "get_controlPathInternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenControl::set_controlPathInternal(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>::get(), "set_controlPathInternal",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenControl::SetupInputControl() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>::get(),
                                                                             "SetupInputControl", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValue> inline void UnityEngine::InputSystem::OnScreen::OnScreenControl::SendValueToControl(TValue value) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>::get(), "SendValueToControl",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenControl::SentDefaultValueToControl() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>::get(),
                                                                             "SentDefaultValueToControl", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenControl::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>::get(),
                                                                             "OnEnable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenControl::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>::get(),
                                                                             "OnDisable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::OnScreen::OnScreenControl* UnityEngine::InputSystem::OnScreen::OnScreenControl::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>());
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenControl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::OnScreen::OnScreenControl::OnScreenControl() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
