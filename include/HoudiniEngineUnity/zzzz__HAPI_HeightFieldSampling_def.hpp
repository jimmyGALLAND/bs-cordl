#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_HeightFieldSampling.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_HeightFieldSampling)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_HeightFieldSampling;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_HeightFieldSampling);
// Type: HoudiniEngineUnity::HAPI_HeightFieldSampling
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: ::HoudiniEngineUnity::HAPI_HeightFieldSampling
struct CORDL_TYPE HAPI_HeightFieldSampling {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HAPI_HeightFieldSampling_Unwrapped
enum struct __HAPI_HeightFieldSampling_Unwrapped : int32_t {
__E_HAPI_HEIGHTFIELD_SAMPLING_CENTER = static_cast<int32_t>(0x0),
__E_HAPI_HEIGHTFIELD_SAMPLING_CORNER = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_HeightFieldSampling_Unwrapped () const noexcept {
return static_cast<__HAPI_HeightFieldSampling_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HAPI_HeightFieldSampling() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_HeightFieldSampling(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field HAPI_HEIGHTFIELD_SAMPLING_CENTER value: static_cast<int32_t>(0x0)
static ::HoudiniEngineUnity::HAPI_HeightFieldSampling const HAPI_HEIGHTFIELD_SAMPLING_CENTER;

/// @brief Field HAPI_HEIGHTFIELD_SAMPLING_CORNER value: static_cast<int32_t>(0x1)
static ::HoudiniEngineUnity::HAPI_HeightFieldSampling const HAPI_HEIGHTFIELD_SAMPLING_CORNER;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_HeightFieldSampling, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_HeightFieldSampling, value__) == 0x0, "Offset mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_HeightFieldSampling, "HoudiniEngineUnity", "HAPI_HeightFieldSampling");
