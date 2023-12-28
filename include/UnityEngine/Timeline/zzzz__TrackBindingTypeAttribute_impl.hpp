#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TrackBindingFlags_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TrackBindingTypeAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackBindingFlags_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::TrackBindingTypeAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackBindingTypeAttribute::*)(::System::Type*)>(
    &::UnityEngine::Timeline::TrackBindingTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2c6e6c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackBindingTypeAttribute*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackBindingTypeAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackBindingTypeAttribute::*)(
    ::System::Type*, ::UnityEngine::Timeline::TrackBindingFlags)>(&::UnityEngine::Timeline::TrackBindingTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2c6e6f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackBindingTypeAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackBindingFlags>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& UnityEngine::Timeline::TrackBindingTypeAttribute::__get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& UnityEngine::Timeline::TrackBindingTypeAttribute::__get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void UnityEngine::Timeline::TrackBindingTypeAttribute::__set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Timeline::TrackBindingFlags& UnityEngine::Timeline::TrackBindingTypeAttribute::__get_flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flags;
}
constexpr ::UnityEngine::Timeline::TrackBindingFlags const& UnityEngine::Timeline::TrackBindingTypeAttribute::__get_flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flags;
}
constexpr void UnityEngine::Timeline::TrackBindingTypeAttribute::__set_flags(::UnityEngine::Timeline::TrackBindingFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___flags = value;
}
inline ::UnityEngine::Timeline::TrackBindingTypeAttribute* UnityEngine::Timeline::TrackBindingTypeAttribute::New_ctor(::System::Type* type) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Timeline::TrackBindingTypeAttribute*>(type));
}
inline void UnityEngine::Timeline::TrackBindingTypeAttribute::_ctor(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackBindingTypeAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline ::UnityEngine::Timeline::TrackBindingTypeAttribute* UnityEngine::Timeline::TrackBindingTypeAttribute::New_ctor(::System::Type* type, ::UnityEngine::Timeline::TrackBindingFlags flags) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Timeline::TrackBindingTypeAttribute*>(type, flags));
}
inline void UnityEngine::Timeline::TrackBindingTypeAttribute::_ctor(::System::Type* type, ::UnityEngine::Timeline::TrackBindingFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackBindingTypeAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackBindingFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, flags);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TrackBindingTypeAttribute::TrackBindingTypeAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
