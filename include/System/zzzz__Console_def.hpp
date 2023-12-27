#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Console)
namespace System {
class Object;
}
namespace System::IO {
struct FileAccess;
}
namespace System {
struct ConsoleKeyInfo;
}
namespace System::IO {
class TextWriter;
}
namespace System::IO {
class TextReader;
}
namespace System::IO {
class Stream;
}
namespace System::Text {
class Encoding;
}
namespace System {
class __Console__WindowsConsole;
}
namespace System {
class ConsoleCancelEventHandler;
}
namespace GlobalNamespace {
class __Console__WindowsConsole__WindowsCancelHandler;
}
// Forward declare root types
namespace GlobalNamespace {
class __Console__WindowsConsole__WindowsCancelHandler;
}
namespace System {
class Console;
}
namespace System {
class __Console__WindowsConsole;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler);
MARK_REF_PTR_T(::System::Console);
MARK_REF_PTR_T(::System::__Console__WindowsConsole);
// Type: ::WindowsCancelHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2584))
// CS Name: ::Console::WindowsConsole::WindowsCancelHandler*
class CORDL_TYPE __Console__WindowsConsole__WindowsCancelHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x25f75ec size 0xc4 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x25f76b0 size 0x14 virtual true final false
  inline bool Invoke(int32_t keyCode);

  // Ctor Parameters [CppParam { name: "", ty: "__Console__WindowsConsole__WindowsCancelHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Console__WindowsConsole__WindowsCancelHandler(__Console__WindowsConsole__WindowsCancelHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Console__WindowsConsole__WindowsCancelHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Console__WindowsConsole__WindowsCancelHandler(__Console__WindowsConsole__WindowsCancelHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Console__WindowsConsole__WindowsCancelHandler();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::WindowsConsole
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2585))
// CS Name: ::Console::WindowsConsole*
class CORDL_TYPE __Console__WindowsConsole : public ::System::Object {
public:
  // Declarations
  using WindowsCancelHandler = ::GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler;

  /// @brief Field ctrlHandlerAdded, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_ctrlHandlerAdded, put = setStaticF_ctrlHandlerAdded)) bool ctrlHandlerAdded;

  /// @brief Field cancelHandler, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cancelHandler, put = setStaticF_cancelHandler))::GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler* cancelHandler;

  static inline void setStaticF_ctrlHandlerAdded(bool value);

  static inline bool getStaticF_ctrlHandlerAdded();

  static inline void setStaticF_cancelHandler(::GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler* value);

  static inline ::GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler* getStaticF_cancelHandler();

  /// @brief Method GetConsoleCP addr 0x25f741c size 0x68 virtual false final false
  static inline int32_t GetConsoleCP();

  /// @brief Method GetConsoleOutputCP addr 0x25f7484 size 0x6c virtual false final false
  static inline int32_t GetConsoleOutputCP();

  /// @brief Method DoWindowsConsoleCancelEvent addr 0x25f74f0 size 0x60 virtual false final false
  static inline bool DoWindowsConsoleCancelEvent(int32_t keyCode);

  /// @brief Method GetInputCodePage addr 0x25f6504 size 0x4c virtual false final false
  static inline int32_t GetInputCodePage();

  /// @brief Method GetOutputCodePage addr 0x25f6550 size 0x4c virtual false final false
  static inline int32_t GetOutputCodePage();

  // Ctor Parameters [CppParam { name: "", ty: "__Console__WindowsConsole", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Console__WindowsConsole(__Console__WindowsConsole&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Console__WindowsConsole", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Console__WindowsConsole(__Console__WindowsConsole const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Console__WindowsConsole();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__Console__WindowsConsole, 0x10>, "Size mismatch!");

} // namespace System
// Type: System::Console
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2586))
// CS Name: ::System::Console*
class CORDL_TYPE Console : public ::System::Object {
public:
  // Declarations
  using WindowsConsole = ::System::__Console__WindowsConsole;

  /// @brief Field stdout, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_stdout, put = setStaticF_stdout))::System::IO::TextWriter* stdout;

  /// @brief Field stderr, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_stderr, put = setStaticF_stderr))::System::IO::TextWriter* stderr;

  /// @brief Field stdin, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_stdin, put = setStaticF_stdin))::System::IO::TextReader* stdin;

  /// @brief Field inputEncoding, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_inputEncoding, put = setStaticF_inputEncoding))::System::Text::Encoding* inputEncoding;

