#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Reflection/zzzz__LocalVariableInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::LocalVariableInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::LocalVariableInfo::*)()>(&::System::Reflection::LocalVariableInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24f1cc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::LocalVariableInfo*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::LocalVariableInfo.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Reflection::LocalVariableInfo::*)()>(&::System::Reflection::LocalVariableInfo::ToString)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x24f1cd0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::LocalVariableInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::LocalVariableInfo*>::get(), 3));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Reflection::LocalVariableInfo::__get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___type;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& System::Reflection::LocalVariableInfo::__get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___type;
}
constexpr void System::Reflection::LocalVariableInfo::__set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Reflection::LocalVariableInfo::__get_is_pinned() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___is_pinned;
}
constexpr bool const& System::Reflection::LocalVariableInfo::__get_is_pinned() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___is_pinned;
}
constexpr void System::Reflection::LocalVariableInfo::__set_is_pinned(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___is_pinned = value;
}
constexpr uint16_t& System::Reflection::LocalVariableInfo::__get_position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___position;
}
constexpr uint16_t const& System::Reflection::LocalVariableInfo::__get_position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___position;
}
constexpr void System::Reflection::LocalVariableInfo::__set_position(uint16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___position = value;
}
inline ::System::Reflection::LocalVariableInfo* System::Reflection::LocalVariableInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Reflection::LocalVariableInfo*>());
}
inline void System::Reflection::LocalVariableInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::LocalVariableInfo*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Reflection::LocalVariableInfo::ToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::LocalVariableInfo*>::get(), "ToString",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Reflection::LocalVariableInfo::LocalVariableInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
