#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CancellationTokenSource)
namespace System {
class Object;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System {
struct TimeSpan;
}
namespace System::Threading {
class __CancellationTokenSource__Linked1CancellationTokenSource;
}
namespace System::Threading {
class __CancellationTokenSource__Linked2CancellationTokenSource;
}
namespace System::Threading {
class __CancellationTokenSource__LinkedNCancellationTokenSource;
}
namespace System::Threading {
template <typename T> class SparselyPopulatedArray_1;
}
namespace System::Threading {
class TimerCallback;
}
namespace System::Threading {
class SynchronizationContext;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System::Threading {
class Timer;
}
namespace System::Threading {
struct CancellationTokenRegistration;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> class Action_1;
}
namespace System::Threading {
struct CancellationCallbackCoreWorkArguments;
}
namespace System::Threading {
class CancellationCallbackInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class __CancellationTokenSource__LinkedNCancellationTokenSource____c;
}
namespace System::Threading {
class CancellationTokenSource;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__CancellationTokenSource__LinkedNCancellationTokenSource____c);
MARK_REF_PTR_T(::System::Threading::CancellationTokenSource);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2686))
// CS Name: ::CancellationTokenSource::LinkedNCancellationTokenSource::<>c*
class CORDL_TYPE __CancellationTokenSource__LinkedNCancellationTokenSource____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__CancellationTokenSource__LinkedNCancellationTokenSource____c* __9;

  static inline void setStaticF___9(::GlobalNamespace::__CancellationTokenSource__LinkedNCancellationTokenSource____c* value);

  static inline ::GlobalNamespace::__CancellationTokenSource__LinkedNCancellationTokenSource____c* getStaticF___9();

  static inline ::GlobalNamespace::__CancellationTokenSource__LinkedNCancellationTokenSource____c* New_ctor();

  /// @brief Method .ctor addr 0x2613e2c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <.cctor>b__4_0 addr 0x2613e34 size 0x84 virtual false final false
  inline void __cctor_b__4_0(::System::Object* s);

  // Ctor Parameters [CppParam { name: "", ty: "__CancellationTokenSource__LinkedNCancellationTokenSource____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CancellationTokenSource__LinkedNCancellationTokenSource____c(__CancellationTokenSource__LinkedNCancellationTokenSource____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CancellationTokenSource__LinkedNCancellationTokenSource____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CancellationTokenSource__LinkedNCancellationTokenSource____c(__CancellationTokenSource__LinkedNCancellationTokenSource____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CancellationTokenSource__LinkedNCancellationTokenSource____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CancellationTokenSource__LinkedNCancellationTokenSource____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: System.Threading::CancellationTokenSource
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2688))
// CS Name: ::System.Threading::CancellationTokenSource*
class CORDL_TYPE CancellationTokenSource : public ::System::Object {
public:
  // Declarations
  using LinkedNCancellationTokenSource = ::System::Threading::__CancellationTokenSource__LinkedNCancellationTokenSource;

  using Linked2CancellationTokenSource = ::System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource;

  using Linked1CancellationTokenSource = ::System::Threading::__CancellationTokenSource__Linked1CancellationTokenSource;

  /// @brief Field _kernelEvent, offset 0x10, size 0x8
  __declspec(property(get = __get__kernelEvent, put = __set__kernelEvent))::System::Threading::ManualResetEvent* _kernelEvent;

  /// @brief Field _registeredCallbacksLists, offset 0x18, size 0x8
  __declspec(
      property(get = __get__registeredCallbacksLists,
               put = __set__registeredCallbacksLists))::ArrayW<::System::Threading::SparselyPopulatedArray_1<::System::Threading::CancellationCallbackInfo*>*,
                                                               ::Array<::System::Threading::SparselyPopulatedArray_1<::System::Threading::CancellationCallbackInfo*>*>*> _registeredCallbacksLists;

  /// @brief Field _state, offset 0x20, size 0x4
  __declspec(property(get = __get__state, put = __set__state)) int32_t _state;

