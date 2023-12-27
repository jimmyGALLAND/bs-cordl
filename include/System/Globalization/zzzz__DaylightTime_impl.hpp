#pragma once
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "System/Globalization/zzzz__DaylightTime_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::System::Globalization::DaylightTime._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::DaylightTime::*)(::System::DateTime, ::System::DateTime, ::System::TimeSpan)>(
    &::System::Globalization::DaylightTime::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2554bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DaylightTime*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DaylightTime.get_Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::Globalization::DaylightTime::*)()>(&::System::Globalization::DaylightTime::get_Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2554c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DaylightTime*>::get(), "get_Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DaylightTime.get_End
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::Globalization::DaylightTime::*)()>(&::System::Globalization::DaylightTime::get_End)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2554c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DaylightTime*>::get(), "get_End",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DaylightTime.get_Delta
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::Globalization::DaylightTime::*)()>(&::System::Globalization::DaylightTime::get_Delta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2554c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DaylightTime*>::get(), "get_Delta",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::DateTime& System::Globalization::DaylightTime::__get__start() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____start;
}
constexpr ::System::DateTime const& System::Globalization::DaylightTime::__get__start() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____start;
}
constexpr void System::Globalization::DaylightTime::__set__start(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____start = value;
}
constexpr ::System::DateTime& System::Globalization::DaylightTime::__get__end() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____end;
}
constexpr ::System::DateTime const& System::Globalization::DaylightTime::__get__end() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____end;
}
constexpr void System::Globalization::DaylightTime::__set__end(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____end = value;
}
constexpr ::System::TimeSpan& System::Globalization::DaylightTime::__get__delta() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____delta;
}
constexpr ::System::TimeSpan const& System::Globalization::DaylightTime::__get__delta() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____delta;
}
constexpr void System::Globalization::DaylightTime::__set__delta(::System::TimeSpan value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____delta = value;
}
inline ::System::Globalization::DaylightTime* System::Globalization::DaylightTime::New_ctor(::System::DateTime start, ::System::DateTime end, ::System::TimeSpan delta) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Globalization::DaylightTime*>(start, end, delta));
}
inline void System::Globalization::DaylightTime::_ctor(::System::DateTime start, ::System::DateTime end, ::System::TimeSpan delta) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DaylightTime*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, start, end, delta);
}
inline ::System::DateTime System::Globalization::DaylightTime::get_Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DaylightTime*>::get(), "get_Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline ::System::DateTime System::Globalization::DaylightTime::get_End() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DaylightTime*>::get(), "get_End",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline ::System::TimeSpan System::Globalization::DaylightTime::get_Delta() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DaylightTime*>::get(), "get_Delta",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Globalization::DaylightTime::DaylightTime() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
