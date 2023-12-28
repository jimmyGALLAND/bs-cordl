#pragma once
#include "System/zzzz__MarshalByRefObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__Timer_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Threading/zzzz__Timer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IAsyncDisposable_def.hpp"
#include "System/Threading/zzzz__TimerCallback_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
//  Writing Method size for method: ::System::Threading::__Timer__TimerComparer.System_Collections_IComparer_Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::__Timer__TimerComparer::*)(::System::Object*, ::System::Object*)>(
    &::System::Threading::__Timer__TimerComparer::System_Collections_IComparer_Compare)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x262002c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__TimerComparer>::get(),
                                                                               "System.Collections.IComparer.Compare", std::vector<Il2CppClass*>{},
                                                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__Timer__TimerComparer.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::__Timer__TimerComparer::*)(::System::Threading::Timer*, ::System::Threading::Timer*)>(
    &::System::Threading::__Timer__TimerComparer::Compare)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x26200c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__TimerComparer>::get(), "Compare", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IComparer"
constexpr System::Threading::__Timer__TimerComparer::operator ::System::Collections::IComparer*() {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::System::Threading::Timer*>"
constexpr System::Threading::__Timer__TimerComparer::operator ::System::Collections::Generic::IComparer_1<::System::Threading::Timer*>*() {
  return static_cast<::System::Collections::Generic::IComparer_1<::System::Threading::Timer*>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline int32_t System::Threading::__Timer__TimerComparer::System_Collections_IComparer_Compare(::System::Object* x, ::System::Object* y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__TimerComparer>::get(),
                                                                             "System.Collections.IComparer.Compare", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                               ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x, y);
}
inline int32_t System::Threading::__Timer__TimerComparer::Compare(::System::Threading::Timer* tx, ::System::Threading::Timer* ty) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__TimerComparer>::get(), "Compare", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, tx, ty);
}
// Ctor Parameters []
constexpr ::System::Threading::__Timer__TimerComparer::__Timer__TimerComparer() {}
//  Writing Method size for method: ::System::Threading::__Timer__Scheduler.InitScheduler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__Timer__Scheduler::*)()>(&::System::Threading::__Timer__Scheduler::InitScheduler)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2620134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(), "InitScheduler",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__Timer__Scheduler.WakeupScheduler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__Timer__Scheduler::*)()>(&::System::Threading::__Timer__Scheduler::WakeupScheduler)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2620228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(),
                                                                               "WakeupScheduler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__Timer__Scheduler.SchedulerThread
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__Timer__Scheduler::*)()>(&::System::Threading::__Timer__Scheduler::SchedulerThread)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2620244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(),
                                                                               "SchedulerThread", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__Timer__Scheduler.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::__Timer__Scheduler* (*)()>(&::System::Threading::__Timer__Scheduler::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2620690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(), "get_Instance",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__Timer__Scheduler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__Timer__Scheduler::*)()>(&::System::Threading::__Timer__Scheduler::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26206e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__Timer__Scheduler.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__Timer__Scheduler::*)(::System::Threading::Timer*)>(
    &::System::Threading::__Timer__Scheduler::Remove)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x261fd34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(), "Remove", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__Timer__Scheduler.Change
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__Timer__Scheduler::*)(::System::Threading::Timer*, int64_t)>(
    &::System::Threading::__Timer__Scheduler::Change)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x261fe04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(), "Change", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__Timer__Scheduler.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__Timer__Scheduler::*)(::System::Threading::Timer*)>(
    &::System::Threading::__Timer__Scheduler::Add)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x26207b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(), "Add", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__Timer__Scheduler.InternalRemove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__Timer__Scheduler::*)(::System::Threading::Timer*)>(
    &::System::Threading::__Timer__Scheduler::InternalRemove)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2620784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(), "InternalRemove", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__Timer__Scheduler.TimerCB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*)>(&::System::Threading::__Timer__Scheduler::TimerCB)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x26208a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(), "TimerCB", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__Timer__Scheduler.FireTimer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__Timer__Scheduler::*)(::System::Threading::Timer*)>(
    &::System::Threading::__Timer__Scheduler::FireTimer)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x262091c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(), "FireTimer", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__Timer__Scheduler.RunSchedulerLoop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::__Timer__Scheduler::*)()>(&::System::Threading::__Timer__Scheduler::RunSchedulerLoop)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x262037c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(),
                                                                               "RunSchedulerLoop", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& System::Threading::__Timer__Scheduler::__get_needReSort() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___needReSort;
}
constexpr bool const& System::Threading::__Timer__Scheduler::__get_needReSort() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___needReSort;
}
constexpr void System::Threading::__Timer__Scheduler::__set_needReSort(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___needReSort = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Threading::Timer*>*& System::Threading::__Timer__Scheduler::__get_list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___list;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Threading::Timer*>*> const& System::Threading::__Timer__Scheduler::__get_list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___list;
}
constexpr void System::Threading::__Timer__Scheduler::__set_list(::System::Collections::Generic::List_1<::System::Threading::Timer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___list)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& System::Threading::__Timer__Scheduler::__get_current_next_run() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___current_next_run;
}
constexpr int64_t const& System::Threading::__Timer__Scheduler::__get_current_next_run() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___current_next_run;
}
constexpr void System::Threading::__Timer__Scheduler::__set_current_next_run(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___current_next_run = value;
}
constexpr ::System::Threading::ManualResetEvent*& System::Threading::__Timer__Scheduler::__get_changed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___changed;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ManualResetEvent*> const& System::Threading::__Timer__Scheduler::__get_changed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___changed;
}
constexpr void System::Threading::__Timer__Scheduler::__set_changed(::System::Threading::ManualResetEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___changed)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Threading::__Timer__Scheduler::setStaticF_instance(::System::Threading::__Timer__Scheduler* value) {
  ::cordl_internals::setStaticField<::System::Threading::__Timer__Scheduler*, "instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get>(
      std::forward<::System::Threading::__Timer__Scheduler*>(value));
}
inline ::System::Threading::__Timer__Scheduler* System::Threading::__Timer__Scheduler::getStaticF_instance() {
  return ::cordl_internals::getStaticField<::System::Threading::__Timer__Scheduler*, "instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get>();
}
inline void System::Threading::__Timer__Scheduler::InitScheduler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(), "InitScheduler",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::__Timer__Scheduler::WakeupScheduler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(), "WakeupScheduler",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::__Timer__Scheduler::SchedulerThread() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(), "SchedulerThread",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::__Timer__Scheduler* System::Threading::__Timer__Scheduler::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(), "get_Instance",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::__Timer__Scheduler*, false>(nullptr, ___internal_method);
}
inline ::System::Threading::__Timer__Scheduler* System::Threading::__Timer__Scheduler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::__Timer__Scheduler*>());
}
inline void System::Threading::__Timer__Scheduler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::__Timer__Scheduler::Remove(::System::Threading::Timer* timer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(), "Remove", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timer);
}
inline void System::Threading::__Timer__Scheduler::Change(::System::Threading::Timer* timer, int64_t new_next_run) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(), "Change", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timer, new_next_run);
}
inline void System::Threading::__Timer__Scheduler::Add(::System::Threading::Timer* timer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(), "Add", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timer);
}
inline void System::Threading::__Timer__Scheduler::InternalRemove(::System::Threading::Timer* timer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(), "InternalRemove", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timer);
}
inline void System::Threading::__Timer__Scheduler::TimerCB(::System::Object* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(), "TimerCB", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, o);
}
inline void System::Threading::__Timer__Scheduler::FireTimer(::System::Threading::Timer* timer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(), "FireTimer", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timer);
}
inline int32_t System::Threading::__Timer__Scheduler::RunSchedulerLoop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(),
                                                                             "RunSchedulerLoop", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Threading::__Timer__Scheduler::__Timer__Scheduler() {}