  /// @brief Field outputEncoding, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_outputEncoding, put = setStaticF_outputEncoding))::System::Text::Encoding* outputEncoding;

  /// @brief Field cancel_event, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cancel_event, put = setStaticF_cancel_event))::System::ConsoleCancelEventHandler* cancel_event;

  static inline void setStaticF_stdout(::System::IO::TextWriter* value);

  static inline ::System::IO::TextWriter* getStaticF_stdout();

  static inline void setStaticF_stderr(::System::IO::TextWriter* value);

  static inline ::System::IO::TextWriter* getStaticF_stderr();

  static inline void setStaticF_stdin(::System::IO::TextReader* value);

  static inline ::System::IO::TextReader* getStaticF_stdin();

  static inline void setStaticF_inputEncoding(::System::Text::Encoding* value);

  static inline ::System::Text::Encoding* getStaticF_inputEncoding();

  static inline void setStaticF_outputEncoding(::System::Text::Encoding* value);

  static inline ::System::Text::Encoding* getStaticF_outputEncoding();

  static inline void setStaticF_cancel_event(::System::ConsoleCancelEventHandler* value);

  static inline ::System::ConsoleCancelEventHandler* getStaticF_cancel_event();

  /// @brief Method SetupStreams addr 0x25f659c size 0x3b0 virtual false final false
  static inline void SetupStreams(::System::Text::Encoding* inputEncoding, ::System::Text::Encoding* outputEncoding);

  /// @brief Method get_Error addr 0x25f6c34 size 0x58 virtual false final false
  static inline ::System::IO::TextWriter* get_Error();

  /// @brief Method get_Out addr 0x25f6c8c size 0x58 virtual false final false
  static inline ::System::IO::TextWriter* get_Out();

  /// @brief Method Open addr 0x25f6ce4 size 0x15c virtual false final false
  static inline ::System::IO::Stream* Open(void* handle, ::System::IO::FileAccess access, int32_t bufferSize);

  /// @brief Method OpenStandardError addr 0x25f6ba4 size 0x90 virtual false final false
  static inline ::System::IO::Stream* OpenStandardError(int32_t bufferSize);

  /// @brief Method OpenStandardInput addr 0x25f6e40 size 0x50 virtual false final false
  static inline ::System::IO::Stream* OpenStandardInput();

  /// @brief Method OpenStandardInput addr 0x25f6a84 size 0x90 virtual false final false
  static inline ::System::IO::Stream* OpenStandardInput(int32_t bufferSize);

  /// @brief Method OpenStandardOutput addr 0x25f6b14 size 0x90 virtual false final false
  static inline ::System::IO::Stream* OpenStandardOutput(int32_t bufferSize);

  /// @brief Method SetOut addr 0x25f6e90 size 0xe4 virtual false final false
  static inline void SetOut(::System::IO::TextWriter* newOut);

  /// @brief Method WriteLine addr 0x25f6f74 size 0x74 virtual false final false
  static inline void WriteLine(::StringW value);

  /// @brief Method get_InputEncoding addr 0x25f6fe8 size 0x58 virtual false final false
  static inline ::System::Text::Encoding* get_InputEncoding();

  /// @brief Method get_OutputEncoding addr 0x25f7040 size 0x58 virtual false final false
  static inline ::System::Text::Encoding* get_OutputEncoding();

  /// @brief Method ReadKey addr 0x25f7098 size 0x58 virtual false final false
  static inline ::System::ConsoleKeyInfo ReadKey();

  /// @brief Method ReadKey addr 0x25f70f0 size 0x5c virtual false final false
  static inline ::System::ConsoleKeyInfo ReadKey(bool intercept);

  /// @brief Method DoConsoleCancelEvent addr 0x25f7224 size 0x1f8 virtual false final false
  static inline void DoConsoleCancelEvent();

  // Ctor Parameters [CppParam { name: "", ty: "Console", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Console(Console&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Console", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Console(Console const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Console();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Console, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler*, "System", "Console/WindowsConsole/WindowsCancelHandler");
NEED_NO_BOX(::System::Console);
DEFINE_IL2CPP_ARG_TYPE(::System::Console*, "System", "Console");
NEED_NO_BOX(::System::__Console__WindowsConsole);
DEFINE_IL2CPP_ARG_TYPE(::System::__Console__WindowsConsole*, "System", "Console/WindowsConsole");
