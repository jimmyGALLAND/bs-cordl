#pragma once
// IWYU pragma private; include "GlobalNamespace/SmoothCameraSettingsViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__SmoothCameraSettingsViewController_def.hpp"
#include "GlobalNamespace/zzzz__FormattedFloatListSettingsController_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraSettingsViewController.DidActivate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothCameraSettingsViewController::*)(bool, bool, bool)>(&::GlobalNamespace::SmoothCameraSettingsViewController::DidActivate)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x3a70bc8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraSettingsViewController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraSettingsViewController*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraSettingsViewController.DidDeactivate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothCameraSettingsViewController::*)(bool, bool)>(&::GlobalNamespace::SmoothCameraSettingsViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3a70d18;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraSettingsViewController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraSettingsViewController*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraSettingsViewController.HandleEnabledChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothCameraSettingsViewController::*)(bool)>(&::GlobalNamespace::SmoothCameraSettingsViewController::HandleEnabledChanged)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3a70dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraSettingsViewController*>::get(),
                        "HandleEnabledChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraSettingsViewController.HandleFovChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothCameraSettingsViewController::*)(::GlobalNamespace::FormattedFloatListSettingsController*, float_t)>(&::GlobalNamespace::SmoothCameraSettingsViewController::HandleFovChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3a70de0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraSettingsViewController*>::get(),
                        "HandleFovChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FormattedFloatListSettingsController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraSettingsViewController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothCameraSettingsViewController::*)()>(&::GlobalNamespace::SmoothCameraSettingsViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a70dfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraSettingsViewController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::SmoothCameraSettingsViewController::__cordl_internal_get__enabledToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabledToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::SmoothCameraSettingsViewController::__cordl_internal_get__enabledToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabledToggle;
}
constexpr void GlobalNamespace::SmoothCameraSettingsViewController::__cordl_internal_set__enabledToggle(::UnityW<::UnityEngine::UI::Toggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____enabledToggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>& GlobalNamespace::SmoothCameraSettingsViewController::__cordl_internal_get__fovSettingsList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fovSettingsList;
}
constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> const& GlobalNamespace::SmoothCameraSettingsViewController::__cordl_internal_get__fovSettingsList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fovSettingsList;
}
constexpr void GlobalNamespace::SmoothCameraSettingsViewController::__cordl_internal_set__fovSettingsList(::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fovSettingsList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::SmoothCameraSettingsViewController::__cordl_internal_get__settingsManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settingsManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SettingsManager*> const& GlobalNamespace::SmoothCameraSettingsViewController::__cordl_internal_get__settingsManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settingsManager;
}
constexpr void GlobalNamespace::SmoothCameraSettingsViewController::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settingsManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SmoothCameraSettingsViewController::DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraSettingsViewController*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::SmoothCameraSettingsViewController::DidDeactivate(bool  removedFromHierarchy, bool  screenSystemDisabling)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraSettingsViewController*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::SmoothCameraSettingsViewController::HandleEnabledChanged(bool  newValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraSettingsViewController*>::get(),
                        "HandleEnabledChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newValue);
}
inline void GlobalNamespace::SmoothCameraSettingsViewController::HandleFovChanged(::GlobalNamespace::FormattedFloatListSettingsController*  controller, float_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraSettingsViewController*>::get(),
                        "HandleFovChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FormattedFloatListSettingsController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, controller, newValue);
}
inline ::GlobalNamespace::SmoothCameraSettingsViewController* GlobalNamespace::SmoothCameraSettingsViewController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SmoothCameraSettingsViewController*>());
}
inline void GlobalNamespace::SmoothCameraSettingsViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraSettingsViewController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SmoothCameraSettingsViewController::SmoothCameraSettingsViewController()   {
}