//  Writing Method size for method: ::System::Threading::Timer.get_scheduler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::__Timer__Scheduler* (*)()>(&::System::Threading::Timer::get_scheduler)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x261f8ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), "get_scheduler",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Timer::*)(::System::Threading::TimerCallback*, ::System::Object*, int32_t, int32_t)>(
    &::System::Threading::Timer::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x261f934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::TimerCallback*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Threading::Timer::*)(::System::Threading::TimerCallback*, ::System::Object*, ::System::TimeSpan, ::System::TimeSpan)>(&::System::Threading::Timer::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x261f9f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::TimerCallback*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Timer::*)(::System::Threading::TimerCallback*, ::System::Object*, int64_t, int64_t)>(
    &::System::Threading::Timer::Init)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x261f980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), "Init", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::TimerCallback*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer.Change
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Timer::*)(int32_t, int32_t)>(&::System::Threading::Timer::Change)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x261fc64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), "Change", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer.Change
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Timer::*)(::System::TimeSpan, ::System::TimeSpan)>(&::System::Threading::Timer::Change)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x261fc84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), "Change", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Timer::*)()>(&::System::Threading::Timer::Dispose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x261fcfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), "Dispose",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer.Change
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Timer::*)(int64_t, int64_t, bool)>(&::System::Threading::Timer::Change)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x261fa84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), "Change", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer.DisposeAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ValueTask (::System::Threading::Timer::*)()>(&::System::Threading::Timer::DisposeAsync)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x261ff94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), "DisposeAsync",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer.KeepRootedWhileScheduled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Timer::*)()>(&::System::Threading::Timer::KeepRootedWhileScheduled)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2620028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), "KeepRootedWhileScheduled",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer.GetTimeMonotonic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)()>(&::System::Threading::Timer::GetTimeMonotonic)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x261fe00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), "GetTimeMonotonic",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Threading::Timer::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IAsyncDisposable"
constexpr System::Threading::Timer::operator ::System::IAsyncDisposable*() noexcept {
  return static_cast<::System::IAsyncDisposable*>(static_cast<void*>(this));
}
constexpr ::System::Threading::TimerCallback*& System::Threading::Timer::__get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::TimerCallback*> const& System::Threading::Timer::__get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr void System::Threading::Timer::__set_callback(::System::Threading::TimerCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Threading::Timer::__get_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Threading::Timer::__get_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr void System::Threading::Timer::__set_state(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___state)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& System::Threading::Timer::__get_due_time_ms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___due_time_ms;
}
constexpr int64_t const& System::Threading::Timer::__get_due_time_ms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___due_time_ms;
}
constexpr void System::Threading::Timer::__set_due_time_ms(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___due_time_ms = value;
}
constexpr int64_t& System::Threading::Timer::__get_period_ms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___period_ms;
}
constexpr int64_t const& System::Threading::Timer::__get_period_ms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___period_ms;
}
constexpr void System::Threading::Timer::__set_period_ms(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___period_ms = value;
}
constexpr int64_t& System::Threading::Timer::__get_next_run() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next_run;
}
constexpr int64_t const& System::Threading::Timer::__get_next_run() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next_run;
}
constexpr void System::Threading::Timer::__set_next_run(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___next_run = value;
}
constexpr bool& System::Threading::Timer::__get_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr bool const& System::Threading::Timer::__get_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr void System::Threading::Timer::__set_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disposed = value;
}
constexpr bool& System::Threading::Timer::__get_is_dead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_dead;
}
constexpr bool const& System::Threading::Timer::__get_is_dead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_dead;
}
constexpr void System::Threading::Timer::__set_is_dead(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___is_dead = value;
}
constexpr bool& System::Threading::Timer::__get_is_added() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_added;
}
constexpr bool const& System::Threading::Timer::__get_is_added() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_added;
}
constexpr void System::Threading::Timer::__set_is_added(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___is_added = value;
}
inline ::System::Threading::__Timer__Scheduler* System::Threading::Timer::get_scheduler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), "get_scheduler",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::__Timer__Scheduler*, false>(nullptr, ___internal_method);
}
inline ::System::Threading::Timer* System::Threading::Timer::New_ctor(::System::Threading::TimerCallback* callback, ::System::Object* state, int32_t dueTime, int32_t period) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Timer*>(callback, state, dueTime, period));
}
inline void System::Threading::Timer::_ctor(::System::Threading::TimerCallback* callback, ::System::Object* state, int32_t dueTime, int32_t period) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::TimerCallback*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, state, dueTime, period);
}
inline ::System::Threading::Timer* System::Threading::Timer::New_ctor(::System::Threading::TimerCallback* callback, ::System::Object* state, ::System::TimeSpan dueTime, ::System::TimeSpan period) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Timer*>(callback, state, dueTime, period));
}
inline void System::Threading::Timer::_ctor(::System::Threading::TimerCallback* callback, ::System::Object* state, ::System::TimeSpan dueTime, ::System::TimeSpan period) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::TimerCallback*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, state, dueTime, period);
}
inline void System::Threading::Timer::Init(::System::Threading::TimerCallback* callback, ::System::Object* state, int64_t dueTime, int64_t period) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), "Init", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::TimerCallback*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, state, dueTime, period);
}
inline bool System::Threading::Timer::Change(int32_t dueTime, int32_t period) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), "Change", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, dueTime, period);
}
inline bool System::Threading::Timer::Change(::System::TimeSpan dueTime, ::System::TimeSpan period) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), "Change", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, dueTime, period);
}
inline void System::Threading::Timer::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), "Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Threading::Timer::Change(int64_t dueTime, int64_t period, bool first) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), "Change", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, dueTime, period, first);
}
inline ::System::Threading::Tasks::ValueTask System::Threading::Timer::DisposeAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), "DisposeAsync",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask, false>(this, ___internal_method);
}
inline void System::Threading::Timer::KeepRootedWhileScheduled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), "KeepRootedWhileScheduled",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int64_t System::Threading::Timer::GetTimeMonotonic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), "GetTimeMonotonic",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Threading::Timer::Timer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
