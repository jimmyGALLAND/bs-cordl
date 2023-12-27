#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Timer)
namespace System::Threading {
class __Timer__Scheduler;
}
namespace System {
class Object;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System {
class IAsyncDisposable;
}
namespace System::Threading {
struct __Timer__TimerComparer;
}
namespace System {
class IDisposable;
}
namespace System::Threading {
class TimerCallback;
}
namespace System {
struct TimeSpan;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System::Collections {
class IComparer;
}
// Forward declare root types
namespace System::Threading {
class Timer;
}
namespace System::Threading {
class __Timer__Scheduler;
}
namespace System::Threading {
struct __Timer__TimerComparer;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Timer);
MARK_REF_PTR_T(::System::Threading::__Timer__Scheduler);
MARK_VAL_T(::System::Threading::__Timer__TimerComparer);
// Type: ::TimerComparer
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace System::Threading {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2748))
// CS Name: ::Timer::TimerComparer
#pragma pack(push, 0)
struct CORDL_TYPE __Timer__TimerComparer {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::IComparer"
  constexpr operator ::System::Collections::IComparer*();

  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::System::Threading::Timer*>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::System::Threading::Timer*>*();

  /// @brief Method System.Collections.IComparer.Compare addr 0x262002c size 0x98 virtual true final true
  inline int32_t System_Collections_IComparer_Compare(::System::Object* x, ::System::Object* y);

  /// @brief Method Compare addr 0x26200c4 size 0x70 virtual true final true
  inline int32_t Compare(::System::Threading::Timer* tx, ::System::Threading::Timer* ty);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Timer__TimerComparer();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::__Timer__TimerComparer, 0x1>, "Size mismatch!");

} // namespace System::Threading
// Type: ::Scheduler
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2749))
// CS Name: ::Timer::Scheduler*
class CORDL_TYPE __Timer__Scheduler : public ::System::Object {
public:
  // Declarations
  /// @brief Field needReSort, offset 0x10, size 0x1
  __declspec(property(get = __get_needReSort, put = __set_needReSort)) bool needReSort;

  /// @brief Field list, offset 0x18, size 0x8
  __declspec(property(get = __get_list, put = __set_list))::System::Collections::Generic::List_1<::System::Threading::Timer*>* list;

  /// @brief Field current_next_run, offset 0x20, size 0x8
  __declspec(property(get = __get_current_next_run, put = __set_current_next_run)) int64_t current_next_run;

  /// @brief Field changed, offset 0x28, size 0x8
  __declspec(property(get = __get_changed, put = __set_changed))::System::Threading::ManualResetEvent* changed;

  /// @brief Field instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_instance, put = setStaticF_instance))::System::Threading::__Timer__Scheduler* instance;

  constexpr bool& __get_needReSort();

  constexpr bool const& __get_needReSort() const;

  constexpr void __set_needReSort(bool value);

  constexpr ::System::Collections::Generic::List_1<::System::Threading::Timer*>*& __get_list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Threading::Timer*>*> const& __get_list() const;

  constexpr void __set_list(::System::Collections::Generic::List_1<::System::Threading::Timer*>* value);

  constexpr int64_t& __get_current_next_run();

  constexpr int64_t const& __get_current_next_run() const;

  constexpr void __set_current_next_run(int64_t value);

  constexpr ::System::Threading::ManualResetEvent*& __get_changed();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::ManualResetEvent*> const& __get_changed() const;

  constexpr void __set_changed(::System::Threading::ManualResetEvent* value);

  static inline void setStaticF_instance(::System::Threading::__Timer__Scheduler* value);

  static inline ::System::Threading::__Timer__Scheduler* getStaticF_instance();

  /// @brief Method InitScheduler addr 0x2620134 size 0xf4 virtual false final false
  inline void InitScheduler();

  /// @brief Method WakeupScheduler addr 0x2620228 size 0x1c virtual false final false
  inline void WakeupScheduler();

  /// @brief Method SchedulerThread addr 0x2620244 size 0x138 virtual false final false
  inline void SchedulerThread();

  /// @brief Method get_Instance addr 0x2620690 size 0x58 virtual false final false
  static inline ::System::Threading::__Timer__Scheduler* get_Instance();

