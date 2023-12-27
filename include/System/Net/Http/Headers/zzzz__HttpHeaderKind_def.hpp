#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpHeaderKind)
// Forward declare root types
namespace System::Net::Http::Headers {
struct HttpHeaderKind;
}
// Write type traits
MARK_VAL_T(::System::Net::Http::Headers::HttpHeaderKind);
// Type: System.Net.Http.Headers::HttpHeaderKind
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14673))
// CS Name: ::System.Net.Http.Headers::HttpHeaderKind
struct CORDL_TYPE HttpHeaderKind {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HttpHeaderKind_Unwrapped
  enum struct __HttpHeaderKind_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Request = static_cast<int32_t>(0x1),
    __E_Response = static_cast<int32_t>(0x2),
    __E_Content = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HttpHeaderKind_Unwrapped() const noexcept {
    return static_cast<__HttpHeaderKind_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HttpHeaderKind(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpHeaderKind();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Net::Http::Headers::HttpHeaderKind const None;

  /// @brief Field Request value: static_cast<int32_t>(0x1)
  static ::System::Net::Http::Headers::HttpHeaderKind const Request;

  /// @brief Field Response value: static_cast<int32_t>(0x2)
  static ::System::Net::Http::Headers::HttpHeaderKind const Response;

  /// @brief Field Content value: static_cast<int32_t>(0x4)
  static ::System::Net::Http::Headers::HttpHeaderKind const Content;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::HttpHeaderKind, 0x4>, "Size mismatch!");

} // namespace System::Net::Http::Headers
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::HttpHeaderKind, "System.Net.Http.Headers", "HttpHeaderKind");
