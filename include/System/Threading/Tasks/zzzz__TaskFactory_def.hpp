#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__TaskContinuationOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCreationOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TaskFactory)
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class IAsyncResult;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
struct TaskCreationOptions;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class AsyncCallback;
}
namespace System::Threading::Tasks {
struct TaskContinuationOptions;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System::Threading::Tasks {
class TaskScheduler;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4, typename TResult> class Func_5;
}
namespace System::Threading::Tasks {
class __TaskFactory__CompleteOnInvokePromise;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Object;
}
namespace System {
template <typename T1, typename T2, typename T3, typename TResult> class Func_4;
}
namespace System::Threading::Tasks {
class ITaskCompletionAction;
}
// Forward declare root types
namespace System::Threading::Tasks {
class TaskFactory;
}
namespace System::Threading::Tasks {
class __TaskFactory__CompleteOnInvokePromise;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::TaskFactory);
MARK_REF_PTR_T(::System::Threading::Tasks::__TaskFactory__CompleteOnInvokePromise);
// Type: ::CompleteOnInvokePromise
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 400 }), TypeDefinitionIndex(TypeDefinitionIndex(2773)),
// TypeDefinitionIndex(TypeDefinitionIndex(2787))} Self: TypeDefinitionIndex(TypeDefinitionIndex(2809)) CS Name: ::TaskFactory::CompleteOnInvokePromise*
class CORDL_TYPE __TaskFactory__CompleteOnInvokePromise : public ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*> {
public:
  // Declarations
  /// @brief Field _tasks, offset 0x58, size 0x8
  __declspec(property(get = __get__tasks, put = __set__tasks))::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>* _tasks;

  __declspec(property(get = get_InvokeMayRunArbitraryCode)) bool InvokeMayRunArbitraryCode;

  /// @brief Convert operator to "::System::Threading::Tasks::ITaskCompletionAction"
  constexpr operator ::System::Threading::Tasks::ITaskCompletionAction*() noexcept;

  constexpr ::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>*& __get__tasks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>*> const& __get__tasks() const;

  constexpr void __set__tasks(::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>* value);

  static inline ::System::Threading::Tasks::__TaskFactory__CompleteOnInvokePromise* New_ctor(::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>* tasks);

  /// @brief Method .ctor addr 0x262d598 size 0x114 virtual false final false
  inline void _ctor(::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>* tasks);

  /// @brief Method Invoke addr 0x262d6ac size 0x22c virtual true final true
  inline void Invoke(::System::Threading::Tasks::Task* completingTask);

  /// @brief Method get_InvokeMayRunArbitraryCode addr 0x262d8d8 size 0x8 virtual true final true
  inline bool get_InvokeMayRunArbitraryCode();

  // Ctor Parameters [CppParam { name: "", ty: "__TaskFactory__CompleteOnInvokePromise", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TaskFactory__CompleteOnInvokePromise(__TaskFactory__CompleteOnInvokePromise&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TaskFactory__CompleteOnInvokePromise", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TaskFactory__CompleteOnInvokePromise(__TaskFactory__CompleteOnInvokePromise const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TaskFactory__CompleteOnInvokePromise();

public:
  /// @brief Field _tasks, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>* ____tasks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::__TaskFactory__CompleteOnInvokePromise, 0x60>, "Size mismatch!");

} // namespace System::Threading::Tasks
// Type: System.Threading.Tasks::TaskFactory
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2792)), TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(2613)),
// TypeDefinitionIndex(TypeDefinitionIndex(2790))} Self: TypeDefinitionIndex(TypeDefinitionIndex(2810)) CS Name: ::System.Threading.Tasks::TaskFactory*
class CORDL_TYPE TaskFactory : public ::System::Object {
public:
  // Declarations
  using CompleteOnInvokePromise = ::System::Threading::Tasks::__TaskFactory__CompleteOnInvokePromise;

  /// @brief Field m_defaultCancellationToken, offset 0x10, size 0x8
  __declspec(property(get = __get_m_defaultCancellationToken, put = __set_m_defaultCancellationToken))::System::Threading::CancellationToken m_defaultCancellationToken;

  /// @brief Field m_defaultScheduler, offset 0x18, size 0x8
  __declspec(property(get = __get_m_defaultScheduler, put = __set_m_defaultScheduler))::System::Threading::Tasks::TaskScheduler* m_defaultScheduler;

  /// @brief Field m_defaultCreationOptions, offset 0x20, size 0x4
  __declspec(property(get = __get_m_defaultCreationOptions, put = __set_m_defaultCreationOptions))::System::Threading::Tasks::TaskCreationOptions m_defaultCreationOptions;

  /// @brief Field m_defaultContinuationOptions, offset 0x24, size 0x4
  __declspec(property(get = __get_m_defaultContinuationOptions, put = __set_m_defaultContinuationOptions))::System::Threading::Tasks::TaskContinuationOptions m_defaultContinuationOptions;

  constexpr ::System::Threading::CancellationToken& __get_m_defaultCancellationToken();

  constexpr ::System::Threading::CancellationToken const& __get_m_defaultCancellationToken() const;

  constexpr void __set_m_defaultCancellationToken(::System::Threading::CancellationToken value);

  constexpr ::System::Threading::Tasks::TaskScheduler*& __get_m_defaultScheduler();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskScheduler*> const& __get_m_defaultScheduler() const;

  constexpr void __set_m_defaultScheduler(::System::Threading::Tasks::TaskScheduler* value);

  constexpr ::System::Threading::Tasks::TaskCreationOptions& __get_m_defaultCreationOptions();

