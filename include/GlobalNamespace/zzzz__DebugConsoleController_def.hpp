#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugConsoleController)
namespace GlobalNamespace {
class ConsoleCommandBase;
}
namespace GlobalNamespace {
struct __DebugConsoleController___ExecuteCommands_d__6;
}
namespace System {
class Type;
}
namespace GlobalNamespace {
struct __DebugConsoleController___ReadInputLoopAsync_d__21;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace GlobalNamespace {
struct __DebugConsoleController___TryExecuteCommand_d__8;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace Zenject {
class IInitializable;
}
namespace GlobalNamespace {
struct __DebugConsoleController__ConsoleMessage;
}
namespace GlobalNamespace {
struct __DebugConsoleController___StartConsoleReadTask_d__20;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class ITickable;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
struct __DebugConsoleController___ExecuteCommandsAsync_d__7;
}
namespace UnityEngine {
struct LogType;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::IO {
class Stream;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::IO {
class StreamReader;
}
namespace System::Runtime::CompilerServices {
struct ValueTaskAwaiter;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class DebugConsoleController;
}
namespace GlobalNamespace {
struct __DebugConsoleController__ConsoleMessage;
}
namespace GlobalNamespace {
struct __DebugConsoleController___ExecuteCommandsAsync_d__7;
}
namespace GlobalNamespace {
struct __DebugConsoleController___ExecuteCommands_d__6;
}
namespace GlobalNamespace {
struct __DebugConsoleController___ReadInputLoopAsync_d__21;
}
namespace GlobalNamespace {
struct __DebugConsoleController___StartConsoleReadTask_d__20;
}
namespace GlobalNamespace {
struct __DebugConsoleController___TryExecuteCommand_d__8;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DebugConsoleController);
MARK_VAL_T(::GlobalNamespace::__DebugConsoleController__ConsoleMessage);
MARK_VAL_T(::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__7);
MARK_VAL_T(::GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__6);
MARK_VAL_T(::GlobalNamespace::__DebugConsoleController___ReadInputLoopAsync_d__21);
MARK_VAL_T(::GlobalNamespace::__DebugConsoleController___StartConsoleReadTask_d__20);
MARK_VAL_T(::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__8);
// Type: ::ConsoleMessage
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10036))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5992))
// CS Name: ::DebugConsoleController::ConsoleMessage
struct CORDL_TYPE __DebugConsoleController__ConsoleMessage {
public:
  // Declarations
  /// @brief Method .ctor addr 0x230f0e8 size 0xc virtual false final false
  inline void _ctor(::StringW message, ::UnityEngine::LogType type);

  /// @brief Method op_Implicit addr 0x230df7c size 0x8 virtual false final false
  static inline ::GlobalNamespace::__DebugConsoleController__ConsoleMessage op_Implicit___GlobalNamespace____DebugConsoleController__ConsoleMessage(::StringW message);

  // Ctor Parameters [CppParam { name: "Message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "Type", ty: "::UnityEngine::LogType", modifiers: "", def_value: None }]
  constexpr __DebugConsoleController__ConsoleMessage(::StringW Message, ::UnityEngine::LogType Type) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugConsoleController__ConsoleMessage();

  /// @brief Field Message, offset: 0x0, size: 0x8, def value: None
  ::StringW Message;

  /// @brief Field Type, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::LogType Type;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugConsoleController__ConsoleMessage, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<ExecuteCommands>d__6
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3400)), TypeDefinitionIndex(TypeDefinitionIndex(3393))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5993))
// CS Name: ::DebugConsoleController::<ExecuteCommands>d__6
struct CORDL_TYPE __DebugConsoleController___ExecuteCommands_d__6 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2313264 size 0x2fc virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2313560 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DebugConsoleController*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __DebugConsoleController___ExecuteCommands_d__6(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                            ::GlobalNamespace::DebugConsoleController* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugConsoleController___ExecuteCommands_d__6();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::DebugConsoleController* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__6, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<ExecuteCommandsAsync>d__7
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3401)), TypeDefinitionIndex(TypeDefinitionIndex(3393))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5994))
// CS Name: ::DebugConsoleController::<ExecuteCommandsAsync>d__7
struct CORDL_TYPE __DebugConsoleController___ExecuteCommandsAsync_d__7 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x231356c size 0x3e0 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x231394c size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DebugConsoleController*", modifiers: "",
  // def_value: None }, CppParam { name: "_messages_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __DebugConsoleController___ExecuteCommandsAsync_d__7(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                 ::GlobalNamespace::DebugConsoleController* __4__this,
                                                                 ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* _messages_5__2,
                                                                 ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugConsoleController___ExecuteCommandsAsync_d__7();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::DebugConsoleController* __4__this;

  /// @brief Field <messages>5__2, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* _messages_5__2;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__7, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<TryExecuteCommand>d__8
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3401)), TypeDefinitionIndex(TypeDefinitionIndex(3393))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5995))
// CS Name: ::DebugConsoleController::<TryExecuteCommand>d__8
struct CORDL_TYPE __DebugConsoleController___TryExecuteCommand_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2313958 size 0x3f8 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2313d50 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "commandText", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "__4__this", ty: "::GlobalNamespace::DebugConsoleController*", modifiers: "", def_value: None }, CppParam { name: "messages", ty:
  // "::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __DebugConsoleController___TryExecuteCommand_d__8(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::StringW commandText,
                                                              ::GlobalNamespace::DebugConsoleController* __4__this,
                                                              ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages,
                                                              ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugConsoleController___TryExecuteCommand_d__8();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field commandText, offset: 0x20, size: 0x8, def value: None
  ::StringW commandText;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::DebugConsoleController* __4__this;

