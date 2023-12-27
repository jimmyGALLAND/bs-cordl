#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ILogger)
namespace UnityEngine {
class Object;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct LogType;
}
namespace UnityEngine {
class ILogHandler;
}
// Forward declare root types
namespace UnityEngine {
class ILogger;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ILogger);
// Type: UnityEngine::ILogger
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10054))
// CS Name: ::UnityEngine::ILogger*
class CORDL_TYPE ILogger {
public:
  // Declarations
  __declspec(property(get = get_logHandler))::UnityEngine::ILogHandler* logHandler;

  __declspec(property(get = get_logEnabled)) bool logEnabled;

  /// @brief Convert operator to "::UnityEngine::ILogHandler"
  constexpr operator ::UnityEngine::ILogHandler*() noexcept;

  /// @brief Method get_logHandler addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::ILogHandler* get_logHandler();

  /// @brief Method get_logEnabled addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_logEnabled();

  /// @brief Method Log addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Log(::UnityEngine::LogType logType, ::System::Object* message);

  /// @brief Method Log addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Log(::UnityEngine::LogType logType, ::System::Object* message, ::UnityEngine::Object* context);

  /// @brief Method LogError addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void LogError(::StringW tag, ::System::Object* message);

  /// @brief Method LogFormat addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void LogFormat(::UnityEngine::LogType logType, ::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  // Ctor Parameters [CppParam { name: "", ty: "ILogger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ILogger(ILogger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ILogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILogger(ILogger const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ILogger);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ILogger*, "UnityEngine", "ILogger");
