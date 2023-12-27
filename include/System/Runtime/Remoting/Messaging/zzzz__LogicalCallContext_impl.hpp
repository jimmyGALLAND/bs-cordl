#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__LogicalCallContext_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__LogicalCallContext_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__Header_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CallContextSecurityData_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CallContextRemotingData_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader::*)(
    ::System::Runtime::Remoting::Messaging::LogicalCallContext*)>(&::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a74e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::LogicalCallContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader.get_IsNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader::*)()>(
    &::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader::get_IsNull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x24a74ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader>::get(), "get_IsNull",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader.get_HasInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader::*)()>(
    &::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader::get_HasInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x24a74fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader>::get(), "get_HasInfo",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::LogicalCallContext* (
    ::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader::*)()>(&::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader::Clone)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x24a750c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader>::get(), "Clone",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader.GetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader::*)(::StringW)>(
    &::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader::GetData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x24a6210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader>::get(), "GetData",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader::_ctor(::System::Runtime::Remoting::Messaging::LogicalCallContext* ctx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::LogicalCallContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx);
}
inline bool System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader::get_IsNull() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader>::get(), "get_IsNull",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader::get_HasInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader>::get(), "get_HasInfo",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader::Clone() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader>::get(), "Clone",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::LogicalCallContext*, false>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader::GetData(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader>::get(), "GetData",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, name);
}
// Ctor Parameters [CppParam { name: "m_ctx", ty: "::System::Runtime::Remoting::Messaging::LogicalCallContext*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader::__LogicalCallContext__Reader(::System::Runtime::Remoting::Messaging::LogicalCallContext* m_ctx) noexcept {
  this->m_ctx = m_ctx;
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader::__LogicalCallContext__Reader() {}
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::LogicalCallContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::LogicalCallContext::*)()>(
    &::System::Runtime::Remoting::Messaging::LogicalCallContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a6650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::LogicalCallContext*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::LogicalCallContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::LogicalCallContext::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Remoting::Messaging::LogicalCallContext::_ctor)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x24a6658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::LogicalCallContext*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::LogicalCallContext.GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::LogicalCallContext::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Remoting::Messaging::LogicalCallContext::GetObjectData)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x24a69c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::LogicalCallContext*>::get(), "GetObjectData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::LogicalCallContext.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::LogicalCallContext::*)()>(
    &::System::Runtime::Remoting::Messaging::LogicalCallContext::Clone)> {
  constexpr static std::size_t size = 0x5f8;
  constexpr static std::size_t addrs = 0x24a6d40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::LogicalCallContext*>::get(), "Clone",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::LogicalCallContext.Merge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::LogicalCallContext::*)(
    ::System::Runtime::Remoting::Messaging::LogicalCallContext*)>(&::System::Runtime::Remoting::Messaging::LogicalCallContext::Merge)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x2497f98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::LogicalCallContext*>::get(), "Merge", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::LogicalCallContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::LogicalCallContext.get_HasInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::Messaging::LogicalCallContext::*)()>(
    &::System::Runtime::Remoting::Messaging::LogicalCallContext::get_HasInfo)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2497f38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::LogicalCallContext*>::get(), "get_HasInfo",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::LogicalCallContext.get_HasUserData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::Messaging::LogicalCallContext::*)()>(
    &::System::Runtime::Remoting::Messaging::LogicalCallContext::get_HasUserData)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x24a6d14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::LogicalCallContext*>::get(), "get_HasUserData",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::LogicalCallContext.get_Datastore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Hashtable* (::System::Runtime::Remoting::Messaging::LogicalCallContext::*)()>(
    &::System::Runtime::Remoting::Messaging::LogicalCallContext::get_Datastore)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x24a6954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::LogicalCallContext*>::get(), "get_Datastore",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::LogicalCallContext.GetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::LogicalCallContext::*)(::StringW)>(
    &::System::Runtime::Remoting::Messaging::LogicalCallContext::GetData)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x24a7428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::LogicalCallContext*>::get(), "GetData",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::LogicalCallContext.SetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::LogicalCallContext::*)(::StringW, ::System::Object*)>(
    &::System::Runtime::Remoting::Messaging::LogicalCallContext::SetData)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x24a62b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::LogicalCallContext*>::get(), "SetData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Runtime::Remoting::Messaging::LogicalCallContext::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Runtime::Remoting::Messaging::LogicalCallContext::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Hashtable*& System::Runtime::Remoting::Messaging::LogicalCallContext::__get_m_Datastore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Datastore;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Runtime::Remoting::Messaging::LogicalCallContext::__get_m_Datastore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Datastore;
}
constexpr void System::Runtime::Remoting::Messaging::LogicalCallContext::__set_m_Datastore(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Datastore)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Remoting::Messaging::CallContextRemotingData*& System::Runtime::Remoting::Messaging::LogicalCallContext::__get_m_RemotingData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_RemotingData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::CallContextRemotingData*> const&
System::Runtime::Remoting::Messaging::LogicalCallContext::__get_m_RemotingData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_RemotingData;
}
constexpr void System::Runtime::Remoting::Messaging::LogicalCallContext::__set_m_RemotingData(::System::Runtime::Remoting::Messaging::CallContextRemotingData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RemotingData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Remoting::Messaging::CallContextSecurityData*& System::Runtime::Remoting::Messaging::LogicalCallContext::__get_m_SecurityData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_SecurityData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::CallContextSecurityData*> const&
System::Runtime::Remoting::Messaging::LogicalCallContext::__get_m_SecurityData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_SecurityData;
}
constexpr void System::Runtime::Remoting::Messaging::LogicalCallContext::__set_m_SecurityData(::System::Runtime::Remoting::Messaging::CallContextSecurityData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SecurityData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Runtime::Remoting::Messaging::LogicalCallContext::__get_m_HostContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_HostContext;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Runtime::Remoting::Messaging::LogicalCallContext::__get_m_HostContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_HostContext;
}
constexpr void System::Runtime::Remoting::Messaging::LogicalCallContext::__set_m_HostContext(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_HostContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Runtime::Remoting::Messaging::LogicalCallContext::__get_m_IsCorrelationMgr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_IsCorrelationMgr;
}
constexpr bool const& System::Runtime::Remoting::Messaging::LogicalCallContext::__get_m_IsCorrelationMgr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_IsCorrelationMgr;
}
constexpr void System::Runtime::Remoting::Messaging::LogicalCallContext::__set_m_IsCorrelationMgr(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_IsCorrelationMgr = value;
}
constexpr ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*>&
System::Runtime::Remoting::Messaging::LogicalCallContext::__get__sendHeaders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____sendHeaders;
}
constexpr ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> const&
System::Runtime::Remoting::Messaging::LogicalCallContext::__get__sendHeaders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____sendHeaders;
}
constexpr void System::Runtime::Remoting::Messaging::LogicalCallContext::__set__sendHeaders(
    ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sendHeaders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*>&
System::Runtime::Remoting::Messaging::LogicalCallContext::__get__recvHeaders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____recvHeaders;
}
constexpr ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> const&
System::Runtime::Remoting::Messaging::LogicalCallContext::__get__recvHeaders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____recvHeaders;
}
constexpr void System::Runtime::Remoting::Messaging::LogicalCallContext::__set__recvHeaders(
    ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____recvHeaders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Remoting::Messaging::LogicalCallContext::setStaticF_s_callContextType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "s_callContextType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::LogicalCallContext*>::get>(
      std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Runtime::Remoting::Messaging::LogicalCallContext::getStaticF_s_callContextType() {
  return ::cordl_internals::getStaticField<::System::Type*, "s_callContextType",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::LogicalCallContext*>::get>();
}
inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* System::Runtime::Remoting::Messaging::LogicalCallContext::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::Messaging::LogicalCallContext*>());
}
inline void System::Runtime::Remoting::Messaging::LogicalCallContext::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::LogicalCallContext*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* System::Runtime::Remoting::Messaging::LogicalCallContext::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                                                      ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::Messaging::LogicalCallContext*>(info, context));
}
inline void System::Runtime::Remoting::Messaging::LogicalCallContext::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::LogicalCallContext*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline void System::Runtime::Remoting::Messaging::LogicalCallContext::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                    ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::LogicalCallContext*>::get(), "GetObjectData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::LogicalCallContext::Clone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::LogicalCallContext*>::get(),
                                                                             "Clone", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::LogicalCallContext::Merge(::System::Runtime::Remoting::Messaging::LogicalCallContext* lc) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::LogicalCallContext*>::get(), "Merge", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::LogicalCallContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lc);
}
inline bool System::Runtime::Remoting::Messaging::LogicalCallContext::get_HasInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::LogicalCallContext*>::get(),
                                                                             "get_HasInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Messaging::LogicalCallContext::get_HasUserData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::LogicalCallContext*>::get(),
                                                                             "get_HasUserData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Hashtable* System::Runtime::Remoting::Messaging::LogicalCallContext::get_Datastore() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::LogicalCallContext*>::get(),
                                                                             "get_Datastore", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Hashtable*, false>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::LogicalCallContext::GetData(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::LogicalCallContext*>::get(), "GetData",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, name);
}
inline void System::Runtime::Remoting::Messaging::LogicalCallContext::SetData(::StringW name, ::System::Object* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::LogicalCallContext*>::get(), "SetData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, data);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::LogicalCallContext::LogicalCallContext() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
