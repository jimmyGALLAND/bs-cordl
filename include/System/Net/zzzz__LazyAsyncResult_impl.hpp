#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__LazyAsyncResult_def.hpp"
#include "System/Net/zzzz__LazyAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
//  Writing Method size for method: ::System::Net::__LazyAsyncResult__ThreadContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__LazyAsyncResult__ThreadContext::*)()>(
    &::System::Net::__LazyAsyncResult__ThreadContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a7b58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__LazyAsyncResult__ThreadContext*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& System::Net::__LazyAsyncResult__ThreadContext::__get_m_NestedIOCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NestedIOCount;
}
constexpr int32_t const& System::Net::__LazyAsyncResult__ThreadContext::__get_m_NestedIOCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NestedIOCount;
}
constexpr void System::Net::__LazyAsyncResult__ThreadContext::__set_m_NestedIOCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NestedIOCount = value;
}
inline ::System::Net::__LazyAsyncResult__ThreadContext* System::Net::__LazyAsyncResult__ThreadContext::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::__LazyAsyncResult__ThreadContext*>());
}
inline void System::Net::__LazyAsyncResult__ThreadContext::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__LazyAsyncResult__ThreadContext*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::__LazyAsyncResult__ThreadContext::__LazyAsyncResult__ThreadContext() {}
//  Writing Method size for method: ::System::Net::LazyAsyncResult.get_CurrentThreadContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::__LazyAsyncResult__ThreadContext* (*)()>(&::System::Net::LazyAsyncResult::get_CurrentThreadContext)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x29a7ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(),
                                                                               "get_CurrentThreadContext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::LazyAsyncResult::*)(::System::Object*, ::System::Object*, ::System::AsyncCallback*)>(
    &::System::Net::LazyAsyncResult::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x29a7b60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.get_AsyncObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Net::LazyAsyncResult::*)()>(&::System::Net::LazyAsyncResult::get_AsyncObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a7bf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(), "get_AsyncObject",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.get_AsyncState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Net::LazyAsyncResult::*)()>(&::System::Net::LazyAsyncResult::get_AsyncState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a7bf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(), "get_AsyncState",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.get_AsyncCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::AsyncCallback* (::System::Net::LazyAsyncResult::*)()>(&::System::Net::LazyAsyncResult::get_AsyncCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a7c00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(), "get_AsyncCallback",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.get_AsyncWaitHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::WaitHandle* (::System::Net::LazyAsyncResult::*)()>(
    &::System::Net::LazyAsyncResult::get_AsyncWaitHandle)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x29a7c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(), "get_AsyncWaitHandle",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.LazilyCreateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::LazyAsyncResult::*)(ByRef<::System::Threading::ManualResetEvent*>)>(
    &::System::Net::LazyAsyncResult::LazilyCreateEvent)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x29a7cac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(), "LazilyCreateEvent", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::ManualResetEvent*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.get_CompletedSynchronously
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::LazyAsyncResult::*)()>(&::System::Net::LazyAsyncResult::get_CompletedSynchronously)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x29a7e70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(),
                                                                               "get_CompletedSynchronously", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.get_IsCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::LazyAsyncResult::*)()>(&::System::Net::LazyAsyncResult::get_IsCompleted)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x29a7ea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(), "get_IsCompleted",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.get_InternalPeekCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::LazyAsyncResult::*)()>(&::System::Net::LazyAsyncResult::get_InternalPeekCompleted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x29a7e60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(),
                                                                               "get_InternalPeekCompleted", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.get_EndCalled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::LazyAsyncResult::*)()>(&::System::Net::LazyAsyncResult::get_EndCalled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a7ed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(), "get_EndCalled",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.set_EndCalled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::LazyAsyncResult::*)(bool)>(&::System::Net::LazyAsyncResult::set_EndCalled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29a7ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(), "set_EndCalled", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.ProtectedInvokeCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::LazyAsyncResult::*)(::System::Object*, void*)>(
    &::System::Net::LazyAsyncResult::ProtectedInvokeCallback)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x29a7ee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(), "ProtectedInvokeCallback", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.InvokeCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::LazyAsyncResult::*)(::System::Object*)>(&::System::Net::LazyAsyncResult::InvokeCallback)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x29a80bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(), "InvokeCallback", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.InvokeCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::LazyAsyncResult::*)()>(&::System::Net::LazyAsyncResult::InvokeCallback)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x29a811c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(), "InvokeCallback",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.Complete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::LazyAsyncResult::*)(void*)>(&::System::Net::LazyAsyncResult::Complete)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x29a8170;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.WorkerThreadComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::LazyAsyncResult::*)(::System::Object*)>(&::System::Net::LazyAsyncResult::WorkerThreadComplete)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x29a8308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(), "WorkerThreadComplete", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::LazyAsyncResult::*)()>(&::System::Net::LazyAsyncResult::Cleanup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x29a83b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.InternalWaitForCompletion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Net::LazyAsyncResult::*)()>(
    &::System::Net::LazyAsyncResult::InternalWaitForCompletion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a83b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(),
                                                                               "InternalWaitForCompletion", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.WaitForCompletion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Net::LazyAsyncResult::*)(bool)>(&::System::Net::LazyAsyncResult::WaitForCompletion)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x29a83c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(), "WaitForCompletion", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IAsyncResult"
