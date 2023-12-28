#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UserOptions)
namespace Oculus::Platform {
struct TimeWindow;
}
namespace Oculus::Platform {
struct ServiceProvider;
}
// Forward declare root types
namespace Oculus::Platform {
class UserOptions;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::UserOptions);
// Type: Oculus.Platform::UserOptions
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13393))
// CS Name: ::Oculus.Platform::UserOptions*
class CORDL_TYPE UserOptions : public ::System::Object {
public:
  // Declarations
  /// @brief Field Handle, offset 0x10, size 0x8
  __declspec(property(get = __get_Handle, put = __set_Handle)) void* Handle;

  constexpr void*& __get_Handle();

  constexpr void* const& __get_Handle() const;

  constexpr void __set_Handle(void* value);

  static inline ::Oculus::Platform::UserOptions* New_ctor();

  /// @brief Method .ctor addr 0x2700954 size 0x64 virtual false final false
  inline void _ctor();

  /// @brief Method SetMaxUsers addr 0x27011ec size 0x68 virtual false final false
  inline void SetMaxUsers(uint32_t value);

  /// @brief Method AddServiceProvider addr 0x27009b8 size 0x68 virtual false final false
  inline void AddServiceProvider(::Oculus::Platform::ServiceProvider value);

  /// @brief Method ClearServiceProviders addr 0x2701254 size 0x58 virtual false final false
  inline void ClearServiceProviders();

  /// @brief Method SetTimeWindow addr 0x27012ac size 0x68 virtual false final false
  inline void SetTimeWindow(::Oculus::Platform::TimeWindow value);

  /// @brief Method op_Explicit addr 0x2700a20 size 0x58 virtual false final false
  static inline void* op_Explicit_void_(::Oculus::Platform::UserOptions* options);

  /// @brief Method Finalize addr 0x2701314 size 0xd4 virtual true final false
  inline void Finalize();

  // Ctor Parameters [CppParam { name: "", ty: "UserOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UserOptions(UserOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UserOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UserOptions(UserOptions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UserOptions();

public:
  /// @brief Field Handle, offset: 0x10, size: 0x8, def value: None
  void* ___Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::UserOptions, 0x18>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::UserOptions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::UserOptions*, "Oculus.Platform", "UserOptions");
