#pragma once
#include "OVR/OpenVR/zzzz__IVRNotifications_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OVR/OpenVR/zzzz__CVRNotifications_def.hpp"
#include "OVR/OpenVR/zzzz__EVRNotificationError_def.hpp"
#include "OVR/OpenVR/zzzz__EVRNotificationStyle_def.hpp"
#include "OVR/OpenVR/zzzz__EVRNotificationType_def.hpp"
#include "OVR/OpenVR/zzzz__NotificationBitmap_t_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::CVRNotifications._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRNotifications::*)(void*)>(&::OVR::OpenVR::CVRNotifications::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x27f50ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRNotifications*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRNotifications.CreateNotification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRNotificationError (::OVR::OpenVR::CVRNotifications::*)(
    uint64_t, uint64_t, ::OVR::OpenVR::EVRNotificationType, ::StringW, ::OVR::OpenVR::EVRNotificationStyle, ByRef<::OVR::OpenVR::NotificationBitmap_t>, ByRef<uint32_t>)>(
    &::OVR::OpenVR::CVRNotifications::CreateNotification)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x27f51f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRNotifications*>::get(), "CreateNotification", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRNotificationType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRNotificationStyle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::NotificationBitmap_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRNotifications.RemoveNotification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRNotificationError (::OVR::OpenVR::CVRNotifications::*)(uint32_t)>(
    &::OVR::OpenVR::CVRNotifications::RemoveNotification)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x27f5224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRNotifications*>::get(), "RemoveNotification", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::OVR::OpenVR::IVRNotifications& OVR::OpenVR::CVRNotifications::__get_FnTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___FnTable;
}
constexpr ::OVR::OpenVR::IVRNotifications const& OVR::OpenVR::CVRNotifications::__get_FnTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___FnTable;
}
constexpr void OVR::OpenVR::CVRNotifications::__set_FnTable(::OVR::OpenVR::IVRNotifications value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___FnTable = value;
}
inline ::OVR::OpenVR::CVRNotifications* OVR::OpenVR::CVRNotifications::New_ctor(void* pInterface) {
  return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::CVRNotifications*>(pInterface));
}
inline void OVR::OpenVR::CVRNotifications::_ctor(void* pInterface) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRNotifications*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pInterface);
}
inline ::OVR::OpenVR::EVRNotificationError OVR::OpenVR::CVRNotifications::CreateNotification(uint64_t ulOverlayHandle, uint64_t ulUserValue, ::OVR::OpenVR::EVRNotificationType type, ::StringW pchText,
                                                                                             ::OVR::OpenVR::EVRNotificationStyle style, ByRef<::OVR::OpenVR::NotificationBitmap_t> pImage,
                                                                                             ByRef<uint32_t> pNotificationId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRNotifications*>::get(), "CreateNotification", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRNotificationType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRNotificationStyle>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::NotificationBitmap_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRNotificationError, false>(this, ___internal_method, ulOverlayHandle, ulUserValue, type, pchText, style, pImage, pNotificationId);
}
inline ::OVR::OpenVR::EVRNotificationError OVR::OpenVR::CVRNotifications::RemoveNotification(uint32_t notificationId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRNotifications*>::get(), "RemoveNotification", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRNotificationError, false>(this, ___internal_method, notificationId);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVRNotifications::CVRNotifications() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
