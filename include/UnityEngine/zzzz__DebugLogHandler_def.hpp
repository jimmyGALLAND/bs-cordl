#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DebugLogHandler)
namespace UnityEngine {
struct LogOption;
}
namespace UnityEngine {
class ILogHandler;
}
namespace UnityEngine {
struct LogType;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class DebugLogHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::DebugLogHandler);
// Type: UnityEngine::DebugLogHandler
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10044))
// CS Name: ::UnityEngine::DebugLogHandler*
class CORDL_TYPE DebugLogHandler : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::ILogHandler"
  constexpr operator ::UnityEngine::ILogHandler*() noexcept;

  /// @brief Method Internal_Log addr 0x2c9f2d8 size 0x5c virtual false final false
  static inline void Internal_Log(::UnityEngine::LogType level, ::UnityEngine::LogOption options, ::StringW msg, ::UnityEngine::Object* obj);

  /// @brief Method Internal_LogException addr 0x2c9f334 size 0x44 virtual false final false
  static inline void Internal_LogException(::System::Exception* ex, ::UnityEngine::Object* obj);

  /// @brief Method LogFormat addr 0x2c9f378 size 0x68 virtual true final true
  inline void LogFormat(::UnityEngine::LogType logType, ::UnityEngine::Object* context, ::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogException addr 0x2c9f3e0 size 0x94 virtual true final true
  inline void LogException(::System::Exception* exception, ::UnityEngine::Object* context);

  static inline ::UnityEngine::DebugLogHandler* New_ctor();

  /// @brief Method .ctor addr 0x2c9f474 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DebugLogHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugLogHandler(DebugLogHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugLogHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugLogHandler(DebugLogHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugLogHandler();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::DebugLogHandler, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::DebugLogHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::DebugLogHandler*, "UnityEngine", "DebugLogHandler");
