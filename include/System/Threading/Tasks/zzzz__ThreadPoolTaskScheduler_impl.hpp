#pragma once
#include "System/Threading/Tasks/zzzz__TaskScheduler_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__ThreadPoolTaskScheduler_def.hpp"
#include "System/Threading/Tasks/zzzz__ThreadPoolTaskScheduler_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__ParameterizedThreadStart_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::__ThreadPoolTaskScheduler____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::__ThreadPoolTaskScheduler____c::*)()>(
    &::System::Threading::Tasks::__ThreadPoolTaskScheduler____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x262de4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__ThreadPoolTaskScheduler____c*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::__ThreadPoolTaskScheduler____c.__cctor_b__10_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::__ThreadPoolTaskScheduler____c::*)(::System::Object*)>(
    &::System::Threading::Tasks::__ThreadPoolTaskScheduler____c::__cctor_b__10_0)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x262de54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__ThreadPoolTaskScheduler____c*>::get(), "<.cctor>b__10_0",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline void System::Threading::Tasks::__ThreadPoolTaskScheduler____c::setStaticF___9(::System::Threading::Tasks::__ThreadPoolTaskScheduler____c* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::__ThreadPoolTaskScheduler____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__ThreadPoolTaskScheduler____c*>::get>(
      std::forward<::System::Threading::Tasks::__ThreadPoolTaskScheduler____c*>(value));
}
inline ::System::Threading::Tasks::__ThreadPoolTaskScheduler____c* System::Threading::Tasks::__ThreadPoolTaskScheduler____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::__ThreadPoolTaskScheduler____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__ThreadPoolTaskScheduler____c*>::get>();
}
inline ::System::Threading::Tasks::__ThreadPoolTaskScheduler____c* System::Threading::Tasks::__ThreadPoolTaskScheduler____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::__ThreadPoolTaskScheduler____c*>());
}
inline void System::Threading::Tasks::__ThreadPoolTaskScheduler____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__ThreadPoolTaskScheduler____c*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::Tasks::__ThreadPoolTaskScheduler____c::__cctor_b__10_0(::System::Object* s) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__ThreadPoolTaskScheduler____c*>::get(), "<.cctor>b__10_0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::__ThreadPoolTaskScheduler____c::__ThreadPoolTaskScheduler____c() {}
//  Writing Method size for method: ::System::Threading::Tasks::ThreadPoolTaskScheduler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ThreadPoolTaskScheduler::*)()>(
    &::System::Threading::Tasks::ThreadPoolTaskScheduler::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x262da00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ThreadPoolTaskScheduler.QueueTask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ThreadPoolTaskScheduler::*)(::System::Threading::Tasks::Task*)>(
    &::System::Threading::Tasks::ThreadPoolTaskScheduler::QueueTask)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x262da58;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ThreadPoolTaskScheduler.TryExecuteTaskInline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Tasks::ThreadPoolTaskScheduler::*)(::System::Threading::Tasks::Task*, bool)>(
    &::System::Threading::Tasks::ThreadPoolTaskScheduler::TryExecuteTaskInline)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x262dc20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ThreadPoolTaskScheduler.TryDequeue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Tasks::ThreadPoolTaskScheduler::*)(::System::Threading::Tasks::Task*)>(
    &::System::Threading::Tasks::ThreadPoolTaskScheduler::TryDequeue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x262dd04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ThreadPoolTaskScheduler.NotifyWorkItemProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ThreadPoolTaskScheduler::*)()>(
    &::System::Threading::Tasks::ThreadPoolTaskScheduler::NotifyWorkItemProgress)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x262dd0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ThreadPoolTaskScheduler.get_RequiresAtomicStartTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Tasks::ThreadPoolTaskScheduler::*)()>(
    &::System::Threading::Tasks::ThreadPoolTaskScheduler::get_RequiresAtomicStartTransition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x262dd1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get(), 8));
    return ___internal_method;
  }
};
inline void System::Threading::Tasks::ThreadPoolTaskScheduler::setStaticF_s_longRunningThreadWork(::System::Threading::ParameterizedThreadStart* value) {
  ::cordl_internals::setStaticField<::System::Threading::ParameterizedThreadStart*, "s_longRunningThreadWork",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get>(
      std::forward<::System::Threading::ParameterizedThreadStart*>(value));
}
inline ::System::Threading::ParameterizedThreadStart* System::Threading::Tasks::ThreadPoolTaskScheduler::getStaticF_s_longRunningThreadWork() {
  return ::cordl_internals::getStaticField<::System::Threading::ParameterizedThreadStart*, "s_longRunningThreadWork",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get>();
}
inline ::System::Threading::Tasks::ThreadPoolTaskScheduler* System::Threading::Tasks::ThreadPoolTaskScheduler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::ThreadPoolTaskScheduler*>());
}
inline void System::Threading::Tasks::ThreadPoolTaskScheduler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::Tasks::ThreadPoolTaskScheduler::QueueTask(::System::Threading::Tasks::Task* task) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get(), "QueueTask", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
inline bool System::Threading::Tasks::ThreadPoolTaskScheduler::TryExecuteTaskInline(::System::Threading::Tasks::Task* task, bool taskWasPreviouslyQueued) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get(), "TryExecuteTaskInline", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, task, taskWasPreviouslyQueued);
}
inline bool System::Threading::Tasks::ThreadPoolTaskScheduler::TryDequeue(::System::Threading::Tasks::Task* task) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get(), "TryDequeue", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, task);
}
inline void System::Threading::Tasks::ThreadPoolTaskScheduler::NotifyWorkItemProgress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get(),
                                                                             "NotifyWorkItemProgress", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Threading::Tasks::ThreadPoolTaskScheduler::get_RequiresAtomicStartTransition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get(),
                                                                             "get_RequiresAtomicStartTransition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::ThreadPoolTaskScheduler::ThreadPoolTaskScheduler() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
