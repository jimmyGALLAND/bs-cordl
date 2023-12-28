#pragma once
#include "UnityEngine/zzzz__GUILayoutGroup_impl.hpp"
#include "UnityEngine/zzzz__GUIScrollGroup_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
//  Writing Method size for method: ::UnityEngine::GUIScrollGroup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUIScrollGroup::*)()>(&::UnityEngine::GUIScrollGroup::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2d0c040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUIScrollGroup*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIScrollGroup.CalcWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUIScrollGroup::*)()>(&::UnityEngine::GUIScrollGroup::CalcWidth)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2d0c0a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUIScrollGroup*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUIScrollGroup*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIScrollGroup.SetHorizontal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUIScrollGroup::*)(float_t, float_t)>(&::UnityEngine::GUIScrollGroup::SetHorizontal)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2d0c120;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUIScrollGroup*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUIScrollGroup*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIScrollGroup.CalcHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUIScrollGroup::*)()>(&::UnityEngine::GUIScrollGroup::CalcHeight)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2d0c330;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUIScrollGroup*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUIScrollGroup*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIScrollGroup.SetVertical
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUIScrollGroup::*)(float_t, float_t)>(&::UnityEngine::GUIScrollGroup::SetVertical)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x2d0c46c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUIScrollGroup*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUIScrollGroup*>::get(), 11));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::GUIScrollGroup::__get_calcMinWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___calcMinWidth;
}
constexpr float_t const& UnityEngine::GUIScrollGroup::__get_calcMinWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___calcMinWidth;
}
constexpr void UnityEngine::GUIScrollGroup::__set_calcMinWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___calcMinWidth = value;
}
constexpr float_t& UnityEngine::GUIScrollGroup::__get_calcMaxWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___calcMaxWidth;
}
constexpr float_t const& UnityEngine::GUIScrollGroup::__get_calcMaxWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___calcMaxWidth;
}
constexpr void UnityEngine::GUIScrollGroup::__set_calcMaxWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___calcMaxWidth = value;
}
constexpr float_t& UnityEngine::GUIScrollGroup::__get_calcMinHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___calcMinHeight;
}
constexpr float_t const& UnityEngine::GUIScrollGroup::__get_calcMinHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___calcMinHeight;
}
constexpr void UnityEngine::GUIScrollGroup::__set_calcMinHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___calcMinHeight = value;
}
constexpr float_t& UnityEngine::GUIScrollGroup::__get_calcMaxHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___calcMaxHeight;
}
constexpr float_t const& UnityEngine::GUIScrollGroup::__get_calcMaxHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___calcMaxHeight;
}
constexpr void UnityEngine::GUIScrollGroup::__set_calcMaxHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___calcMaxHeight = value;
}
constexpr float_t& UnityEngine::GUIScrollGroup::__get_clientWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientWidth;
}
constexpr float_t const& UnityEngine::GUIScrollGroup::__get_clientWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientWidth;
}
constexpr void UnityEngine::GUIScrollGroup::__set_clientWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clientWidth = value;
}
constexpr float_t& UnityEngine::GUIScrollGroup::__get_clientHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientHeight;
}
constexpr float_t const& UnityEngine::GUIScrollGroup::__get_clientHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientHeight;
}
constexpr void UnityEngine::GUIScrollGroup::__set_clientHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clientHeight = value;
}
constexpr bool& UnityEngine::GUIScrollGroup::__get_allowHorizontalScroll() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowHorizontalScroll;
}
constexpr bool const& UnityEngine::GUIScrollGroup::__get_allowHorizontalScroll() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowHorizontalScroll;
}
constexpr void UnityEngine::GUIScrollGroup::__set_allowHorizontalScroll(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allowHorizontalScroll = value;
}
constexpr bool& UnityEngine::GUIScrollGroup::__get_allowVerticalScroll() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowVerticalScroll;
}
constexpr bool const& UnityEngine::GUIScrollGroup::__get_allowVerticalScroll() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowVerticalScroll;
}
constexpr void UnityEngine::GUIScrollGroup::__set_allowVerticalScroll(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allowVerticalScroll = value;
}
constexpr bool& UnityEngine::GUIScrollGroup::__get_needsHorizontalScrollbar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___needsHorizontalScrollbar;
}
constexpr bool const& UnityEngine::GUIScrollGroup::__get_needsHorizontalScrollbar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___needsHorizontalScrollbar;
}
constexpr void UnityEngine::GUIScrollGroup::__set_needsHorizontalScrollbar(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___needsHorizontalScrollbar = value;
}
constexpr bool& UnityEngine::GUIScrollGroup::__get_needsVerticalScrollbar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___needsVerticalScrollbar;
}
constexpr bool const& UnityEngine::GUIScrollGroup::__get_needsVerticalScrollbar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___needsVerticalScrollbar;
}
constexpr void UnityEngine::GUIScrollGroup::__set_needsVerticalScrollbar(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___needsVerticalScrollbar = value;
}
constexpr ::UnityEngine::GUIStyle*& UnityEngine::GUIScrollGroup::__get_horizontalScrollbar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___horizontalScrollbar;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> const& UnityEngine::GUIScrollGroup::__get_horizontalScrollbar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___horizontalScrollbar;
}
constexpr void UnityEngine::GUIScrollGroup::__set_horizontalScrollbar(::UnityEngine::GUIStyle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___horizontalScrollbar)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::GUIStyle*& UnityEngine::GUIScrollGroup::__get_verticalScrollbar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___verticalScrollbar;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> const& UnityEngine::GUIScrollGroup::__get_verticalScrollbar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___verticalScrollbar;
}
constexpr void UnityEngine::GUIScrollGroup::__set_verticalScrollbar(::UnityEngine::GUIStyle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___verticalScrollbar)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::GUIScrollGroup* UnityEngine::GUIScrollGroup::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::GUIScrollGroup*>());
}
inline void UnityEngine::GUIScrollGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUIScrollGroup*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::GUIScrollGroup::CalcWidth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUIScrollGroup*>::get(), "CalcWidth",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::GUIScrollGroup::SetHorizontal(float_t x, float_t width) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUIScrollGroup*>::get(), "SetHorizontal", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x, width);
}
inline void UnityEngine::GUIScrollGroup::CalcHeight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUIScrollGroup*>::get(), "CalcHeight",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::GUIScrollGroup::SetVertical(float_t y, float_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUIScrollGroup*>::get(), "SetVertical", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, y, height);
}
// Ctor Parameters []
constexpr ::UnityEngine::GUIScrollGroup::GUIScrollGroup() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
