#pragma once
// IWYU pragma private; include "System/Net/Configuration/UnicodeDecodingConformance.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnicodeDecodingConformance)
// Forward declare root types
namespace System::Net::Configuration {
struct UnicodeDecodingConformance;
}
// Write type traits
MARK_VAL_T(::System::Net::Configuration::UnicodeDecodingConformance);
// Type: System.Net.Configuration::UnicodeDecodingConformance
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System::Net::Configuration {
// Is value type: true
// CS Name: ::System.Net.Configuration::UnicodeDecodingConformance
struct CORDL_TYPE UnicodeDecodingConformance {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UnicodeDecodingConformance_Unwrapped
enum struct __UnicodeDecodingConformance_Unwrapped : int32_t {
__E_Auto = static_cast<int32_t>(0x0),
__E_Strict = static_cast<int32_t>(0x1),
__E_Compat = static_cast<int32_t>(0x2),
__E_Loose = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnicodeDecodingConformance_Unwrapped () const noexcept {
return static_cast<__UnicodeDecodingConformance_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UnicodeDecodingConformance() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnicodeDecodingConformance(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field Auto value: static_cast<int32_t>(0x0)
static ::System::Net::Configuration::UnicodeDecodingConformance const Auto;

/// @brief Field Compat value: static_cast<int32_t>(0x2)
static ::System::Net::Configuration::UnicodeDecodingConformance const Compat;

/// @brief Field Loose value: static_cast<int32_t>(0x3)
static ::System::Net::Configuration::UnicodeDecodingConformance const Loose;

/// @brief Field Strict value: static_cast<int32_t>(0x1)
static ::System::Net::Configuration::UnicodeDecodingConformance const Strict;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::UnicodeDecodingConformance, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::Configuration::UnicodeDecodingConformance, value__) == 0x0, "Offset mismatch!");

} // namespace end def System::Net::Configuration
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::UnicodeDecodingConformance, "System.Net.Configuration", "UnicodeDecodingConformance");