  /// @brief Field _threadIDExecutingCallbacks, offset 0x24, size 0x4
  __declspec(property(get = __get__threadIDExecutingCallbacks, put = __set__threadIDExecutingCallbacks)) int32_t _threadIDExecutingCallbacks;

  /// @brief Field _disposed, offset 0x28, size 0x1
  __declspec(property(get = __get__disposed, put = __set__disposed)) bool _disposed;

  /// @brief Field _executingCallback, offset 0x30, size 0x8
  __declspec(property(get = __get__executingCallback, put = __set__executingCallback))::System::Threading::CancellationCallbackInfo* _executingCallback;

  /// @brief Field _timer, offset 0x38, size 0x8
  __declspec(property(get = __get__timer, put = __set__timer))::System::Threading::Timer* _timer;

  /// @brief Field s_canceledSource, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_canceledSource, put = setStaticF_s_canceledSource))::System::Threading::CancellationTokenSource* s_canceledSource;

  /// @brief Field s_neverCanceledSource, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_neverCanceledSource, put = setStaticF_s_neverCanceledSource))::System::Threading::CancellationTokenSource* s_neverCanceledSource;

  /// @brief Field s_nLists, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_nLists, put = setStaticF_s_nLists)) int32_t s_nLists;

  /// @brief Field s_timerCallback, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_timerCallback, put = setStaticF_s_timerCallback))::System::Threading::TimerCallback* s_timerCallback;

  __declspec(property(get = get_IsCancellationRequested)) bool IsCancellationRequested;

  __declspec(property(get = get_IsCancellationCompleted)) bool IsCancellationCompleted;

  __declspec(property(get = get_IsDisposed)) bool IsDisposed;

  __declspec(property(get = get_ThreadIDExecutingCallbacks, put = set_ThreadIDExecutingCallbacks)) int32_t ThreadIDExecutingCallbacks;

  __declspec(property(get = get_Token))::System::Threading::CancellationToken Token;

  __declspec(property(get = get_ExecutingCallback))::System::Threading::CancellationCallbackInfo* ExecutingCallback;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::System::Threading::ManualResetEvent*& __get__kernelEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::ManualResetEvent*> const& __get__kernelEvent() const;

  constexpr void __set__kernelEvent(::System::Threading::ManualResetEvent* value);

  constexpr ::ArrayW<::System::Threading::SparselyPopulatedArray_1<::System::Threading::CancellationCallbackInfo*>*,
                     ::Array<::System::Threading::SparselyPopulatedArray_1<::System::Threading::CancellationCallbackInfo*>*>*>&
  __get__registeredCallbacksLists();

  constexpr ::ArrayW<::System::Threading::SparselyPopulatedArray_1<::System::Threading::CancellationCallbackInfo*>*,
                     ::Array<::System::Threading::SparselyPopulatedArray_1<::System::Threading::CancellationCallbackInfo*>*>*> const&
  __get__registeredCallbacksLists() const;

  constexpr void __set__registeredCallbacksLists(::ArrayW<::System::Threading::SparselyPopulatedArray_1<::System::Threading::CancellationCallbackInfo*>*,
                                                          ::Array<::System::Threading::SparselyPopulatedArray_1<::System::Threading::CancellationCallbackInfo*>*>*>
                                                     value);

  constexpr int32_t& __get__state();

  constexpr int32_t const& __get__state() const;

  constexpr void __set__state(int32_t value);

  constexpr int32_t& __get__threadIDExecutingCallbacks();

  constexpr int32_t const& __get__threadIDExecutingCallbacks() const;

  constexpr void __set__threadIDExecutingCallbacks(int32_t value);

  constexpr bool& __get__disposed();

  constexpr bool const& __get__disposed() const;

  constexpr void __set__disposed(bool value);

  constexpr ::System::Threading::CancellationCallbackInfo*& __get__executingCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationCallbackInfo*> const& __get__executingCallback() const;

  constexpr void __set__executingCallback(::System::Threading::CancellationCallbackInfo* value);

