#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CADMessageBase_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CADArgHolder_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__LogicalCallContext_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodMessage_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMessageBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::CADMessageBase::*)(
    ::System::Runtime::Remoting::Messaging::IMethodMessage*)>(&::System::Runtime::Remoting::Messaging::CADMessageBase::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x24a8568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMethodMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMessageBase.GetMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodBase* (::System::Runtime::Remoting::Messaging::CADMessageBase::*)()>(
    &::System::Runtime::Remoting::Messaging::CADMessageBase::GetMethod)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x24a85fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase*>::get(),
                                                                               "GetMethod", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMessageBase.GetSignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*, ::Array<::System::Type*>*> (*)(::System::Reflection::MethodBase*, bool)>(
    &::System::Runtime::Remoting::Messaging::CADMessageBase::GetSignature)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x24a867c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase*>::get(), "GetSignature", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMessageBase.MarshalProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Collections::IDictionary*, ByRef<::System::Collections::ArrayList*>)>(
    &::System::Runtime::Remoting::Messaging::CADMessageBase::MarshalProperties)> {
  constexpr static std::size_t size = 0x764;
  constexpr static std::size_t addrs = 0x24a882c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase*>::get(), "MarshalProperties", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::ArrayList*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMessageBase.UnmarshalProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::IDictionary*, int32_t, ::System::Collections::ArrayList*)>(
    &::System::Runtime::Remoting::Messaging::CADMessageBase::UnmarshalProperties)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x24a9114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase*>::get(), "UnmarshalProperties", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMessageBase.IsPossibleToIgnoreMarshal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Object*)>(&::System::Runtime::Remoting::Messaging::CADMessageBase::IsPossibleToIgnoreMarshal)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x24a9250;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase*>::get(), "IsPossibleToIgnoreMarshal",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMessageBase.MarshalArgument
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::CADMessageBase::*)(::System::Object*, ByRef<::System::Collections::ArrayList*>)>(
        &::System::Runtime::Remoting::Messaging::CADMessageBase::MarshalArgument)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x24a9400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase*>::get(), "MarshalArgument", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::ArrayList*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMessageBase.UnmarshalArgument
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Runtime::Remoting::Messaging::CADMessageBase::*)(::System::Object*, ::System::Collections::ArrayList*)>(&::System::Runtime::Remoting::Messaging::CADMessageBase::UnmarshalArgument)> {
  constexpr static std::size_t size = 0x72c;
  constexpr static std::size_t addrs = 0x24a95c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase*>::get(), "UnmarshalArgument", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMessageBase.MarshalArguments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (::System::Runtime::Remoting::Messaging::CADMessageBase::*)(
    ::ArrayW<::System::Object*, ::Array<::System::Object*>*>, ByRef<::System::Collections::ArrayList*>)>(&::System::Runtime::Remoting::Messaging::CADMessageBase::MarshalArguments)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x24a9cf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase*>::get(), "MarshalArguments", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::ArrayList*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMessageBase.UnmarshalArguments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (::System::Runtime::Remoting::Messaging::CADMessageBase::*)(
    ::ArrayW<::System::Object*, ::Array<::System::Object*>*>, ::System::Collections::ArrayList*)>(&::System::Runtime::Remoting::Messaging::CADMessageBase::UnmarshalArguments)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x24a9df0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase*>::get(), "UnmarshalArguments", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMessageBase.SaveLogicalCallContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::CADMessageBase::*)(
    ::System::Runtime::Remoting::Messaging::IMethodMessage*, ByRef<::System::Collections::ArrayList*>)>(&::System::Runtime::Remoting::Messaging::CADMessageBase::SaveLogicalCallContext)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x24a9ef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase*>::get(), "SaveLogicalCallContext", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMethodMessage*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::ArrayList*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMessageBase.GetLogicalCallContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::LogicalCallContext* (
    ::System::Runtime::Remoting::Messaging::CADMessageBase::*)(::System::Collections::ArrayList*)>(&::System::Runtime::Remoting::Messaging::CADMessageBase::GetLogicalCallContext)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x24aa12c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase*>::get(), "GetLogicalCallContext",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& System::Runtime::Remoting::Messaging::CADMessageBase::__get__args() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____args;
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& System::Runtime::Remoting::Messaging::CADMessageBase::__get__args() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____args;
}
constexpr void System::Runtime::Remoting::Messaging::CADMessageBase::__set__args(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____args)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Runtime::Remoting::Messaging::CADMessageBase::__get__serializedArgs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____serializedArgs;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Runtime::Remoting::Messaging::CADMessageBase::__get__serializedArgs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____serializedArgs;
}
constexpr void System::Runtime::Remoting::Messaging::CADMessageBase::__set__serializedArgs(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____serializedArgs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Runtime::Remoting::Messaging::CADMessageBase::__get__propertyCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____propertyCount;
}
constexpr int32_t const& System::Runtime::Remoting::Messaging::CADMessageBase::__get__propertyCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____propertyCount;
}
constexpr void System::Runtime::Remoting::Messaging::CADMessageBase::__set__propertyCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____propertyCount = value;
}
constexpr ::System::Runtime::Remoting::Messaging::CADArgHolder*& System::Runtime::Remoting::Messaging::CADMessageBase::__get__callContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____callContext;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::CADArgHolder*> const& System::Runtime::Remoting::Messaging::CADMessageBase::__get__callContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____callContext;
}
constexpr void System::Runtime::Remoting::Messaging::CADMessageBase::__set__callContext(::System::Runtime::Remoting::Messaging::CADArgHolder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____callContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Runtime::Remoting::Messaging::CADMessageBase::__get_serializedMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___serializedMethod;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Runtime::Remoting::Messaging::CADMessageBase::__get_serializedMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___serializedMethod;
}
constexpr void System::Runtime::Remoting::Messaging::CADMessageBase::__set_serializedMethod(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serializedMethod)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::Remoting::Messaging::CADMessageBase* System::Runtime::Remoting::Messaging::CADMessageBase::New_ctor(::System::Runtime::Remoting::Messaging::IMethodMessage* msg) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::Messaging::CADMessageBase*>(msg));
}
inline void System::Runtime::Remoting::Messaging::CADMessageBase::_ctor(::System::Runtime::Remoting::Messaging::IMethodMessage* msg) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMethodMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
inline ::System::Reflection::MethodBase* System::Runtime::Remoting::Messaging::CADMessageBase::GetMethod() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase*>::get(),
                                                                             "GetMethod", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> System::Runtime::Remoting::Messaging::CADMessageBase::GetSignature(::System::Reflection::MethodBase* methodBase, bool load) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase*>::get(), "GetSignature", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, false>(nullptr, ___internal_method, methodBase, load);
}
inline int32_t System::Runtime::Remoting::Messaging::CADMessageBase::MarshalProperties(::System::Collections::IDictionary* dict, ByRef<::System::Collections::ArrayList*> args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase*>::get(), "MarshalProperties", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::ArrayList*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, dict, args);
}
inline void System::Runtime::Remoting::Messaging::CADMessageBase::UnmarshalProperties(::System::Collections::IDictionary* dict, int32_t count, ::System::Collections::ArrayList* args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase*>::get(), "UnmarshalProperties", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dict, count, args);
}
inline bool System::Runtime::Remoting::Messaging::CADMessageBase::IsPossibleToIgnoreMarshal(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase*>::get(), "IsPossibleToIgnoreMarshal",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, obj);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::CADMessageBase::MarshalArgument(::System::Object* arg, ByRef<::System::Collections::ArrayList*> args) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase*>::get(), "MarshalArgument", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::ArrayList*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, arg, args);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::CADMessageBase::UnmarshalArgument(::System::Object* arg, ::System::Collections::ArrayList* args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase*>::get(), "UnmarshalArgument", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, arg, args);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*>
System::Runtime::Remoting::Messaging::CADMessageBase::MarshalArguments(::ArrayW<::System::Object*, ::Array<::System::Object*>*> arguments, ByRef<::System::Collections::ArrayList*> args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase*>::get(), "MarshalArguments", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::ArrayList*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method, arguments, args);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*>
System::Runtime::Remoting::Messaging::CADMessageBase::UnmarshalArguments(::ArrayW<::System::Object*, ::Array<::System::Object*>*> arguments, ::System::Collections::ArrayList* args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase*>::get(), "UnmarshalArguments", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method, arguments, args);
}
inline void System::Runtime::Remoting::Messaging::CADMessageBase::SaveLogicalCallContext(::System::Runtime::Remoting::Messaging::IMethodMessage* msg,
                                                                                         ByRef<::System::Collections::ArrayList*> serializeList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase*>::get(), "SaveLogicalCallContext", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMethodMessage*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::ArrayList*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg, serializeList);
}
inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* System::Runtime::Remoting::Messaging::CADMessageBase::GetLogicalCallContext(::System::Collections::ArrayList* args) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase*>::get(), "GetLogicalCallContext",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::LogicalCallContext*, false>(this, ___internal_method, args);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::CADMessageBase::CADMessageBase() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
