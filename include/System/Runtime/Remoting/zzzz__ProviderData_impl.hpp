#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/zzzz__ProviderData_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::ProviderData.CopyFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ProviderData::*)(::System::Runtime::Remoting::ProviderData*)>(
    &::System::Runtime::Remoting::ProviderData::CopyFrom)> {
  constexpr static std::size_t size = 0x704;
  constexpr static std::size_t addrs = 0x2489248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ProviderData*>::get(), "CopyFrom", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ProviderData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ProviderData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ProviderData::*)()>(&::System::Runtime::Remoting::ProviderData::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x248d5e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ProviderData*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Remoting::ProviderData::__get_Ref() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Ref;
}
constexpr ::StringW const& System::Runtime::Remoting::ProviderData::__get_Ref() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Ref;
}
constexpr void System::Runtime::Remoting::ProviderData::__set_Ref(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Ref)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Runtime::Remoting::ProviderData::__get_Type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Type;
}
constexpr ::StringW const& System::Runtime::Remoting::ProviderData::__get_Type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Type;
}
constexpr void System::Runtime::Remoting::ProviderData::__set_Type(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Runtime::Remoting::ProviderData::__get_Id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Id;
}
constexpr ::StringW const& System::Runtime::Remoting::ProviderData::__get_Id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Id;
}
constexpr void System::Runtime::Remoting::ProviderData::__set_Id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Runtime::Remoting::ProviderData::__get_CustomProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___CustomProperties;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Runtime::Remoting::ProviderData::__get_CustomProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___CustomProperties;
}
constexpr void System::Runtime::Remoting::ProviderData::__set_CustomProperties(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CustomProperties)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IList*& System::Runtime::Remoting::ProviderData::__get_CustomData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___CustomData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& System::Runtime::Remoting::ProviderData::__get_CustomData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___CustomData;
}
constexpr void System::Runtime::Remoting::ProviderData::__set_CustomData(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CustomData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Remoting::ProviderData::CopyFrom(::System::Runtime::Remoting::ProviderData* other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ProviderData*>::get(), "CopyFrom", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ProviderData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
inline ::System::Runtime::Remoting::ProviderData* System::Runtime::Remoting::ProviderData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::ProviderData*>());
}
inline void System::Runtime::Remoting::ProviderData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ProviderData*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::ProviderData::ProviderData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