  constexpr ::System::Threading::Timer*& __get__timer();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Timer*> const& __get__timer() const;

  constexpr void __set__timer(::System::Threading::Timer* value);

  static inline void setStaticF_s_canceledSource(::System::Threading::CancellationTokenSource* value);

  static inline ::System::Threading::CancellationTokenSource* getStaticF_s_canceledSource();

  static inline void setStaticF_s_neverCanceledSource(::System::Threading::CancellationTokenSource* value);

  static inline ::System::Threading::CancellationTokenSource* getStaticF_s_neverCanceledSource();

  static inline void setStaticF_s_nLists(int32_t value);

  static inline int32_t getStaticF_s_nLists();

  static inline void setStaticF_s_timerCallback(::System::Threading::TimerCallback* value);

  static inline ::System::Threading::TimerCallback* getStaticF_s_timerCallback();

  /// @brief Method get_IsCancellationRequested addr 0x26103c0 size 0x1c virtual false final false
  inline bool get_IsCancellationRequested();

  /// @brief Method get_IsCancellationCompleted addr 0x2612510 size 0x1c virtual false final false
  inline bool get_IsCancellationCompleted();

  /// @brief Method get_IsDisposed addr 0x26127c4 size 0x8 virtual false final false
  inline bool get_IsDisposed();

  /// @brief Method get_ThreadIDExecutingCallbacks addr 0x261252c size 0x18 virtual false final false
  inline int32_t get_ThreadIDExecutingCallbacks();

  /// @brief Method set_ThreadIDExecutingCallbacks addr 0x26127cc size 0x24 virtual false final false
  inline void set_ThreadIDExecutingCallbacks(int32_t value);

  /// @brief Method get_Token addr 0x26127f0 size 0x18 virtual false final false
  inline ::System::Threading::CancellationToken get_Token();

  /// @brief Method get_ExecutingCallback addr 0x261285c size 0x18 virtual false final false
  inline ::System::Threading::CancellationCallbackInfo* get_ExecutingCallback();

  static inline ::System::Threading::CancellationTokenSource* New_ctor();

  /// @brief Method .ctor addr 0x2612874 size 0x34 virtual false final false
  inline void _ctor();

  static inline ::System::Threading::CancellationTokenSource* New_ctor(::System::TimeSpan delay);

  /// @brief Method .ctor addr 0x26128a8 size 0xbc virtual false final false
  inline void _ctor(::System::TimeSpan delay);

  /// @brief Method InitializeWithTimer addr 0x2612964 size 0xbc virtual false final false
  inline void InitializeWithTimer(int32_t millisecondsDelay);

  /// @brief Method Cancel addr 0x2612a20 size 0x1c virtual false final false
  inline void Cancel();

  /// @brief Method Cancel addr 0x2612a3c size 0x28 virtual false final false
  inline void Cancel(bool throwOnFirstException);

  /// @brief Method CancelAfter addr 0x2612b14 size 0xa4 virtual false final false
  inline void CancelAfter(::System::TimeSpan delay);

  /// @brief Method CancelAfter addr 0x2612bb8 size 0x1ec virtual false final false
  inline void CancelAfter(int32_t millisecondsDelay);

  /// @brief Method TimerCallbackLogic addr 0x2612da4 size 0x118 virtual false final false
  static inline void TimerCallbackLogic(::System::Object* obj);

  /// @brief Method Dispose addr 0x2612ebc size 0x6c virtual true final true
  inline void Dispose();

  /// @brief Method Dispose addr 0x2612f28 size 0x90 virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method ThrowIfDisposed addr 0x2612808 size 0x54 virtual false final false
  inline void ThrowIfDisposed();

  /// @brief Method ThrowObjectDisposedException addr 0x2612fb8 size 0x54 virtual false final false
  static inline void ThrowObjectDisposedException();

  /// @brief Method InternalRegister addr 0x2610774 size 0x2c8 virtual false final false
  inline ::System::Threading::CancellationTokenRegistration InternalRegister(::System::Action_1<::System::Object*>* callback, ::System::Object* stateForCallback,
                                                                             ::System::Threading::SynchronizationContext* targetSyncContext, ::System::Threading::ExecutionContext* executionContext);

