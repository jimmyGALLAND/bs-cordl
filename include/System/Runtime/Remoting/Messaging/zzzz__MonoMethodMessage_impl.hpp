#pragma once
#include "System/Runtime/Remoting/Messaging/zzzz__CallType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__MonoMethodMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IInternalMessage_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__MCMDictionary_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__LogicalCallContext_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CallType_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__AsyncResult_def.hpp"
#include "System/Reflection/zzzz__RuntimeMethodInfo_def.hpp"
#include "System/Runtime/Remoting/zzzz__Identity_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodReturnMessage_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodCallMessage_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.InitMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)(
    ::System::Reflection::RuntimeMethodInfo*, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::System::Runtime::Remoting::Messaging::MonoMethodMessage::InitMessage)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x24b1118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(), "InitMessage", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::RuntimeMethodInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)(
    ::System::Reflection::MethodBase*, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::System::Runtime::Remoting::Messaging::MonoMethodMessage::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x24b13ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)(
    ::System::Reflection::MethodInfo*, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2496980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.GetMethodInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (*)(::System::Type*, ::StringW)>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::GetMethodInfo)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x24b1474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(), "GetMethodInfo", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)(
    ::System::Type*, ::StringW, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::System::Runtime::Remoting::Messaging::MonoMethodMessage::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x24b1528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.get_Properties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary* (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::get_Properties)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x24b1560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(), "get_Properties",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.get_ArgCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::get_ArgCount)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x24b15cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(), "get_ArgCount",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.get_Args
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (
    ::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(&::System::Runtime::Remoting::Messaging::MonoMethodMessage::get_Args)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24b1604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(), "get_Args",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.get_LogicalCallContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::LogicalCallContext* (
    ::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(&::System::Runtime::Remoting::Messaging::MonoMethodMessage::get_LogicalCallContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24b160c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(), "get_LogicalCallContext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.set_LogicalCallContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)(
    ::System::Runtime::Remoting::Messaging::LogicalCallContext*)>(&::System::Runtime::Remoting::Messaging::MonoMethodMessage::set_LogicalCallContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24b1614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(), "set_LogicalCallContext", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::LogicalCallContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.get_MethodBase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodBase* (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::get_MethodBase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24b161c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(), "get_MethodBase",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.get_MethodName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::get_MethodName)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x24b1624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(), "get_MethodName",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.get_MethodSignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::get_MethodSignature)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x24b16a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(), "get_MethodSignature",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.get_TypeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::get_TypeName)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x24b17c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(), "get_TypeName",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.get_Uri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::get_Uri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24b1854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(), "get_Uri",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.set_Uri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)(::StringW)>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::set_Uri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24b185c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(), "set_Uri",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.GetArg
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)(int32_t)>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::GetArg)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2498c00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(), "GetArg",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.get_Exception
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::get_Exception)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24b1864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(), "get_Exception",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.get_OutArgCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::get_OutArgCount)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x24b186c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(), "get_OutArgCount",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.get_OutArgs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (
    ::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(&::System::Runtime::Remoting::Messaging::MonoMethodMessage::get_OutArgs)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x24b18d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(), "get_OutArgs",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.get_ReturnValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::get_ReturnValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24b1a00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(), "get_ReturnValue",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Identity* (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24b1a08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(),
                                                 "System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)(::System::Runtime::Remoting::Identity*)>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24b1a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(),
                                                 "System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Identity*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.get_AsyncResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::AsyncResult* (
    ::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(&::System::Runtime::Remoting::Messaging::MonoMethodMessage::get_AsyncResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24b1a18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(), "get_AsyncResult",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.get_CallType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::CallType (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::get_CallType)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x24979d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(), "get_CallType",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.NeedsOutProcessing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)(ByRef<int32_t>)>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::NeedsOutProcessing)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2498b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(), "NeedsOutProcessing",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodCallMessage"
constexpr System::Runtime::Remoting::Messaging::MonoMethodMessage::operator ::System::Runtime::Remoting::Messaging::IMethodCallMessage*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMethodCallMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodMessage"
constexpr System::Runtime::Remoting::Messaging::MonoMethodMessage::operator ::System::Runtime::Remoting::Messaging::IMethodMessage*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMethodMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessage"
constexpr System::Runtime::Remoting::Messaging::MonoMethodMessage::operator ::System::Runtime::Remoting::Messaging::IMessage*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodReturnMessage"
constexpr System::Runtime::Remoting::Messaging::MonoMethodMessage::operator ::System::Runtime::Remoting::Messaging::IMethodReturnMessage*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMethodReturnMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IInternalMessage"
constexpr System::Runtime::Remoting::Messaging::MonoMethodMessage::operator ::System::Runtime::Remoting::Messaging::IInternalMessage*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IInternalMessage*>(static_cast<void*>(this));
}
constexpr ::System::Reflection::RuntimeMethodInfo*& System::Runtime::Remoting::Messaging::MonoMethodMessage::__get_method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::RuntimeMethodInfo*> const& System::Runtime::Remoting::Messaging::MonoMethodMessage::__get_method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
constexpr void System::Runtime::Remoting::Messaging::MonoMethodMessage::__set_method(::System::Reflection::RuntimeMethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___method)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& System::Runtime::Remoting::Messaging::MonoMethodMessage::__get_args() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___args;
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& System::Runtime::Remoting::Messaging::MonoMethodMessage::__get_args() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___args;
}
constexpr void System::Runtime::Remoting::Messaging::MonoMethodMessage::__set_args(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___args)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Runtime::Remoting::Messaging::MonoMethodMessage::__get_names() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___names;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Runtime::Remoting::Messaging::MonoMethodMessage::__get_names() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___names;
}
constexpr void System::Runtime::Remoting::Messaging::MonoMethodMessage::__set_names(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___names)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Runtime::Remoting::Messaging::MonoMethodMessage::__get_arg_types() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arg_types;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Runtime::Remoting::Messaging::MonoMethodMessage::__get_arg_types() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arg_types;
}
constexpr void System::Runtime::Remoting::Messaging::MonoMethodMessage::__set_arg_types(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___arg_types)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Remoting::Messaging::LogicalCallContext*& System::Runtime::Remoting::Messaging::MonoMethodMessage::__get_ctx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ctx;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::LogicalCallContext*> const& System::Runtime::Remoting::Messaging::MonoMethodMessage::__get_ctx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ctx;
}
constexpr void System::Runtime::Remoting::Messaging::MonoMethodMessage::__set_ctx(::System::Runtime::Remoting::Messaging::LogicalCallContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ctx)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Runtime::Remoting::Messaging::MonoMethodMessage::__get_rval() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rval;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Runtime::Remoting::Messaging::MonoMethodMessage::__get_rval() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rval;
}
constexpr void System::Runtime::Remoting::Messaging::MonoMethodMessage::__set_rval(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rval)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Exception*& System::Runtime::Remoting::Messaging::MonoMethodMessage::__get_exc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exc;
}
constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& System::Runtime::Remoting::Messaging::MonoMethodMessage::__get_exc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exc;
}
constexpr void System::Runtime::Remoting::Messaging::MonoMethodMessage::__set_exc(::System::Exception* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___exc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Remoting::Messaging::AsyncResult*& System::Runtime::Remoting::Messaging::MonoMethodMessage::__get_asyncResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncResult;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::AsyncResult*> const& System::Runtime::Remoting::Messaging::MonoMethodMessage::__get_asyncResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncResult;
}
constexpr void System::Runtime::Remoting::Messaging::MonoMethodMessage::__set_asyncResult(::System::Runtime::Remoting::Messaging::AsyncResult* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___asyncResult)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Remoting::Messaging::CallType& System::Runtime::Remoting::Messaging::MonoMethodMessage::__get_call_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___call_type;
}
constexpr ::System::Runtime::Remoting::Messaging::CallType const& System::Runtime::Remoting::Messaging::MonoMethodMessage::__get_call_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___call_type;
}
constexpr void System::Runtime::Remoting::Messaging::MonoMethodMessage::__set_call_type(::System::Runtime::Remoting::Messaging::CallType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___call_type = value;
}
constexpr ::StringW& System::Runtime::Remoting::Messaging::MonoMethodMessage::__get_uri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uri;
}
constexpr ::StringW const& System::Runtime::Remoting::Messaging::MonoMethodMessage::__get_uri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uri;
}
constexpr void System::Runtime::Remoting::Messaging::MonoMethodMessage::__set_uri(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___uri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Remoting::Messaging::MCMDictionary*& System::Runtime::Remoting::Messaging::MonoMethodMessage::__get_properties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___properties;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::MCMDictionary*> const& System::Runtime::Remoting::Messaging::MonoMethodMessage::__get_properties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___properties;
}
constexpr void System::Runtime::Remoting::Messaging::MonoMethodMessage::__set_properties(::System::Runtime::Remoting::Messaging::MCMDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___properties)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Remoting::Identity*& System::Runtime::Remoting::Messaging::MonoMethodMessage::__get_identity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___identity;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Identity*> const& System::Runtime::Remoting::Messaging::MonoMethodMessage::__get_identity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___identity;
}
constexpr void System::Runtime::Remoting::Messaging::MonoMethodMessage::__set_identity(::System::Runtime::Remoting::Identity* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___identity)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& System::Runtime::Remoting::Messaging::MonoMethodMessage::__get_methodSignature() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___methodSignature;
}
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& System::Runtime::Remoting::Messaging::MonoMethodMessage::__get_methodSignature() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___methodSignature;
}
constexpr void System::Runtime::Remoting::Messaging::MonoMethodMessage::__set_methodSignature(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___methodSignature)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Remoting::Messaging::MonoMethodMessage::InitMessage(::System::Reflection::RuntimeMethodInfo* method, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> out_args) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(), "InitMessage", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, method, out_args);
}
inline ::System::Runtime::Remoting::Messaging::MonoMethodMessage* System::Runtime::Remoting::Messaging::MonoMethodMessage::New_ctor(::System::Reflection::MethodBase* method,
                                                                                                                                    ::ArrayW<::System::Object*, ::Array<::System::Object*>*> out_args) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(method, out_args));
}
inline void System::Runtime::Remoting::Messaging::MonoMethodMessage::_ctor(::System::Reflection::MethodBase* method, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> out_args) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, method, out_args);
}
inline ::System::Runtime::Remoting::Messaging::MonoMethodMessage* System::Runtime::Remoting::Messaging::MonoMethodMessage::New_ctor(::System::Reflection::MethodInfo* minfo,
                                                                                                                                    ::ArrayW<::System::Object*, ::Array<::System::Object*>*> in_args,
                                                                                                                                    ::ArrayW<::System::Object*, ::Array<::System::Object*>*> out_args) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(minfo, in_args, out_args));
}
inline void System::Runtime::Remoting::Messaging::MonoMethodMessage::_ctor(::System::Reflection::MethodInfo* minfo, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> in_args,
                                                                           ::ArrayW<::System::Object*, ::Array<::System::Object*>*> out_args) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, minfo, in_args, out_args);
}
inline ::System::Reflection::MethodInfo* System::Runtime::Remoting::Messaging::MonoMethodMessage::GetMethodInfo(::System::Type* type, ::StringW methodName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(), "GetMethodInfo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(nullptr, ___internal_method, type, methodName);
}
inline ::System::Runtime::Remoting::Messaging::MonoMethodMessage* System::Runtime::Remoting::Messaging::MonoMethodMessage::New_ctor(::System::Type* type, ::StringW methodName,
                                                                                                                                    ::ArrayW<::System::Object*, ::Array<::System::Object*>*> in_args) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(type, methodName, in_args));
}
inline void System::Runtime::Remoting::Messaging::MonoMethodMessage::_ctor(::System::Type* type, ::StringW methodName, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> in_args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, methodName, in_args);
}
inline ::System::Collections::IDictionary* System::Runtime::Remoting::Messaging::MonoMethodMessage::get_Properties() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(),
                                                                             "get_Properties", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*, false>(this, ___internal_method);
}
inline int32_t System::Runtime::Remoting::Messaging::MonoMethodMessage::get_ArgCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(),
                                                                             "get_ArgCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::Runtime::Remoting::Messaging::MonoMethodMessage::get_Args() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(),
                                                                             "get_Args", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* System::Runtime::Remoting::Messaging::MonoMethodMessage::get_LogicalCallContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(),
                                                                             "get_LogicalCallContext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::LogicalCallContext*, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::MonoMethodMessage::set_LogicalCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(), "set_LogicalCallContext", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::LogicalCallContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Reflection::MethodBase* System::Runtime::Remoting::Messaging::MonoMethodMessage::get_MethodBase() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(),
                                                                             "get_MethodBase", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::Messaging::MonoMethodMessage::get_MethodName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(),
                                                                             "get_MethodName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::MonoMethodMessage::get_MethodSignature() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(),
                                                                             "get_MethodSignature", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::Messaging::MonoMethodMessage::get_TypeName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(),
                                                                             "get_TypeName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::Messaging::MonoMethodMessage::get_Uri() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(),
                                                                             "get_Uri", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::MonoMethodMessage::set_Uri(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(), "set_Uri",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::MonoMethodMessage::GetArg(int32_t arg_num) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(), "GetArg",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, arg_num);
}
inline ::System::Exception* System::Runtime::Remoting::Messaging::MonoMethodMessage::get_Exception() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(),
                                                                             "get_Exception", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method);
}
inline int32_t System::Runtime::Remoting::Messaging::MonoMethodMessage::get_OutArgCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(),
                                                                             "get_OutArgCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::Runtime::Remoting::Messaging::MonoMethodMessage::get_OutArgs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(),
                                                                             "get_OutArgs", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::MonoMethodMessage::get_ReturnValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(),
                                                                             "get_ReturnValue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Identity* System::Runtime::Remoting::Messaging::MonoMethodMessage::System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(),
                                               "System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Identity*, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::MonoMethodMessage::System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(::System::Runtime::Remoting::Identity* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(),
                                               "System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Identity*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Runtime::Remoting::Messaging::AsyncResult* System::Runtime::Remoting::Messaging::MonoMethodMessage::get_AsyncResult() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(),
                                                                             "get_AsyncResult", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::AsyncResult*, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::CallType System::Runtime::Remoting::Messaging::MonoMethodMessage::get_CallType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(),
                                                                             "get_CallType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::CallType, false>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Messaging::MonoMethodMessage::NeedsOutProcessing(ByRef<int32_t> outCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get(), "NeedsOutProcessing",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, outCount);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::MonoMethodMessage::MonoMethodMessage() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
