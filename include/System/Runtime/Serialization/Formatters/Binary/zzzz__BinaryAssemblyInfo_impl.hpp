#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryAssemblyInfo_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::*)(::StringW)>(
    &::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24c1964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::*)(
    ::StringW, ::System::Reflection::Assembly*)>(&::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x24c198c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo.GetAssembly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::GetAssembly)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x24c19b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>::get(),
                                                 "GetAssembly", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::__get_assemblyString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___assemblyString;
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::__get_assemblyString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___assemblyString;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::__set_assemblyString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___assemblyString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Reflection::Assembly*& System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::__get_assembly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___assembly;
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::Assembly*> const& System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::__get_assembly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___assembly;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::__set_assembly(::System::Reflection::Assembly* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___assembly)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::New_ctor(::StringW assemblyString) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>(assemblyString));
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::_ctor(::StringW assemblyString) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, assemblyString);
}
inline ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*
System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::New_ctor(::StringW assemblyString, ::System::Reflection::Assembly* assembly) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>(assemblyString, assembly));
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::_ctor(::StringW assemblyString, ::System::Reflection::Assembly* assembly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, assemblyString, assembly);
}
inline ::System::Reflection::Assembly* System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::GetAssembly() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>::get(), "GetAssembly",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::BinaryAssemblyInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
