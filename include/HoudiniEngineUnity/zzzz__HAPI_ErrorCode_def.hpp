#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_ErrorCode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_ErrorCode)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_ErrorCode;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_ErrorCode);
// Type: HoudiniEngineUnity::HAPI_ErrorCode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: ::HoudiniEngineUnity::HAPI_ErrorCode
struct CORDL_TYPE HAPI_ErrorCode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HAPI_ErrorCode_Unwrapped
enum struct __HAPI_ErrorCode_Unwrapped : int32_t {
__E_HAPI_ERRORCODE_ASSET_DEF_NOT_FOUND = static_cast<int32_t>(0x1),
__E_HAPI_ERRORCODE_PYTHON_NODE_ERROR = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_ErrorCode_Unwrapped () const noexcept {
return static_cast<__HAPI_ErrorCode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HAPI_ErrorCode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_ErrorCode(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field HAPI_ERRORCODE_ASSET_DEF_NOT_FOUND value: static_cast<int32_t>(0x1)
static ::HoudiniEngineUnity::HAPI_ErrorCode const HAPI_ERRORCODE_ASSET_DEF_NOT_FOUND;

/// @brief Field HAPI_ERRORCODE_PYTHON_NODE_ERROR value: static_cast<int32_t>(0x2)
static ::HoudiniEngineUnity::HAPI_ErrorCode const HAPI_ERRORCODE_PYTHON_NODE_ERROR;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_ErrorCode, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ErrorCode, value__) == 0x0, "Offset mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_ErrorCode, "HoudiniEngineUnity", "HAPI_ErrorCode");