  /// @brief Method NotifyCancellation addr 0x2612a64 size 0xb0 virtual false final false
  inline void NotifyCancellation(bool throwOnFirstException);

  /// @brief Method ExecuteCallbackHandlers addr 0x261309c size 0x4d4 virtual false final false
  inline void ExecuteCallbackHandlers(bool throwOnFirstException);

  /// @brief Method CancellationCallbackCoreWork_OnSyncContext addr 0x2613638 size 0x78 virtual false final false
  inline void CancellationCallbackCoreWork_OnSyncContext(::System::Object* obj);

  /// @brief Method CancellationCallbackCoreWork addr 0x261357c size 0xbc virtual false final false
  inline void CancellationCallbackCoreWork(::System::Threading::CancellationCallbackCoreWorkArguments args);

  /// @brief Method CreateLinkedTokenSource addr 0x26137ac size 0xd4 virtual false final false
  static inline ::System::Threading::CancellationTokenSource* CreateLinkedTokenSource(::System::Threading::CancellationToken token1, ::System::Threading::CancellationToken token2);

  /// @brief Method CreateLinkedTokenSource addr 0x2613a64 size 0xb0 virtual false final false
  static inline ::System::Threading::CancellationTokenSource* CreateLinkedTokenSource(::System::Threading::CancellationToken token);

  /// @brief Method WaitForCallbackToComplete addr 0x2612544 size 0x4c virtual false final false
  inline void WaitForCallbackToComplete(::System::Threading::CancellationCallbackInfo* callbackInfo);

  // Ctor Parameters [CppParam { name: "", ty: "CancellationTokenSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CancellationTokenSource(CancellationTokenSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CancellationTokenSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CancellationTokenSource(CancellationTokenSource const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CancellationTokenSource();

public:
  /// @brief Field _kernelEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::ManualResetEvent* ____kernelEvent;

  /// @brief Field _registeredCallbacksLists, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Threading::SparselyPopulatedArray_1<::System::Threading::CancellationCallbackInfo*>*,
           ::Array<::System::Threading::SparselyPopulatedArray_1<::System::Threading::CancellationCallbackInfo*>*>*>
      ____registeredCallbacksLists;

  /// @brief Field _state, offset: 0x20, size: 0x4, def value: None
  int32_t ____state;

  /// @brief Field _threadIDExecutingCallbacks, offset: 0x24, size: 0x4, def value: None
  int32_t ____threadIDExecutingCallbacks;

  /// @brief Field _disposed, offset: 0x28, size: 0x1, def value: None
  bool ____disposed;

  /// @brief Field _executingCallback, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationCallbackInfo* ____executingCallback;

  /// @brief Field _timer, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::Timer* ____timer;

  /// @brief Field CannotBeCanceled offset 0xffffffff size 0x4
  static constexpr int32_t CannotBeCanceled{ static_cast<int32_t>(0x0) };

  /// @brief Field NotCanceledState offset 0xffffffff size 0x4
  static constexpr int32_t NotCanceledState{ static_cast<int32_t>(0x1) };

  /// @brief Field NotifyingState offset 0xffffffff size 0x4
  static constexpr int32_t NotifyingState{ static_cast<int32_t>(0x2) };

  /// @brief Field NotifyingCompleteState offset 0xffffffff size 0x4
  static constexpr int32_t NotifyingCompleteState{ static_cast<int32_t>(0x3) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::CancellationTokenSource, 0x40>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::GlobalNamespace::__CancellationTokenSource__LinkedNCancellationTokenSource____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CancellationTokenSource__LinkedNCancellationTokenSource____c*, "System.Threading", "CancellationTokenSource/LinkedNCancellationTokenSource/<>c");
NEED_NO_BOX(::System::Threading::CancellationTokenSource);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::CancellationTokenSource*, "System.Threading", "CancellationTokenSource");
