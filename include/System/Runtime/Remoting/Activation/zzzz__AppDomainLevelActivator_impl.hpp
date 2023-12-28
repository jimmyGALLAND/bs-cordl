#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__AppDomainLevelActivator_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionReturnMessage_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IActivator_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionCallMessage_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::AppDomainLevelActivator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Activation::AppDomainLevelActivator::*)(
    ::StringW, ::System::Runtime::Remoting::Activation::IActivator*)>(&::System::Runtime::Remoting::Activation::AppDomainLevelActivator::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x24a44fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::AppDomainLevelActivator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Activation::IActivator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::AppDomainLevelActivator.get_NextActivator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Activation::IActivator* (
    ::System::Runtime::Remoting::Activation::AppDomainLevelActivator::*)()>(&::System::Runtime::Remoting::Activation::AppDomainLevelActivator::get_NextActivator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a4a9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::AppDomainLevelActivator*>::get(), "get_NextActivator",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::AppDomainLevelActivator.Activate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Activation::IConstructionReturnMessage* (
    ::System::Runtime::Remoting::Activation::AppDomainLevelActivator::*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(
    &::System::Runtime::Remoting::Activation::AppDomainLevelActivator::Activate)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x24a4aa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::AppDomainLevelActivator*>::get(), "Activate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Remoting::Activation::IActivator"
constexpr System::Runtime::Remoting::Activation::AppDomainLevelActivator::operator ::System::Runtime::Remoting::Activation::IActivator*() noexcept {
  return static_cast<::System::Runtime::Remoting::Activation::IActivator*>(static_cast<void*>(this));
}
constexpr ::StringW& System::Runtime::Remoting::Activation::AppDomainLevelActivator::__get__activationUrl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activationUrl;
}
constexpr ::StringW const& System::Runtime::Remoting::Activation::AppDomainLevelActivator::__get__activationUrl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activationUrl;
}
constexpr void System::Runtime::Remoting::Activation::AppDomainLevelActivator::__set__activationUrl(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____activationUrl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Remoting::Activation::IActivator*& System::Runtime::Remoting::Activation::AppDomainLevelActivator::__get__next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____next;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Activation::IActivator*> const& System::Runtime::Remoting::Activation::AppDomainLevelActivator::__get__next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____next;
}
constexpr void System::Runtime::Remoting::Activation::AppDomainLevelActivator::__set__next(::System::Runtime::Remoting::Activation::IActivator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::Remoting::Activation::AppDomainLevelActivator*
System::Runtime::Remoting::Activation::AppDomainLevelActivator::New_ctor(::StringW activationUrl, ::System::Runtime::Remoting::Activation::IActivator* next) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::Activation::AppDomainLevelActivator*>(activationUrl, next));
}
inline void System::Runtime::Remoting::Activation::AppDomainLevelActivator::_ctor(::StringW activationUrl, ::System::Runtime::Remoting::Activation::IActivator* next) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::AppDomainLevelActivator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Activation::IActivator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, activationUrl, next);
}
inline ::System::Runtime::Remoting::Activation::IActivator* System::Runtime::Remoting::Activation::AppDomainLevelActivator::get_NextActivator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::AppDomainLevelActivator*>::get(), "get_NextActivator",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Activation::IActivator*, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Activation::IConstructionReturnMessage*
System::Runtime::Remoting::Activation::AppDomainLevelActivator::Activate(::System::Runtime::Remoting::Activation::IConstructionCallMessage* ctorCall) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::AppDomainLevelActivator*>::get(), "Activate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Activation::IConstructionReturnMessage*, false>(this, ___internal_method, ctorCall);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Activation::AppDomainLevelActivator::AppDomainLevelActivator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
