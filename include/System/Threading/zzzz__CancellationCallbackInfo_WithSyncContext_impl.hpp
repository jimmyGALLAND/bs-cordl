#pragma once
#include "System/Threading/zzzz__CancellationCallbackInfo_impl.hpp"
#include "System/Threading/zzzz__CancellationCallbackInfo_WithSyncContext_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::System::Threading::__CancellationCallbackInfo__WithSyncContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__CancellationCallbackInfo__WithSyncContext::*)(
    ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Threading::ExecutionContext*, ::System::Threading::CancellationTokenSource*, ::System::Threading::SynchronizationContext*)>(
    &::System::Threading::__CancellationCallbackInfo__WithSyncContext::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x261304c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__CancellationCallbackInfo__WithSyncContext*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationTokenSource*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SynchronizationContext*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::SynchronizationContext*& System::Threading::__CancellationCallbackInfo__WithSyncContext::__get_TargetSyncContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TargetSyncContext;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::SynchronizationContext*> const& System::Threading::__CancellationCallbackInfo__WithSyncContext::__get_TargetSyncContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TargetSyncContext;
}
constexpr void System::Threading::__CancellationCallbackInfo__WithSyncContext::__set_TargetSyncContext(::System::Threading::SynchronizationContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TargetSyncContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Threading::__CancellationCallbackInfo__WithSyncContext* System::Threading::__CancellationCallbackInfo__WithSyncContext::New_ctor(
    ::System::Action_1<::System::Object*>* callback, ::System::Object* stateForCallback, ::System::Threading::ExecutionContext* targetExecutionContext,
    ::System::Threading::CancellationTokenSource* cancellationTokenSource, ::System::Threading::SynchronizationContext* targetSyncContext) {
  return THROW_UNLESS(
      ::il2cpp_utils::New<::System::Threading::__CancellationCallbackInfo__WithSyncContext*>(callback, stateForCallback, targetExecutionContext, cancellationTokenSource, targetSyncContext));
}
inline void System::Threading::__CancellationCallbackInfo__WithSyncContext::_ctor(::System::Action_1<::System::Object*>* callback, ::System::Object* stateForCallback,
                                                                                  ::System::Threading::ExecutionContext* targetExecutionContext,
                                                                                  ::System::Threading::CancellationTokenSource* cancellationTokenSource,
                                                                                  ::System::Threading::SynchronizationContext* targetSyncContext) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__CancellationCallbackInfo__WithSyncContext*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationTokenSource*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SynchronizationContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, stateForCallback, targetExecutionContext, cancellationTokenSource, targetSyncContext);
}
// Ctor Parameters []
constexpr ::System::Threading::__CancellationCallbackInfo__WithSyncContext::__CancellationCallbackInfo__WithSyncContext() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