  static inline ::System::Threading::__Timer__Scheduler* New_ctor();

  /// @brief Method .ctor addr 0x26206e8 size 0x9c virtual false final false
  inline void _ctor();

  /// @brief Method Remove addr 0x261fd34 size 0xcc virtual false final false
  inline void Remove(::System::Threading::Timer* timer);

  /// @brief Method Change addr 0x261fe04 size 0x190 virtual false final false
  inline void Change(::System::Threading::Timer* timer, int64_t new_next_run);

  /// @brief Method Add addr 0x26207b4 size 0xf0 virtual false final false
  inline void Add(::System::Threading::Timer* timer);

  /// @brief Method InternalRemove addr 0x2620784 size 0x30 virtual false final false
  inline void InternalRemove(::System::Threading::Timer* timer);

  /// @brief Method TimerCB addr 0x26208a4 size 0x78 virtual false final false
  static inline void TimerCB(::System::Object* o);

  /// @brief Method FireTimer addr 0x262091c size 0xc8 virtual false final false
  inline void FireTimer(::System::Threading::Timer* timer);

  /// @brief Method RunSchedulerLoop addr 0x262037c size 0x314 virtual false final false
  inline int32_t RunSchedulerLoop();

  // Ctor Parameters [CppParam { name: "", ty: "__Timer__Scheduler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Timer__Scheduler(__Timer__Scheduler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Timer__Scheduler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Timer__Scheduler(__Timer__Scheduler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Timer__Scheduler();

public:
  /// @brief Field needReSort, offset: 0x10, size: 0x1, def value: None
  bool ___needReSort;

  /// @brief Field list, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Threading::Timer*>* ___list;

  /// @brief Field current_next_run, offset: 0x20, size: 0x8, def value: None
  int64_t ___current_next_run;

  /// @brief Field changed, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::ManualResetEvent* ___changed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::__Timer__Scheduler, 0x30>, "Size mismatch!");

} // namespace System::Threading
// Type: System.Threading::Timer
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 67, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2750))
// CS Name: ::System.Threading::Timer*
class CORDL_TYPE Timer : public ::System::MarshalByRefObject {
public:
  // Declarations
  using Scheduler = ::System::Threading::__Timer__Scheduler;

  using TimerComparer = ::System::Threading::__Timer__TimerComparer;

  /// @brief Field callback, offset 0x18, size 0x8
  __declspec(property(get = __get_callback, put = __set_callback))::System::Threading::TimerCallback* callback;

  /// @brief Field state, offset 0x20, size 0x8
  __declspec(property(get = __get_state, put = __set_state))::System::Object* state;

  /// @brief Field due_time_ms, offset 0x28, size 0x8
  __declspec(property(get = __get_due_time_ms, put = __set_due_time_ms)) int64_t due_time_ms;

  /// @brief Field period_ms, offset 0x30, size 0x8
  __declspec(property(get = __get_period_ms, put = __set_period_ms)) int64_t period_ms;

  /// @brief Field next_run, offset 0x38, size 0x8
  __declspec(property(get = __get_next_run, put = __set_next_run)) int64_t next_run;

  /// @brief Field disposed, offset 0x40, size 0x1
  __declspec(property(get = __get_disposed, put = __set_disposed)) bool disposed;

  /// @brief Field is_dead, offset 0x41, size 0x1
  __declspec(property(get = __get_is_dead, put = __set_is_dead)) bool is_dead;

  /// @brief Field is_added, offset 0x42, size 0x1
  __declspec(property(get = __get_is_added, put = __set_is_added)) bool is_added;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::System::IAsyncDisposable"
  constexpr operator ::System::IAsyncDisposable*() noexcept;

  constexpr ::System::Threading::TimerCallback*& __get_callback();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::TimerCallback*> const& __get_callback() const;

  constexpr void __set_callback(::System::Threading::TimerCallback* value);

  constexpr ::System::Object*& __get_state();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_state() const;

  constexpr void __set_state(::System::Object* value);

  constexpr int64_t& __get_due_time_ms();

  constexpr int64_t const& __get_due_time_ms() const;

  constexpr void __set_due_time_ms(int64_t value);

  constexpr int64_t& __get_period_ms();

  constexpr int64_t const& __get_period_ms() const;

  constexpr void __set_period_ms(int64_t value);

