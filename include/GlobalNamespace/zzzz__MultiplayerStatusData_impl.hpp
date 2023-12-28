#pragma once
#include "GlobalNamespace/zzzz__MultiplayerStatusData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerStatusData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerStatusData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus::__MultiplayerStatusData__AvailabilityStatus(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus::__MultiplayerStatusData__AvailabilityStatus() {}
constexpr ::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus::Online{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus::MaintenanceUpcoming{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus::Offline{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage::*)()>(
    &::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352fa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage::__get_language() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___language;
}
constexpr ::StringW const& GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage::__get_language() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___language;
}
constexpr void GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage::__set_language(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___language)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage::__get_message() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___message;
}
constexpr ::StringW const& GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage::__get_message() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___message;
}
constexpr void GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage::__set_message(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___message)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage* GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*>());
}
inline void GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage::__MultiplayerStatusData__UserMessage__LocalizedMessage() {}
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerStatusData__UserMessage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerStatusData__UserMessage::*)()>(
    &::GlobalNamespace::__MultiplayerStatusData__UserMessage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352f9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerStatusData__UserMessage*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*, ::Array<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*>*>&
GlobalNamespace::__MultiplayerStatusData__UserMessage::__get_localizations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localizations;
}
constexpr ::ArrayW<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*, ::Array<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*>*> const&
GlobalNamespace::__MultiplayerStatusData__UserMessage::__get_localizations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localizations;
}
constexpr void GlobalNamespace::__MultiplayerStatusData__UserMessage::__set_localizations(
    ::ArrayW<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*, ::Array<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___localizations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__MultiplayerStatusData__UserMessage* GlobalNamespace::__MultiplayerStatusData__UserMessage::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MultiplayerStatusData__UserMessage*>());
}
inline void GlobalNamespace::__MultiplayerStatusData__UserMessage::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerStatusData__UserMessage*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerStatusData__UserMessage::__MultiplayerStatusData__UserMessage() {}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.get_minimumAppVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::MultiplayerStatusData::*)()>(
    &::GlobalNamespace::MultiplayerStatusData::get_minimumAppVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                                                                               "get_minimumAppVersion", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.set_minimumAppVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerStatusData::*)(::StringW)>(
    &::GlobalNamespace::MultiplayerStatusData::set_minimumAppVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352f34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(), "set_minimumAppVersion",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.get_maintenanceStartTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::MultiplayerStatusData::*)()>(
    &::GlobalNamespace::MultiplayerStatusData::get_maintenanceStartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352f3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                                                                               "get_maintenanceStartTime", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.set_maintenanceStartTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerStatusData::*)(int64_t)>(
    &::GlobalNamespace::MultiplayerStatusData::set_maintenanceStartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352f44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(), "set_maintenanceStartTime",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.get_maintenanceEndTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::MultiplayerStatusData::*)()>(
    &::GlobalNamespace::MultiplayerStatusData::get_maintenanceEndTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352f4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                                                                               "get_maintenanceEndTime", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.set_maintenanceEndTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerStatusData::*)(int64_t)>(
    &::GlobalNamespace::MultiplayerStatusData::set_maintenanceEndTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(), "set_maintenanceEndTime",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.get_userMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__MultiplayerStatusData__UserMessage* (::GlobalNamespace::MultiplayerStatusData::*)()>(
    &::GlobalNamespace::MultiplayerStatusData::get_userMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352f5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                                                                               "get_userMessage", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.set_userMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerStatusData::*)(::GlobalNamespace::__MultiplayerStatusData__UserMessage*)>(
    &::GlobalNamespace::MultiplayerStatusData::set_userMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352f64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(), "set_userMessage", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerStatusData__UserMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.get_useGamelift
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerStatusData::*)()>(&::GlobalNamespace::MultiplayerStatusData::get_useGamelift)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352f6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                                                                               "get_useGamelift", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.set_useGamelift
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerStatusData::*)(bool)>(
    &::GlobalNamespace::MultiplayerStatusData::set_useGamelift)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2352f74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(), "set_useGamelift",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.get_useXPlatformAuth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerStatusData::*)()>(
    &::GlobalNamespace::MultiplayerStatusData::get_useXPlatformAuth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352f80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                                                                               "get_useXPlatformAuth", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.set_useXPlatformAuth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerStatusData::*)(bool)>(
    &::GlobalNamespace::MultiplayerStatusData::set_useXPlatformAuth)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2352f88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(), "set_useXPlatformAuth",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerStatusData::*)()>(&::GlobalNamespace::MultiplayerStatusData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352f94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::MultiplayerStatusData::__get_minimum_app_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minimum_app_version;
}
constexpr ::StringW const& GlobalNamespace::MultiplayerStatusData::__get_minimum_app_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minimum_app_version;
}
constexpr void GlobalNamespace::MultiplayerStatusData::__set_minimum_app_version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___minimum_app_version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus& GlobalNamespace::MultiplayerStatusData::__get_status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status;
}
constexpr ::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus const& GlobalNamespace::MultiplayerStatusData::__get_status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status;
}
constexpr void GlobalNamespace::MultiplayerStatusData::__set_status(::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___status = value;
}
constexpr int64_t& GlobalNamespace::MultiplayerStatusData::__get_maintenance_start_time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maintenance_start_time;
}
constexpr int64_t const& GlobalNamespace::MultiplayerStatusData::__get_maintenance_start_time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maintenance_start_time;
}
constexpr void GlobalNamespace::MultiplayerStatusData::__set_maintenance_start_time(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maintenance_start_time = value;
}
constexpr int64_t& GlobalNamespace::MultiplayerStatusData::__get_maintenance_end_time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maintenance_end_time;
}
constexpr int64_t const& GlobalNamespace::MultiplayerStatusData::__get_maintenance_end_time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maintenance_end_time;
}
constexpr void GlobalNamespace::MultiplayerStatusData::__set_maintenance_end_time(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maintenance_end_time = value;
}
constexpr ::GlobalNamespace::__MultiplayerStatusData__UserMessage*& GlobalNamespace::MultiplayerStatusData::__get_user_message() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___user_message;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerStatusData__UserMessage*> const& GlobalNamespace::MultiplayerStatusData::__get_user_message() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___user_message;
}
constexpr void GlobalNamespace::MultiplayerStatusData::__set_user_message(::GlobalNamespace::__MultiplayerStatusData__UserMessage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___user_message)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::MultiplayerStatusData::__get_use_gamelift() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___use_gamelift;
}
constexpr bool const& GlobalNamespace::MultiplayerStatusData::__get_use_gamelift() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___use_gamelift;
}
constexpr void GlobalNamespace::MultiplayerStatusData::__set_use_gamelift(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___use_gamelift = value;
}
constexpr bool& GlobalNamespace::MultiplayerStatusData::__get_use_xplatform_auth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___use_xplatform_auth;
}
constexpr bool const& GlobalNamespace::MultiplayerStatusData::__get_use_xplatform_auth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___use_xplatform_auth;
}
constexpr void GlobalNamespace::MultiplayerStatusData::__set_use_xplatform_auth(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___use_xplatform_auth = value;
}
inline ::StringW GlobalNamespace::MultiplayerStatusData::get_minimumAppVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                                                                             "get_minimumAppVersion", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerStatusData::set_minimumAppVersion(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(), "set_minimumAppVersion",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int64_t GlobalNamespace::MultiplayerStatusData::get_maintenanceStartTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                                                                             "get_maintenanceStartTime", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerStatusData::set_maintenanceStartTime(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(), "set_maintenanceStartTime",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int64_t GlobalNamespace::MultiplayerStatusData::get_maintenanceEndTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                                                                             "get_maintenanceEndTime", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerStatusData::set_maintenanceEndTime(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(), "set_maintenanceEndTime",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__MultiplayerStatusData__UserMessage* GlobalNamespace::MultiplayerStatusData::get_userMessage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                                                                             "get_userMessage", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__MultiplayerStatusData__UserMessage*, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerStatusData::set_userMessage(::GlobalNamespace::__MultiplayerStatusData__UserMessage* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(), "set_userMessage", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerStatusData__UserMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MultiplayerStatusData::get_useGamelift() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                                                                             "get_useGamelift", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerStatusData::set_useGamelift(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(), "set_useGamelift", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MultiplayerStatusData::get_useXPlatformAuth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                                                                             "get_useXPlatformAuth", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerStatusData::set_useXPlatformAuth(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(), "set_useXPlatformAuth",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MultiplayerStatusData* GlobalNamespace::MultiplayerStatusData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerStatusData*>());
}
inline void GlobalNamespace::MultiplayerStatusData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerStatusData::MultiplayerStatusData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
