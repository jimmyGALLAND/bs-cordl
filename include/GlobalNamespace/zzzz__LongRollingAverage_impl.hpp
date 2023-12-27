#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LongRollingAverage_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LongRollingAverage.get_currentAverage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::LongRollingAverage::*)()>(&::GlobalNamespace::LongRollingAverage::get_currentAverage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe430f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LongRollingAverage*>::get(),
                                                                               "get_currentAverage", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LongRollingAverage.get_hasValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LongRollingAverage::*)()>(&::GlobalNamespace::LongRollingAverage::get_hasValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe430fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LongRollingAverage*>::get(), "get_hasValue",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LongRollingAverage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LongRollingAverage::*)(int32_t)>(&::GlobalNamespace::LongRollingAverage::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xe4310c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LongRollingAverage*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LongRollingAverage.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LongRollingAverage::*)(int64_t)>(&::GlobalNamespace::LongRollingAverage::Update)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xe43174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LongRollingAverage*>::get(), "Update", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LongRollingAverage.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LongRollingAverage::*)()>(&::GlobalNamespace::LongRollingAverage::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe4326c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LongRollingAverage*>::get(), "Reset",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int64_t& GlobalNamespace::LongRollingAverage::__get__currentTotal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____currentTotal;
}
constexpr int64_t const& GlobalNamespace::LongRollingAverage::__get__currentTotal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____currentTotal;
}
constexpr void GlobalNamespace::LongRollingAverage::__set__currentTotal(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____currentTotal = value;
}
constexpr int64_t& GlobalNamespace::LongRollingAverage::__get__currentAverage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____currentAverage;
}
constexpr int64_t const& GlobalNamespace::LongRollingAverage::__get__currentAverage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____currentAverage;
}
constexpr void GlobalNamespace::LongRollingAverage::__set__currentAverage(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____currentAverage = value;
}
constexpr ::ArrayW<int64_t, ::Array<int64_t>*>& GlobalNamespace::LongRollingAverage::__get__buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____buffer;
}
constexpr ::ArrayW<int64_t, ::Array<int64_t>*> const& GlobalNamespace::LongRollingAverage::__get__buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____buffer;
}
constexpr void GlobalNamespace::LongRollingAverage::__set__buffer(::ArrayW<int64_t, ::Array<int64_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::LongRollingAverage::__get__index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____index;
}
constexpr int32_t const& GlobalNamespace::LongRollingAverage::__get__index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____index;
}
constexpr void GlobalNamespace::LongRollingAverage::__set__index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____index = value;
}
constexpr int32_t& GlobalNamespace::LongRollingAverage::__get__length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____length;
}
constexpr int32_t const& GlobalNamespace::LongRollingAverage::__get__length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____length;
}
constexpr void GlobalNamespace::LongRollingAverage::__set__length(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____length = value;
}
inline int64_t GlobalNamespace::LongRollingAverage::get_currentAverage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LongRollingAverage*>::get(),
                                                                             "get_currentAverage", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline bool GlobalNamespace::LongRollingAverage::get_hasValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LongRollingAverage*>::get(), "get_hasValue",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LongRollingAverage* GlobalNamespace::LongRollingAverage::New_ctor(int32_t window) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LongRollingAverage*>(window));
}
inline void GlobalNamespace::LongRollingAverage::_ctor(int32_t window) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LongRollingAverage*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, window);
}
inline void GlobalNamespace::LongRollingAverage::Update(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LongRollingAverage*>::get(), "Update", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LongRollingAverage::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LongRollingAverage*>::get(), "Reset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LongRollingAverage::LongRollingAverage() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
