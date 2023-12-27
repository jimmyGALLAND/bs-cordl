#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpCompletionOption)
// Forward declare root types
namespace System::Net::Http {
struct HttpCompletionOption;
}
// Write type traits
MARK_VAL_T(::System::Net::Http::HttpCompletionOption);
// Type: System.Net.Http::HttpCompletionOption
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net::Http {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14645))
// CS Name: ::System.Net.Http::HttpCompletionOption
struct CORDL_TYPE HttpCompletionOption {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HttpCompletionOption_Unwrapped
  enum struct __HttpCompletionOption_Unwrapped : int32_t {
    __E_ResponseContentRead = static_cast<int32_t>(0x0),
    __E_ResponseHeadersRead = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HttpCompletionOption_Unwrapped() const noexcept {
    return static_cast<__HttpCompletionOption_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HttpCompletionOption(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpCompletionOption();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field ResponseContentRead value: static_cast<int32_t>(0x0)
  static ::System::Net::Http::HttpCompletionOption const ResponseContentRead;

  /// @brief Field ResponseHeadersRead value: static_cast<int32_t>(0x1)
  static ::System::Net::Http::HttpCompletionOption const ResponseHeadersRead;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::HttpCompletionOption, 0x4>, "Size mismatch!");

} // namespace System::Net::Http
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::HttpCompletionOption, "System.Net.Http", "HttpCompletionOption");