  constexpr ::System::Threading::Tasks::TaskCreationOptions const& __get_m_defaultCreationOptions() const;

  constexpr void __set_m_defaultCreationOptions(::System::Threading::Tasks::TaskCreationOptions value);

  constexpr ::System::Threading::Tasks::TaskContinuationOptions& __get_m_defaultContinuationOptions();

  constexpr ::System::Threading::Tasks::TaskContinuationOptions const& __get_m_defaultContinuationOptions() const;

  constexpr void __set_m_defaultContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions value);

  static inline ::System::Threading::Tasks::TaskFactory* New_ctor();

  /// @brief Method .ctor addr 0x262ac8c size 0x14 virtual false final false
  inline void _ctor();

  static inline ::System::Threading::Tasks::TaskFactory* New_ctor(::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                                  ::System::Threading::Tasks::TaskContinuationOptions continuationOptions, ::System::Threading::Tasks::TaskScheduler* scheduler);

  /// @brief Method .ctor addr 0x262d1d0 size 0x50 virtual false final false
  inline void _ctor(::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                    ::System::Threading::Tasks::TaskContinuationOptions continuationOptions, ::System::Threading::Tasks::TaskScheduler* scheduler);

  /// @brief Method CheckCreationOptions addr 0x262d328 size 0x60 virtual false final false
  static inline void CheckCreationOptions(::System::Threading::Tasks::TaskCreationOptions creationOptions);

  /// @brief Method StartNew addr 0x262d388 size 0x8c virtual false final false
  inline ::System::Threading::Tasks::Task* StartNew(::System::Action* action, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                    ::System::Threading::Tasks::TaskScheduler* scheduler);

  /// @brief Method StartNew addr 0x262d414 size 0x90 virtual false final false
  inline ::System::Threading::Tasks::Task* StartNew(::System::Action_1<::System::Object*>* action, ::System::Object* state, ::System::Threading::CancellationToken cancellationToken,
                                                    ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::TaskScheduler* scheduler);

  /// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TResult>
  inline ::System::Threading::Tasks::Task_1<TResult>* StartNew(::System::Func_1<TResult>* function, ::System::Threading::CancellationToken cancellationToken,
                                                               ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::TaskScheduler* scheduler);

  /// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TResult>
  inline ::System::Threading::Tasks::Task_1<TResult>* StartNew(::System::Func_2<::System::Object*, TResult>* function, ::System::Object* state,
                                                               ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                               ::System::Threading::Tasks::TaskScheduler* scheduler);

  /// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TArg1>
  inline ::System::Threading::Tasks::Task* FromAsync(::System::Func_4<TArg1, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>* beginMethod,
                                                     ::System::Action_1<::System::IAsyncResult*>* endMethod, TArg1 arg1, ::System::Object* state);

  /// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TArg1>
  inline ::System::Threading::Tasks::Task* FromAsync(::System::Func_4<TArg1, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>* beginMethod,
                                                     ::System::Action_1<::System::IAsyncResult*>* endMethod, TArg1 arg1, ::System::Object* state,
                                                     ::System::Threading::Tasks::TaskCreationOptions creationOptions);

  /// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TArg1, typename TArg2>
  inline ::System::Threading::Tasks::Task* FromAsync(::System::Func_5<TArg1, TArg2, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>* beginMethod,
                                                     ::System::Action_1<::System::IAsyncResult*>* endMethod, TArg1 arg1, TArg2 arg2, ::System::Object* state);

  /// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TArg1, typename TArg2>
  inline ::System::Threading::Tasks::Task* FromAsync(::System::Func_5<TArg1, TArg2, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>* beginMethod,
                                                     ::System::Action_1<::System::IAsyncResult*>* endMethod, TArg1 arg1, TArg2 arg2, ::System::Object* state,
                                                     ::System::Threading::Tasks::TaskCreationOptions creationOptions);

  /// @brief Method CheckFromAsyncOptions addr 0x262d4a4 size 0xf4 virtual false final false
  static inline void CheckFromAsyncOptions(::System::Threading::Tasks::TaskCreationOptions creationOptions, bool hasBeginMethod);

  /// @brief Method CommonCWAnyLogic addr 0x262a020 size 0x23c virtual false final false
  static inline ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>* CommonCWAnyLogic(::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>* tasks);

  /// @brief Method CheckMultiTaskContinuationOptions addr 0x262d220 size 0x108 virtual false final false
  static inline void CheckMultiTaskContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions continuationOptions);

  // Ctor Parameters [CppParam { name: "", ty: "TaskFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TaskFactory(TaskFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TaskFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TaskFactory(TaskFactory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TaskFactory();

public:
  /// @brief Field m_defaultCancellationToken, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::CancellationToken ___m_defaultCancellationToken;

  /// @brief Field m_defaultScheduler, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskScheduler* ___m_defaultScheduler;

  /// @brief Field m_defaultCreationOptions, offset: 0x20, size: 0x4, def value: None
  ::System::Threading::Tasks::TaskCreationOptions ___m_defaultCreationOptions;

  /// @brief Field m_defaultContinuationOptions, offset: 0x24, size: 0x4, def value: None
  ::System::Threading::Tasks::TaskContinuationOptions ___m_defaultContinuationOptions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::TaskFactory, 0x28>, "Size mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::TaskFactory);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskFactory*, "System.Threading.Tasks", "TaskFactory");
NEED_NO_BOX(::System::Threading::Tasks::__TaskFactory__CompleteOnInvokePromise);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::__TaskFactory__CompleteOnInvokePromise*, "System.Threading.Tasks", "TaskFactory/CompleteOnInvokePromise");