  /// @brief Field messages, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__8, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<StartConsoleReadTask>d__20
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3393)), TypeDefinitionIndex(TypeDefinitionIndex(3400))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5996))
// CS Name: ::DebugConsoleController::<StartConsoleReadTask>d__20
struct CORDL_TYPE __DebugConsoleController___StartConsoleReadTask_d__20 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2313d5c size 0x270 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2313fcc size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "",
  // def_value: None }]
  constexpr __DebugConsoleController___StartConsoleReadTask_d__20(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                  ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugConsoleController___StartConsoleReadTask_d__20();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugConsoleController___StartConsoleReadTask_d__20, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<ReadInputLoopAsync>d__21
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3401)), TypeDefinitionIndex(TypeDefinitionIndex(3394)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 397
// }), TypeDefinitionIndex(TypeDefinitionIndex(3390))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5997)) CS Name: ::DebugConsoleController::<ReadInputLoopAsync>d__21
struct CORDL_TYPE __DebugConsoleController___ReadInputLoopAsync_d__21 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2313fd8 size 0x844 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x231481c size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "_inputStream_5__2", ty: "::System::IO::Stream*", modifiers: "", def_value: None
  // }, CppParam { name: "_reader_5__3", ty: "::System::IO::StreamReader*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap3", ty: "::System::Object*", modifiers: "", def_value: None },
  // CppParam { name: "__7__wrap4", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "",
  // def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __DebugConsoleController___ReadInputLoopAsync_d__21(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::IO::Stream* _inputStream_5__2,
                                                                ::System::IO::StreamReader* _reader_5__3, ::System::Object* __7__wrap3, int32_t __7__wrap4,
                                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1,
                                                                ::System::Runtime::CompilerServices::ValueTaskAwaiter __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugConsoleController___ReadInputLoopAsync_d__21();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <inputStream>5__2, offset: 0x20, size: 0x8, def value: None
  ::System::IO::Stream* _inputStream_5__2;

  /// @brief Field <reader>5__3, offset: 0x28, size: 0x8, def value: None
  ::System::IO::StreamReader* _reader_5__3;

  /// @brief Field <>7__wrap3, offset: 0x30, size: 0x8, def value: None
  ::System::Object* __7__wrap3;

  /// @brief Field <>7__wrap4, offset: 0x38, size: 0x4, def value: None
  int32_t __7__wrap4;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1;

  /// @brief Field <>u__2, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ValueTaskAwaiter __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugConsoleController___ReadInputLoopAsync_d__21, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::DebugConsoleController
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5998))
// CS Name: ::DebugConsoleController*
class CORDL_TYPE DebugConsoleController : public ::System::Object {
public:
  // Declarations
  using _ReadInputLoopAsync_d__21 = ::GlobalNamespace::__DebugConsoleController___ReadInputLoopAsync_d__21;

  using _StartConsoleReadTask_d__20 = ::GlobalNamespace::__DebugConsoleController___StartConsoleReadTask_d__20;

  using _TryExecuteCommand_d__8 = ::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__8;

  using _ExecuteCommandsAsync_d__7 = ::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__7;

  using _ExecuteCommands_d__6 = ::GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__6;

  using ConsoleMessage = ::GlobalNamespace::__DebugConsoleController__ConsoleMessage;

  /// @brief Field _container, offset 0x10, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  /// @brief Field _commands, offset 0x18, size 0x8
  __declspec(property(get = __get__commands, put = __set__commands))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>* _commands;

  /// @brief Field _commandsExecutionTask, offset 0x20, size 0x8
  __declspec(property(get = __get__commandsExecutionTask, put = __set__commandsExecutionTask))::System::Threading::Tasks::Task* _commandsExecutionTask;

  /// @brief Field _stringsFromSTDIN, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__stringsFromSTDIN, put = setStaticF__stringsFromSTDIN))::System::Collections::Generic::Queue_1<::StringW>* _stringsFromSTDIN;

