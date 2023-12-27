#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TrackClipTypeAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::TrackClipTypeAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackClipTypeAttribute::*)(::System::Type*)>(
    &::UnityEngine::Timeline::TrackClipTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2c6e668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackClipTypeAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackClipTypeAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackClipTypeAttribute::*)(::System::Type*, bool)>(
    &::UnityEngine::Timeline::TrackClipTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2c6e698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackClipTypeAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& UnityEngine::Timeline::TrackClipTypeAttribute::__get_inspectedType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___inspectedType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& UnityEngine::Timeline::TrackClipTypeAttribute::__get_inspectedType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___inspectedType;
}
constexpr void UnityEngine::Timeline::TrackClipTypeAttribute::__set_inspectedType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inspectedType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Timeline::TrackClipTypeAttribute::__get_allowAutoCreate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___allowAutoCreate;
}
constexpr bool const& UnityEngine::Timeline::TrackClipTypeAttribute::__get_allowAutoCreate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___allowAutoCreate;
}
constexpr void UnityEngine::Timeline::TrackClipTypeAttribute::__set_allowAutoCreate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___allowAutoCreate = value;
}
inline ::UnityEngine::Timeline::TrackClipTypeAttribute* UnityEngine::Timeline::TrackClipTypeAttribute::New_ctor(::System::Type* clipClass) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Timeline::TrackClipTypeAttribute*>(clipClass));
}
inline void UnityEngine::Timeline::TrackClipTypeAttribute::_ctor(::System::Type* clipClass) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackClipTypeAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clipClass);
}
inline ::UnityEngine::Timeline::TrackClipTypeAttribute* UnityEngine::Timeline::TrackClipTypeAttribute::New_ctor(::System::Type* clipClass, bool allowAutoCreate) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Timeline::TrackClipTypeAttribute*>(clipClass, allowAutoCreate));
}
inline void UnityEngine::Timeline::TrackClipTypeAttribute::_ctor(::System::Type* clipClass, bool allowAutoCreate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackClipTypeAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clipClass, allowAutoCreate);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TrackClipTypeAttribute::TrackClipTypeAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