  constexpr int64_t& __get_next_run();

  constexpr int64_t const& __get_next_run() const;

  constexpr void __set_next_run(int64_t value);

  constexpr bool& __get_disposed();

  constexpr bool const& __get_disposed() const;

  constexpr void __set_disposed(bool value);

  constexpr bool& __get_is_dead();

  constexpr bool const& __get_is_dead() const;

  constexpr void __set_is_dead(bool value);

  constexpr bool& __get_is_added();

  constexpr bool const& __get_is_added() const;

  constexpr void __set_is_added(bool value);

  /// @brief Method get_scheduler addr 0x261f8ac size 0x88 virtual false final false
  static inline ::System::Threading::__Timer__Scheduler* get_scheduler();

  static inline ::System::Threading::Timer* New_ctor(::System::Threading::TimerCallback* callback, ::System::Object* state, int32_t dueTime, int32_t period);

  /// @brief Method .ctor addr 0x261f934 size 0x4c virtual false final false
  inline void _ctor(::System::Threading::TimerCallback* callback, ::System::Object* state, int32_t dueTime, int32_t period);

  static inline ::System::Threading::Timer* New_ctor(::System::Threading::TimerCallback* callback, ::System::Object* state, ::System::TimeSpan dueTime, ::System::TimeSpan period);

  /// @brief Method .ctor addr 0x261f9f4 size 0x90 virtual false final false
  inline void _ctor(::System::Threading::TimerCallback* callback, ::System::Object* state, ::System::TimeSpan dueTime, ::System::TimeSpan period);

  /// @brief Method Init addr 0x261f980 size 0x74 virtual false final false
  inline void Init(::System::Threading::TimerCallback* callback, ::System::Object* state, int64_t dueTime, int64_t period);

  /// @brief Method Change addr 0x261fc64 size 0x20 virtual false final false
  inline bool Change(int32_t dueTime, int32_t period);

  /// @brief Method Change addr 0x261fc84 size 0x78 virtual false final false
  inline bool Change(::System::TimeSpan dueTime, ::System::TimeSpan period);

  /// @brief Method Dispose addr 0x261fcfc size 0x38 virtual true final true
  inline void Dispose();

  /// @brief Method Change addr 0x261fa84 size 0x1e0 virtual false final false
  inline bool Change(int64_t dueTime, int64_t period, bool first);

  /// @brief Method DisposeAsync addr 0x261ff94 size 0x94 virtual true final true
  inline ::System::Threading::Tasks::ValueTask DisposeAsync();

  /// @brief Method KeepRootedWhileScheduled addr 0x2620028 size 0x4 virtual false final false
  inline void KeepRootedWhileScheduled();

  /// @brief Method GetTimeMonotonic addr 0x261fe00 size 0x4 virtual false final false
  static inline int64_t GetTimeMonotonic();

  // Ctor Parameters [CppParam { name: "", ty: "Timer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Timer(Timer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Timer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Timer(Timer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Timer();

public:
  /// @brief Field callback, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::TimerCallback* ___callback;

  /// @brief Field state, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___state;

  /// @brief Field due_time_ms, offset: 0x28, size: 0x8, def value: None
  int64_t ___due_time_ms;

  /// @brief Field period_ms, offset: 0x30, size: 0x8, def value: None
  int64_t ___period_ms;

  /// @brief Field next_run, offset: 0x38, size: 0x8, def value: None
  int64_t ___next_run;

  /// @brief Field disposed, offset: 0x40, size: 0x1, def value: None
  bool ___disposed;

  /// @brief Field is_dead, offset: 0x41, size: 0x1, def value: None
  bool ___is_dead;

  /// @brief Field is_added, offset: 0x42, size: 0x1, def value: None
  bool ___is_added;

  /// @brief Field MaxValue offset 0xffffffff size 0x8
  static constexpr int64_t MaxValue{ static_cast<int64_t>(0xfffffffe) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Timer, 0x48>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::Timer);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Timer*, "System.Threading", "Timer");
NEED_NO_BOX(::System::Threading::__Timer__Scheduler);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::__Timer__Scheduler*, "System.Threading", "Timer/Scheduler");
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::__Timer__TimerComparer, "System.Threading", "Timer/TimerComparer");
