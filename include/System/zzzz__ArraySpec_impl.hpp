#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ArraySpec_def.hpp"
#include "System/zzzz__ModifierSpec_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::System::ArraySpec._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ArraySpec::*)(int32_t, bool)>(&::System::ArraySpec::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x260691c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySpec*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ArraySpec.Resolve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::ArraySpec::*)(::System::Type*)>(&::System::ArraySpec::Resolve)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x260692c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySpec*>::get(), "Resolve", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ArraySpec.Append
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::StringBuilder* (::System::ArraySpec::*)(::System::Text::StringBuilder*)>(
    &::System::ArraySpec::Append)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2606990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySpec*>::get(), "Append", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ArraySpec.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ArraySpec::*)()>(&::System::ArraySpec::ToString)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2606a30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySpec*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySpec*>::get(), 3));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::ModifierSpec"
constexpr System::ArraySpec::operator ::System::ModifierSpec*() noexcept {
  return static_cast<::System::ModifierSpec*>(static_cast<void*>(this));
}
constexpr int32_t& System::ArraySpec::__get_dimensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___dimensions;
}
constexpr int32_t const& System::ArraySpec::__get_dimensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___dimensions;
}
constexpr void System::ArraySpec::__set_dimensions(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___dimensions = value;
}
constexpr bool& System::ArraySpec::__get_bound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___bound;
}
constexpr bool const& System::ArraySpec::__get_bound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___bound;
}
constexpr void System::ArraySpec::__set_bound(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___bound = value;
}
inline ::System::ArraySpec* System::ArraySpec::New_ctor(int32_t dimensions, bool bound) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::ArraySpec*>(dimensions, bound));
}
inline void System::ArraySpec::_ctor(int32_t dimensions, bool bound) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySpec*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dimensions, bound);
}
inline ::System::Type* System::ArraySpec::Resolve(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySpec*>::get(), "Resolve", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, type);
}
inline ::System::Text::StringBuilder* System::ArraySpec::Append(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySpec*>::get(), "Append", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*, false>(this, ___internal_method, sb);
}
inline ::StringW System::ArraySpec::ToString() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySpec*>::get(), "ToString", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ArraySpec::ArraySpec() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
