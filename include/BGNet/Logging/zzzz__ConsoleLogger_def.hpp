#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ConsoleLogger)
namespace System {
class Exception;
}
namespace BGNet::Logging {
class __Debug__ILogger;
}
// Forward declare root types
namespace BGNet::Logging {
class ConsoleLogger;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Logging::ConsoleLogger);
// Type: BGNet.Logging::ConsoleLogger
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGNet::Logging {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16233))
// CS Name: ::BGNet.Logging::ConsoleLogger*
class CORDL_TYPE ConsoleLogger : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::BGNet::Logging::__Debug__ILogger"
  constexpr operator ::BGNet::Logging::__Debug__ILogger*() noexcept;

  /// @brief Method LogInfo addr 0xe60ee4 size 0xe0 virtual true final true
  inline void LogInfo(::StringW message);

  /// @brief Method LogError addr 0xe60fc4 size 0x1a0 virtual true final true
  inline void LogError(::StringW message);

  /// @brief Method LogException addr 0xe61164 size 0x134 virtual true final true
  inline void LogException(::System::Exception* exception, ::StringW message);

  /// @brief Method LogWarning addr 0xe61298 size 0xe0 virtual true final true
  inline void LogWarning(::StringW message);

  static inline ::BGNet::Logging::ConsoleLogger* New_ctor();

  /// @brief Method .ctor addr 0xe61378 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ConsoleLogger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConsoleLogger(ConsoleLogger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConsoleLogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConsoleLogger(ConsoleLogger const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConsoleLogger();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Logging::ConsoleLogger, 0x10>, "Size mismatch!");

} // namespace BGNet::Logging
NEED_NO_BOX(::BGNet::Logging::ConsoleLogger);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Logging::ConsoleLogger*, "BGNet.Logging", "ConsoleLogger");
