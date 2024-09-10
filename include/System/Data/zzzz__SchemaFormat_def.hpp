#pragma once
// IWYU pragma private; include "System/Data/SchemaFormat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SchemaFormat)
// Forward declare root types
namespace System::Data {
struct SchemaFormat;
}
// Write type traits
MARK_VAL_T(::System::Data::SchemaFormat);
// Type: System.Data::SchemaFormat
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: true
// CS Name: ::System.Data::SchemaFormat
struct CORDL_TYPE SchemaFormat {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SchemaFormat_Unwrapped
enum struct __SchemaFormat_Unwrapped : int32_t {
__E_Public = static_cast<int32_t>(0x1),
__E_Remoting = static_cast<int32_t>(0x2),
__E_WebService = static_cast<int32_t>(0x3),
__E_RemotingSkipSchema = static_cast<int32_t>(0x4),
__E_WebServiceSkipSchema = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SchemaFormat_Unwrapped () const noexcept {
return static_cast<__SchemaFormat_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SchemaFormat() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SchemaFormat(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field Public value: static_cast<int32_t>(0x1)
static ::System::Data::SchemaFormat const Public;

/// @brief Field Remoting value: static_cast<int32_t>(0x2)
static ::System::Data::SchemaFormat const Remoting;

/// @brief Field RemotingSkipSchema value: static_cast<int32_t>(0x4)
static ::System::Data::SchemaFormat const RemotingSkipSchema;

/// @brief Field WebService value: static_cast<int32_t>(0x3)
static ::System::Data::SchemaFormat const WebService;

/// @brief Field WebServiceSkipSchema value: static_cast<int32_t>(0x5)
static ::System::Data::SchemaFormat const WebServiceSkipSchema;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::SchemaFormat, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Data::SchemaFormat, value__) == 0x0, "Offset mismatch!");

} // namespace end def System::Data
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SchemaFormat, "System.Data", "SchemaFormat");
