#pragma once
#include "System/Net/Cache/zzzz__RequestCacheLevel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Cache/zzzz__RequestCachePolicy_def.hpp"
#include "System/Net/Cache/zzzz__RequestCacheLevel_def.hpp"
//  Writing Method size for method: ::System::Net::Cache::RequestCachePolicy._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Cache::RequestCachePolicy::*)(::System::Net::Cache::RequestCacheLevel)>(
    &::System::Net::Cache::RequestCachePolicy::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x29f1374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCachePolicy*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cache::RequestCacheLevel>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Cache::RequestCachePolicy.get_Level
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Cache::RequestCacheLevel (::System::Net::Cache::RequestCachePolicy::*)()>(
    &::System::Net::Cache::RequestCachePolicy::get_Level)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29f1484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCachePolicy*>::get(), "get_Level",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Cache::RequestCachePolicy.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::Cache::RequestCachePolicy::*)()>(&::System::Net::Cache::RequestCachePolicy::ToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x29f148c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCachePolicy*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCachePolicy*>::get(), 3));
    return ___internal_method;
  }
};
constexpr ::System::Net::Cache::RequestCacheLevel& System::Net::Cache::RequestCachePolicy::__get_m_Level() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Level;
}
constexpr ::System::Net::Cache::RequestCacheLevel const& System::Net::Cache::RequestCachePolicy::__get_m_Level() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Level;
}
constexpr void System::Net::Cache::RequestCachePolicy::__set_m_Level(::System::Net::Cache::RequestCacheLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Level = value;
}
inline ::System::Net::Cache::RequestCachePolicy* System::Net::Cache::RequestCachePolicy::New_ctor(::System::Net::Cache::RequestCacheLevel level) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Cache::RequestCachePolicy*>(level));
}
inline void System::Net::Cache::RequestCachePolicy::_ctor(::System::Net::Cache::RequestCacheLevel level) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCachePolicy*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cache::RequestCacheLevel>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, level);
}
inline ::System::Net::Cache::RequestCacheLevel System::Net::Cache::RequestCachePolicy::get_Level() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCachePolicy*>::get(), "get_Level",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Cache::RequestCacheLevel, false>(this, ___internal_method);
}
inline ::StringW System::Net::Cache::RequestCachePolicy::ToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCachePolicy*>::get(), "ToString",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::Cache::RequestCachePolicy::RequestCachePolicy() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
