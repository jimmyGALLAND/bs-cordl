#pragma once
// IWYU pragma private; include "Oculus/Platform/KeyValuePairType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KeyValuePairType)
// Forward declare root types
namespace Oculus::Platform {
struct KeyValuePairType;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::KeyValuePairType);
// Type: Oculus.Platform::KeyValuePairType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// CS Name: ::Oculus.Platform::KeyValuePairType
struct CORDL_TYPE KeyValuePairType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __KeyValuePairType_Unwrapped
enum struct __KeyValuePairType_Unwrapped : int32_t {
__E_String = static_cast<int32_t>(0x0),
__E_Int = static_cast<int32_t>(0x1),
__E_Double = static_cast<int32_t>(0x2),
__E_Unknown = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __KeyValuePairType_Unwrapped () const noexcept {
return static_cast<__KeyValuePairType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr KeyValuePairType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr KeyValuePairType(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field Double value: static_cast<int32_t>(0x2)
static ::Oculus::Platform::KeyValuePairType const Double;

/// @brief Field Int value: static_cast<int32_t>(0x1)
static ::Oculus::Platform::KeyValuePairType const Int;

/// @brief Field String value: static_cast<int32_t>(0x0)
static ::Oculus::Platform::KeyValuePairType const String;

/// @brief Field Unknown value: static_cast<int32_t>(0x3)
static ::Oculus::Platform::KeyValuePairType const Unknown;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::KeyValuePairType, 0x4>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::KeyValuePairType, value__) == 0x0, "Offset mismatch!");

} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::KeyValuePairType, "Oculus.Platform", "KeyValuePairType");
