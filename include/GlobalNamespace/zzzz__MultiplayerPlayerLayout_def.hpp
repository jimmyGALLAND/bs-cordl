#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerPlayerLayout.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerPlayerLayout)
// Forward declare root types
namespace GlobalNamespace {
struct MultiplayerPlayerLayout;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MultiplayerPlayerLayout);
// Type: ::MultiplayerPlayerLayout
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MultiplayerPlayerLayout
struct CORDL_TYPE MultiplayerPlayerLayout {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MultiplayerPlayerLayout_Unwrapped
enum struct __MultiplayerPlayerLayout_Unwrapped : int32_t {
__E_NotDetermined = static_cast<int32_t>(0x0),
__E_Circle = static_cast<int32_t>(0x1),
__E_Duel = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MultiplayerPlayerLayout_Unwrapped () const noexcept {
return static_cast<__MultiplayerPlayerLayout_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MultiplayerPlayerLayout() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MultiplayerPlayerLayout(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field Circle value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::MultiplayerPlayerLayout const Circle;

/// @brief Field Duel value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::MultiplayerPlayerLayout const Duel;

/// @brief Field NotDetermined value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::MultiplayerPlayerLayout const NotDetermined;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerPlayerLayout, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayerLayout, value__) == 0x0, "Offset mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerPlayerLayout, "", "MultiplayerPlayerLayout");
