#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/zzzz__ChannelData_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::ChannelData.get_ServerProviders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (::System::Runtime::Remoting::ChannelData::*)()>(
    &::System::Runtime::Remoting::ChannelData::get_ServerProviders)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x24891dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ChannelData*>::get(),
                                                                               "get_ServerProviders", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ChannelData.get_ClientProviders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (::System::Runtime::Remoting::ChannelData::*)()>(
    &::System::Runtime::Remoting::ChannelData::get_ClientProviders)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x248994c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ChannelData*>::get(),
                                                                               "get_ClientProviders", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ChannelData.get_CustomProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Hashtable* (::System::Runtime::Remoting::ChannelData::*)()>(
    &::System::Runtime::Remoting::ChannelData::get_CustomProperties)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x248d578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ChannelData*>::get(),
                                                                               "get_CustomProperties", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ChannelData.CopyFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ChannelData::*)(::System::Runtime::Remoting::ChannelData*)>(
    &::System::Runtime::Remoting::ChannelData::CopyFrom)> {
  constexpr static std::size_t size = 0x940;
  constexpr static std::size_t addrs = 0x248889c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ChannelData*>::get(), "CopyFrom", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ChannelData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ChannelData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ChannelData::*)()>(&::System::Runtime::Remoting::ChannelData::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x248d4c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ChannelData*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Remoting::ChannelData::__get_Ref() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Ref;
}
constexpr ::StringW const& System::Runtime::Remoting::ChannelData::__get_Ref() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Ref;
}
constexpr void System::Runtime::Remoting::ChannelData::__set_Ref(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Ref)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Runtime::Remoting::ChannelData::__get_Type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Type;
}
constexpr ::StringW const& System::Runtime::Remoting::ChannelData::__get_Type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Type;
}
constexpr void System::Runtime::Remoting::ChannelData::__set_Type(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Runtime::Remoting::ChannelData::__get_Id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Id;
}
constexpr ::StringW const& System::Runtime::Remoting::ChannelData::__get_Id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Id;
}
constexpr void System::Runtime::Remoting::ChannelData::__set_Id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Runtime::Remoting::ChannelData::__get_DelayLoadAsClientChannel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___DelayLoadAsClientChannel;
}
constexpr ::StringW const& System::Runtime::Remoting::ChannelData::__get_DelayLoadAsClientChannel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___DelayLoadAsClientChannel;
}
constexpr void System::Runtime::Remoting::ChannelData::__set_DelayLoadAsClientChannel(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DelayLoadAsClientChannel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ArrayList*& System::Runtime::Remoting::ChannelData::__get__serverProviders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____serverProviders;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& System::Runtime::Remoting::ChannelData::__get__serverProviders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____serverProviders;
}
constexpr void System::Runtime::Remoting::ChannelData::__set__serverProviders(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____serverProviders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ArrayList*& System::Runtime::Remoting::ChannelData::__get__clientProviders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____clientProviders;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& System::Runtime::Remoting::ChannelData::__get__clientProviders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____clientProviders;
}
constexpr void System::Runtime::Remoting::ChannelData::__set__clientProviders(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clientProviders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Runtime::Remoting::ChannelData::__get__customProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____customProperties;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Runtime::Remoting::ChannelData::__get__customProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____customProperties;
}
constexpr void System::Runtime::Remoting::ChannelData::__set__customProperties(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____customProperties)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::ArrayList* System::Runtime::Remoting::ChannelData::get_ServerProviders() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ChannelData*>::get(),
                                                                             "get_ServerProviders", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*, false>(this, ___internal_method);
}
inline ::System::Collections::ArrayList* System::Runtime::Remoting::ChannelData::get_ClientProviders() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ChannelData*>::get(),
                                                                             "get_ClientProviders", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*, false>(this, ___internal_method);
}
inline ::System::Collections::Hashtable* System::Runtime::Remoting::ChannelData::get_CustomProperties() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ChannelData*>::get(),
                                                                             "get_CustomProperties", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Hashtable*, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::ChannelData::CopyFrom(::System::Runtime::Remoting::ChannelData* other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ChannelData*>::get(), "CopyFrom", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ChannelData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
inline ::System::Runtime::Remoting::ChannelData* System::Runtime::Remoting::ChannelData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::ChannelData*>());
}
inline void System::Runtime::Remoting::ChannelData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ChannelData*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::ChannelData::ChannelData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
