#pragma once
#include "System/zzzz__IOOperation_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__IOSelectorJob_def.hpp"
#include "System/Threading/zzzz__IThreadPoolWorkItem_def.hpp"
#include "System/zzzz__IOAsyncResult_def.hpp"
#include "System/zzzz__IOAsyncCallback_def.hpp"
#include "System/zzzz__IOOperation_def.hpp"
#include "System/Threading/zzzz__ThreadAbortException_def.hpp"
//  Writing Method size for method: ::System::IOSelectorJob._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IOSelectorJob::*)(::System::IOOperation, ::System::IOAsyncCallback*, ::System::IOAsyncResult*)>(
    &::System::IOSelectorJob::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x294d874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOSelectorJob*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOOperation>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncCallback*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IOSelectorJob.System_Threading_IThreadPoolWorkItem_ExecuteWorkItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IOSelectorJob::*)()>(
    &::System::IOSelectorJob::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x294d8b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOSelectorJob*>::get(), "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IOSelectorJob.System_Threading_IThreadPoolWorkItem_MarkAborted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IOSelectorJob::*)(::System::Threading::ThreadAbortException*)>(
    &::System::IOSelectorJob::System_Threading_IThreadPoolWorkItem_MarkAborted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x294d8d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOSelectorJob*>::get(), "System.Threading.IThreadPoolWorkItem.MarkAborted", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadAbortException*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IOSelectorJob.MarkDisposed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IOSelectorJob::*)()>(&::System::IOSelectorJob::MarkDisposed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x294d8dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOSelectorJob*>::get(), "MarkDisposed",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Threading::IThreadPoolWorkItem"
constexpr System::IOSelectorJob::operator ::System::Threading::IThreadPoolWorkItem*() noexcept {
  return static_cast<::System::Threading::IThreadPoolWorkItem*>(static_cast<void*>(this));
}
constexpr ::System::IOOperation& System::IOSelectorJob::__get_operation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___operation;
}
constexpr ::System::IOOperation const& System::IOSelectorJob::__get_operation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___operation;
}
constexpr void System::IOSelectorJob::__set_operation(::System::IOOperation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___operation = value;
}
constexpr ::System::IOAsyncCallback*& System::IOSelectorJob::__get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___callback;
}
constexpr ::cordl_internals::to_const_pointer<::System::IOAsyncCallback*> const& System::IOSelectorJob::__get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___callback;
}
constexpr void System::IOSelectorJob::__set_callback(::System::IOAsyncCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IOAsyncResult*& System::IOSelectorJob::__get_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___state;
}
constexpr ::cordl_internals::to_const_pointer<::System::IOAsyncResult*> const& System::IOSelectorJob::__get_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___state;
}
constexpr void System::IOSelectorJob::__set_state(::System::IOAsyncResult* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___state)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::IOSelectorJob* System::IOSelectorJob::New_ctor(::System::IOOperation operation, ::System::IOAsyncCallback* callback, ::System::IOAsyncResult* state) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::IOSelectorJob*>(operation, callback, state));
}
inline void System::IOSelectorJob::_ctor(::System::IOOperation operation, ::System::IOAsyncCallback* callback, ::System::IOAsyncResult* state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOSelectorJob*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOOperation>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncCallback*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, operation, callback, state);
}
inline void System::IOSelectorJob::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOSelectorJob*>::get(),
                                                                             "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IOSelectorJob::System_Threading_IThreadPoolWorkItem_MarkAborted(::System::Threading::ThreadAbortException* tae) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOSelectorJob*>::get(), "System.Threading.IThreadPoolWorkItem.MarkAborted", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadAbortException*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tae);
}
inline void System::IOSelectorJob::MarkDisposed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOSelectorJob*>::get(), "MarkDisposed",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::IOSelectorJob::IOSelectorJob() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