constexpr System::Net::LazyAsyncResult::operator ::System::IAsyncResult*() noexcept {
  return static_cast<::System::IAsyncResult*>(static_cast<void*>(this));
}
constexpr ::System::Object*& System::Net::LazyAsyncResult::__get_m_AsyncObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AsyncObject;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Net::LazyAsyncResult::__get_m_AsyncObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AsyncObject;
}
constexpr void System::Net::LazyAsyncResult::__set_m_AsyncObject(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AsyncObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Net::LazyAsyncResult::__get_m_AsyncState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AsyncState;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Net::LazyAsyncResult::__get_m_AsyncState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AsyncState;
}
constexpr void System::Net::LazyAsyncResult::__set_m_AsyncState(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AsyncState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::AsyncCallback*& System::Net::LazyAsyncResult::__get_m_AsyncCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AsyncCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::AsyncCallback*> const& System::Net::LazyAsyncResult::__get_m_AsyncCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AsyncCallback;
}
constexpr void System::Net::LazyAsyncResult::__set_m_AsyncCallback(::System::AsyncCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AsyncCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Net::LazyAsyncResult::__get_m_Result() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Result;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Net::LazyAsyncResult::__get_m_Result() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Result;
}
constexpr void System::Net::LazyAsyncResult::__set_m_Result(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Result)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Net::LazyAsyncResult::__get_m_IntCompleted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IntCompleted;
}
constexpr int32_t const& System::Net::LazyAsyncResult::__get_m_IntCompleted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IntCompleted;
}
constexpr void System::Net::LazyAsyncResult::__set_m_IntCompleted(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IntCompleted = value;
}
constexpr bool& System::Net::LazyAsyncResult::__get_m_EndCalled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EndCalled;
}
constexpr bool const& System::Net::LazyAsyncResult::__get_m_EndCalled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EndCalled;
}
constexpr void System::Net::LazyAsyncResult::__set_m_EndCalled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EndCalled = value;
}
constexpr bool& System::Net::LazyAsyncResult::__get_m_UserEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UserEvent;
}
constexpr bool const& System::Net::LazyAsyncResult::__get_m_UserEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UserEvent;
}
constexpr void System::Net::LazyAsyncResult::__set_m_UserEvent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UserEvent = value;
}
constexpr ::System::Object*& System::Net::LazyAsyncResult::__get_m_Event() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Event;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Net::LazyAsyncResult::__get_m_Event() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Event;
}
constexpr void System::Net::LazyAsyncResult::__set_m_Event(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Event)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Net::LazyAsyncResult::setStaticF_t_ThreadContext(::System::Net::__LazyAsyncResult__ThreadContext* value) {
  ::cordl_internals::setStaticField<::System::Net::__LazyAsyncResult__ThreadContext*, "t_ThreadContext", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get>(
      std::forward<::System::Net::__LazyAsyncResult__ThreadContext*>(value));
}
inline ::System::Net::__LazyAsyncResult__ThreadContext* System::Net::LazyAsyncResult::getStaticF_t_ThreadContext() {
  return ::cordl_internals::getStaticField<::System::Net::__LazyAsyncResult__ThreadContext*, "t_ThreadContext",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get>();
}
inline ::System::Net::__LazyAsyncResult__ThreadContext* System::Net::LazyAsyncResult::get_CurrentThreadContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(), "get_CurrentThreadContext",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::__LazyAsyncResult__ThreadContext*, false>(nullptr, ___internal_method);
}
inline ::System::Net::LazyAsyncResult* System::Net::LazyAsyncResult::New_ctor(::System::Object* myObject, ::System::Object* myState, ::System::AsyncCallback* myCallBack) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::LazyAsyncResult*>(myObject, myState, myCallBack));
}
inline void System::Net::LazyAsyncResult::_ctor(::System::Object* myObject, ::System::Object* myState, ::System::AsyncCallback* myCallBack) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, myObject, myState, myCallBack);
}
inline ::System::Object* System::Net::LazyAsyncResult::get_AsyncObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(), "get_AsyncObject",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Object* System::Net::LazyAsyncResult::get_AsyncState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(), "get_AsyncState",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::AsyncCallback* System::Net::LazyAsyncResult::get_AsyncCallback() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(), "get_AsyncCallback",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::AsyncCallback*, false>(this, ___internal_method);
}
inline ::System::Threading::WaitHandle* System::Net::LazyAsyncResult::get_AsyncWaitHandle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(), "get_AsyncWaitHandle",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::WaitHandle*, false>(this, ___internal_method);
}
inline bool System::Net::LazyAsyncResult::LazilyCreateEvent(ByRef<::System::Threading::ManualResetEvent*> waitHandle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(), "LazilyCreateEvent", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::ManualResetEvent*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, waitHandle);
}
inline bool System::Net::LazyAsyncResult::get_CompletedSynchronously() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(),
                                                                             "get_CompletedSynchronously", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Net::LazyAsyncResult::get_IsCompleted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(), "get_IsCompleted",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Net::LazyAsyncResult::get_InternalPeekCompleted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(),
                                                                             "get_InternalPeekCompleted", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Net::LazyAsyncResult::get_EndCalled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(), "get_EndCalled",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::LazyAsyncResult::set_EndCalled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(), "set_EndCalled", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::LazyAsyncResult::ProtectedInvokeCallback(::System::Object* result, void* userToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(), "ProtectedInvokeCallback", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, userToken);
}
inline void System::Net::LazyAsyncResult::InvokeCallback(::System::Object* result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(), "InvokeCallback", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline void System::Net::LazyAsyncResult::InvokeCallback() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(), "InvokeCallback",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::LazyAsyncResult::Complete(void* userToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(), "Complete", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userToken);
}
inline void System::Net::LazyAsyncResult::WorkerThreadComplete(::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(), "WorkerThreadComplete", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline void System::Net::LazyAsyncResult::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(), "Cleanup",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* System::Net::LazyAsyncResult::InternalWaitForCompletion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(),
                                                                             "InternalWaitForCompletion", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Object* System::Net::LazyAsyncResult::WaitForCompletion(bool snap) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult*>::get(), "WaitForCompletion", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, snap);
}
// Ctor Parameters []
constexpr ::System::Net::LazyAsyncResult::LazyAsyncResult() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
