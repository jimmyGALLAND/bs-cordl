#pragma once
// IWYU pragma private; include "GlobalNamespace/DebugConsoleController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/DotnetExtension/CommandLine/zzzz__CommandLineParserResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
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
class ICoroutineStarter;
}
namespace GlobalNamespace {
struct __DebugConsoleController__ConsoleMessage;
}
namespace GlobalNamespace {
struct __DebugConsoleController___ExecuteCommandsAsync_d__11;
}
namespace GlobalNamespace {
struct __DebugConsoleController___ExecuteCommands_d__10;
}
namespace GlobalNamespace {
struct __DebugConsoleController___TryExecuteCommand_d__13;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Type;
}
namespace UnityEngine {
struct LogType;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class IInitializable;
}
namespace Zenject {
class ITickable;
}
// Forward declare root types
namespace GlobalNamespace {
class DebugConsoleController;
}
namespace GlobalNamespace {
struct __DebugConsoleController__ConsoleMessage;
}
namespace GlobalNamespace {
struct __DebugConsoleController___ExecuteCommandsAsync_d__11;
}
namespace GlobalNamespace {
struct __DebugConsoleController___ExecuteCommands_d__10;
}
namespace GlobalNamespace {
struct __DebugConsoleController___TryExecuteCommand_d__13;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DebugConsoleController);
MARK_VAL_T(::GlobalNamespace::__DebugConsoleController__ConsoleMessage);
MARK_VAL_T(::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__11);
MARK_VAL_T(::GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__10);
MARK_VAL_T(::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__13);
// Type: ::ConsoleMessage
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::DebugConsoleController::ConsoleMessage
struct CORDL_TYPE __DebugConsoleController__ConsoleMessage {
public:
// Declarations
/// @brief Method ToString, addr 0x3a81f68, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x3a809f4, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::UnityEngine::LogType  type) ;

/// @brief Method op_Addition, addr 0x3a81f70, size 0x20, virtual false, abstract: false, final false
static inline ::GlobalNamespace::__DebugConsoleController__ConsoleMessage op_Addition(::GlobalNamespace::__DebugConsoleController__ConsoleMessage  a, ::GlobalNamespace::__DebugConsoleController__ConsoleMessage  b) ;

// Ctor Parameters []
// @brief default ctor
constexpr __DebugConsoleController__ConsoleMessage() ;

// Ctor Parameters [CppParam { name: "Message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "Type", ty: "::UnityEngine::LogType", modifiers: "", def_value: None }]
constexpr __DebugConsoleController__ConsoleMessage(::StringW  Message, ::UnityEngine::LogType  Type) noexcept;

/// @brief Field Message, offset: 0x0, size: 0x8, def value: None
 ::StringW  Message;

/// @brief Field Type, offset: 0x8, size: 0x4, def value: None
 ::UnityEngine::LogType  Type;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugConsoleController__ConsoleMessage, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugConsoleController__ConsoleMessage, Message) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugConsoleController__ConsoleMessage, Type) == 0x8, "Offset mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<ExecuteCommands>d__10
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::DebugConsoleController::<ExecuteCommands>d__10
struct CORDL_TYPE __DebugConsoleController___ExecuteCommands_d__10 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3a81f90, size 0x2e4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3a82274, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __DebugConsoleController___ExecuteCommands_d__10() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DebugConsoleController*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __DebugConsoleController___ExecuteCommands_d__10(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::DebugConsoleController*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::DebugConsoleController*  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__10, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__10, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__10, __u__1) == 0x30, "Offset mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<ExecuteCommandsAsync>d__11
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::DebugConsoleController::<ExecuteCommandsAsync>d__11
struct CORDL_TYPE __DebugConsoleController___ExecuteCommandsAsync_d__11 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3a82280, size 0x3c0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3a82640, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __DebugConsoleController___ExecuteCommandsAsync_d__11() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DebugConsoleController*", modifiers: "", def_value: None }, CppParam { name: "_messages_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __DebugConsoleController___ExecuteCommandsAsync_d__11(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::GlobalNamespace::DebugConsoleController*  __4__this, ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*  _messages_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::DebugConsoleController*  __4__this;

/// @brief Field <messages>5__2, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*  _messages_5__2;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__11, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__11, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__11, _messages_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__11, __u__1) == 0x30, "Offset mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<TryExecuteCommand>d__13
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::DebugConsoleController::<TryExecuteCommand>d__13
struct CORDL_TYPE __DebugConsoleController___TryExecuteCommand_d__13 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3a826a8, size 0x3cc, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3a82a74, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __DebugConsoleController___TryExecuteCommand_d__13() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "commandText", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DebugConsoleController*", modifiers: "", def_value: None }, CppParam { name: "messages", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __DebugConsoleController___TryExecuteCommand_d__13(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::StringW  commandText, ::GlobalNamespace::DebugConsoleController*  __4__this, ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*  messages, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field commandText, offset: 0x20, size: 0x8, def value: None
 ::StringW  commandText;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::DebugConsoleController*  __4__this;

/// @brief Field messages, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*  messages;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__13, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__13, commandText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__13, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__13, messages) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__13, __u__1) == 0x38, "Offset mismatch!");

} // namespace end def GlobalNamespace
// Type: ::DebugConsoleController
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugConsoleController*
class CORDL_TYPE DebugConsoleController : public ::System::Object {
public:
// Declarations
using ConsoleMessage = ::GlobalNamespace::__DebugConsoleController__ConsoleMessage;

using _ExecuteCommandsAsync_d__11 = ::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__11;

using _ExecuteCommands_d__10 = ::GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__10;

using _TryExecuteCommand_d__13 = ::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__13;

/// @brief Field _commandLineParserResult, offset 0x28, size 0x18 
 __declspec(property(get=__cordl_internal_get__commandLineParserResult, put=__cordl_internal_set__commandLineParserResult)) ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult  _commandLineParserResult;

/// @brief Field _commands, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__commands, put=__cordl_internal_set__commands)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ConsoleCommandBase*>*  _commands;

/// @brief Field _commandsExecutionTask, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__commandsExecutionTask, put=__cordl_internal_set__commandsExecutionTask)) ::System::Threading::Tasks::Task*  _commandsExecutionTask;

/// @brief Field _container, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__container, put=__cordl_internal_set__container)) ::Zenject::DiContainer*  _container;

/// @brief Field _coroutineStarter, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__coroutineStarter, put=__cordl_internal_set__coroutineStarter)) ::GlobalNamespace::ICoroutineStarter*  _coroutineStarter;

/// @brief Field _stringsFromSTDIN, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__stringsFromSTDIN, put=__cordl_internal_set__stringsFromSTDIN)) ::System::Collections::Generic::Queue_1<::StringW>*  _stringsFromSTDIN;

/// @brief Field onNewMessageToOutput, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_onNewMessageToOutput, put=__cordl_internal_set_onNewMessageToOutput)) ::System::Action_2<::StringW,::UnityEngine::LogType>*  onNewMessageToOutput;

/// @brief Convert operator to "::Zenject::IInitializable"
constexpr operator  ::Zenject::IInitializable*() noexcept;

/// @brief Convert operator to "::Zenject::ITickable"
constexpr operator  ::Zenject::ITickable*() noexcept;

/// @brief Method CheckCommand, addr 0x3a81b48, size 0x138, virtual false, abstract: false, final false
inline void CheckCommand(::GlobalNamespace::ConsoleCommandBase*  command) ;

/// @brief Method CommandNotFoundMessage, addr 0x3a819b0, size 0x74, virtual false, abstract: false, final false
inline ::GlobalNamespace::__DebugConsoleController__ConsoleMessage CommandNotFoundMessage(::StringW  command) ;

/// @brief Method DisplayMessage, addr 0x3a80a00, size 0xb0, virtual false, abstract: false, final false
inline void DisplayMessage(::GlobalNamespace::__DebugConsoleController__ConsoleMessage  message) ;

/// @brief Method ExecuteCommands, addr 0x3a81730, size 0x90, virtual false, abstract: false, final false
inline void ExecuteCommands() ;

/// @brief Method ExecuteCommandsAsync, addr 0x3a817c0, size 0xc4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ExecuteCommandsAsync() ;

/// @brief Method FillDictOfCommands, addr 0x3a81354, size 0x374, virtual false, abstract: false, final false
inline void FillDictOfCommands(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ConsoleCommandBase*>*  commandInstances) ;

/// @brief Method GetAllConsoleCommandInstances, addr 0x3a80e38, size 0x51c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ConsoleCommandBase*>* GetAllConsoleCommandInstances() ;

/// @brief Method GetCommand, addr 0x3a81d48, size 0x78, virtual false, abstract: false, final false
inline ::GlobalNamespace::ConsoleCommandBase* GetCommand(::StringW  commandName) ;

/// @brief Method GetCommands, addr 0x3a81d40, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ConsoleCommandBase*>* GetCommands() ;

/// @brief Method Initialize, addr 0x3a80cac, size 0x18c, virtual true, abstract: false, final true
inline void Initialize() ;

/// @brief Method IsCommandClass, addr 0x3a81c80, size 0xc0, virtual false, abstract: false, final false
inline bool IsCommandClass(::System::Type*  type) ;

static inline ::GlobalNamespace::DebugConsoleController* New_ctor() ;

/// @brief Method QueueNewInput, addr 0x3a81884, size 0x58, virtual false, abstract: false, final false
inline void QueueNewInput(::StringW  input) ;

/// @brief Method StripExtraWhitespace, addr 0x3a81a24, size 0x124, virtual false, abstract: false, final false
inline ::StringW StripExtraWhitespace(::StringW  commandText) ;

/// @brief Method Tick, addr 0x3a816c8, size 0x68, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method TryExecuteCommand, addr 0x3a818dc, size 0xd4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* TryExecuteCommand(::StringW  commandText, ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*  messages) ;

/// @brief Method <Initialize>b__8_0, addr 0x3a81e84, size 0xe4, virtual false, abstract: false, final false
inline void _Initialize_b__8_0() ;

constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult const& __cordl_internal_get__commandLineParserResult() const;

constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult& __cordl_internal_get__commandLineParserResult() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ConsoleCommandBase*>*& __cordl_internal_get__commands() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ConsoleCommandBase*>*> const& __cordl_internal_get__commands() const;

constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__commandsExecutionTask() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& __cordl_internal_get__commandsExecutionTask() const;

constexpr ::Zenject::DiContainer*& __cordl_internal_get__container() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __cordl_internal_get__container() const;

constexpr ::GlobalNamespace::ICoroutineStarter*& __cordl_internal_get__coroutineStarter() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ICoroutineStarter*> const& __cordl_internal_get__coroutineStarter() const;

constexpr ::System::Collections::Generic::Queue_1<::StringW>*& __cordl_internal_get__stringsFromSTDIN() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::StringW>*> const& __cordl_internal_get__stringsFromSTDIN() const;

constexpr ::System::Action_2<::StringW,::UnityEngine::LogType>*& __cordl_internal_get_onNewMessageToOutput() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW,::UnityEngine::LogType>*> const& __cordl_internal_get_onNewMessageToOutput() const;

constexpr void __cordl_internal_set__commandLineParserResult(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult  value) ;

constexpr void __cordl_internal_set__commands(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ConsoleCommandBase*>*  value) ;

constexpr void __cordl_internal_set__commandsExecutionTask(::System::Threading::Tasks::Task*  value) ;

constexpr void __cordl_internal_set__container(::Zenject::DiContainer*  value) ;

constexpr void __cordl_internal_set__coroutineStarter(::GlobalNamespace::ICoroutineStarter*  value) ;

constexpr void __cordl_internal_set__stringsFromSTDIN(::System::Collections::Generic::Queue_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_onNewMessageToOutput(::System::Action_2<::StringW,::UnityEngine::LogType>*  value) ;

/// @brief Method .ctor, addr 0x3a81dc0, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

/// @brief Convert to "::Zenject::ITickable"
constexpr ::Zenject::ITickable* i___Zenject__ITickable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugConsoleController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugConsoleController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugConsoleController(DebugConsoleController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugConsoleController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugConsoleController(DebugConsoleController const& ) = delete;

/// @brief Field onNewMessageToOutput, offset: 0x10, size: 0x8, def value: None
 ::System::Action_2<::StringW,::UnityEngine::LogType>*  ___onNewMessageToOutput;

/// @brief Field _stringsFromSTDIN, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::StringW>*  ____stringsFromSTDIN;

/// @brief Field _container, offset: 0x20, size: 0x8, def value: None
 ::Zenject::DiContainer*  ____container;

/// @brief Field _commandLineParserResult, offset: 0x28, size: 0x18, def value: None
 ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult  ____commandLineParserResult;

/// @brief Field _coroutineStarter, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::ICoroutineStarter*  ____coroutineStarter;

/// @brief Field _commands, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ConsoleCommandBase*>*  ____commands;

/// @brief Field _commandsExecutionTask, offset: 0x50, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  ____commandsExecutionTask;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DebugConsoleController, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugConsoleController, ___onNewMessageToOutput) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugConsoleController, ____stringsFromSTDIN) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugConsoleController, ____container) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugConsoleController, ____commandLineParserResult) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugConsoleController, ____coroutineStarter) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugConsoleController, ____commands) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugConsoleController, ____commandsExecutionTask) == 0x50, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DebugConsoleController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DebugConsoleController*, "", "DebugConsoleController");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugConsoleController__ConsoleMessage, "", "DebugConsoleController/ConsoleMessage");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__11, "", "DebugConsoleController/<ExecuteCommandsAsync>d__11");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__10, "", "DebugConsoleController/<ExecuteCommands>d__10");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__13, "", "DebugConsoleController/<TryExecuteCommand>d__13");
