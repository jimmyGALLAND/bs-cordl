#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/Serialization/zzzz__OptionalFieldAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::OptionalFieldAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::OptionalFieldAttribute::*)()>(
    &::System::Runtime::Serialization::OptionalFieldAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x24bde48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::OptionalFieldAttribute*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::OptionalFieldAttribute.set_VersionAdded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::OptionalFieldAttribute::*)(int32_t)>(
    &::System::Runtime::Serialization::OptionalFieldAttribute::set_VersionAdded)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x24bde58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::OptionalFieldAttribute*>::get(), "set_VersionAdded",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Runtime::Serialization::OptionalFieldAttribute::__get_versionAdded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___versionAdded;
}
constexpr int32_t const& System::Runtime::Serialization::OptionalFieldAttribute::__get_versionAdded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___versionAdded;
}
constexpr void System::Runtime::Serialization::OptionalFieldAttribute::__set_versionAdded(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___versionAdded = value;
}
inline ::System::Runtime::Serialization::OptionalFieldAttribute* System::Runtime::Serialization::OptionalFieldAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::OptionalFieldAttribute*>());
}
inline void System::Runtime::Serialization::OptionalFieldAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::OptionalFieldAttribute*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::OptionalFieldAttribute::set_VersionAdded(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::OptionalFieldAttribute*>::get(), "set_VersionAdded",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::OptionalFieldAttribute::OptionalFieldAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
