#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Activation/ActivationServices.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__ActivationServices_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IActivator_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionCallMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__ConstructionCall_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Proxies/zzzz__RemotingProxy_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::ActivationServices.get_ConstructionActivator
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Activation::IActivator* (*)()>(&::System::Runtime::Remoting::Activation::ActivationServices::get_ConstructionActivator)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3c535bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ActivationServices*>::get(),
                        "get_ConstructionActivator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::ActivationServices.Activate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (*)(::System::Runtime::Remoting::Proxies::RemotingProxy*, ::System::Runtime::Remoting::Messaging::ConstructionCall*)>(&::System::Runtime::Remoting::Activation::ActivationServices::Activate)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x3c4a830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ActivationServices*>::get(),
                        "Activate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::ActivationServices.RemoteActivate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(&::System::Runtime::Remoting::Activation::ActivationServices::RemoteActivate)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x3c53650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ActivationServices*>::get(),
                        "RemoteActivate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::ActivationServices.CreateConstructionCall
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::ConstructionCall* (*)(::System::Type*, ::StringW, ::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::System::Runtime::Remoting::Activation::ActivationServices::CreateConstructionCall)> {
  constexpr static std::size_t size = 0x9c8;
  constexpr static std::size_t addrs = 0x3c49044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ActivationServices*>::get(),
                        "CreateConstructionCall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::ActivationServices.CreateInstanceFromMessage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(&::System::Runtime::Remoting::Activation::ActivationServices::CreateInstanceFromMessage)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x3c53874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ActivationServices*>::get(),
                        "CreateInstanceFromMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::ActivationServices.CreateProxyForType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Type*)>(&::System::Runtime::Remoting::Activation::ActivationServices::CreateProxyForType)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x3c53c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ActivationServices*>::get(),
                        "CreateProxyForType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::ActivationServices.AllocateUninitializedClassInstance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Type*)>(&::System::Runtime::Remoting::Activation::ActivationServices::AllocateUninitializedClassInstance)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3c53c70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ActivationServices*>::get(),
                        "AllocateUninitializedClassInstance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::ActivationServices.EnableProxyActivation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*, bool)>(&::System::Runtime::Remoting::Activation::ActivationServices::EnableProxyActivation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c53da8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ActivationServices*>::get(),
                        "EnableProxyActivation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::Activation::ActivationServices::setStaticF__constructionActivator(::System::Runtime::Remoting::Activation::IActivator*  value)  {
::cordl_internals::setStaticField<::System::Runtime::Remoting::Activation::IActivator*, "_constructionActivator", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ActivationServices*>::get>(std::forward<::System::Runtime::Remoting::Activation::IActivator*>(value));
}
inline ::System::Runtime::Remoting::Activation::IActivator* System::Runtime::Remoting::Activation::ActivationServices::getStaticF__constructionActivator()  {
return ::cordl_internals::getStaticField<::System::Runtime::Remoting::Activation::IActivator*, "_constructionActivator", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ActivationServices*>::get>();
}
inline ::System::Runtime::Remoting::Activation::IActivator* System::Runtime::Remoting::Activation::ActivationServices::get_ConstructionActivator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ActivationServices*>::get(),
                        "get_ConstructionActivator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Activation::IActivator*, false>(nullptr, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Activation::ActivationServices::Activate(::System::Runtime::Remoting::Proxies::RemotingProxy*  proxy, ::System::Runtime::Remoting::Messaging::ConstructionCall*  ctorCall)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ActivationServices*>::get(),
                        "Activate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*, false>(nullptr, ___internal_method, proxy, ctorCall);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Activation::ActivationServices::RemoteActivate(::System::Runtime::Remoting::Activation::IConstructionCallMessage*  ctorCall)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ActivationServices*>::get(),
                        "RemoteActivate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*, false>(nullptr, ___internal_method, ctorCall);
}
inline ::System::Runtime::Remoting::Messaging::ConstructionCall* System::Runtime::Remoting::Activation::ActivationServices::CreateConstructionCall(::System::Type*  type, ::StringW  activationUrl, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  activationAttributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ActivationServices*>::get(),
                        "CreateConstructionCall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::ConstructionCall*, false>(nullptr, ___internal_method, type, activationUrl, activationAttributes);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Activation::ActivationServices::CreateInstanceFromMessage(::System::Runtime::Remoting::Activation::IConstructionCallMessage*  ctorCall)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ActivationServices*>::get(),
                        "CreateInstanceFromMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*, false>(nullptr, ___internal_method, ctorCall);
}
inline ::System::Object* System::Runtime::Remoting::Activation::ActivationServices::CreateProxyForType(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ActivationServices*>::get(),
                        "CreateProxyForType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, type);
}
inline ::System::Object* System::Runtime::Remoting::Activation::ActivationServices::AllocateUninitializedClassInstance(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ActivationServices*>::get(),
                        "AllocateUninitializedClassInstance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, type);
}
inline void System::Runtime::Remoting::Activation::ActivationServices::EnableProxyActivation(::System::Type*  type, bool  enable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ActivationServices*>::get(),
                        "EnableProxyActivation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type, enable);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Activation::ActivationServices::ActivationServices()   {
}
