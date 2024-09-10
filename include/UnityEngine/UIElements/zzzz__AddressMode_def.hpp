#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/AddressMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AddressMode)
// Forward declare root types
namespace UnityEngine::UIElements {
struct AddressMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::AddressMode);
// Type: UnityEngine.UIElements::AddressMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::UnityEngine.UIElements::AddressMode
struct CORDL_TYPE AddressMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AddressMode_Unwrapped
enum struct __AddressMode_Unwrapped : int32_t {
__E_Wrap = static_cast<int32_t>(0x0),
__E_Clamp = static_cast<int32_t>(0x1),
__E_Mirror = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AddressMode_Unwrapped () const noexcept {
return static_cast<__AddressMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AddressMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AddressMode(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field Clamp value: static_cast<int32_t>(0x1)
static ::UnityEngine::UIElements::AddressMode const Clamp;

/// @brief Field Mirror value: static_cast<int32_t>(0x2)
static ::UnityEngine::UIElements::AddressMode const Mirror;

/// @brief Field Wrap value: static_cast<int32_t>(0x0)
static ::UnityEngine::UIElements::AddressMode const Wrap;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::AddressMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::AddressMode, value__) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::AddressMode, "UnityEngine.UIElements", "AddressMode");
