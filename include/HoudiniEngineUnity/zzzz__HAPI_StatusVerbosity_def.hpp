#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_StatusVerbosity.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_StatusVerbosity)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_StatusVerbosity;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_StatusVerbosity);
// Type: HoudiniEngineUnity::HAPI_StatusVerbosity
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: ::HoudiniEngineUnity::HAPI_StatusVerbosity
struct CORDL_TYPE HAPI_StatusVerbosity {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HAPI_StatusVerbosity_Unwrapped
enum struct __HAPI_StatusVerbosity_Unwrapped : int32_t {
__E_HAPI_STATUSVERBOSITY_0 = static_cast<int32_t>(0x0),
__E_HAPI_STATUSVERBOSITY_1 = static_cast<int32_t>(0x1),
__E_HAPI_STATUSVERBOSITY_2 = static_cast<int32_t>(0x2),
__E_HAPI_STATUSVERBOSITY_ALL = static_cast<int32_t>(0x2),
__E_HAPI_STATUSVERBOSITY_ERRORS = static_cast<int32_t>(0x0),
__E_HAPI_STATUSVERBOSITY_WARNINGS = static_cast<int32_t>(0x1),
__E_HAPI_STATUSVERBOSITY_MESSAGES = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_StatusVerbosity_Unwrapped () const noexcept {
return static_cast<__HAPI_StatusVerbosity_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HAPI_StatusVerbosity() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_StatusVerbosity(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field HAPI_STATUSVERBOSITY_0 value: static_cast<int32_t>(0x0)
static ::HoudiniEngineUnity::HAPI_StatusVerbosity const HAPI_STATUSVERBOSITY_0;

/// @brief Field HAPI_STATUSVERBOSITY_1 value: static_cast<int32_t>(0x1)
static ::HoudiniEngineUnity::HAPI_StatusVerbosity const HAPI_STATUSVERBOSITY_1;

/// @brief Field HAPI_STATUSVERBOSITY_2 value: static_cast<int32_t>(0x2)
static ::HoudiniEngineUnity::HAPI_StatusVerbosity const HAPI_STATUSVERBOSITY_2;

/// @brief Field HAPI_STATUSVERBOSITY_ALL value: static_cast<int32_t>(0x2)
static ::HoudiniEngineUnity::HAPI_StatusVerbosity const HAPI_STATUSVERBOSITY_ALL;

/// @brief Field HAPI_STATUSVERBOSITY_ERRORS value: static_cast<int32_t>(0x0)
static ::HoudiniEngineUnity::HAPI_StatusVerbosity const HAPI_STATUSVERBOSITY_ERRORS;

/// @brief Field HAPI_STATUSVERBOSITY_MESSAGES value: static_cast<int32_t>(0x2)
static ::HoudiniEngineUnity::HAPI_StatusVerbosity const HAPI_STATUSVERBOSITY_MESSAGES;

/// @brief Field HAPI_STATUSVERBOSITY_WARNINGS value: static_cast<int32_t>(0x1)
static ::HoudiniEngineUnity::HAPI_StatusVerbosity const HAPI_STATUSVERBOSITY_WARNINGS;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_StatusVerbosity, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_StatusVerbosity, value__) == 0x0, "Offset mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_StatusVerbosity, "HoudiniEngineUnity", "HAPI_StatusVerbosity");
