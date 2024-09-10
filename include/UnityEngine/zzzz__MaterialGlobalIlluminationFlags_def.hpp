#pragma once
// IWYU pragma private; include "UnityEngine/MaterialGlobalIlluminationFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialGlobalIlluminationFlags)
// Forward declare root types
namespace UnityEngine {
struct MaterialGlobalIlluminationFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::MaterialGlobalIlluminationFlags);
// Type: UnityEngine::MaterialGlobalIlluminationFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::MaterialGlobalIlluminationFlags
struct CORDL_TYPE MaterialGlobalIlluminationFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MaterialGlobalIlluminationFlags_Unwrapped
enum struct __MaterialGlobalIlluminationFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_RealtimeEmissive = static_cast<int32_t>(0x1),
__E_BakedEmissive = static_cast<int32_t>(0x2),
__E_EmissiveIsBlack = static_cast<int32_t>(0x4),
__E_AnyEmissive = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MaterialGlobalIlluminationFlags_Unwrapped () const noexcept {
return static_cast<__MaterialGlobalIlluminationFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MaterialGlobalIlluminationFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MaterialGlobalIlluminationFlags(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field AnyEmissive value: static_cast<int32_t>(0x3)
static ::UnityEngine::MaterialGlobalIlluminationFlags const AnyEmissive;

/// @brief Field BakedEmissive value: static_cast<int32_t>(0x2)
static ::UnityEngine::MaterialGlobalIlluminationFlags const BakedEmissive;

/// @brief Field EmissiveIsBlack value: static_cast<int32_t>(0x4)
static ::UnityEngine::MaterialGlobalIlluminationFlags const EmissiveIsBlack;

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::MaterialGlobalIlluminationFlags const None;

/// @brief Field RealtimeEmissive value: static_cast<int32_t>(0x1)
static ::UnityEngine::MaterialGlobalIlluminationFlags const RealtimeEmissive;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::MaterialGlobalIlluminationFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::MaterialGlobalIlluminationFlags, value__) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MaterialGlobalIlluminationFlags, "UnityEngine", "MaterialGlobalIlluminationFlags");