  /// @brief Field _readInputTask, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__readInputTask, put = setStaticF__readInputTask))::System::Threading::Tasks::Task* _readInputTask;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Convert operator to "::Zenject::ITickable"
  constexpr operator ::Zenject::ITickable*() noexcept;

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>*& __get__commands();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>*> const& __get__commands() const;

  constexpr void __set__commands(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>* value);

  constexpr ::System::Threading::Tasks::Task*& __get__commandsExecutionTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& __get__commandsExecutionTask() const;

  constexpr void __set__commandsExecutionTask(::System::Threading::Tasks::Task* value);

  static inline void setStaticF__stringsFromSTDIN(::System::Collections::Generic::Queue_1<::StringW>* value);

  static inline ::System::Collections::Generic::Queue_1<::StringW>* getStaticF__stringsFromSTDIN();

  static inline void setStaticF__readInputTask(::System::Threading::Tasks::Task* value);

  static inline ::System::Threading::Tasks::Task* getStaticF__readInputTask();

  /// @brief Method ExecuteCommands addr 0x2311f14 size 0x94 virtual false final false
  inline void ExecuteCommands();

  /// @brief Method ExecuteCommandsAsync addr 0x2311fa8 size 0xcc virtual false final false
  inline ::System::Threading::Tasks::Task* ExecuteCommandsAsync();

  /// @brief Method TryExecuteCommand addr 0x2312074 size 0xdc virtual false final false
  inline ::System::Threading::Tasks::Task* TryExecuteCommand(::StringW commandText, ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages);

  /// @brief Method CommandNotFoundMessage addr 0x2312150 size 0x74 virtual false final false
  inline ::GlobalNamespace::__DebugConsoleController__ConsoleMessage CommandNotFoundMessage(::StringW command);

  /// @brief Method StripExtraWhitespace addr 0x23121c4 size 0x124 virtual false final false
  inline ::StringW StripExtraWhitespace(::StringW commandText);

  /// @brief Method FillDictOfCommands addr 0x23122e8 size 0x3a4 virtual false final false
  inline void FillDictOfCommands(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ConsoleCommandBase*>* commandInstances);

  /// @brief Method CheckCommand addr 0x231268c size 0x138 virtual false final false
  static inline void CheckCommand(::GlobalNamespace::ConsoleCommandBase* command);

  /// @brief Method GetAllConsoleCommandInstances addr 0x23127c4 size 0x528 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ConsoleCommandBase*>* GetAllConsoleCommandInstances();

  /// @brief Method IsCommandClass addr 0x2312cec size 0xc0 virtual false final false
  inline bool IsCommandClass(::System::Type* type);

  /// @brief Method GetCommands addr 0x2312dac size 0x8 virtual false final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>* GetCommands();

  /// @brief Method GetCommand addr 0x230fa38 size 0x78 virtual false final false
  inline ::GlobalNamespace::ConsoleCommandBase* GetCommand(::StringW commandName);

  /// @brief Method Initialize addr 0x2312db4 size 0xec virtual true final true
  inline void Initialize();

  /// @brief Method Tick addr 0x2312f28 size 0x94 virtual true final true
  inline void Tick();

  /// @brief Method DisplayMessage addr 0x2312fbc size 0xc8 virtual false final false
  static inline void DisplayMessage(::GlobalNamespace::__DebugConsoleController__ConsoleMessage message);

  /// @brief Method StartConsoleReadTask addr 0x2312ea0 size 0x88 virtual false final false
  static inline void StartConsoleReadTask();

  /// @brief Method ReadInputLoopAsync addr 0x2313084 size 0xcc virtual false final false
  static inline ::System::Threading::Tasks::Task* ReadInputLoopAsync();

  static inline ::GlobalNamespace::DebugConsoleController* New_ctor();

  /// @brief Method .ctor addr 0x2313150 size 0x7c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DebugConsoleController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugConsoleController(DebugConsoleController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugConsoleController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugConsoleController(DebugConsoleController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugConsoleController();

public:
  /// @brief Field _container, offset: 0x10, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _commands, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>* ____commands;

  /// @brief Field _commandsExecutionTask, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ____commandsExecutionTask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DebugConsoleController, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DebugConsoleController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DebugConsoleController*, "", "DebugConsoleController");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugConsoleController__ConsoleMessage, "", "DebugConsoleController/ConsoleMessage");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__7, "", "DebugConsoleController/<ExecuteCommandsAsync>d__7");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__6, "", "DebugConsoleController/<ExecuteCommands>d__6");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugConsoleController___ReadInputLoopAsync_d__21, "", "DebugConsoleController/<ReadInputLoopAsync>d__21");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugConsoleController___StartConsoleReadTask_d__20, "", "DebugConsoleController/<StartConsoleReadTask>d__20");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__8, "", "DebugConsoleController/<TryExecuteCommand>d__8");
