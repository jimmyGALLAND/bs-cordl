#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__SignalCallbackWrapper_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__SignalBindingBindInfo_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Zenject/zzzz__SignalBus_def.hpp"
//  Writing Method size for method: ::Zenject::SignalCallbackWrapper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SignalCallbackWrapper::*)(::Zenject::SignalBindingBindInfo*, ::System::Action_1<::System::Object*>*,
                                                                                                                             ::Zenject::SignalBus*)>(&::Zenject::SignalCallbackWrapper::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2ec1c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalCallbackWrapper*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SignalBindingBindInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SignalBus*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalCallbackWrapper.OnSignalFired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SignalCallbackWrapper::*)(::System::Object*)>(&::Zenject::SignalCallbackWrapper::OnSignalFired)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2ec1cf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalCallbackWrapper*>::get(), "OnSignalFired", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalCallbackWrapper.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SignalCallbackWrapper::*)()>(&::Zenject::SignalCallbackWrapper::Dispose)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2ec1d14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalCallbackWrapper*>::get(), "Dispose",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalCallbackWrapper.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::SignalCallbackWrapper::__zenCreate)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2ec1db4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalCallbackWrapper*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalCallbackWrapper.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SignalCallbackWrapper::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x2ec1f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalCallbackWrapper*>::get(),
                                                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr Zenject::SignalCallbackWrapper::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::Zenject::SignalBus*& Zenject::SignalCallbackWrapper::__get__signalBus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____signalBus;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::SignalBus*> const& Zenject::SignalCallbackWrapper::__get__signalBus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____signalBus;
}
constexpr void Zenject::SignalCallbackWrapper::__set__signalBus(::Zenject::SignalBus* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____signalBus)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::System::Object*>*& Zenject::SignalCallbackWrapper::__get__action() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____action;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Object*>*> const& Zenject::SignalCallbackWrapper::__get__action() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____action;
}
constexpr void Zenject::SignalCallbackWrapper::__set__action(::System::Action_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____action)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& Zenject::SignalCallbackWrapper::__get__signalType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____signalType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Zenject::SignalCallbackWrapper::__get__signalType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____signalType;
}
constexpr void Zenject::SignalCallbackWrapper::__set__signalType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____signalType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& Zenject::SignalCallbackWrapper::__get__identifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____identifier;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Zenject::SignalCallbackWrapper::__get__identifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____identifier;
}
constexpr void Zenject::SignalCallbackWrapper::__set__identifier(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____identifier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::SignalCallbackWrapper* Zenject::SignalCallbackWrapper::New_ctor(::Zenject::SignalBindingBindInfo* bindInfo, ::System::Action_1<::System::Object*>* action,
                                                                                  ::Zenject::SignalBus* signalBus) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::SignalCallbackWrapper*>(bindInfo, action, signalBus));
}
inline void Zenject::SignalCallbackWrapper::_ctor(::Zenject::SignalBindingBindInfo* bindInfo, ::System::Action_1<::System::Object*>* action, ::Zenject::SignalBus* signalBus) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalCallbackWrapper*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SignalBindingBindInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SignalBus*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindInfo, action, signalBus);
}
inline void Zenject::SignalCallbackWrapper::OnSignalFired(::System::Object* signal) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalCallbackWrapper*>::get(), "OnSignalFired", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void Zenject::SignalCallbackWrapper::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalCallbackWrapper*>::get(), "Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* Zenject::SignalCallbackWrapper::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalCallbackWrapper*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SignalCallbackWrapper::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalCallbackWrapper*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::SignalCallbackWrapper::SignalCallbackWrapper() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
